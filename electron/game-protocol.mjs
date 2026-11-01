import {createReadStream} from 'node:fs';
import {readFile,realpath,stat} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import {Readable} from 'node:stream';
import path from 'node:path';
import {GAME_SCHEME} from './runtime.mjs';

const types={'.html':'text/html; charset=utf-8','.js':'text/javascript; charset=utf-8',
  '.css':'text/css; charset=utf-8','.json':'application/json','.wasm':'application/wasm',
  '.png':'image/png','.svg':'image/svg+xml','.jpg':'image/jpeg','.webp':'image/webp',
  '.mp4':'video/mp4','.webm':'video/webm','.wav':'audio/wav','.ogg':'audio/ogg','.mp3':'audio/mpeg'};
const within=(base,file)=>file===base||file.startsWith(base+path.sep);

/** Single ranges: the race reads rcs.img and rc.img in pieces, video seeks. */
export function byteRange(value,size){
  if(value===null)return null;
  const match=value.trim().match(/^bytes=(\d*)-(\d*)$/);
  if(!match||(!match[1]&&!match[2])||size===0)return false;
  let start,end;
  if(!match[1]){
    const suffix=Number(match[2]);
    if(!Number.isSafeInteger(suffix)||suffix<=0)return false;
    start=Math.max(0,size-suffix);end=size-1;
  }else{
    start=Number(match[1]);end=match[2]?Number(match[2]):size-1;
    if(!Number.isSafeInteger(start)||!Number.isSafeInteger(end)||start>=size||end<start)return false;
    end=Math.min(end,size-1);
  }
  return {start,end};
}

export function gameContentSecurityPolicy(html){
  const hashes=[...html.matchAll(/<script\b([^>]*)>([\s\S]*?)<\/script>/gi)]
    .filter(([,attributes])=>!/(?:^|\s)src\s*=/i.test(attributes))
    .map(([, ,body])=>`'sha256-${createHash('sha256').update(body).digest('base64')}'`);
  return ["default-src 'self'",`script-src 'self' 'wasm-unsafe-eval' ${hashes.join(' ')}`,
    "style-src 'self' 'unsafe-inline'","img-src 'self' data: blob:",
    "media-src 'self' blob:","font-src 'self' data:","connect-src 'self' blob: data:",
    "object-src 'none'","frame-src 'none'","worker-src 'self' blob:",
    "base-uri 'none'","form-action 'none'"].join('; ');
}

/** Returns a protocol.handle-compatible handler without importing Electron. */
export async function createGameProtocolHandler({root}){
  const base=await realpath(root);
  const csp=gameContentSecurityPolicy(await readFile(path.join(base,'index.html'),'utf8'));
  const security={'Content-Security-Policy':csp,'X-Content-Type-Options':'nosniff',
    'Cross-Origin-Resource-Policy':'same-origin','Cache-Control':'no-cache'};
  const error=(status,text,extra={})=>new Response(text,{status,headers:{...security,'Content-Type':'text/plain; charset=utf-8',...extra}});
  return async request=>{
    if(!['GET','HEAD'].includes(request.method))return error(405,'Method not allowed',{'Allow':'GET, HEAD'});
    let url,decoded;
    try{url=new URL(request.url);decoded=decodeURIComponent(url.pathname);}catch{return error(400,'Invalid URL');}
    if(url.protocol!==GAME_SCHEME+':'||url.hostname!=='game'||url.port||url.username||url.password)return error(403,'Forbidden');
    if(decoded.includes('\\')||decoded.includes('\0')||decoded.split('/').some(part=>part==='..'||part.startsWith('.')))
      return error(403,'Forbidden');
    const relative=decoded==='/'?'index.html':decoded.slice(1);
    const file=path.resolve(base,relative);
    if(!within(base,file))return error(403,'Forbidden');
    try{
      const canonical=await realpath(file);
      if(!within(base,canonical))return error(403,'Forbidden');
      const info=await stat(canonical);
      if(!info.isFile())return error(404,'Not found');
      const range=byteRange(request.headers.get('range'),info.size);
      if(range===false)return error(416,'Range not satisfiable',{'Content-Range':`bytes */${info.size}`});
      const start=range?.start??0,end=range?.end??info.size-1;
      const headers={...security,'Content-Type':types[path.extname(relative).toLowerCase()]??'application/octet-stream',
        'Accept-Ranges':'bytes','Content-Length':String(range?end-start+1:info.size)};
      if(range)headers['Content-Range']=`bytes ${start}-${end}/${info.size}`;
      // An already-aborted signal destroys the file stream before Readable.toWeb
      // listens for its error, which would be unhandled and end the process.
      const body=request.method==='HEAD'||info.size===0||request.signal?.aborted?null:
        Readable.toWeb(createReadStream(canonical,{start,end,signal:request.signal}));
      return new Response(body,{status:range?206:200,headers});
    }catch{return error(404,'Not found');}
  };
}

export async function assertGameRuntime({root}){
  const missing=[];
  for(const name of ['index.html','src/main.js','src/style.css','game/spel.wasm','game/spel.meta.json',
    'assets/game/files.json','assets/game/rcs.img','assets/menu/forms.json']){
    const file=path.join(root,name);
    try{if(!(await stat(file)).isFile())missing.push(file);}catch{missing.push(file);}
  }
  if(missing.length)throw Error('Required game files are missing:\n'+missing.join('\n')+
    '\nFor a checkout, run npm ci and npm run bundle.');
}
