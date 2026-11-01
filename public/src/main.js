var _p=Object.defineProperty;var vp=(s,t)=>{for(var e in t)_p(s,e,{get:t[e],enumerable:!0})};function fi(s){let t=s.replace(/\\/g,"/").toLowerCase();return t=t.replace(/^[a-z]:\//,"").replace(/^\.\//,"").replace(/^\/+/,""),t=t.replace(/\/\.\//g,"/"),t.startsWith("a2racer4/")&&(t=t.slice(9)),t}var Ta=class{constructor(){this.files=new Map,this.ini=new Map,this.onWrite=null,this.onRead=null,this.onMissing=null}add(t,e){let i=fi(t);this.files.set(i,{name:t,data:e,size:e.length}),this.ini.delete(i)}addLazy(t,e,i){let n=fi(t);this.files.has(n)||this.files.set(n,{name:t,data:null,size:e,loader:i})}exists(t){return this.files.has(fi(t))}stat(t){return this.files.get(fi(t))||null}read(t){let e=fi(t),i=this.files.get(e);if(this.onRead&&this.onRead(e),!i){if(this.onMissing){let n=this.onMissing(e);if(n)return this.add(t,n),n}return null}return!i.data&&i.loader&&(i.data=i.loader()),i.data}write(t,e){this.add(t,e),this.onWrite&&this.onWrite(fi(t),e)}remove(t){let e=fi(t);this.files.delete(e),this.ini.delete(e)}list(){return[...this.files.keys()]}parsedIni(t){let e=fi(t),i=this.ini.get(e);if(i)return i;let n=this.read(t);return i=new wc(n?Sp(n):""),this.ini.set(e,i),i}iniGet(t,e,i){return this.parsedIni(t).get(e,i)}iniSet(t,e,i,n){let r=this.parsedIni(t);r.set(e,i,n);let a=fi(t),o=Ea(r.serialize()),l=this.files.get(a);l?(l.data=o,l.size=o.length):this.files.set(a,{name:t,data:o,size:o.length}),this.onWrite&&this.onWrite(a,o)}};function Sp(s){let t="";for(let i=0;i<s.length;i+=8192)t+=String.fromCharCode.apply(null,s.subarray(i,i+8192));return t}function Ea(s){let t=new Uint8Array(s.length);for(let e=0;e<s.length;e++)t[e]=s.charCodeAt(e)&255;return t}var wc=class{constructor(t){this.lines=t.split(/\r?\n/),this.index=new Map;let e=null;this.lines.forEach((i,n)=>{let r=i.trim();if(!r)return;if(r[0]==="["){let h=r.indexOf("]");h>0&&(e=r.slice(1,h).trim().toLowerCase(),this.index.has(e)||this.index.set(e,{line:n,name:r.slice(1,h).trim(),keys:new Map}));return}if(r[0]===";"||e===null)return;let a=r.indexOf("=");if(a<0)return;let o=r.slice(0,a).trim(),l=this.index.get(e),c=o.toLowerCase();l.keys.has(c)||l.keys.set(c,{line:n,name:o,value:r.slice(a+1).trim()})})}get(t,e){let i=this.index.get(t.toLowerCase());if(!i)return null;let n=i.keys.get(e.toLowerCase());return n?n.value:null}sections(){return[...this.index.values()].map(t=>t.name)}keys(t){let e=this.index.get(t.toLowerCase());return e?[...e.keys.values()].map(i=>i.name):[]}set(t,e,i){let n=t.toLowerCase(),r=this.index.get(n);if(!r){if(i===null)return;this.lines.length&&this.lines[this.lines.length-1]===""&&this.lines.pop(),this.lines.push("["+t+"]"),r={line:this.lines.length-1,name:t,keys:new Map},this.index.set(n,r),this.lines.push("")}if(e===null)return;let a=e.toLowerCase(),o=r.keys.get(a);if(i===null){o&&(this.lines[o.line]=";"+this.lines[o.line],r.keys.delete(a));return}if(o){o.value=i,this.lines[o.line]=o.name+"="+i;return}let l=r.line;for(let c of r.keys.values())l=Math.max(l,c.line);l+=1,this.lines.splice(l,0,e+"="+i);for(let c of this.index.values()){c.line>=l&&c!==r&&(c.line+=1);for(let h of c.keys.values())h.line>=l&&(h.line+=1)}r.keys.set(a,{line:l,name:e,value:i})}serialize(){return this.lines.join(`\r
`)}};var bp="a2racer4",rr="files",Aa=class{constructor(){this.db=null}open(){return new Promise(t=>{try{let e=indexedDB.open(bp,1);e.onupgradeneeded=()=>e.result.createObjectStore(rr),e.onsuccess=()=>{this.db=e.result,t()},e.onerror=()=>t(),e.onblocked=()=>t()}catch{t()}})}save(t,e){if(this.db)try{this.db.transaction(rr,"readwrite").objectStore(rr).put(new Uint8Array(e),t)}catch{}}restoreInto(t){return this.db?new Promise(e=>{try{let i=this.db.transaction(rr,"readonly").objectStore(rr).openCursor();i.onsuccess=()=>{let n=i.result;if(!n){e();return}t.add(String(n.key),n.value),n.continue()},i.onerror=()=>e()}catch{e()}}):Promise.resolve()}};var Mp={sin:Math.sin,cos:Math.cos,tan:Math.tan,atan2:Math.atan2,log2:Math.log2,pow2m1:s=>Math.expm1(s*Math.LN2),pow2:s=>Math.pow(2,s),fmod:(s,t)=>s%t,frem:(s,t)=>s-t*wp(s/t),acos:Math.acos,asin:Math.asin,pow:Math.pow,atan:Math.atan,exp:Math.exp,log:Math.log,log10:Math.log10,sinh:Math.sinh,cosh:Math.cosh,tanh:Math.tanh};function wp(s){let t=Math.round(s);return Math.abs(s%1)===.5&&t%2!==0?t-1:t}var Ri=class extends Error{constructor(t){super("game exit "+t),this.code=t}},Ca=class{constructor(t){this.meta=t,this.layout=t.layout,this.thunks=new Array(t.layout.N_THUNKS).fill(null),this.thunkNames=new Array(t.layout.N_THUNKS).fill(null),this.nextThunk=t.firstFreeThunk,this.esp=t.layout.STACK_TOP,this.vtables=new Map,this.objects=new Map,this.comBump=131072,this.onUnimplemented=e=>{throw new Error("Host function not implemented: "+e)},this.apiCount=new Map,this.traceApi=!1}async instantiate(t){let e={...Mp,trace:(d,u,f,p,y)=>{this.onTrace&&this.onTrace(d>>>0,u>>>0,f>>>0,p>>>0,y>>>0)},host:(d,u,f,p,y)=>(this.esp=u,this.thunks[d](u,p,y,f)|0)},i=t instanceof WebAssembly.Module?{instance:await WebAssembly.instantiate(t,{env:e})}:await WebAssembly.instantiate(t,{env:e});this.instance=i.instance;let n=i.instance.exports;this.exports=n,this.mem=n.memory,this.__call=n.__call,this.gEsp=n.g_esp,this.gEdx=n.g_edx,this.gSt0=n.g_st0,this.gCw=n.g_cw;let r=n.memory.buffer;this.u8=new Uint8Array(r),this.i8=new Int8Array(r),this.u16=new Uint16Array(r),this.i16=new Int16Array(r),this.u32=new Uint32Array(r),this.i32=new Int32Array(r),this.f32=new Float32Array(r),this.f64=new Float64Array(r),this.view=new DataView(r);let{CODE_MAP:a,MAP_LO:o}=this.layout;for(let[d,u]of this.meta.codeMap)this.u16[a+(d-o)*2>>1]=u;for(let[d,u]of Object.entries(this.meta.thunks)){let f=Number(d);this.thunkNames[f]=u,this.thunks[f]=()=>this.onUnimplemented(u)}for(let d=0;d<this.thunks.length;d++)this.thunks[d]||(this.thunks[d]=()=>this.onUnimplemented("thunk#"+d));let{TIB_BASE:l,STACK_TOP:c,STACK_LOW:h}=this.layout;return this.u32[l>>2]=4294967295,this.u32[l+4>>2]=c,this.u32[l+8>>2]=h,this.u32[l+24>>2]=l,this}bindRaw(t,e,i){let n=this.thunkId(t);this.thunks[n]=i,this.u32[this.layout.POP_TABLE+n*4>>2]=e}thunkId(t){if(!this._ids){this._ids=new Map;for(let[i,n]of Object.entries(this.meta.thunks))this._ids.set(n,Number(i))}let e=this._ids.get(t);if(e===void 0)throw new Error("unknown thunk "+t);return e}api(t,e,i){if(this._ids||this.thunkId(t),!this._ids.has(t))return;let n=this.u32,r=a=>{switch(e){case 0:return i();case 1:return i(n[a+4>>2]);case 2:return i(n[a+4>>2],n[a+8>>2]);case 3:return i(n[a+4>>2],n[a+8>>2],n[a+12>>2]);case 4:return i(n[a+4>>2],n[a+8>>2],n[a+12>>2],n[a+16>>2]);default:{let o=new Array(e);for(let l=0;l<e;l++)o[l]=n[a+4+l*4>>2];return i(...o)}}};this.bindRaw(t,e*4,r)}makeThunk(t,e,i){let n=this.nextThunk++;if(n>=this.thunks.length)throw new Error("out of host thunks");return this.thunks[n]=i,this.thunkNames[n]=t,this.u32[this.layout.POP_TABLE+n*4>>2]=e,this.layout.THUNK_BASE+n}lowAlloc(t){let e=this.comBump+15&-16;if(this.comBump=e+t,this.comBump>983040)throw new Error("COM area full");return e}defineInterface(t,e){let i=this.lowAlloc(e.length*4),n=this.u32;return e.forEach((r,a)=>{let o=t+"::"+(r?r[0]:"slot"+a);if(!r){let u=this.makeThunk(o,0,()=>this.onUnimplemented(o));n[i+a*4>>2]=u;return}let[,l,c]=r,h=this.objects,d=u=>{let f=h.get(n[u+4>>2]);switch(l){case 0:return c(f);case 1:return c(f,n[u+8>>2]);case 2:return c(f,n[u+8>>2],n[u+12>>2]);case 3:return c(f,n[u+8>>2],n[u+12>>2],n[u+16>>2]);default:{let p=new Array(l);for(let y=0;y<l;y++)p[y]=n[u+8+y*4>>2];return c(f,...p)}}};n[i+a*4>>2]=this.makeThunk(o,(l+1)*4,d)}),this.vtables.set(t,i),i}newObject(t,e,i=0){let n=this.lowAlloc(16+i);return this.u32[n>>2]=this.vtables.get(t),e.addr=n,e.refs=1,this.objects.set(n,e),n}call(t,e=[],i=0,n=0){let r=this.esp,a=r-64&-4;a-=e.length*4;for(let l=0;l<e.length;l++)this.u32[a+l*4>>2]=e[l]>>>0;a-=4,this.u32[a>>2]=0,this.esp=a;let o=this.__call(t,a,0,i,n);return this.esp=r,o}cstr(t){let e=this.u8,i="";for(let n=e[t];n;n=e[++t])i+=String.fromCharCode(n);return i}writeCStr(t,e,i=2147483647){let n=this.u8,r=Math.min(e.length,i-1);for(let a=0;a<r;a++)n[t+a]=e.charCodeAt(a)&255;return n[t+r]=0,r}};var ar=4294967295,Tc="C:\\A2Racer4",Ec=class{constructor(t,e,i){this.m=t,this.bump=e,this.limit=i,this.free=new Map,this.pageBump=i,this.bytesInUse=0}alloc(t,e=!1){let i=Math.max(16,t+15&-16),n=this.free.get(i),r;if(n&&n.length)r=n.pop(),e&&this.m.u8.fill(0,r,r+i);else if(r=this.bump+16,this.bump=r+i,this.bump>=this.pageBump)throw new Error("out of game memory");return this.m.u32[r-16>>2]=i,this.m.u32[r-12>>2]=t,this.bytesInUse+=i,r}sizeOf(t){return this.m.u32[t-12>>2]}release(t){if(!t)return;let e=this.m.u32[t-16>>2],i=this.free.get(e);i||(i=[],this.free.set(e,i)),i.push(t),this.bytesInUse-=e}realloc(t,e,i=!1){let n=this.m.u32[t-16>>2],r=this.m.u32[t-12>>2];if(Math.max(16,e+15&-16)<=n)return this.m.u32[t-12>>2]=e,i&&e>r&&this.m.u8.fill(0,t+r,t+e),t;let o=this.alloc(e,i);return this.m.u8.copyWithin(o,t,t+Math.min(r,e)),this.release(t),o}pages(t){let e=t+65535&-65536;if(this.pageBump-=e,this.pageBump<=this.bump)throw new Error("out of game memory (pages)");return this.pageBump}},Ra=class{constructor(){this.seconds=0,this.queries=0,this.freq=1193182}advance(t){this.seconds+=t,this.queries=0}query(){return++this.queries>2e3&&(this.seconds+=5e-4),this.seconds}};function Lu(s,t){let{vfs:e,clock:i}=t,{u8:n,u16:r,u32:a,i32:o}=s,l=new Ec(s,s.layout.HEAP_BASE,s.layout.MEM_PAGES*65536);t.heap=l;let c=0,h=new Map,d=256,u=s.lowAlloc(32);s.writeCStr(u,"spel.dat");let f=s.lowAlloc(8),p="KERNEL32.DLL!",y="USER32.DLL!",m="GDI32.DLL!",g="WINMM.DLL!";s.api(p+"GetVersion",0,()=>-1073739260),s.api(p+"GetVersionExA",1,_=>(a[_+4>>2]=4,a[_+8>>2]=10,a[_+12>>2]=67766446,a[_+16>>2]=1,n[_+20]=0,1)),s.api(p+"GetCommandLineA",0,()=>u),s.api(p+"GetStartupInfoA",1,_=>(n.fill(0,_,_+68),a[_>>2]=68,0)),s.api(p+"GetModuleHandleA",1,_=>_?0:4194304),s.api(p+"GetModuleFileNameA",3,(_,C,P)=>s.writeCStr(C,Tc+"\\spel.dat",P)),s.api(p+"LoadLibraryA",1,()=>0),s.api(p+"GetProcAddress",2,()=>0),s.api(p+"ExitProcess",1,_=>{throw new Ri(_)}),s.api(p+"TerminateProcess",2,(_,C)=>{throw new Ri(C)}),s.api(p+"GetCurrentProcess",0,()=>4294967295),s.api(p+"GetLastError",0,()=>c),s.api(p+"SetUnhandledExceptionFilter",1,()=>0),s.api(p+"UnhandledExceptionFilter",1,()=>0),s.api(p+"RaiseException",4,_=>{throw new Error("RaiseException "+_.toString(16))}),s.api(p+"RtlUnwind",4,()=>0),s.api(p+"OutputDebugStringA",1,()=>0),s.api(p+"IsBadWritePtr",2,()=>0),s.api(p+"IsBadReadPtr",2,()=>0),s.api(p+"IsBadCodePtr",1,()=>0),s.api(p+"SetHandleCount",1,_=>_),s.api(p+"GetStdHandle",1,_=>16+(_&7)),s.api(p+"SetStdHandle",2,()=>1),s.api(p+"GetEnvironmentStrings",0,()=>f),s.api(p+"GetEnvironmentStringsW",0,()=>f),s.api(p+"FreeEnvironmentStringsA",1,()=>1),s.api(p+"FreeEnvironmentStringsW",1,()=>1),s.api(p+"SetEnvironmentVariableA",2,()=>1),s.api(p+"GetComputerNameA",2,(_,C)=>{let P=s.writeCStr(_,"A2RACER");return a[C>>2]=P,1}),s.api("ADVAPI32.DLL!GetUserNameA",2,(_,C)=>{let P=s.writeCStr(_,"speler");return a[C>>2]=P+1,1}),s.api(p+"GetSystemInfo",1,_=>(n.fill(0,_,_+36),a[_+4>>2]=4096,a[_+8>>2]=65536,a[_+12>>2]=2147418111,a[_+16>>2]=1,a[_+20>>2]=1,a[_+24>>2]=586,a[_+28>>2]=65536,0)),s.api(p+"GlobalMemoryStatus",1,_=>(a[_>>2]=32,a[_+4>>2]=50,a[_+8>>2]=256<<20,a[_+12>>2]=128<<20,a[_+16>>2]=512<<20,a[_+20>>2]=256<<20,a[_+24>>2]=2047<<20,a[_+28>>2]=1024<<20,0)),s.api(p+"HeapCreate",3,()=>1),s.api(p+"HeapDestroy",1,()=>1),s.api(p+"HeapAlloc",3,(_,C,P)=>l.alloc(P,(C&8)!==0)),s.api(p+"HeapFree",3,(_,C,P)=>(l.release(P),1)),s.api(p+"HeapReAlloc",4,(_,C,P,k)=>l.realloc(P,k,(C&8)!==0)),s.api(p+"HeapSize",3,(_,C,P)=>l.sizeOf(P)),s.api(p+"LocalAlloc",2,(_,C)=>l.alloc(C,(_&64)!==0)),s.api(p+"LocalFree",1,_=>(l.release(_),0)),s.api(p+"LocalReAlloc",3,(_,C,P)=>l.realloc(_,C,(P&64)!==0)),s.api(p+"VirtualAlloc",4,(_,C)=>_||l.pages(C)),s.api(p+"VirtualFree",3,(_,C,P)=>(P&16384&&C&&n.fill(0,_,_+C),1)),s.api(p+"QueryPerformanceFrequency",1,_=>(a[_>>2]=i.freq,a[_+4>>2]=0,1)),s.api(p+"QueryPerformanceCounter",1,_=>{let C=Math.floor(i.query()*i.freq);return a[_>>2]=C%4294967296,a[_+4>>2]=Math.floor(C/4294967296),1});let E=()=>Math.floor(i.query()*1e3)>>>0;s.api(p+"GetTickCount",0,E),s.api(g+"timeGetTime",0,E);let L=(_,C)=>{r[_>>1]=C.getUTCFullYear(),r[_+2>>1]=C.getUTCMonth()+1,r[_+4>>1]=C.getUTCDay(),r[_+6>>1]=C.getUTCDate(),r[_+8>>1]=C.getUTCHours(),r[_+10>>1]=C.getUTCMinutes(),r[_+12>>1]=C.getUTCSeconds(),r[_+14>>1]=C.getUTCMilliseconds()},b=()=>t.fixedDate?new Date(t.fixedDate):new Date;s.api(p+"GetSystemTime",1,_=>(L(_,b()),0)),s.api(p+"GetLocalTime",1,_=>{let C=b();return L(_,new Date(C.getTime()-C.getTimezoneOffset()*6e4)),0});let T=(_,C)=>{let P=BigInt(Math.floor(C))*10000n+116444736000000000n;a[_>>2]=Number(P&0xFFFFFFFFn),a[_+4>>2]=Number(P>>32n)};s.api(p+"GetSystemTimeAsFileTime",1,_=>(T(_,b().getTime()),0)),s.api(p+"FileTimeToLocalFileTime",2,(_,C)=>(a[C>>2]=a[_>>2],a[C+4>>2]=a[_+4>>2],1)),s.api(p+"FileTimeToSystemTime",2,(_,C)=>{let P=BigInt(a[_+4>>2])<<32n|BigInt(a[_>>2]);return L(C,new Date(Number((P-116444736000000000n)/10000n))),1}),s.api(p+"GetTimeZoneInformation",1,_=>(n.fill(0,_,_+172),0)),s.api(p+"GetACP",0,()=>1252),s.api(p+"GetOEMCP",0,()=>437),s.api(p+"GetCPInfo",2,(_,C)=>(n.fill(0,C,C+18),a[C>>2]=1,n[C+4]=63,1)),s.api(p+"IsValidCodePage",1,()=>1),s.api(p+"IsValidLocale",2,()=>1),s.api(p+"EnumSystemLocalesA",2,()=>1),s.api(p+"GetUserDefaultLCID",0,()=>1043),s.api(p+"GetLocaleInfoA",4,(_,C,P,k)=>(k&&s.writeCStr(P,"",k),1)),s.api(p+"GetLocaleInfoW",4,(_,C,P,k)=>(k&&(r[P>>1]=0),1)),s.api(p+"MultiByteToWideChar",6,(_,C,P,k,D,G)=>{let X=k;if(X===4294967295){for(X=0;n[P+X];)X++;X++}if(!G)return X;X=Math.min(X,G);for(let w=0;w<X;w++)s.view.setUint16(D+w*2,n[P+w],!0);return X}),s.api(p+"WideCharToMultiByte",8,(_,C,P,k,D,G)=>{let X=k;if(X===4294967295){for(X=0;s.view.getUint16(P+X*2,!0);)X++;X++}if(!G)return X;X=Math.min(X,G);for(let w=0;w<X;w++){let I=s.view.getUint16(P+w*2,!0);n[D+w]=I<256?I:63}return X});let M=_=>{let C=0;return _>=65&&_<=90&&(C|=385),_>=97&&_<=122&&(C|=386),_>=48&&_<=57&&(C|=132),(_===32||_>=9&&_<=13)&&(C|=8),_===32&&(C|=64),(_<32||_===127)&&(C|=32),(_>=33&&_<=47||_>=58&&_<=64||_>=91&&_<=96||_>=123&&_<=126)&&(C|=16),(_>=65&&_<=70||_>=97&&_<=102)&&(C|=128),C};s.api(p+"GetStringTypeA",5,(_,C,P,k,D)=>{k===4294967295&&(k=2147483647);for(let G=0;G<k;G++){let X=n[P+G];if(s.view.setUint16(D+G*2,M(X),!0),!X&&k===2147483647)break}return 1}),s.api(p+"GetStringTypeW",4,(_,C,P,k)=>{P===4294967295&&(P=2147483647);for(let D=0;D<P;D++){let G=s.view.getUint16(C+D*2,!0);if(s.view.setUint16(k+D*2,M(G),!0),!G&&P===2147483647)break}return 1});let F=(_,C)=>C&512&&_>=97&&_<=122?_-32:C&256&&_>=65&&_<=90?_+32:_;s.api(p+"LCMapStringA",6,(_,C,P,k,D,G)=>{if(k===4294967295){for(k=0;n[P+k];)k++;k++}if(!G)return k;k=Math.min(k,G);for(let X=0;X<k;X++)n[D+X]=F(n[P+X],C);return k}),s.api(p+"LCMapStringW",6,(_,C,P,k,D,G)=>{if(k===4294967295){for(k=0;s.view.getUint16(P+k*2,!0);)k++;k++}if(!G)return k;k=Math.min(k,G);for(let X=0;X<k;X++)s.view.setUint16(D+X*2,F(s.view.getUint16(P+X*2,!0),C),!0);return k}),s.api(p+"CompareStringA",6,(_,C,P,k,D,G)=>{let X=k===4294967295?s.cstr(P):S(P,k),w=G===4294967295?s.cstr(D):S(D,G),I=C&1?X.toLowerCase():X,Y=C&1?w.toLowerCase():w;return I<Y?1:I>Y?3:2}),s.api(p+"CompareStringW",6,()=>2);function S(_,C){let P="";for(let k=0;k<C;k++)P+=String.fromCharCode(n[_+k]);return P}s.api(p+"CreateFileA",7,(_,C,P,k,D)=>{let G=s.cstr(_),X=(C&1073741824)!==0,w=e.stat(G);if(!w&&(D===3||D===5)&&!e.read(G))return c=2,ar;if(w&&D===1)return c=80,ar;let I=d++,Y={path:G,pos:0,write:X,data:null,size:0,stat:e.stat(G)};if(D===2||D===5||!w&&(D===1||D===4))Y.data=new Uint8Array(0),Y.size=0,Y.dirty=!0,X&&D!==4&&e.add(G,Y.data);else{let j=e.stat(G);Y.size=j.size,Y.rangeRead=j.rangeRead||null,Y.data=Y.rangeRead?null:e.read(G),X&&(Y.data=Y.data.slice())}return h.set(I,Y),c=0,I});let R=(_,C,P,k)=>{_.rangeRead?_.rangeRead(C,P,n,k):n.set(_.data.subarray(C,C+P),k)};s.api(p+"ReadFile",5,(_,C,P,k)=>{let D=h.get(_);if(!D)return k&&(a[k>>2]=0),_>=16&&_<24?1:0;let G=Math.max(0,Math.min(P,D.size-D.pos));return G&&R(D,D.pos,G,C),D.pos+=G,k&&(a[k>>2]=G),1}),s.api(p+"WriteFile",5,(_,C,P,k)=>{let D=h.get(_);if(k&&(a[k>>2]=P),!D){if(t.onStdout&&_>=16&&_<24){let X="";for(let w=0;w<P;w++)X+=String.fromCharCode(n[C+w]);t.onStdout(X)}return 1}let G=D.pos+P;if(G>D.data.length){let X=new Uint8Array(Math.max(G,D.data.length*2,256));X.set(D.data.subarray(0,D.size)),D.data=X}return D.data.set(n.subarray(C,C+P),D.pos),D.pos=G,D.size=Math.max(D.size,G),D.dirty=!0,1}),s.api(p+"SetFilePointer",4,(_,C,P,k)=>{let D=h.get(_);if(!D)return ar;let G=o[s.esp+8>>2],X=k===0?0:k===1?D.pos:D.size;return D.pos=X+G,P&&(a[P>>2]=0),D.pos}),s.api(p+"SetEndOfFile",1,_=>{let C=h.get(_);return C&&(C.size=C.pos,C.dirty=!0),1}),s.api(p+"FlushFileBuffers",1,()=>1),s.api(p+"GetFileType",1,_=>h.has(_)?1:2),s.api(p+"CloseHandle",1,_=>{let C=h.get(_);return C&&(C.dirty&&e.write(C.path,C.data.slice(0,C.size)),h.delete(_)),1}),s.api(p+"GetFileAttributesA",1,_=>e.exists(s.cstr(_))?128:ar),s.api(p+"GetCurrentDirectoryA",2,(_,C)=>s.writeCStr(C,Tc,_)),s.api(p+"GetFullPathNameA",4,(_,C,P,k)=>{let D=s.cstr(_),G=/^[a-zA-Z]:/.test(D)?D:Tc+"\\"+D.replace(/^\.\\/,""),X=s.writeCStr(P,G,C);return k&&(a[k>>2]=P+G.lastIndexOf("\\")+1),X}),s.api(p+"GetDriveTypeA",1,_=>(_?s.cstr(_):"C:\\")[0].toUpperCase()==="C"?3:1);let B=new Map,z=(_,C,P)=>{n.fill(0,_,_+320),a[_>>2]=128,a[_+32>>2]=P,s.writeCStr(_+44,C,260)};s.api(p+"FindFirstFileA",2,(_,C)=>{let P=fi(s.cstr(_)),k=new RegExp("^"+P.replace(/[.+^${}()|[\]\\]/g,"\\$&").replace(/\*/g,".*").replace(/\?/g,".")+"$"),D=e.list().filter(X=>k.test(X));if(!D.length)return c=2,ar;let G=d++;return B.set(G,{list:D,at:1}),z(C,D[0],e.stat(D[0]).size),G}),s.api(p+"FindClose",1,_=>(B.delete(_),1)),s.api(p+"GetPrivateProfileIntA",4,(_,C,P,k)=>{let D=e.iniGet(s.cstr(k),s.cstr(_),s.cstr(C));if(D===null||D==="")return P;let G=parseInt(D,10);return Number.isNaN(G)?0:G}),s.api(p+"GetPrivateProfileStringA",6,(_,C,P,k,D,G)=>{let X=s.cstr(G);if(!_||!C){let I=e.parsedIni(X),Y=_?I.keys(s.cstr(_)):I.sections(),j=k,at=k+D-1;for(let q of Y){if(j+q.length+1>=at)break;j+=s.writeCStr(j,q)+1}return n[j]=0,j-k}let w=e.iniGet(X,s.cstr(_),s.cstr(C));return w===null?w=P?s.cstr(P):"":w.length>=2&&(w[0]==='"'&&w[w.length-1]==='"'||w[0]==="'"&&w[w.length-1]==="'")&&(w=w.slice(1,-1)),D?s.writeCStr(k,w,D):0}),s.api(p+"WritePrivateProfileStringA",4,(_,C,P,k)=>(e.iniSet(s.cstr(k),s.cstr(_),C?s.cstr(C):null,P?s.cstr(P):null),1));let W={proc:0,hwnd:4096,queue:[]};t.win=W;let $=(_,C=0,P=0)=>W.proc?s.call(W.proc,[W.hwnd,_,C,P]):0;t.sendToWindow=$,t.postToWindow=(_,C=0,P=0)=>W.queue.push({msg:_,wParam:C,lParam:P}),s.api(y+"RegisterClassA",1,_=>(W.proc=a[_+4>>2],49152)),s.api(y+"CreateWindowExA",12,()=>{let _=W.hwnd;return $(129,0,0),$(1,0,0),_}),s.api(y+"ShowWindow",2,()=>($(28,1,0),$(6,1,0),0)),s.api(y+"UpdateWindow",1,()=>1),s.api(y+"MoveWindow",6,()=>1),s.api(y+"LoadIconA",2,()=>8192),s.api(y+"LoadCursorA",2,()=>8193),s.api(y+"SetCursor",1,()=>0),s.api(y+"GetSystemMetrics",1,_=>_===0?t.screen.width:_===1?t.screen.height:0);let V=(_,C,P,k,D)=>{o[_>>2]=C,o[_+4>>2]=P,o[_+8>>2]=k,o[_+12>>2]=D};return s.api(y+"GetClientRect",2,(_,C)=>(V(C,0,0,t.screen.width,t.screen.height),1)),s.api(y+"SetRect",5,(_,C,P,k,D)=>(V(_,C|0,P|0,k|0,D|0),1)),s.api(y+"ClientToScreen",2,()=>1),s.api(y+"ScreenToClient",2,()=>1),s.api(y+"GetCursorPos",1,_=>(o[_>>2]=t.input?t.input.mouseX:0,o[_+4>>2]=t.input?t.input.mouseY:0,1)),s.api(y+"GetAsyncKeyState",1,_=>t.input&&t.input.keyDown(_)?32768:0),s.api(y+"PeekMessageA",5,(_,C,P,k,D)=>{if(!W.queue.length)return 0;let G=D&1?W.queue.shift():W.queue[0];return a[_>>2]=W.hwnd,a[_+4>>2]=G.msg,a[_+8>>2]=G.wParam,a[_+12>>2]=G.lParam,a[_+16>>2]=E(),a[_+20>>2]=0,a[_+24>>2]=0,1}),s.api(y+"TranslateMessage",1,()=>0),s.api(y+"DispatchMessageA",1,_=>$(a[_+4>>2],a[_+8>>2],a[_+12>>2])),s.api(y+"PostMessageA",4,(_,C,P,k)=>(W.queue.push({msg:C,wParam:P,lParam:k}),1)),s.api(y+"PostQuitMessage",1,_=>(W.queue.push({msg:18,wParam:_,lParam:0}),0)),s.api(y+"DefWindowProcA",4,(_,C)=>(C===16&&$(2),0)),s.api(y+"WaitMessage",0,()=>1),s.api(y+"BeginPaint",2,()=>0),s.api(y+"EndPaint",2,()=>1),s.api(y+"GetUpdateRect",3,()=>0),s.api(y+"KillTimer",2,()=>1),s.api(y+"MessageBeep",1,()=>1),s.api(y+"MessageBoxExA",5,(_,C,P)=>(t.onMessageBox(s.cstr(P),s.cstr(C)),1)),s.bindRaw(y+"wsprintfA",0,_=>{let C=a[_+4>>2],P=s.cstr(a[_+8>>2]),k=_+12,D=P.replace(/%(-?0?\d*)(l?)([sdxXuc%])/g,(G,X,w,I)=>{if(I==="%")return"%";let Y=a[k>>2];k+=4;let j;I==="s"?j=s.cstr(Y):I==="d"?j=String(Y|0):I==="u"?j=String(Y):I==="x"?j=Y.toString(16):I==="X"?j=Y.toString(16).toUpperCase():j=String.fromCharCode(Y&255);let at=parseInt(X,10);return at&&(j=X[0]==="-"?j.padEnd(at):j.padStart(at,X[0]==="0"?"0":" ")),j});return s.writeCStr(C,D)}),s.api(p+"lstrlenA",1,_=>_?s.cstr(_).length:0),s.api(m+"SetTextColor",2,()=>0),s.api(m+"SetBkColor",2,()=>0),s.api(m+"SetBkMode",2,()=>1),s.api(m+"ExtTextOutA",8,()=>1),s.api(m+"TextOutA",5,()=>1),s.api(m+"SelectObject",2,()=>0),s.api(m+"GetTextExtentPoint32A",4,(_,C,P,k)=>(o[k>>2]=P*8,o[k+4>>2]=16,1)),s.api(g+"mixerGetNumDevs",0,()=>0),s.api(g+"mixerOpen",5,()=>1),s.api(g+"mixerClose",1,()=>0),s.api(g+"mixerGetLineInfoA",3,()=>1),s.api(g+"mixerGetLineControlsA",3,()=>1),s.api(g+"mixerGetControlDetailsA",3,()=>1),s.api(g+"mixerSetControlDetails",3,()=>1),{heap:l,win:W,sendToWindow:$}}var Ia={IDirectDraw2:3014063072,IDirect3D2:1789796033,IDirectDrawSurface2:1468029061,IDirect3DTexture2:2468877570,IDirect3DRampDevice:4060637984,IDirectInputDevice2A:1497687682};function Ze(s,t){let e=new Array(s).fill(null);for(let[i,n,r,a]of t)e[i/4]=[n,r,a];return e}function Fu(s,t){let{u8:e,u16:i,u32:n,i32:r,f32:a}=s,o=t.heap,l=()=>t.render,c=()=>t.audio,h=w=>++w.refs,d=w=>(w.refs--,w.refs<=0&&w.onFree&&w.onFree(),Math.max(w.refs,0)),u=()=>0,f={flags:64,bits:16,r:63488,g:2016,b:31,a:0},p={flags:65,bits:16,r:3840,g:240,b:15,a:61440},y={flags:96,bits:8,r:0,g:0,b:0,a:0},m=()=>t.screen.bits===8?y:f,g=(w,I)=>{n[w>>2]=32,n[w+4>>2]=I.flags,n[w+8>>2]=0,n[w+12>>2]=I.bits,n[w+16>>2]=I.r,n[w+20>>2]=I.g,n[w+24>>2]=I.b,n[w+28>>2]=I.a},E=w=>({flags:n[w+4>>2],bits:n[w+12>>2],r:n[w+16>>2],g:n[w+20>>2],b:n[w+24>>2],a:n[w+28>>2]});class L{constructor(I){Object.assign(this,I),this.ptr=0,this.colorKey=-1,this.attached=[],this.textureId=-1,this.handle=0,this.generation=0}memory(){return this.ptr||(this.pitch=this.width*(this.format.bits>>3)+3&-4,this.ptr=o.alloc(this.pitch*this.height,!0)),this.ptr}free(){this.ptr&&o.release(this.ptr),this.ptr=0,this.textureId>=0&&l()&&l().freeTexture(this),this.handle&&W.delete(this.handle)}}let b="IDirectDrawSurface",T=w=>{let I=new L(w);return s.newObject(b,I),I.onFree=()=>{I.free(),s.objects.delete(I.addr)},I},M=(w,I,Y)=>{let j=n[I+4>>2],at=n[I+104>>2],q=t.screen,et=j&4?n[I+12>>2]:q.width,ct=j&2?n[I+8>>2]:q.height,Mt=m();j&4096&&(Mt=E(I+72));let ut=(at&131072)!==0,Lt=(at&512)!==0;if(at&268435456&&!(at&67108864)&&(t.probeTextures=(t.probeTextures||0)+1,t.probeTextures>256/(Mt.bits>>3)))return t.probeTextures=0,-2005532447;let Vt=T({width:et,height:ct,format:Mt,caps:at,isZ:ut,isPrimary:Lt,backBuffer:!1});if(ut?Vt.format={flags:1024,bits:16,r:0,g:65535,b:0,a:0}:Mt===y&&at&8192&&!Lt&&(t.bufferScreen=Vt),Lt&&j&32&&n[I+20>>2]>0){let Dt=T({width:et,height:ct,format:Mt,caps:8196,isZ:!1,isPrimary:!1,backBuffer:!0});Vt.attached.push(Dt)}if(j&131072&&at&4194304){let Dt=n[I+24>>2],zt=Vt;Vt.mipLevels=Dt;for(let Bt=1;Bt<Dt;Bt++){let Nt=Math.max(1,et>>Bt),Zt=Math.max(1,ct>>Bt),Jt=T({width:Nt,height:Zt,format:Mt,caps:at,isZ:!1,isPrimary:!1,backBuffer:!1,mipOf:Vt,mipLevel:Bt});zt.attached.push(Jt),zt=Jt}}return n[Y>>2]=Vt.addr,0},F=new Map,S=(w,I,Y,j,at,q)=>{let et=Y?s.objects.get(Y):null,ct=(Vt,Dt)=>Vt?{l:r[Vt>>2],t:r[Vt+4>>2],r:r[Vt+8>>2],b:r[Vt+12>>2]}:{l:0,t:0,r:Dt.width,b:Dt.height},Mt=ct(I,w),ut=w.isPrimary||w.backBuffer||w===t.bufferScreen;if(at&1024){let Vt=n[q+80>>2];return ut&&l()?l().fillScreen(w,Mt,Vt):R(w,Mt,Vt),0}if(!et)return 0;let Lt=ct(j,et);return ut&&l()?(l().blitToScreen(w,Mt,et,Lt,at),0):(B(w,Mt,et,Lt,at),0)},R=(w,I,Y)=>{let j=w.memory(),at=w.pitch;for(let q=I.t;q<I.b;q++)w.format.bits===8?e.fill(Y,j+q*at+I.l,j+q*at+I.r):i.fill(Y,j+q*at+I.l*2>>1,j+q*at+I.r*2>>1);w.generation++},B=(w,I,Y,j,at)=>{let q=w.memory(),et=Y.memory(),ct=I.r-I.l,Mt=I.b-I.t,ut=j.r-j.l,Lt=j.b-j.t;if(ct<=0||Mt<=0||ut<=0||Lt<=0)return;let Vt=(at&32768)!==0,Dt=Y.colorKey&65535,zt=Y.format.bits>>3;if(ct===ut&&Mt===Lt&&!Vt){let Bt=ct*zt;for(let Nt=0;Nt<Mt;Nt++){let Zt=q+(I.t+Nt)*w.pitch+I.l*zt,Jt=et+(j.t+Nt)*Y.pitch+j.l*zt;e.copyWithin(Zt,Jt,Jt+Bt)}}else if(zt===1){let Bt=Dt&255,Nt=Math.floor(ut*65536/ct),Zt=Math.floor(Lt*65536/Mt);for(let Jt=0;Jt<Mt;Jt++){let xe=j.t+Math.floor(((Zt>>1)+Jt*Zt)/65536),ne=q+(I.t+Jt)*w.pitch+I.l,pe=et+xe*Y.pitch+j.l;for(let U=0;U<ct;U++){let Me=e[pe+Math.floor(((Nt>>1)+U*Nt)/65536)];(!Vt||Me!==Bt)&&(e[ne+U]=Me)}}}else for(let Bt=0;Bt<Mt;Bt++){let Nt=j.t+Math.floor(Bt*Lt/Mt),Zt=q+(I.t+Bt)*w.pitch+I.l*2>>1,Jt=et+Nt*Y.pitch+j.l*2>>1;for(let xe=0;xe<ct;xe++){let ne=i[Jt+Math.floor(xe*ut/ct)];(!Vt||ne!==Dt)&&(i[Zt+xe]=ne)}}w.generation++};s.defineInterface(b,Ze(36,[[0,"QueryInterface",2,(w,I,Y)=>{if(n[I>>2]===Ia.IDirect3DTexture2){let at=w.textureObj;return at||(at={surface:w},s.newObject("IDirect3DTexture2",at),at.refs=0,w.textureObj=at),at.refs++,n[Y>>2]=at.addr,0}return w.refs++,n[Y>>2]=w.addr,0}],[4,"AddRef",0,h],[8,"Release",0,d],[12,"AddAttachedSurface",1,(w,I)=>(w.attached.push(s.objects.get(I)),0)],[20,"Blt",5,S],[44,"Flip",2,w=>(t.onFlip&&t.onFlip(),0)],[48,"GetAttachedSurface",2,(w,I,Y)=>{let j=n[I>>2],at=w.attached.find(q=>j&4?q.backBuffer:!0);return at?(at.refs++,n[Y>>2]=at.addr,0):-2005532417}],[68,"GetDC",1,(w,I)=>(n[I>>2]=12288,0)],[84,"GetPixelFormat",1,(w,I)=>(g(I,w.format),0)],[88,"GetSurfaceDesc",1,(w,I)=>(w.memory(),n[I+4>>2]=4111,n[I+8>>2]=w.height,n[I+12>>2]=w.width,n[I+16>>2]=w.pitch,n[I+36>>2]=w.ptr,g(I+72,w.format),n[I+104>>2]=w.caps,0)],[96,"IsLost",0,u],[100,"Lock",4,(w,I,Y)=>{let j=w.memory();return n[Y+4>>2]=4111,n[Y+8>>2]=w.height,n[Y+12>>2]=w.width,n[Y+16>>2]=w.pitch,n[Y+36>>2]=I?j+r[I+4>>2]*w.pitch+r[I>>2]*(w.format.bits>>3):j,g(Y+72,w.format),n[Y+104>>2]=w.caps,F.set(w.addr,!0),0}],[104,"ReleaseDC",1,u],[108,"Restore",0,u],[112,"SetClipper",1,u],[116,"SetColorKey",2,(w,I,Y)=>(w.colorKey=Y?n[Y>>2]:-1,0)],[124,"SetPalette",1,u],[128,"Unlock",1,w=>(w.generation++,0)]])),s.defineInterface("IDirectDrawPalette",Ze(7,[[8,"Release",0,d],[16,"GetEntries",4,(w,I,Y,j,at)=>(e.copyWithin(at,w.ptr+Y*4,w.ptr+(Y+j)*4),0)],[24,"SetEntries",4,(w,I,Y,j,at)=>(e.copyWithin(w.ptr+Y*4,at,at+j*4),l()&&l().setPalette&&l().setPalette(e.subarray(w.ptr,w.ptr+1024)),0)]]));let z=[[0,"QueryInterface",2,(w,I,Y)=>{let j=n[I>>2];return j===Ia.IDirect3D2?(n[Y>>2]=t.d3d.addr,0):j===Ia.IDirectDraw2?(n[Y>>2]=t.dd2.addr,0):-2147467262}],[4,"AddRef",0,h],[8,"Release",0,d],[20,"CreatePalette",4,(w,I,Y,j)=>{let at={ptr:o.alloc(1024,!0)};return e.copyWithin(at.ptr,Y,Y+1024),s.newObject("IDirectDrawPalette",at),t.palette=at,n[j>>2]=at.addr,0}],[24,"CreateSurface",3,M],[32,"EnumDisplayModes",4,()=>0],[80,"SetCooperativeLevel",2,u]];s.defineInterface("IDirectDraw",Ze(24,[...z,[84,"SetDisplayMode",3,(w,I,Y)=>(t.screen.width=I,t.screen.height=Y,0)]])),s.defineInterface("IDirectDraw2",Ze(24,[...z,[84,"SetDisplayMode",5,(w,I,Y,j)=>(t.screen.width=I,t.screen.height=Y,t.screen.bits=j,0)],[88,"WaitForVerticalBlank",2,u]])),t.dd={},s.newObject("IDirectDraw",t.dd),t.dd2={},s.newObject("IDirectDraw2",t.dd2),s.api("DDRAW.DLL!DirectDrawEnumerateA",2,()=>0),s.api("DDRAW.DLL!DirectDrawCreate",3,(w,I)=>(n[I>>2]=t.dd.addr,0)),s.api("DDRAW.DLL!DirectDrawCreateClipper",3,()=>0);let W=new Map,$=1,V=new Map,_=1;s.defineInterface("IDirect3DTexture2",Ze(6,[[4,"AddRef",0,h],[8,"Release",0,w=>(w.refs--,Math.max(w.refs,0))],[12,"GetHandle",2,(w,I,Y)=>{let j=w.surface;return j.handle||(j.handle=$++,W.set(j.handle,j)),n[Y>>2]=j.handle,0}],[20,"Load",1,(w,I)=>{let Y=w.surface,j=s.objects.get(I).surface;return Y.width=j.width,Y.height=j.height,Y.format=j.format,Y.source=j,Y.colorKeySource=j,Y.generation++,l()&&l().loadTexture(Y,j),0}]])),s.defineInterface("IDirect3DMaterial2",Ze(6,[[8,"Release",0,d],[12,"SetMaterial",1,(w,I)=>(w.diffuse=[a[I+4>>2],a[I+8>>2],a[I+12>>2],a[I+16>>2]],w.ambient=[a[I+20>>2],a[I+24>>2],a[I+28>>2],a[I+32>>2]],0)],[20,"GetHandle",2,(w,I,Y)=>(w.handle||(w.handle=_++,V.set(w.handle,w)),n[Y>>2]=w.handle,0)]]));let C=w=>({x:n[w+4>>2],y:n[w+8>>2],width:n[w+12>>2],height:n[w+16>>2],clipX:a[w+20>>2],clipY:a[w+24>>2],clipW:a[w+28>>2],clipH:a[w+32>>2],minZ:a[w+36>>2],maxZ:a[w+40>>2]});s.defineInterface("IDirect3DViewport2",Ze(18,[[8,"Release",0,d],[32,"SetBackground",1,(w,I)=>{let Y=V.get(I);return Y&&Y.diffuse&&l()&&l().setBackground(Y.diffuse),0}],[48,"Clear",3,(w,I,Y,j)=>(l()&&l().clear(j),0)],[68,"SetViewport2",1,(w,I)=>(w.vp=C(I),l()&&l().setViewport(w.vp),0)]]));let P={};s.defineInterface("IDirect3DDevice2",Ze(34,[[8,"Release",0,d],[12,"GetCaps",2,(w,I,Y)=>{for(let j of[I,Y]){let at=n[j>>2];e.fill(0,j+4,j+at),n[j+4>>2]=2147483647,n[j+116>>2]=8191,n[j+120>>2]=8191}return P.ramp&&e.fill(0,I+4,I+n[I>>2]),0}],[24,"AddViewport",1,u],[36,"EnumTextureFormats",2,(w,I,Y)=>{let j=s.lowAlloc(108);for(let at of P.ramp?[y]:[f,p])if(e.fill(0,j,j+108),n[j>>2]=108,n[j+4>>2]=4096,n[j+104>>2]=4096,g(j+72,at),!s.call(I,[j,Y]))break;return 0}],[40,"BeginScene",0,()=>(l()&&l().beginScene(),0)],[44,"EndScene",0,()=>(l()&&l().endScene(),0)],[52,"SetCurrentViewport",1,u],[92,"SetRenderState",2,(w,I,Y)=>(I===1&&(t.renderState.texture=Y&&W.get(Y)||null),l()&&l().setRenderState(I,Y),0)],[100,"SetLightState",2,(w,I,Y)=>(l()&&l().setLightState(I,Y),0)],[104,"SetTransform",2,(w,I,Y)=>(l()&&l().setTransform(I,Y),0)],[116,"DrawPrimitive",5,(w,I,Y,j,at)=>(l()&&l().drawPrimitive(I,Y,j,at),0)],[120,"DrawIndexedPrimitive",7,(w,I,Y,j,at,q,et)=>(l()&&l().drawIndexed(I,Y,j,at,q,et),0)]])),t.device=P,t.renderState={texture:null},s.defineInterface("IDirect3D2",Ze(9,[[8,"Release",0,d],[12,"EnumDevices",2,u],[20,"CreateMaterial",2,(w,I)=>{let Y={};return s.newObject("IDirect3DMaterial2",Y),n[I>>2]=Y.addr,0}],[24,"CreateViewport",2,(w,I)=>{let Y={};return s.newObject("IDirect3DViewport2",Y),n[I>>2]=Y.addr,0}],[32,"CreateDevice",3,(w,I,Y,j)=>(P.addr||s.newObject("IDirect3DDevice2",P),P.target=s.objects.get(Y),P.ramp=n[I>>2]===Ia.IDirect3DRampDevice,l()&&l().setIndexed&&l().setIndexed(P.ramp,t.screen),n[j>>2]=P.addr,0)]])),t.d3d={},s.newObject("IDirect3D2",t.d3d);let k={keyboard:{kind:"keyboard"},mouse:{kind:"mouse"},joystick:{kind:"joystick"}},D={keyboard:286331153,mouse:572662306,joystick:858993459},G="IDirectInputDeviceA";s.defineInterface(G,Ze(27,[[0,"QueryInterface",2,(w,I,Y)=>(w.refs++,n[Y>>2]=w.addr,0)],[8,"Release",0,d],[12,"GetCapabilities",1,(w,I)=>{let Y=n[I>>2];if(e.fill(0,I+4,I+Y),n[I+4>>2]=1,w.kind==="joystick"){let j=t.joystickCaps||{devType:1540,axes:2,buttons:4};n[I+8>>2]=j.devType,n[I+12>>2]=j.axes,n[I+16>>2]=j.buttons}else w.kind==="mouse"?(n[I+8>>2]=274,n[I+12>>2]=3,n[I+16>>2]=3):(n[I+8>>2]=771,n[I+16>>2]=101);return 0}],[20,"GetProperty",2,(w,I,Y)=>(I===4&&(r[Y+16>>2]=0,r[Y+20>>2]=65535),0)],[24,"SetProperty",2,u],[28,"Acquire",0,u],[32,"Unacquire",0,u],[36,"GetDeviceState",2,(w,I,Y)=>(t.input?t.input.fillDeviceState(w.kind,Y,I):e.fill(0,Y,Y+I),0)],[44,"SetDataFormat",1,u],[52,"SetCooperativeLevel",2,u],[100,"Poll",0,u]]));for(let w of Object.keys(k))k[w].addrReady=!0;s.defineInterface("IDirectInputA",Ze(8,[[8,"Release",0,d],[12,"CreateDevice",3,(w,I,Y)=>{let j=n[I>>2],at=Object.keys(D).find(et=>D[et]===j),q=k[at];return q.addr||s.newObject(G,q),n[Y>>2]=q.addr,0}],[16,"EnumDevices",4,(w,I,Y,j)=>{let at={2:"mouse",3:"keyboard",4:"joystick"}[I];if(!(at&&(at!=="joystick"||t.joystickPresent)))return 0;let et=s.lowAlloc(580);return e.fill(0,et,et+580),n[et>>2]=580,n[et+4>>2]=D[at],s.call(Y,[et,j]),0}]])),t.dinput={},s.newObject("IDirectInputA",t.dinput),s.api("DINPUT.DLL!DirectInputCreateA",4,(w,I,Y)=>(n[Y>>2]=t.dinput.addr,0));let X="IDirectSoundBuffer";s.defineInterface(X,Ze(21,[[8,"Release",0,w=>{let I=d(w);return I===0&&w.ptr&&!w.dup&&o.release(w.ptr),I===0&&c()&&c().releaseBuffer(w),I===0&&s.objects.delete(w.addr),I}],[32,"GetFrequency",1,(w,I)=>(n[I>>2]=w.frequency,0)],[36,"GetStatus",1,(w,I)=>(n[I>>2]=c()&&c().isPlaying(w)?1:0,0)],[44,"Lock",7,(w,I,Y,j,at,q,et)=>(w.ptr||(w.ptr=o.alloc(w.size)),n[j>>2]=w.ptr+I,n[at>>2]=Y,q&&(n[q>>2]=0),et&&(n[et>>2]=0),0)],[48,"Play",3,(w,I,Y,j)=>(c()&&!w.primary&&c().play(w,(j&1)!==0),0)],[52,"SetCurrentPosition",1,(w,I)=>(c()&&!w.primary&&c().setPosition(w,I),0)],[56,"SetFormat",1,u],[60,"SetVolume",1,(w,I)=>(w.volume=I|0,c()&&!w.primary&&c().setVolume(w,w.volume),0)],[64,"SetPan",1,(w,I)=>(w.pan=I|0,c()&&!w.primary&&c().setPan(w,w.pan),0)],[68,"SetFrequency",1,(w,I)=>(w.frequency=I||w.baseFrequency,c()&&!w.primary&&c().setFrequency(w,w.frequency),0)],[72,"Stop",0,w=>(c()&&!w.primary&&c().stop(w),0)],[76,"Unlock",4,w=>(c()&&!w.primary&&c().bufferFilled(w),0)]])),s.defineInterface("IDirectSound",Ze(11,[[8,"Release",0,d],[12,"CreateSoundBuffer",3,(w,I,Y)=>{let at={primary:(n[I+4>>2]&1)!==0,ptr:0,volume:0,pan:0};if(!at.primary){at.size=n[I+8>>2];let q=n[I+16>>2];at.channels=i[q+2>>1],at.baseFrequency=n[q+4>>2],at.frequency=at.baseFrequency,at.bits=i[q+14>>1]}return s.newObject(X,at),n[Y>>2]=at.addr,0}],[20,"DuplicateSoundBuffer",2,(w,I,Y)=>{let j=s.objects.get(I),at={...j,dup:!0,volume:j.volume,pan:j.pan,source:j.source||j};return delete at.addr,s.newObject(X,at),c()&&c().duplicate(at,j),n[Y>>2]=at.addr,0}],[24,"SetCooperativeLevel",2,u]])),t.dsound={},s.newObject("IDirectSound",t.dsound),s.api("DSOUND.DLL!DirectSoundEnumerateA",2,()=>0),s.api("DSOUND.DLL!DirectSoundCreate",3,(w,I)=>(n[I>>2]=t.dsound.addr,0))}var Pa=class extends Error{constructor(t,e){super("longjmp"),this.buf=t,this.val=e}},La=class extends Error{};function Du(s,t){let{u32:e}=s,i=s.layout.TIB_BASE;s.bindRaw("hook!longjmp",0,r=>{throw new Pa(e[r+4>>2],e[r+8>>2]||1)});let n=(r,a,o,l)=>{s.bindRaw("hook!"+r,0,(c,h,d,u)=>{try{return s.__call(a,c,u,h,d)}catch(f){if(!(f instanceof Pa)||f.buf!==o)throw f;let p=f.buf>>2,y=s.exports;return y.g_ebp.value=e[p],y.g_ebx.value=e[p+1],y.g_edi.value=e[p+2],y.g_esi.value=e[p+3],e[i>>2]=e[p+6],s.esp=e[p+4]+4,s.__call(l,s.esp,f.val,0,0)}})};n("setjmpGuardA",5367712,7652628,5367863),n("setjmpGuardB",5394880,7652732,5394909),s.bindRaw("hook!CxxThrowException",8,r=>{let a=e[r+8>>2],o=e[r+4>>2];throw new La(`C++ exception thrown: throwinfo ${a.toString(16)} object ${o.toString(16)} ${Tp(s,a,o)}`)});for(let[r,a]of Object.entries(s.meta.hooks))r.startsWith("guard_")&&s.bindRaw("hook!"+r,a.pop,(o,l,c,h)=>{let d=e[i>>2];try{return s.__call(a.addr,o,h,l,c)}catch(u){if(!(u instanceof La))throw u;return console.warn(u.message),e[i>>2]=d,0}})}function Tp(s,t,e){return t===5756168?JSON.stringify(s.cstr(s.u32[e>>2])):""}var Fa=class extends Error{},Wi={SETTINGS:4492496,INIT_MAIN:4554976,START_GAME:4509536,HANDLE_GAME:4508544,FOG_ZOOM:4528112,COUNT_FRAME:4514176,PUMP:4554784,COP_RADIO:4309328,EXIT_MAIN:4555280},ai={RUNNING:7321756,COP_RADIO_OBJ:6107416,SETTINGS_OBJ:7316824,PAUSE_KIND:7321816,OVERLAY_STATE:7415676,CLOCK:7415984,CLOCK_RING:7415912,CLOCK_INDEX:7416e3,TRAFFIC_SHARE:4132864},Ep=.0084,Nu=[0,3,11],Bn={P:80,ESC:27,J:74,Y:89,N:78},Da=class{constructor(t,e){this.meta=t,this.host=e,this.m=new Ca(t),this.clock=new Ra,e.clock=this.clock,this.ended=!1,this.exitCode=null,this.tickSeconds=e.tickSeconds||1/60,this.clock.seconds=e.clockStart??Date.now()%1e5/1e3+1}async instantiate(t){let{m:e,host:i}=this;await e.instantiate(t),e.f32[ai.TRAFFIC_SHARE>>2]=Math.min(1,this.tickSeconds*25),Lu(e,i),Fu(e,i),Du(e,i),e.bindRaw("hook!WinMain",16,l=>{throw this.winMain=[e.u32[l+4>>2],e.u32[l+16>>2]],new Fa}),this.installPause();let n=Math.fround(this.tickSeconds),r=new Float32Array([n]);new Uint32Array(r.buffer)[0]--;let a=0,o=!1;return e.bindRaw("hook!updateClock",0,()=>{let{f32:l}=e,c=ai.CLOCK>>2;l[c+2]=this.clock.seconds;let h=e.u32[ai.CLOCK_RING>>2]>>2,d=e.i32[ai.CLOCK_INDEX>>2];e.i32[ai.CLOCK_INDEX>>2]=d+1&3,l[h+d]=a===0?this.clock.seconds:a===1?Ep:n,a++;let u=l[h+d]===n,f=Math.fround(l[h+d]*.5),p=.5;for(let y=1;y<=3;y++)d=d+3&3,y<3&&(p*=.5),l[h+d]!==n&&(u=!1),f=Math.fround(p*l[h+d]+f);return o=!o,l[c+3]=u?o?r[0]:n:f,0}),e.bindRaw("hook!hudDraw",0,(l,c,h,d)=>{let u=i.render;u&&(u.hud=!0),i.hudLayout&&i.hudLayout.apply();let f=e.__call(4739008,l,d,c,h);return i.hudLayout&&i.hudLayout.restore(),u&&(u.hud=!1),f}),i.installHooks&&i.installHooks(e,this),this}installPause(){let{m:t}=this;t.bindRaw("hook!pauseBegin",0,()=>{let e=t.u32[ai.PAUSE_KIND>>2],i=t.call(5038288,[4]);t.call(5038128,[4,0]);for(let n of Nu)t.call(4490032,[n]);return t.call(4383808),this.pause={kind:e,volume:i,stage:0,key:-1,scan:0,seen:!1},this.host.onPauseChange&&this.host.onPauseChange(e),0})}pollPause(){let{pause:t}=this,{vk:e}=this.host.input,i=n=>e[n]!==0&&!e[16];if(t.kind===1){if(t.stage===0){i(Bn.P)||(t.stage=1);return}if(t.stage===2){if(i(t.key))return;t.stage=1,t.scan=t.key+1}for(let n=t.scan;n<256;n++)if(i(n)){t.key=n,t.stage=2,t.seen=!0;return}t.scan=0,t.seen&&this.endPause();return}if(t.stage===0)i(Bn.ESC)||(t.stage=1);else if(t.stage===1){let n=i(Bn.J)||i(Bn.Y);n&&this.m.call(4509088,[4]),i(Bn.ESC)||i(Bn.N)?t.stage=2:n&&this.endPause()}else i(Bn.ESC)||this.endPause()}endPause(){let{m:t,pause:e}=this;t.u32[ai.OVERLAY_STATE>>2]=1;for(let i of Nu)t.call(4490144,[i]);t.call(4383904),t.call(5038128,[4,e.volume]),t.call(4876352,[],ai.CLOCK),this.pause=null,this.host.onPauseChange&&this.host.onPauseChange(0)}get overlayState(){return this.m.u32[ai.OVERLAY_STATE>>2]}boot(){let{m:t}=this;try{t.__call(this.meta.entry,t.layout.STACK_TOP-64,0,0,0)}catch(e){if(!(e instanceof Fa))throw e}t.esp=t.layout.STACK_TOP-256,t.call(Wi.SETTINGS,[1],ai.SETTINGS_OBJ),t.call(Wi.INIT_MAIN,this.winMain),t.call(Wi.START_GAME),this.m.esp=t.layout.STACK_TOP-256}tick(t){let{m:e}=this;if(this.ended)return!1;try{if(this.pause)return this.clock.advance(t),this.pollPause(),!0;if(this.clock.advance(t),!e.u32[ai.RUNNING>>2])return this.finish();if(e.call(Wi.HANDLE_GAME),e.call(Wi.FOG_ZOOM),e.call(Wi.COUNT_FRAME),e.call(Wi.PUMP)!==0)return this.finish();e.call(Wi.COP_RADIO,[],ai.COP_RADIO_OBJ)}catch(i){if(i instanceof Ri)return this.ended=!0,this.exitCode=i.code,!1;throw i}return!0}finish(){let{m:t}=this;this.ended=!0;try{t.call(Wi.EXIT_MAIN)}catch(e){if(!(e instanceof Ri))throw e;this.exitCode=e.code}return!1}};var ed=0,eh=1,id=2;var Ar=1,nd=2,Is=3,Mn=0,Pe=1,Ui=2,qe=0,Ps=1,ih=2,nh=3,sh=4,Lo=5;var ji=100,sd=101,rd=102,ad=103,od=104,Cr=200,Rr=201,Fo=202,Do=203,Ir=204,Pr=205,No=206,Uo=207,Oo=208,ko=209,Bo=210,ld=211,cd=212,hd=213,ud=214,io=0,no=1,so=2,Ts=3,ro=4,ao=5,oo=6,lo=7,rh=0,dd=1,fd=2,ei=0,ah=1,oh=2,lh=3,ch=4,hh=5,uh=6,dh=7;var fh=300,wn=301,$n=302,Vo=303,zo=304,Lr=306,qn=1e3,Li=1001,co=1002,oe=1003,pd=1004;var Fr=1005;var fe=1006,Go=1007;var Tn=1008;var Le=1009,ph=1010,mh=1011,Ls=1012,Ho=1013,vi=1014,ii=1015,Si=1016,Wo=1017,Xo=1018,Fs=1020,gh=35902,xh=35899,yh=1021,_h=1022,ke=1023,Fi=1026,En=1027,Ds=1028,qo=1029,An=1030,Yo=1031;var Ko=1033,Dr=33776,Nr=33777,Ur=33778,Or=33779,Zo=35840,$o=35841,Jo=35842,jo=35843,Qo=36196,tl=37492,el=37496,il=37488,nl=37489,kr=37490,sl=37491,rl=37808,al=37809,ol=37810,ll=37811,cl=37812,hl=37813,ul=37814,dl=37815,fl=37816,pl=37817,ml=37818,gl=37819,xl=37820,yl=37821,_l=36492,vl=36494,Sl=36495,bl=36283,Ml=36284,Br=36285,wl=36286;var ur=2300,ho=2301,to=2302,Zc=2303,$c=2400,Jc=2401,jc=2402;var md=3200;var vh=0,gd=1,hi="",je="srgb",_i="srgb-linear",dr="linear",ee="srgb";var eo=7680;var xd=519,yd=512,_d=513,vd=514,Tl=515,Sd=516,bd=517,El=518,Md=519,Sh=35044,Vr=35048;var Cn="300 es",yi=2e3,fr=2001;function Ap(s){for(let t=s.length-1;t>=0;--t)if(s[t]>=65535)return!0;return!1}function Cp(s){return ArrayBuffer.isView(s)&&!(s instanceof DataView)}function pr(s){return document.createElementNS("http://www.w3.org/1999/xhtml",s)}function wd(){let s=pr("canvas");return s.style.display="block",s}var Uu={},Es=null;function mr(...s){let t="THREE."+s.shift();Es?Es("log",t,...s):console.log(t,...s)}function Td(s){let t=s[0];if(typeof t=="string"&&t.startsWith("TSL:")){let e=s[1];e&&e.isStackTrace?s[0]+=" "+e.getLocation():s[1]='Stack trace not available. Enable "THREE.Node.captureStackTrace" to capture stack traces.'}return s}function Ft(...s){s=Td(s);let t="THREE."+s.shift();if(Es)Es("warn",t,...s);else{let e=s[0];e&&e.isStackTrace?console.warn(e.getError(t)):console.warn(t,...s)}}function Ut(...s){s=Td(s);let t="THREE."+s.shift();if(Es)Es("error",t,...s);else{let e=s[0];e&&e.isStackTrace?console.error(e.getError(t)):console.error(t,...s)}}function Xn(...s){let t=s.join(" ");t in Uu||(Uu[t]=!0,Ft(...s))}function Ed(s,t,e){return new Promise(function(i,n){function r(){switch(s.clientWaitSync(t,s.SYNC_FLUSH_COMMANDS_BIT,0)){case s.WAIT_FAILED:n();break;case s.TIMEOUT_EXPIRED:setTimeout(r,e);break;default:i()}}setTimeout(r,e)})}var Ad={[io]:no,[so]:oo,[ro]:lo,[Ts]:ao,[no]:io,[oo]:so,[lo]:ro,[ao]:Ts},Di=class{addEventListener(t,e){this._listeners===void 0&&(this._listeners={});let i=this._listeners;i[t]===void 0&&(i[t]=[]),i[t].indexOf(e)===-1&&i[t].push(e)}hasEventListener(t,e){let i=this._listeners;return i===void 0?!1:i[t]!==void 0&&i[t].indexOf(e)!==-1}removeEventListener(t,e){let i=this._listeners;if(i===void 0)return;let n=i[t];if(n!==void 0){let r=n.indexOf(e);r!==-1&&n.splice(r,1)}}dispatchEvent(t){let e=this._listeners;if(e===void 0)return;let i=e[t.type];if(i!==void 0){t.target=this;let n=i.slice(0);for(let r=0,a=n.length;r<a;r++)n[r].call(this,t);t.target=null}}},Ne=["00","01","02","03","04","05","06","07","08","09","0a","0b","0c","0d","0e","0f","10","11","12","13","14","15","16","17","18","19","1a","1b","1c","1d","1e","1f","20","21","22","23","24","25","26","27","28","29","2a","2b","2c","2d","2e","2f","30","31","32","33","34","35","36","37","38","39","3a","3b","3c","3d","3e","3f","40","41","42","43","44","45","46","47","48","49","4a","4b","4c","4d","4e","4f","50","51","52","53","54","55","56","57","58","59","5a","5b","5c","5d","5e","5f","60","61","62","63","64","65","66","67","68","69","6a","6b","6c","6d","6e","6f","70","71","72","73","74","75","76","77","78","79","7a","7b","7c","7d","7e","7f","80","81","82","83","84","85","86","87","88","89","8a","8b","8c","8d","8e","8f","90","91","92","93","94","95","96","97","98","99","9a","9b","9c","9d","9e","9f","a0","a1","a2","a3","a4","a5","a6","a7","a8","a9","aa","ab","ac","ad","ae","af","b0","b1","b2","b3","b4","b5","b6","b7","b8","b9","ba","bb","bc","bd","be","bf","c0","c1","c2","c3","c4","c5","c6","c7","c8","c9","ca","cb","cc","cd","ce","cf","d0","d1","d2","d3","d4","d5","d6","d7","d8","d9","da","db","dc","dd","de","df","e0","e1","e2","e3","e4","e5","e6","e7","e8","e9","ea","eb","ec","ed","ee","ef","f0","f1","f2","f3","f4","f5","f6","f7","f8","f9","fa","fb","fc","fd","fe","ff"];var Ac=Math.PI/180,uo=180/Math.PI;function dn(){let s=Math.random()*4294967295|0,t=Math.random()*4294967295|0,e=Math.random()*4294967295|0,i=Math.random()*4294967295|0;return(Ne[s&255]+Ne[s>>8&255]+Ne[s>>16&255]+Ne[s>>24&255]+"-"+Ne[t&255]+Ne[t>>8&255]+"-"+Ne[t>>16&15|64]+Ne[t>>24&255]+"-"+Ne[e&63|128]+Ne[e>>8&255]+"-"+Ne[e>>16&255]+Ne[e>>24&255]+Ne[i&255]+Ne[i>>8&255]+Ne[i>>16&255]+Ne[i>>24&255]).toLowerCase()}function Kt(s,t,e){return Math.max(t,Math.min(e,s))}function Rp(s,t){return(s%t+t)%t}function Cc(s,t,e){return(1-e)*s+e*t}function Pi(s,t){switch(t.constructor){case Float32Array:return s;case Uint32Array:return s/4294967295;case Uint16Array:return s/65535;case Uint8Array:case Uint8ClampedArray:return s/255;case Int32Array:return Math.max(s/2147483647,-1);case Int16Array:return Math.max(s/32767,-1);case Int8Array:return Math.max(s/127,-1);default:throw new Error("THREE.MathUtils: Invalid component type.")}}function re(s,t){switch(t.constructor){case Float32Array:return s;case Uint32Array:return Math.round(s*4294967295);case Uint16Array:return Math.round(s*65535);case Uint8Array:case Uint8ClampedArray:return Math.round(s*255);case Int32Array:return Math.round(s*2147483647);case Int16Array:return Math.round(s*32767);case Int8Array:return Math.round(s*127);default:throw new Error("THREE.MathUtils: Invalid component type.")}}var Wt=class s{static{s.prototype.isVector2=!0}constructor(t=0,e=0){this.x=t,this.y=e}get width(){return this.x}set width(t){this.x=t}get height(){return this.y}set height(t){this.y=t}set(t,e){return this.x=t,this.y=e,this}setScalar(t){return this.x=t,this.y=t,this}setX(t){return this.x=t,this}setY(t){return this.y=t,this}setComponent(t,e){switch(t){case 0:this.x=e;break;case 1:this.y=e;break;default:throw new Error("THREE.Vector2: index is out of range: "+t)}return this}getComponent(t){switch(t){case 0:return this.x;case 1:return this.y;default:throw new Error("THREE.Vector2: index is out of range: "+t)}}clone(){return new this.constructor(this.x,this.y)}copy(t){return this.x=t.x,this.y=t.y,this}add(t){return this.x+=t.x,this.y+=t.y,this}addScalar(t){return this.x+=t,this.y+=t,this}addVectors(t,e){return this.x=t.x+e.x,this.y=t.y+e.y,this}addScaledVector(t,e){return this.x+=t.x*e,this.y+=t.y*e,this}sub(t){return this.x-=t.x,this.y-=t.y,this}subScalar(t){return this.x-=t,this.y-=t,this}subVectors(t,e){return this.x=t.x-e.x,this.y=t.y-e.y,this}multiply(t){return this.x*=t.x,this.y*=t.y,this}multiplyScalar(t){return this.x*=t,this.y*=t,this}divide(t){return this.x/=t.x,this.y/=t.y,this}divideScalar(t){return this.multiplyScalar(1/t)}applyMatrix3(t){let e=this.x,i=this.y,n=t.elements;return this.x=n[0]*e+n[3]*i+n[6],this.y=n[1]*e+n[4]*i+n[7],this}min(t){return this.x=Math.min(this.x,t.x),this.y=Math.min(this.y,t.y),this}max(t){return this.x=Math.max(this.x,t.x),this.y=Math.max(this.y,t.y),this}clamp(t,e){return this.x=Kt(this.x,t.x,e.x),this.y=Kt(this.y,t.y,e.y),this}clampScalar(t,e){return this.x=Kt(this.x,t,e),this.y=Kt(this.y,t,e),this}clampLength(t,e){let i=this.length();return this.divideScalar(i||1).multiplyScalar(Kt(i,t,e))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this}negate(){return this.x=-this.x,this.y=-this.y,this}dot(t){return this.x*t.x+this.y*t.y}cross(t){return this.x*t.y-this.y*t.x}lengthSq(){return this.x*this.x+this.y*this.y}length(){return Math.sqrt(this.x*this.x+this.y*this.y)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)}normalize(){return this.divideScalar(this.length()||1)}angle(){return Math.atan2(-this.y,-this.x)+Math.PI}angleTo(t){let e=Math.sqrt(this.lengthSq()*t.lengthSq());if(e===0)return Math.PI/2;let i=this.dot(t)/e;return Math.acos(Kt(i,-1,1))}distanceTo(t){return Math.sqrt(this.distanceToSquared(t))}distanceToSquared(t){let e=this.x-t.x,i=this.y-t.y;return e*e+i*i}manhattanDistanceTo(t){return Math.abs(this.x-t.x)+Math.abs(this.y-t.y)}setLength(t){return this.normalize().multiplyScalar(t)}lerp(t,e){return this.x+=(t.x-this.x)*e,this.y+=(t.y-this.y)*e,this}lerpVectors(t,e,i){return this.x=t.x+(e.x-t.x)*i,this.y=t.y+(e.y-t.y)*i,this}equals(t){return t.x===this.x&&t.y===this.y}fromArray(t,e=0){return this.x=t[e],this.y=t[e+1],this}toArray(t=[],e=0){return t[e]=this.x,t[e+1]=this.y,t}fromBufferAttribute(t,e){return this.x=t.getX(e),this.y=t.getY(e),this}rotateAround(t,e){let i=Math.cos(e),n=Math.sin(e),r=this.x-t.x,a=this.y-t.y;return this.x=r*i-a*n+t.x,this.y=r*n+a*i+t.y,this}random(){return this.x=Math.random(),this.y=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y}},Ni=class{constructor(t=0,e=0,i=0,n=1){this.isQuaternion=!0,this._x=t,this._y=e,this._z=i,this._w=n}static slerpFlat(t,e,i,n,r,a,o){let l=i[n+0],c=i[n+1],h=i[n+2],d=i[n+3],u=r[a+0],f=r[a+1],p=r[a+2],y=r[a+3];if(d!==y||l!==u||c!==f||h!==p){let m=l*u+c*f+h*p+d*y;m<0&&(u=-u,f=-f,p=-p,y=-y,m=-m);let g=1-o;if(m<.9995){let E=Math.acos(m),L=Math.sin(E);g=Math.sin(g*E)/L,o=Math.sin(o*E)/L,l=l*g+u*o,c=c*g+f*o,h=h*g+p*o,d=d*g+y*o}else{l=l*g+u*o,c=c*g+f*o,h=h*g+p*o,d=d*g+y*o;let E=1/Math.sqrt(l*l+c*c+h*h+d*d);l*=E,c*=E,h*=E,d*=E}}t[e]=l,t[e+1]=c,t[e+2]=h,t[e+3]=d}static multiplyQuaternionsFlat(t,e,i,n,r,a){let o=i[n],l=i[n+1],c=i[n+2],h=i[n+3],d=r[a],u=r[a+1],f=r[a+2],p=r[a+3];return t[e]=o*p+h*d+l*f-c*u,t[e+1]=l*p+h*u+c*d-o*f,t[e+2]=c*p+h*f+o*u-l*d,t[e+3]=h*p-o*d-l*u-c*f,t}get x(){return this._x}set x(t){this._x=t,this._onChangeCallback()}get y(){return this._y}set y(t){this._y=t,this._onChangeCallback()}get z(){return this._z}set z(t){this._z=t,this._onChangeCallback()}get w(){return this._w}set w(t){this._w=t,this._onChangeCallback()}set(t,e,i,n){return this._x=t,this._y=e,this._z=i,this._w=n,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._w)}copy(t){return this._x=t.x,this._y=t.y,this._z=t.z,this._w=t.w,this._onChangeCallback(),this}setFromEuler(t,e=!0){let i=t._x,n=t._y,r=t._z,a=t._order,o=Math.cos,l=Math.sin,c=o(i/2),h=o(n/2),d=o(r/2),u=l(i/2),f=l(n/2),p=l(r/2);switch(a){case"XYZ":this._x=u*h*d+c*f*p,this._y=c*f*d-u*h*p,this._z=c*h*p+u*f*d,this._w=c*h*d-u*f*p;break;case"YXZ":this._x=u*h*d+c*f*p,this._y=c*f*d-u*h*p,this._z=c*h*p-u*f*d,this._w=c*h*d+u*f*p;break;case"ZXY":this._x=u*h*d-c*f*p,this._y=c*f*d+u*h*p,this._z=c*h*p+u*f*d,this._w=c*h*d-u*f*p;break;case"ZYX":this._x=u*h*d-c*f*p,this._y=c*f*d+u*h*p,this._z=c*h*p-u*f*d,this._w=c*h*d+u*f*p;break;case"YZX":this._x=u*h*d+c*f*p,this._y=c*f*d+u*h*p,this._z=c*h*p-u*f*d,this._w=c*h*d-u*f*p;break;case"XZY":this._x=u*h*d-c*f*p,this._y=c*f*d-u*h*p,this._z=c*h*p+u*f*d,this._w=c*h*d+u*f*p;break;default:Ft("Quaternion: .setFromEuler() encountered an unknown order: "+a)}return e===!0&&this._onChangeCallback(),this}setFromAxisAngle(t,e){let i=e/2,n=Math.sin(i);return this._x=t.x*n,this._y=t.y*n,this._z=t.z*n,this._w=Math.cos(i),this._onChangeCallback(),this}setFromRotationMatrix(t){let e=t.elements,i=e[0],n=e[4],r=e[8],a=e[1],o=e[5],l=e[9],c=e[2],h=e[6],d=e[10],u=i+o+d;if(u>0){let f=.5/Math.sqrt(u+1);this._w=.25/f,this._x=(h-l)*f,this._y=(r-c)*f,this._z=(a-n)*f}else if(i>o&&i>d){let f=2*Math.sqrt(1+i-o-d);this._w=(h-l)/f,this._x=.25*f,this._y=(n+a)/f,this._z=(r+c)/f}else if(o>d){let f=2*Math.sqrt(1+o-i-d);this._w=(r-c)/f,this._x=(n+a)/f,this._y=.25*f,this._z=(l+h)/f}else{let f=2*Math.sqrt(1+d-i-o);this._w=(a-n)/f,this._x=(r+c)/f,this._y=(l+h)/f,this._z=.25*f}return this._onChangeCallback(),this}setFromUnitVectors(t,e){let i=t.dot(e)+1;return i<1e-8?(i=0,Math.abs(t.x)>Math.abs(t.z)?(this._x=-t.y,this._y=t.x,this._z=0,this._w=i):(this._x=0,this._y=-t.z,this._z=t.y,this._w=i)):(this._x=t.y*e.z-t.z*e.y,this._y=t.z*e.x-t.x*e.z,this._z=t.x*e.y-t.y*e.x,this._w=i),this.normalize()}angleTo(t){return 2*Math.acos(Math.abs(Kt(this.dot(t),-1,1)))}rotateTowards(t,e){let i=this.angleTo(t);if(i===0)return this;let n=Math.min(1,e/i);return this.slerp(t,n),this}identity(){return this.set(0,0,0,1)}invert(){return this.conjugate()}conjugate(){return this._x*=-1,this._y*=-1,this._z*=-1,this._onChangeCallback(),this}dot(t){return this._x*t._x+this._y*t._y+this._z*t._z+this._w*t._w}lengthSq(){return this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w}length(){return Math.sqrt(this._x*this._x+this._y*this._y+this._z*this._z+this._w*this._w)}normalize(){let t=this.length();return t===0?(this._x=0,this._y=0,this._z=0,this._w=1):(t=1/t,this._x=this._x*t,this._y=this._y*t,this._z=this._z*t,this._w=this._w*t),this._onChangeCallback(),this}multiply(t){return this.multiplyQuaternions(this,t)}premultiply(t){return this.multiplyQuaternions(t,this)}multiplyQuaternions(t,e){let i=t._x,n=t._y,r=t._z,a=t._w,o=e._x,l=e._y,c=e._z,h=e._w;return this._x=i*h+a*o+n*c-r*l,this._y=n*h+a*l+r*o-i*c,this._z=r*h+a*c+i*l-n*o,this._w=a*h-i*o-n*l-r*c,this._onChangeCallback(),this}slerp(t,e){let i=t._x,n=t._y,r=t._z,a=t._w,o=this.dot(t);o<0&&(i=-i,n=-n,r=-r,a=-a,o=-o);let l=1-e;if(o<.9995){let c=Math.acos(o),h=Math.sin(c);l=Math.sin(l*c)/h,e=Math.sin(e*c)/h,this._x=this._x*l+i*e,this._y=this._y*l+n*e,this._z=this._z*l+r*e,this._w=this._w*l+a*e,this._onChangeCallback()}else this._x=this._x*l+i*e,this._y=this._y*l+n*e,this._z=this._z*l+r*e,this._w=this._w*l+a*e,this.normalize();return this}slerpQuaternions(t,e,i){return this.copy(t).slerp(e,i)}random(){let t=2*Math.PI*Math.random(),e=2*Math.PI*Math.random(),i=Math.random(),n=Math.sqrt(1-i),r=Math.sqrt(i);return this.set(n*Math.sin(t),n*Math.cos(t),r*Math.sin(e),r*Math.cos(e))}equals(t){return t._x===this._x&&t._y===this._y&&t._z===this._z&&t._w===this._w}fromArray(t,e=0){return this._x=t[e],this._y=t[e+1],this._z=t[e+2],this._w=t[e+3],this._onChangeCallback(),this}toArray(t=[],e=0){return t[e]=this._x,t[e+1]=this._y,t[e+2]=this._z,t[e+3]=this._w,t}fromBufferAttribute(t,e){return this._x=t.getX(e),this._y=t.getY(e),this._z=t.getZ(e),this._w=t.getW(e),this._onChangeCallback(),this}toJSON(){return this.toArray()}_onChange(t){return this._onChangeCallback=t,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._w}},Q=class s{static{s.prototype.isVector3=!0}constructor(t=0,e=0,i=0){this.x=t,this.y=e,this.z=i}set(t,e,i){return i===void 0&&(i=this.z),this.x=t,this.y=e,this.z=i,this}setScalar(t){return this.x=t,this.y=t,this.z=t,this}setX(t){return this.x=t,this}setY(t){return this.y=t,this}setZ(t){return this.z=t,this}setComponent(t,e){switch(t){case 0:this.x=e;break;case 1:this.y=e;break;case 2:this.z=e;break;default:throw new Error("THREE.Vector3: index is out of range: "+t)}return this}getComponent(t){switch(t){case 0:return this.x;case 1:return this.y;case 2:return this.z;default:throw new Error("THREE.Vector3: index is out of range: "+t)}}clone(){return new this.constructor(this.x,this.y,this.z)}copy(t){return this.x=t.x,this.y=t.y,this.z=t.z,this}add(t){return this.x+=t.x,this.y+=t.y,this.z+=t.z,this}addScalar(t){return this.x+=t,this.y+=t,this.z+=t,this}addVectors(t,e){return this.x=t.x+e.x,this.y=t.y+e.y,this.z=t.z+e.z,this}addScaledVector(t,e){return this.x+=t.x*e,this.y+=t.y*e,this.z+=t.z*e,this}sub(t){return this.x-=t.x,this.y-=t.y,this.z-=t.z,this}subScalar(t){return this.x-=t,this.y-=t,this.z-=t,this}subVectors(t,e){return this.x=t.x-e.x,this.y=t.y-e.y,this.z=t.z-e.z,this}multiply(t){return this.x*=t.x,this.y*=t.y,this.z*=t.z,this}multiplyScalar(t){return this.x*=t,this.y*=t,this.z*=t,this}multiplyVectors(t,e){return this.x=t.x*e.x,this.y=t.y*e.y,this.z=t.z*e.z,this}applyEuler(t){return this.applyQuaternion(Ou.setFromEuler(t))}applyAxisAngle(t,e){return this.applyQuaternion(Ou.setFromAxisAngle(t,e))}applyMatrix3(t){let e=this.x,i=this.y,n=this.z,r=t.elements;return this.x=r[0]*e+r[3]*i+r[6]*n,this.y=r[1]*e+r[4]*i+r[7]*n,this.z=r[2]*e+r[5]*i+r[8]*n,this}applyNormalMatrix(t){return this.applyMatrix3(t).normalize()}applyMatrix4(t){let e=this.x,i=this.y,n=this.z,r=t.elements,a=1/(r[3]*e+r[7]*i+r[11]*n+r[15]);return this.x=(r[0]*e+r[4]*i+r[8]*n+r[12])*a,this.y=(r[1]*e+r[5]*i+r[9]*n+r[13])*a,this.z=(r[2]*e+r[6]*i+r[10]*n+r[14])*a,this}applyQuaternion(t){let e=this.x,i=this.y,n=this.z,r=t.x,a=t.y,o=t.z,l=t.w,c=2*(a*n-o*i),h=2*(o*e-r*n),d=2*(r*i-a*e);return this.x=e+l*c+a*d-o*h,this.y=i+l*h+o*c-r*d,this.z=n+l*d+r*h-a*c,this}project(t){return this.applyMatrix4(t.matrixWorldInverse).applyMatrix4(t.projectionMatrix)}unproject(t){return this.applyMatrix4(t.projectionMatrixInverse).applyMatrix4(t.matrixWorld)}transformDirection(t){let e=this.x,i=this.y,n=this.z,r=t.elements;return this.x=r[0]*e+r[4]*i+r[8]*n,this.y=r[1]*e+r[5]*i+r[9]*n,this.z=r[2]*e+r[6]*i+r[10]*n,this.normalize()}divide(t){return this.x/=t.x,this.y/=t.y,this.z/=t.z,this}divideScalar(t){return this.multiplyScalar(1/t)}min(t){return this.x=Math.min(this.x,t.x),this.y=Math.min(this.y,t.y),this.z=Math.min(this.z,t.z),this}max(t){return this.x=Math.max(this.x,t.x),this.y=Math.max(this.y,t.y),this.z=Math.max(this.z,t.z),this}clamp(t,e){return this.x=Kt(this.x,t.x,e.x),this.y=Kt(this.y,t.y,e.y),this.z=Kt(this.z,t.z,e.z),this}clampScalar(t,e){return this.x=Kt(this.x,t,e),this.y=Kt(this.y,t,e),this.z=Kt(this.z,t,e),this}clampLength(t,e){let i=this.length();return this.divideScalar(i||1).multiplyScalar(Kt(i,t,e))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this}dot(t){return this.x*t.x+this.y*t.y+this.z*t.z}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)}normalize(){return this.divideScalar(this.length()||1)}setLength(t){return this.normalize().multiplyScalar(t)}lerp(t,e){return this.x+=(t.x-this.x)*e,this.y+=(t.y-this.y)*e,this.z+=(t.z-this.z)*e,this}lerpVectors(t,e,i){return this.x=t.x+(e.x-t.x)*i,this.y=t.y+(e.y-t.y)*i,this.z=t.z+(e.z-t.z)*i,this}cross(t){return this.crossVectors(this,t)}crossVectors(t,e){let i=t.x,n=t.y,r=t.z,a=e.x,o=e.y,l=e.z;return this.x=n*l-r*o,this.y=r*a-i*l,this.z=i*o-n*a,this}projectOnVector(t){let e=t.lengthSq();if(e===0)return this.set(0,0,0);let i=t.dot(this)/e;return this.copy(t).multiplyScalar(i)}projectOnPlane(t){return Rc.copy(this).projectOnVector(t),this.sub(Rc)}reflect(t){return this.sub(Rc.copy(t).multiplyScalar(2*this.dot(t)))}angleTo(t){let e=Math.sqrt(this.lengthSq()*t.lengthSq());if(e===0)return Math.PI/2;let i=this.dot(t)/e;return Math.acos(Kt(i,-1,1))}distanceTo(t){return Math.sqrt(this.distanceToSquared(t))}distanceToSquared(t){let e=this.x-t.x,i=this.y-t.y,n=this.z-t.z;return e*e+i*i+n*n}manhattanDistanceTo(t){return Math.abs(this.x-t.x)+Math.abs(this.y-t.y)+Math.abs(this.z-t.z)}setFromSpherical(t){return this.setFromSphericalCoords(t.radius,t.phi,t.theta)}setFromSphericalCoords(t,e,i){let n=Math.sin(e)*t;return this.x=n*Math.sin(i),this.y=Math.cos(e)*t,this.z=n*Math.cos(i),this}setFromCylindrical(t){return this.setFromCylindricalCoords(t.radius,t.theta,t.y)}setFromCylindricalCoords(t,e,i){return this.x=t*Math.sin(e),this.y=i,this.z=t*Math.cos(e),this}setFromMatrixPosition(t){let e=t.elements;return this.x=e[12],this.y=e[13],this.z=e[14],this}setFromMatrixScale(t){let e=this.setFromMatrixColumn(t,0).length(),i=this.setFromMatrixColumn(t,1).length(),n=this.setFromMatrixColumn(t,2).length();return this.x=e,this.y=i,this.z=n,this}setFromMatrixColumn(t,e){return this.fromArray(t.elements,e*4)}setFromMatrix3Column(t,e){return this.fromArray(t.elements,e*3)}setFromEuler(t){return this.x=t._x,this.y=t._y,this.z=t._z,this}setFromColor(t){return this.x=t.r,this.y=t.g,this.z=t.b,this}equals(t){return t.x===this.x&&t.y===this.y&&t.z===this.z}fromArray(t,e=0){return this.x=t[e],this.y=t[e+1],this.z=t[e+2],this}toArray(t=[],e=0){return t[e]=this.x,t[e+1]=this.y,t[e+2]=this.z,t}fromBufferAttribute(t,e){return this.x=t.getX(e),this.y=t.getY(e),this.z=t.getZ(e),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this}randomDirection(){let t=Math.random()*Math.PI*2,e=Math.random()*2-1,i=Math.sqrt(1-e*e);return this.x=i*Math.cos(t),this.y=e,this.z=i*Math.sin(t),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z}},Rc=new Q,Ou=new Ni,Ot=class s{static{s.prototype.isMatrix3=!0}constructor(t,e,i,n,r,a,o,l,c){this.elements=[1,0,0,0,1,0,0,0,1],t!==void 0&&this.set(t,e,i,n,r,a,o,l,c)}set(t,e,i,n,r,a,o,l,c){let h=this.elements;return h[0]=t,h[1]=n,h[2]=o,h[3]=e,h[4]=r,h[5]=l,h[6]=i,h[7]=a,h[8]=c,this}identity(){return this.set(1,0,0,0,1,0,0,0,1),this}copy(t){let e=this.elements,i=t.elements;return e[0]=i[0],e[1]=i[1],e[2]=i[2],e[3]=i[3],e[4]=i[4],e[5]=i[5],e[6]=i[6],e[7]=i[7],e[8]=i[8],this}extractBasis(t,e,i){return t.setFromMatrix3Column(this,0),e.setFromMatrix3Column(this,1),i.setFromMatrix3Column(this,2),this}setFromMatrix4(t){let e=t.elements;return this.set(e[0],e[4],e[8],e[1],e[5],e[9],e[2],e[6],e[10]),this}multiply(t){return this.multiplyMatrices(this,t)}premultiply(t){return this.multiplyMatrices(t,this)}multiplyMatrices(t,e){let i=t.elements,n=e.elements,r=this.elements,a=i[0],o=i[3],l=i[6],c=i[1],h=i[4],d=i[7],u=i[2],f=i[5],p=i[8],y=n[0],m=n[3],g=n[6],E=n[1],L=n[4],b=n[7],T=n[2],M=n[5],F=n[8];return r[0]=a*y+o*E+l*T,r[3]=a*m+o*L+l*M,r[6]=a*g+o*b+l*F,r[1]=c*y+h*E+d*T,r[4]=c*m+h*L+d*M,r[7]=c*g+h*b+d*F,r[2]=u*y+f*E+p*T,r[5]=u*m+f*L+p*M,r[8]=u*g+f*b+p*F,this}multiplyScalar(t){let e=this.elements;return e[0]*=t,e[3]*=t,e[6]*=t,e[1]*=t,e[4]*=t,e[7]*=t,e[2]*=t,e[5]*=t,e[8]*=t,this}determinant(){let t=this.elements,e=t[0],i=t[1],n=t[2],r=t[3],a=t[4],o=t[5],l=t[6],c=t[7],h=t[8];return e*a*h-e*o*c-i*r*h+i*o*l+n*r*c-n*a*l}invert(){let t=this.elements,e=t[0],i=t[1],n=t[2],r=t[3],a=t[4],o=t[5],l=t[6],c=t[7],h=t[8],d=h*a-o*c,u=o*l-h*r,f=c*r-a*l,p=e*d+i*u+n*f;if(p===0)return this.set(0,0,0,0,0,0,0,0,0);let y=1/p;return t[0]=d*y,t[1]=(n*c-h*i)*y,t[2]=(o*i-n*a)*y,t[3]=u*y,t[4]=(h*e-n*l)*y,t[5]=(n*r-o*e)*y,t[6]=f*y,t[7]=(i*l-c*e)*y,t[8]=(a*e-i*r)*y,this}transpose(){let t,e=this.elements;return t=e[1],e[1]=e[3],e[3]=t,t=e[2],e[2]=e[6],e[6]=t,t=e[5],e[5]=e[7],e[7]=t,this}getNormalMatrix(t){return this.setFromMatrix4(t).invert().transpose()}transposeIntoArray(t){let e=this.elements;return t[0]=e[0],t[1]=e[3],t[2]=e[6],t[3]=e[1],t[4]=e[4],t[5]=e[7],t[6]=e[2],t[7]=e[5],t[8]=e[8],this}setUvTransform(t,e,i,n,r,a,o){let l=Math.cos(r),c=Math.sin(r);return this.set(i*l,i*c,-i*(l*a+c*o)+a+t,-n*c,n*l,-n*(-c*a+l*o)+o+e,0,0,1),this}scale(t,e){return Xn("Matrix3: .scale() is deprecated. Use .makeScale() instead."),this.premultiply(Ic.makeScale(t,e)),this}rotate(t){return Xn("Matrix3: .rotate() is deprecated. Use .makeRotation() instead."),this.premultiply(Ic.makeRotation(-t)),this}translate(t,e){return Xn("Matrix3: .translate() is deprecated. Use .makeTranslation() instead."),this.premultiply(Ic.makeTranslation(t,e)),this}makeTranslation(t,e){return t.isVector2?this.set(1,0,t.x,0,1,t.y,0,0,1):this.set(1,0,t,0,1,e,0,0,1),this}makeRotation(t){let e=Math.cos(t),i=Math.sin(t);return this.set(e,-i,0,i,e,0,0,0,1),this}makeScale(t,e){return this.set(t,0,0,0,e,0,0,0,1),this}equals(t){let e=this.elements,i=t.elements;for(let n=0;n<9;n++)if(e[n]!==i[n])return!1;return!0}fromArray(t,e=0){for(let i=0;i<9;i++)this.elements[i]=t[i+e];return this}toArray(t=[],e=0){let i=this.elements;return t[e]=i[0],t[e+1]=i[1],t[e+2]=i[2],t[e+3]=i[3],t[e+4]=i[4],t[e+5]=i[5],t[e+6]=i[6],t[e+7]=i[7],t[e+8]=i[8],t}clone(){return new this.constructor().fromArray(this.elements)}},Ic=new Ot,ku=new Ot().set(.4123908,.3575843,.1804808,.212639,.7151687,.0721923,.0193308,.1191948,.9505322),Bu=new Ot().set(3.2409699,-1.5373832,-.4986108,-.9692436,1.8759675,.0415551,.0556301,-.203977,1.0569715);function Ip(){let s={enabled:!0,workingColorSpace:_i,spaces:{},convert:function(n,r,a){return this.enabled===!1||r===a||!r||!a||(this.spaces[r].transfer===ee&&(n.r=$i(n.r),n.g=$i(n.g),n.b=$i(n.b)),this.spaces[r].primaries!==this.spaces[a].primaries&&(n.applyMatrix3(this.spaces[r].toXYZ),n.applyMatrix3(this.spaces[a].fromXYZ)),this.spaces[a].transfer===ee&&(n.r=ws(n.r),n.g=ws(n.g),n.b=ws(n.b))),n},workingToColorSpace:function(n,r){return this.convert(n,this.workingColorSpace,r)},colorSpaceToWorking:function(n,r){return this.convert(n,r,this.workingColorSpace)},getPrimaries:function(n){return this.spaces[n].primaries},getTransfer:function(n){return n===hi?dr:this.spaces[n].transfer},getToneMappingMode:function(n){return this.spaces[n].outputColorSpaceConfig.toneMappingMode||"standard"},getLuminanceCoefficients:function(n,r=this.workingColorSpace){return n.fromArray(this.spaces[r].luminanceCoefficients)},define:function(n){Object.assign(this.spaces,n)},_getMatrix:function(n,r,a){return n.copy(this.spaces[r].toXYZ).multiply(this.spaces[a].fromXYZ)},_getDrawingBufferColorSpace:function(n){return this.spaces[n].outputColorSpaceConfig.drawingBufferColorSpace},_getUnpackColorSpace:function(n=this.workingColorSpace){return this.spaces[n].workingColorSpaceConfig.unpackColorSpace},fromWorkingColorSpace:function(n,r){return Xn("ColorManagement: .fromWorkingColorSpace() has been renamed to .workingToColorSpace()."),s.workingToColorSpace(n,r)},toWorkingColorSpace:function(n,r){return Xn("ColorManagement: .toWorkingColorSpace() has been renamed to .colorSpaceToWorking()."),s.colorSpaceToWorking(n,r)}},t=[.64,.33,.3,.6,.15,.06],e=[.2126,.7152,.0722],i=[.3127,.329];return s.define({[_i]:{primaries:t,whitePoint:i,transfer:dr,toXYZ:ku,fromXYZ:Bu,luminanceCoefficients:e,workingColorSpaceConfig:{unpackColorSpace:je},outputColorSpaceConfig:{drawingBufferColorSpace:je}},[je]:{primaries:t,whitePoint:i,transfer:ee,toXYZ:ku,fromXYZ:Bu,luminanceCoefficients:e,outputColorSpaceConfig:{drawingBufferColorSpace:je}}}),s}var Yt=Ip();function $i(s){return s<.04045?s*.0773993808:Math.pow(s*.9478672986+.0521327014,2.4)}function ws(s){return s<.0031308?s*12.92:1.055*Math.pow(s,.41666)-.055}var us,fo=class{static getDataURL(t,e="image/png"){if(/^data:/i.test(t.src)||typeof HTMLCanvasElement>"u")return t.src;let i;if(t instanceof HTMLCanvasElement)i=t;else{us===void 0&&(us=pr("canvas")),us.width=t.width,us.height=t.height;let n=us.getContext("2d");t instanceof ImageData?n.putImageData(t,0,0):n.drawImage(t,0,0,t.width,t.height),i=us}return i.toDataURL(e)}static sRGBToLinear(t){if(typeof HTMLImageElement<"u"&&t instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&t instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&t instanceof ImageBitmap){let e=pr("canvas");e.width=t.width,e.height=t.height;let i=e.getContext("2d");i.drawImage(t,0,0,t.width,t.height);let n=i.getImageData(0,0,t.width,t.height),r=n.data;for(let a=0;a<r.length;a++)r[a]=$i(r[a]/255)*255;return i.putImageData(n,0,0),e}else if(t.data){let e=t.data.slice(0);for(let i=0;i<e.length;i++)e instanceof Uint8Array||e instanceof Uint8ClampedArray?e[i]=Math.floor($i(e[i]/255)*255):e[i]=$i(e[i]);return{data:e,width:t.width,height:t.height}}else return Ft("ImageUtils.sRGBToLinear(): Unsupported image type. No color space conversion applied."),t}},Pp=0,As=class{constructor(t=null){this.isTextureSource=!0,Object.defineProperty(this,"id",{value:Pp++}),this.uuid=dn(),this.data=t,this.dataReady=!0,this.version=0}getSize(t){let e=this.data;return typeof HTMLVideoElement<"u"&&e instanceof HTMLVideoElement?t.set(e.videoWidth,e.videoHeight,0):typeof VideoFrame<"u"&&e instanceof VideoFrame?t.set(e.displayWidth,e.displayHeight,0):e!==null?t.set(e.width,e.height,e.depth||0):t.set(0,0,0),t}set needsUpdate(t){t===!0&&this.version++}toJSON(t){let e=t===void 0||typeof t=="string";if(!e&&t.images[this.uuid]!==void 0)return t.images[this.uuid];let i={uuid:this.uuid,url:""},n=this.data;if(n!==null){let r;if(Array.isArray(n)){r=[];for(let a=0,o=n.length;a<o;a++)n[a].isDataTexture?r.push(Pc(n[a].image)):r.push(Pc(n[a]))}else r=Pc(n);i.url=r}return e||(t.images[this.uuid]=i),i}};function Pc(s){return typeof HTMLImageElement<"u"&&s instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&s instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&s instanceof ImageBitmap?fo.getDataURL(s):s.data?{data:Array.from(s.data),width:s.width,height:s.height,type:s.data.constructor.name}:(Ft("Texture: Unable to serialize Texture."),{})}var Lp=0,Lc=new Q,We=class s extends Di{constructor(t=s.DEFAULT_IMAGE,e=s.DEFAULT_MAPPING,i=Li,n=Li,r=fe,a=Tn,o=ke,l=Le,c=s.DEFAULT_ANISOTROPY,h=hi){super(),this.isTexture=!0,Object.defineProperty(this,"id",{value:Lp++}),this.uuid=dn(),this.name="",this.source=new As(t),this.mipmaps=[],this.mapping=e,this.channel=0,this.wrapS=i,this.wrapT=n,this.magFilter=r,this.minFilter=a,this.anisotropy=c,this.format=o,this.internalFormat=null,this.type=l,this.offset=new Wt(0,0),this.repeat=new Wt(1,1),this.center=new Wt(0,0),this.rotation=0,this.matrixAutoUpdate=!0,this.matrix=new Ot,this.generateMipmaps=!0,this.premultiplyAlpha=!1,this.flipY=!0,this.unpackAlignment=4,this.colorSpace=h,this.userData={},this.updateRanges=[],this.version=0,this.onUpdate=null,this.renderTarget=null,this.isRenderTargetTexture=!1,this.isArrayTexture=!!(t&&t.depth&&t.depth>1),this.pmremVersion=0,this.normalized=!1}get width(){return this.source.getSize(Lc).x}get height(){return this.source.getSize(Lc).y}get depth(){return this.source.getSize(Lc).z}get image(){return this.source.data}set image(t){this.source.data=t}updateMatrix(){this.matrix.setUvTransform(this.offset.x,this.offset.y,this.repeat.x,this.repeat.y,this.rotation,this.center.x,this.center.y)}addUpdateRange(t,e){this.updateRanges.push({start:t,count:e})}clearUpdateRanges(){this.updateRanges.length=0}clone(){return new this.constructor().copy(this)}copy(t){return this.name=t.name,this.source=t.source,this.mipmaps=t.mipmaps.slice(0),this.mapping=t.mapping,this.channel=t.channel,this.wrapS=t.wrapS,this.wrapT=t.wrapT,this.magFilter=t.magFilter,this.minFilter=t.minFilter,this.anisotropy=t.anisotropy,this.format=t.format,this.internalFormat=t.internalFormat,this.type=t.type,this.normalized=t.normalized,this.offset.copy(t.offset),this.repeat.copy(t.repeat),this.center.copy(t.center),this.rotation=t.rotation,this.matrixAutoUpdate=t.matrixAutoUpdate,this.matrix.copy(t.matrix),this.generateMipmaps=t.generateMipmaps,this.premultiplyAlpha=t.premultiplyAlpha,this.flipY=t.flipY,this.unpackAlignment=t.unpackAlignment,this.colorSpace=t.colorSpace,this.renderTarget=t.renderTarget,this.isRenderTargetTexture=t.isRenderTargetTexture,this.isArrayTexture=t.isArrayTexture,this.userData=JSON.parse(JSON.stringify(t.userData)),this.needsUpdate=!0,this}setValues(t){for(let e in t){let i=t[e];if(i===void 0){Ft(`Texture.setValues(): parameter '${e}' has value of undefined.`);continue}let n=this[e];if(n===void 0){Ft(`Texture.setValues(): property '${e}' does not exist.`);continue}n&&i&&n.isVector2&&i.isVector2||n&&i&&n.isVector3&&i.isVector3||n&&i&&n.isMatrix3&&i.isMatrix3?n.copy(i):this[e]=i}}toJSON(t){let e=t===void 0||typeof t=="string";if(!e&&t.textures[this.uuid]!==void 0)return t.textures[this.uuid];let i={metadata:{version:4.7,type:"Texture",generator:"Texture.toJSON"},uuid:this.uuid,name:this.name,image:this.source.toJSON(t).uuid,mapping:this.mapping,channel:this.channel,repeat:[this.repeat.x,this.repeat.y],offset:[this.offset.x,this.offset.y],center:[this.center.x,this.center.y],rotation:this.rotation,wrap:[this.wrapS,this.wrapT],format:this.format,internalFormat:this.internalFormat,type:this.type,normalized:this.normalized,colorSpace:this.colorSpace,minFilter:this.minFilter,magFilter:this.magFilter,anisotropy:this.anisotropy,flipY:this.flipY,generateMipmaps:this.generateMipmaps,premultiplyAlpha:this.premultiplyAlpha,unpackAlignment:this.unpackAlignment};return Object.keys(this.userData).length>0&&(i.userData=this.userData),e||(t.textures[this.uuid]=i),i}dispose(){this.dispatchEvent({type:"dispose"})}transformUv(t){if(this.mapping!==fh)return t;if(t.applyMatrix3(this.matrix),t.x<0||t.x>1)switch(this.wrapS){case qn:t.x=t.x-Math.floor(t.x);break;case Li:t.x=t.x<0?0:1;break;case co:Math.abs(Math.floor(t.x)%2)===1?t.x=Math.ceil(t.x)-t.x:t.x=t.x-Math.floor(t.x);break}if(t.y<0||t.y>1)switch(this.wrapT){case qn:t.y=t.y-Math.floor(t.y);break;case Li:t.y=t.y<0?0:1;break;case co:Math.abs(Math.floor(t.y)%2)===1?t.y=Math.ceil(t.y)-t.y:t.y=t.y-Math.floor(t.y);break}return this.flipY&&(t.y=1-t.y),t}set needsUpdate(t){t===!0&&(this.version++,this.source.needsUpdate=!0)}set needsPMREMUpdate(t){t===!0&&this.pmremVersion++}};We.DEFAULT_IMAGE=null;We.DEFAULT_MAPPING=fh;We.DEFAULT_ANISOTROPY=1;var he=class s{static{s.prototype.isVector4=!0}constructor(t=0,e=0,i=0,n=1){this.x=t,this.y=e,this.z=i,this.w=n}get width(){return this.z}set width(t){this.z=t}get height(){return this.w}set height(t){this.w=t}set(t,e,i,n){return this.x=t,this.y=e,this.z=i,this.w=n,this}setScalar(t){return this.x=t,this.y=t,this.z=t,this.w=t,this}setX(t){return this.x=t,this}setY(t){return this.y=t,this}setZ(t){return this.z=t,this}setW(t){return this.w=t,this}setComponent(t,e){switch(t){case 0:this.x=e;break;case 1:this.y=e;break;case 2:this.z=e;break;case 3:this.w=e;break;default:throw new Error("THREE.Vector4: index is out of range: "+t)}return this}getComponent(t){switch(t){case 0:return this.x;case 1:return this.y;case 2:return this.z;case 3:return this.w;default:throw new Error("THREE.Vector4: index is out of range: "+t)}}clone(){return new this.constructor(this.x,this.y,this.z,this.w)}copy(t){return this.x=t.x,this.y=t.y,this.z=t.z,this.w=t.w!==void 0?t.w:1,this}add(t){return this.x+=t.x,this.y+=t.y,this.z+=t.z,this.w+=t.w,this}addScalar(t){return this.x+=t,this.y+=t,this.z+=t,this.w+=t,this}addVectors(t,e){return this.x=t.x+e.x,this.y=t.y+e.y,this.z=t.z+e.z,this.w=t.w+e.w,this}addScaledVector(t,e){return this.x+=t.x*e,this.y+=t.y*e,this.z+=t.z*e,this.w+=t.w*e,this}sub(t){return this.x-=t.x,this.y-=t.y,this.z-=t.z,this.w-=t.w,this}subScalar(t){return this.x-=t,this.y-=t,this.z-=t,this.w-=t,this}subVectors(t,e){return this.x=t.x-e.x,this.y=t.y-e.y,this.z=t.z-e.z,this.w=t.w-e.w,this}multiply(t){return this.x*=t.x,this.y*=t.y,this.z*=t.z,this.w*=t.w,this}multiplyScalar(t){return this.x*=t,this.y*=t,this.z*=t,this.w*=t,this}applyMatrix4(t){let e=this.x,i=this.y,n=this.z,r=this.w,a=t.elements;return this.x=a[0]*e+a[4]*i+a[8]*n+a[12]*r,this.y=a[1]*e+a[5]*i+a[9]*n+a[13]*r,this.z=a[2]*e+a[6]*i+a[10]*n+a[14]*r,this.w=a[3]*e+a[7]*i+a[11]*n+a[15]*r,this}divide(t){return this.x/=t.x,this.y/=t.y,this.z/=t.z,this.w/=t.w,this}divideScalar(t){return this.multiplyScalar(1/t)}setAxisAngleFromQuaternion(t){this.w=2*Math.acos(t.w);let e=Math.sqrt(1-t.w*t.w);return e<1e-4?(this.x=1,this.y=0,this.z=0):(this.x=t.x/e,this.y=t.y/e,this.z=t.z/e),this}setAxisAngleFromRotationMatrix(t){let e,i,n,r,l=t.elements,c=l[0],h=l[4],d=l[8],u=l[1],f=l[5],p=l[9],y=l[2],m=l[6],g=l[10];if(Math.abs(h-u)<.01&&Math.abs(d-y)<.01&&Math.abs(p-m)<.01){if(Math.abs(h+u)<.1&&Math.abs(d+y)<.1&&Math.abs(p+m)<.1&&Math.abs(c+f+g-3)<.1)return this.set(1,0,0,0),this;e=Math.PI;let L=(c+1)/2,b=(f+1)/2,T=(g+1)/2,M=(h+u)/4,F=(d+y)/4,S=(p+m)/4;return L>b&&L>T?L<.01?(i=0,n=.707106781,r=.707106781):(i=Math.sqrt(L),n=M/i,r=F/i):b>T?b<.01?(i=.707106781,n=0,r=.707106781):(n=Math.sqrt(b),i=M/n,r=S/n):T<.01?(i=.707106781,n=.707106781,r=0):(r=Math.sqrt(T),i=F/r,n=S/r),this.set(i,n,r,e),this}let E=Math.sqrt((m-p)*(m-p)+(d-y)*(d-y)+(u-h)*(u-h));return Math.abs(E)<.001&&(E=1),this.x=(m-p)/E,this.y=(d-y)/E,this.z=(u-h)/E,this.w=Math.acos((c+f+g-1)/2),this}setFromMatrixPosition(t){let e=t.elements;return this.x=e[12],this.y=e[13],this.z=e[14],this.w=e[15],this}min(t){return this.x=Math.min(this.x,t.x),this.y=Math.min(this.y,t.y),this.z=Math.min(this.z,t.z),this.w=Math.min(this.w,t.w),this}max(t){return this.x=Math.max(this.x,t.x),this.y=Math.max(this.y,t.y),this.z=Math.max(this.z,t.z),this.w=Math.max(this.w,t.w),this}clamp(t,e){return this.x=Kt(this.x,t.x,e.x),this.y=Kt(this.y,t.y,e.y),this.z=Kt(this.z,t.z,e.z),this.w=Kt(this.w,t.w,e.w),this}clampScalar(t,e){return this.x=Kt(this.x,t,e),this.y=Kt(this.y,t,e),this.z=Kt(this.z,t,e),this.w=Kt(this.w,t,e),this}clampLength(t,e){let i=this.length();return this.divideScalar(i||1).multiplyScalar(Kt(i,t,e))}floor(){return this.x=Math.floor(this.x),this.y=Math.floor(this.y),this.z=Math.floor(this.z),this.w=Math.floor(this.w),this}ceil(){return this.x=Math.ceil(this.x),this.y=Math.ceil(this.y),this.z=Math.ceil(this.z),this.w=Math.ceil(this.w),this}round(){return this.x=Math.round(this.x),this.y=Math.round(this.y),this.z=Math.round(this.z),this.w=Math.round(this.w),this}roundToZero(){return this.x=Math.trunc(this.x),this.y=Math.trunc(this.y),this.z=Math.trunc(this.z),this.w=Math.trunc(this.w),this}negate(){return this.x=-this.x,this.y=-this.y,this.z=-this.z,this.w=-this.w,this}dot(t){return this.x*t.x+this.y*t.y+this.z*t.z+this.w*t.w}lengthSq(){return this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w}length(){return Math.sqrt(this.x*this.x+this.y*this.y+this.z*this.z+this.w*this.w)}manhattanLength(){return Math.abs(this.x)+Math.abs(this.y)+Math.abs(this.z)+Math.abs(this.w)}normalize(){return this.divideScalar(this.length()||1)}setLength(t){return this.normalize().multiplyScalar(t)}lerp(t,e){return this.x+=(t.x-this.x)*e,this.y+=(t.y-this.y)*e,this.z+=(t.z-this.z)*e,this.w+=(t.w-this.w)*e,this}lerpVectors(t,e,i){return this.x=t.x+(e.x-t.x)*i,this.y=t.y+(e.y-t.y)*i,this.z=t.z+(e.z-t.z)*i,this.w=t.w+(e.w-t.w)*i,this}equals(t){return t.x===this.x&&t.y===this.y&&t.z===this.z&&t.w===this.w}fromArray(t,e=0){return this.x=t[e],this.y=t[e+1],this.z=t[e+2],this.w=t[e+3],this}toArray(t=[],e=0){return t[e]=this.x,t[e+1]=this.y,t[e+2]=this.z,t[e+3]=this.w,t}fromBufferAttribute(t,e){return this.x=t.getX(e),this.y=t.getY(e),this.z=t.getZ(e),this.w=t.getW(e),this}random(){return this.x=Math.random(),this.y=Math.random(),this.z=Math.random(),this.w=Math.random(),this}*[Symbol.iterator](){yield this.x,yield this.y,yield this.z,yield this.w}},po=class extends Di{constructor(t=1,e=1,i={}){super(),i=Object.assign({generateMipmaps:!1,internalFormat:null,minFilter:fe,depthBuffer:!0,stencilBuffer:!1,resolveColorBuffer:!0,resolveDepthBuffer:!0,resolveStencilBuffer:!0,storeMultisampledColorBuffer:!0,storeMultisampledDepthBuffer:!0,storeMultisampledStencilBuffer:!0,depthTexture:null,samples:0,count:1,depth:1,multiview:!1,useArrayDepthTexture:!1},i),this.isRenderTarget=!0,this.width=t,this.height=e,this.depth=i.depth,this.scissor=new he(0,0,t,e),this.scissorTest=!1,this.viewport=new he(0,0,t,e),this.textures=[];let n={width:t,height:e,depth:i.depth},r=new We(n),a=i.count;for(let o=0;o<a;o++)this.textures[o]=r.clone(),this.textures[o].isRenderTargetTexture=!0,this.textures[o].renderTarget=this;this._setTextureOptions(i),this.depthBuffer=i.depthBuffer,this.stencilBuffer=i.stencilBuffer,this.resolveColorBuffer=i.resolveColorBuffer,this.resolveDepthBuffer=i.resolveDepthBuffer,this.resolveStencilBuffer=i.resolveStencilBuffer,this.storeMultisampledColorBuffer=i.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=i.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=i.storeMultisampledStencilBuffer,this._depthTexture=null,this.depthTexture=i.depthTexture,this.samples=i.samples,this.multiview=i.multiview,this.useArrayDepthTexture=i.useArrayDepthTexture}_setTextureOptions(t={}){let e={minFilter:fe,generateMipmaps:!1,flipY:!1,internalFormat:null};t.mapping!==void 0&&(e.mapping=t.mapping),t.wrapS!==void 0&&(e.wrapS=t.wrapS),t.wrapT!==void 0&&(e.wrapT=t.wrapT),t.wrapR!==void 0&&(e.wrapR=t.wrapR),t.magFilter!==void 0&&(e.magFilter=t.magFilter),t.minFilter!==void 0&&(e.minFilter=t.minFilter),t.format!==void 0&&(e.format=t.format),t.type!==void 0&&(e.type=t.type),t.anisotropy!==void 0&&(e.anisotropy=t.anisotropy),t.colorSpace!==void 0&&(e.colorSpace=t.colorSpace),t.flipY!==void 0&&(e.flipY=t.flipY),t.generateMipmaps!==void 0&&(e.generateMipmaps=t.generateMipmaps),t.internalFormat!==void 0&&(e.internalFormat=t.internalFormat);for(let i=0;i<this.textures.length;i++)this.textures[i].setValues(e)}get texture(){return this.textures[0]}set texture(t){this.textures[0]=t}set depthTexture(t){this._depthTexture!==null&&this._depthTexture.renderTarget===this&&(this._depthTexture.renderTarget=null),t!==null&&t.renderTarget===null&&(t.renderTarget=this),this._depthTexture=t}get depthTexture(){return this._depthTexture}setSize(t,e,i=1){if(this.width!==t||this.height!==e||this.depth!==i){this.width=t,this.height=e,this.depth=i;for(let n=0,r=this.textures.length;n<r;n++)this.textures[n].image.width=t,this.textures[n].image.height=e,this.textures[n].image.depth=i,this.textures[n].isData3DTexture!==!0&&(this.textures[n].isArrayTexture=this.textures[n].image.depth>1);this.dispose()}this.viewport.set(0,0,t,e),this.scissor.set(0,0,t,e)}clone(){return new this.constructor().copy(this)}copy(t){this.width=t.width,this.height=t.height,this.depth=t.depth,this.scissor.copy(t.scissor),this.scissorTest=t.scissorTest,this.viewport.copy(t.viewport),this.textures.length=0;for(let e=0,i=t.textures.length;e<i;e++){this.textures[e]=t.textures[e].clone(),this.textures[e].isRenderTargetTexture=!0,this.textures[e].renderTarget=this;let n=Object.assign({},t.textures[e].image);this.textures[e].source=new As(n)}if(this.depthBuffer=t.depthBuffer,this.stencilBuffer=t.stencilBuffer,this.resolveColorBuffer=t.resolveColorBuffer,this.resolveDepthBuffer=t.resolveDepthBuffer,this.resolveStencilBuffer=t.resolveStencilBuffer,this.storeMultisampledColorBuffer=t.storeMultisampledColorBuffer,this.storeMultisampledDepthBuffer=t.storeMultisampledDepthBuffer,this.storeMultisampledStencilBuffer=t.storeMultisampledStencilBuffer,t.depthTexture!==null)if(t.depthTexture.renderTarget===t){let e=t.depthTexture.clone();e.renderTarget=null,this.depthTexture=e}else this.depthTexture=t.depthTexture;return this.samples=t.samples,this.multiview=t.multiview,this.useArrayDepthTexture=t.useArrayDepthTexture,this}dispose(){this.dispatchEvent({type:"dispose"})}},Ie=class extends po{constructor(t=1,e=1,i={}){super(t,e,i),this.isWebGLRenderTarget=!0}},fn=class extends We{constructor(t=null,e=1,i=1,n=1){super(null),this.isDataArrayTexture=!0,this.image={data:t,width:e,height:i,depth:n},this.magFilter=oe,this.minFilter=oe,this.wrapR=Li,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1,this.layerUpdates=new Set}copy(t){return super.copy(t),this.wrapR=t.wrapR,this}addLayerUpdate(t){this.layerUpdates.add(t)}clearLayerUpdates(){this.layerUpdates.clear()}};var mo=class extends We{constructor(t=null,e=1,i=1,n=1){super(null),this.isData3DTexture=!0,this.image={data:t,width:e,height:i,depth:n},this.magFilter=oe,this.minFilter=oe,this.wrapR=Li,this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}copy(t){return super.copy(t),this.wrapR=t.wrapR,this}};var jt=class s{static{s.prototype.isMatrix4=!0}constructor(t,e,i,n,r,a,o,l,c,h,d,u,f,p,y,m){this.elements=[1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],t!==void 0&&this.set(t,e,i,n,r,a,o,l,c,h,d,u,f,p,y,m)}set(t,e,i,n,r,a,o,l,c,h,d,u,f,p,y,m){let g=this.elements;return g[0]=t,g[4]=e,g[8]=i,g[12]=n,g[1]=r,g[5]=a,g[9]=o,g[13]=l,g[2]=c,g[6]=h,g[10]=d,g[14]=u,g[3]=f,g[7]=p,g[11]=y,g[15]=m,this}identity(){return this.set(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1),this}clone(){return new s().fromArray(this.elements)}copy(t){let e=this.elements,i=t.elements;return e[0]=i[0],e[1]=i[1],e[2]=i[2],e[3]=i[3],e[4]=i[4],e[5]=i[5],e[6]=i[6],e[7]=i[7],e[8]=i[8],e[9]=i[9],e[10]=i[10],e[11]=i[11],e[12]=i[12],e[13]=i[13],e[14]=i[14],e[15]=i[15],this}copyPosition(t){let e=this.elements,i=t.elements;return e[12]=i[12],e[13]=i[13],e[14]=i[14],this}setFromMatrix3(t){let e=t.elements;return this.set(e[0],e[3],e[6],0,e[1],e[4],e[7],0,e[2],e[5],e[8],0,0,0,0,1),this}extractBasis(t,e,i){return this.determinantAffine()===0?(t.set(1,0,0),e.set(0,1,0),i.set(0,0,1),this):(t.setFromMatrixColumn(this,0),e.setFromMatrixColumn(this,1),i.setFromMatrixColumn(this,2),this)}makeBasis(t,e,i){return this.set(t.x,e.x,i.x,0,t.y,e.y,i.y,0,t.z,e.z,i.z,0,0,0,0,1),this}extractRotation(t){if(t.determinantAffine()===0)return this.identity();let e=this.elements,i=t.elements,n=1/ds.setFromMatrixColumn(t,0).length(),r=1/ds.setFromMatrixColumn(t,1).length(),a=1/ds.setFromMatrixColumn(t,2).length();return e[0]=i[0]*n,e[1]=i[1]*n,e[2]=i[2]*n,e[3]=0,e[4]=i[4]*r,e[5]=i[5]*r,e[6]=i[6]*r,e[7]=0,e[8]=i[8]*a,e[9]=i[9]*a,e[10]=i[10]*a,e[11]=0,e[12]=0,e[13]=0,e[14]=0,e[15]=1,this}makeRotationFromEuler(t){let e=this.elements,i=t.x,n=t.y,r=t.z,a=Math.cos(i),o=Math.sin(i),l=Math.cos(n),c=Math.sin(n),h=Math.cos(r),d=Math.sin(r);if(t.order==="XYZ"){let u=a*h,f=a*d,p=o*h,y=o*d;e[0]=l*h,e[4]=-l*d,e[8]=c,e[1]=f+p*c,e[5]=u-y*c,e[9]=-o*l,e[2]=y-u*c,e[6]=p+f*c,e[10]=a*l}else if(t.order==="YXZ"){let u=l*h,f=l*d,p=c*h,y=c*d;e[0]=u+y*o,e[4]=p*o-f,e[8]=a*c,e[1]=a*d,e[5]=a*h,e[9]=-o,e[2]=f*o-p,e[6]=y+u*o,e[10]=a*l}else if(t.order==="ZXY"){let u=l*h,f=l*d,p=c*h,y=c*d;e[0]=u-y*o,e[4]=-a*d,e[8]=p+f*o,e[1]=f+p*o,e[5]=a*h,e[9]=y-u*o,e[2]=-a*c,e[6]=o,e[10]=a*l}else if(t.order==="ZYX"){let u=a*h,f=a*d,p=o*h,y=o*d;e[0]=l*h,e[4]=p*c-f,e[8]=u*c+y,e[1]=l*d,e[5]=y*c+u,e[9]=f*c-p,e[2]=-c,e[6]=o*l,e[10]=a*l}else if(t.order==="YZX"){let u=a*l,f=a*c,p=o*l,y=o*c;e[0]=l*h,e[4]=y-u*d,e[8]=p*d+f,e[1]=d,e[5]=a*h,e[9]=-o*h,e[2]=-c*h,e[6]=f*d+p,e[10]=u-y*d}else if(t.order==="XZY"){let u=a*l,f=a*c,p=o*l,y=o*c;e[0]=l*h,e[4]=-d,e[8]=c*h,e[1]=u*d+y,e[5]=a*h,e[9]=f*d-p,e[2]=p*d-f,e[6]=o*h,e[10]=y*d+u}return e[3]=0,e[7]=0,e[11]=0,e[12]=0,e[13]=0,e[14]=0,e[15]=1,this}makeRotationFromQuaternion(t){return this.compose(Fp,t,Dp)}lookAt(t,e,i){let n=this.elements;return $e.subVectors(t,e),$e.lengthSq()===0&&($e.z=1),$e.normalize(),an.crossVectors(i,$e),an.lengthSq()===0&&(Math.abs(i.z)===1?$e.x+=1e-4:$e.z+=1e-4,$e.normalize(),an.crossVectors(i,$e)),an.normalize(),Na.crossVectors($e,an),n[0]=an.x,n[4]=Na.x,n[8]=$e.x,n[1]=an.y,n[5]=Na.y,n[9]=$e.y,n[2]=an.z,n[6]=Na.z,n[10]=$e.z,this}multiply(t){return this.multiplyMatrices(this,t)}premultiply(t){return this.multiplyMatrices(t,this)}multiplyMatrices(t,e){let i=t.elements,n=e.elements,r=this.elements,a=i[0],o=i[4],l=i[8],c=i[12],h=i[1],d=i[5],u=i[9],f=i[13],p=i[2],y=i[6],m=i[10],g=i[14],E=i[3],L=i[7],b=i[11],T=i[15],M=n[0],F=n[4],S=n[8],R=n[12],B=n[1],z=n[5],W=n[9],$=n[13],V=n[2],_=n[6],C=n[10],P=n[14],k=n[3],D=n[7],G=n[11],X=n[15];return r[0]=a*M+o*B+l*V+c*k,r[4]=a*F+o*z+l*_+c*D,r[8]=a*S+o*W+l*C+c*G,r[12]=a*R+o*$+l*P+c*X,r[1]=h*M+d*B+u*V+f*k,r[5]=h*F+d*z+u*_+f*D,r[9]=h*S+d*W+u*C+f*G,r[13]=h*R+d*$+u*P+f*X,r[2]=p*M+y*B+m*V+g*k,r[6]=p*F+y*z+m*_+g*D,r[10]=p*S+y*W+m*C+g*G,r[14]=p*R+y*$+m*P+g*X,r[3]=E*M+L*B+b*V+T*k,r[7]=E*F+L*z+b*_+T*D,r[11]=E*S+L*W+b*C+T*G,r[15]=E*R+L*$+b*P+T*X,this}multiplyScalar(t){let e=this.elements;return e[0]*=t,e[4]*=t,e[8]*=t,e[12]*=t,e[1]*=t,e[5]*=t,e[9]*=t,e[13]*=t,e[2]*=t,e[6]*=t,e[10]*=t,e[14]*=t,e[3]*=t,e[7]*=t,e[11]*=t,e[15]*=t,this}determinant(){let t=this.elements,e=t[0],i=t[4],n=t[8],r=t[12],a=t[1],o=t[5],l=t[9],c=t[13],h=t[2],d=t[6],u=t[10],f=t[14],p=t[3],y=t[7],m=t[11],g=t[15],E=l*f-c*u,L=o*f-c*d,b=o*u-l*d,T=a*f-c*h,M=a*u-l*h,F=a*d-o*h;return e*(y*E-m*L+g*b)-i*(p*E-m*T+g*M)+n*(p*L-y*T+g*F)-r*(p*b-y*M+m*F)}determinantAffine(){let t=this.elements,e=t[0],i=t[4],n=t[8],r=t[1],a=t[5],o=t[9],l=t[2],c=t[6],h=t[10];return e*(a*h-o*c)-i*(r*h-o*l)+n*(r*c-a*l)}transpose(){let t=this.elements,e;return e=t[1],t[1]=t[4],t[4]=e,e=t[2],t[2]=t[8],t[8]=e,e=t[6],t[6]=t[9],t[9]=e,e=t[3],t[3]=t[12],t[12]=e,e=t[7],t[7]=t[13],t[13]=e,e=t[11],t[11]=t[14],t[14]=e,this}setPosition(t,e,i){let n=this.elements;return t.isVector3?(n[12]=t.x,n[13]=t.y,n[14]=t.z):(n[12]=t,n[13]=e,n[14]=i),this}invert(){let t=this.elements,e=t[0],i=t[1],n=t[2],r=t[3],a=t[4],o=t[5],l=t[6],c=t[7],h=t[8],d=t[9],u=t[10],f=t[11],p=t[12],y=t[13],m=t[14],g=t[15],E=e*o-i*a,L=e*l-n*a,b=e*c-r*a,T=i*l-n*o,M=i*c-r*o,F=n*c-r*l,S=h*y-d*p,R=h*m-u*p,B=h*g-f*p,z=d*m-u*y,W=d*g-f*y,$=u*g-f*m,V=E*$-L*W+b*z+T*B-M*R+F*S;if(V===0)return this.set(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);let _=1/V;return t[0]=(o*$-l*W+c*z)*_,t[1]=(n*W-i*$-r*z)*_,t[2]=(y*F-m*M+g*T)*_,t[3]=(u*M-d*F-f*T)*_,t[4]=(l*B-a*$-c*R)*_,t[5]=(e*$-n*B+r*R)*_,t[6]=(m*b-p*F-g*L)*_,t[7]=(h*F-u*b+f*L)*_,t[8]=(a*W-o*B+c*S)*_,t[9]=(i*B-e*W-r*S)*_,t[10]=(p*M-y*b+g*E)*_,t[11]=(d*b-h*M-f*E)*_,t[12]=(o*R-a*z-l*S)*_,t[13]=(e*z-i*R+n*S)*_,t[14]=(y*L-p*T-m*E)*_,t[15]=(h*T-d*L+u*E)*_,this}scale(t){let e=this.elements,i=t.x,n=t.y,r=t.z;return e[0]*=i,e[4]*=n,e[8]*=r,e[1]*=i,e[5]*=n,e[9]*=r,e[2]*=i,e[6]*=n,e[10]*=r,e[3]*=i,e[7]*=n,e[11]*=r,this}getMaxScaleOnAxis(){let t=this.elements,e=t[0]*t[0]+t[1]*t[1]+t[2]*t[2],i=t[4]*t[4]+t[5]*t[5]+t[6]*t[6],n=t[8]*t[8]+t[9]*t[9]+t[10]*t[10];return Math.sqrt(Math.max(e,i,n))}makeTranslation(t,e,i){return t.isVector3?this.set(1,0,0,t.x,0,1,0,t.y,0,0,1,t.z,0,0,0,1):this.set(1,0,0,t,0,1,0,e,0,0,1,i,0,0,0,1),this}makeRotationX(t){let e=Math.cos(t),i=Math.sin(t);return this.set(1,0,0,0,0,e,-i,0,0,i,e,0,0,0,0,1),this}makeRotationY(t){let e=Math.cos(t),i=Math.sin(t);return this.set(e,0,i,0,0,1,0,0,-i,0,e,0,0,0,0,1),this}makeRotationZ(t){let e=Math.cos(t),i=Math.sin(t);return this.set(e,-i,0,0,i,e,0,0,0,0,1,0,0,0,0,1),this}makeRotationAxis(t,e){let i=Math.cos(e),n=Math.sin(e),r=1-i,a=t.x,o=t.y,l=t.z,c=r*a,h=r*o;return this.set(c*a+i,c*o-n*l,c*l+n*o,0,c*o+n*l,h*o+i,h*l-n*a,0,c*l-n*o,h*l+n*a,r*l*l+i,0,0,0,0,1),this}makeScale(t,e,i){return this.set(t,0,0,0,0,e,0,0,0,0,i,0,0,0,0,1),this}makeShear(t,e,i,n,r,a){return this.set(1,i,r,0,t,1,a,0,e,n,1,0,0,0,0,1),this}compose(t,e,i){let n=this.elements,r=e._x,a=e._y,o=e._z,l=e._w,c=r+r,h=a+a,d=o+o,u=r*c,f=r*h,p=r*d,y=a*h,m=a*d,g=o*d,E=l*c,L=l*h,b=l*d,T=i.x,M=i.y,F=i.z;return n[0]=(1-(y+g))*T,n[1]=(f+b)*T,n[2]=(p-L)*T,n[3]=0,n[4]=(f-b)*M,n[5]=(1-(u+g))*M,n[6]=(m+E)*M,n[7]=0,n[8]=(p+L)*F,n[9]=(m-E)*F,n[10]=(1-(u+y))*F,n[11]=0,n[12]=t.x,n[13]=t.y,n[14]=t.z,n[15]=1,this}decompose(t,e,i){let n=this.elements;t.x=n[12],t.y=n[13],t.z=n[14];let r=this.determinantAffine();if(r===0)return i.set(1,1,1),e.identity(),this;let a=ds.set(n[0],n[1],n[2]).length(),o=ds.set(n[4],n[5],n[6]).length(),l=ds.set(n[8],n[9],n[10]).length();r<0&&(a=-a),pi.copy(this);let c=1/a,h=1/o,d=1/l;return pi.elements[0]*=c,pi.elements[1]*=c,pi.elements[2]*=c,pi.elements[4]*=h,pi.elements[5]*=h,pi.elements[6]*=h,pi.elements[8]*=d,pi.elements[9]*=d,pi.elements[10]*=d,e.setFromRotationMatrix(pi),i.x=a,i.y=o,i.z=l,this}makePerspective(t,e,i,n,r,a,o=yi,l=!1){let c=this.elements,h=2*r/(e-t),d=2*r/(i-n),u=(e+t)/(e-t),f=(i+n)/(i-n),p,y;if(l)p=r/(a-r),y=a*r/(a-r);else if(o===yi)p=-(a+r)/(a-r),y=-2*a*r/(a-r);else if(o===fr)p=-a/(a-r),y=-a*r/(a-r);else throw new Error("THREE.Matrix4.makePerspective(): Invalid coordinate system: "+o);return c[0]=h,c[4]=0,c[8]=u,c[12]=0,c[1]=0,c[5]=d,c[9]=f,c[13]=0,c[2]=0,c[6]=0,c[10]=p,c[14]=y,c[3]=0,c[7]=0,c[11]=-1,c[15]=0,this}makeOrthographic(t,e,i,n,r,a,o=yi,l=!1){let c=this.elements,h=2/(e-t),d=2/(i-n),u=-(e+t)/(e-t),f=-(i+n)/(i-n),p,y;if(l)p=1/(a-r),y=a/(a-r);else if(o===yi)p=-2/(a-r),y=-(a+r)/(a-r);else if(o===fr)p=-1/(a-r),y=-r/(a-r);else throw new Error("THREE.Matrix4.makeOrthographic(): Invalid coordinate system: "+o);return c[0]=h,c[4]=0,c[8]=0,c[12]=u,c[1]=0,c[5]=d,c[9]=0,c[13]=f,c[2]=0,c[6]=0,c[10]=p,c[14]=y,c[3]=0,c[7]=0,c[11]=0,c[15]=1,this}equals(t){let e=this.elements,i=t.elements;for(let n=0;n<16;n++)if(e[n]!==i[n])return!1;return!0}fromArray(t,e=0){for(let i=0;i<16;i++)this.elements[i]=t[i+e];return this}toArray(t=[],e=0){let i=this.elements;return t[e]=i[0],t[e+1]=i[1],t[e+2]=i[2],t[e+3]=i[3],t[e+4]=i[4],t[e+5]=i[5],t[e+6]=i[6],t[e+7]=i[7],t[e+8]=i[8],t[e+9]=i[9],t[e+10]=i[10],t[e+11]=i[11],t[e+12]=i[12],t[e+13]=i[13],t[e+14]=i[14],t[e+15]=i[15],t}},ds=new Q,pi=new jt,Fp=new Q(0,0,0),Dp=new Q(1,1,1),an=new Q,Na=new Q,$e=new Q,Vu=new jt,zu=new Ni,pn=class s{constructor(t=0,e=0,i=0,n=s.DEFAULT_ORDER){this.isEuler=!0,this._x=t,this._y=e,this._z=i,this._order=n}get x(){return this._x}set x(t){this._x=t,this._onChangeCallback()}get y(){return this._y}set y(t){this._y=t,this._onChangeCallback()}get z(){return this._z}set z(t){this._z=t,this._onChangeCallback()}get order(){return this._order}set order(t){this._order=t,this._onChangeCallback()}set(t,e,i,n=this._order){return this._x=t,this._y=e,this._z=i,this._order=n,this._onChangeCallback(),this}clone(){return new this.constructor(this._x,this._y,this._z,this._order)}copy(t){return this._x=t._x,this._y=t._y,this._z=t._z,this._order=t._order,this._onChangeCallback(),this}setFromRotationMatrix(t,e=this._order,i=!0){let n=t.elements,r=n[0],a=n[4],o=n[8],l=n[1],c=n[5],h=n[9],d=n[2],u=n[6],f=n[10];switch(e){case"XYZ":this._y=Math.asin(Kt(o,-1,1)),Math.abs(o)<.9999999?(this._x=Math.atan2(-h,f),this._z=Math.atan2(-a,r)):(this._x=Math.atan2(u,c),this._z=0);break;case"YXZ":this._x=Math.asin(-Kt(h,-1,1)),Math.abs(h)<.9999999?(this._y=Math.atan2(o,f),this._z=Math.atan2(l,c)):(this._y=Math.atan2(-d,r),this._z=0);break;case"ZXY":this._x=Math.asin(Kt(u,-1,1)),Math.abs(u)<.9999999?(this._y=Math.atan2(-d,f),this._z=Math.atan2(-a,c)):(this._y=0,this._z=Math.atan2(l,r));break;case"ZYX":this._y=Math.asin(-Kt(d,-1,1)),Math.abs(d)<.9999999?(this._x=Math.atan2(u,f),this._z=Math.atan2(l,r)):(this._x=0,this._z=Math.atan2(-a,c));break;case"YZX":this._z=Math.asin(Kt(l,-1,1)),Math.abs(l)<.9999999?(this._x=Math.atan2(-h,c),this._y=Math.atan2(-d,r)):(this._x=0,this._y=Math.atan2(o,f));break;case"XZY":this._z=Math.asin(-Kt(a,-1,1)),Math.abs(a)<.9999999?(this._x=Math.atan2(u,c),this._y=Math.atan2(o,r)):(this._x=Math.atan2(-h,f),this._y=0);break;default:Ft("Euler: .setFromRotationMatrix() encountered an unknown order: "+e)}return this._order=e,i===!0&&this._onChangeCallback(),this}setFromQuaternion(t,e,i){return Vu.makeRotationFromQuaternion(t),this.setFromRotationMatrix(Vu,e,i)}setFromVector3(t,e=this._order){return this.set(t.x,t.y,t.z,e)}reorder(t){return zu.setFromEuler(this),this.setFromQuaternion(zu,t)}equals(t){return t._x===this._x&&t._y===this._y&&t._z===this._z&&t._order===this._order}fromArray(t){return this._x=t[0],this._y=t[1],this._z=t[2],t[3]!==void 0&&(this._order=t[3]),this._onChangeCallback(),this}toArray(t=[],e=0){return t[e]=this._x,t[e+1]=this._y,t[e+2]=this._z,t[e+3]=this._order,t}_onChange(t){return this._onChangeCallback=t,this}_onChangeCallback(){}*[Symbol.iterator](){yield this._x,yield this._y,yield this._z,yield this._order}};pn.DEFAULT_ORDER="XYZ";var gr=class{constructor(){this.mask=1}set(t){this.mask=(1<<t|0)>>>0}enable(t){this.mask|=1<<t|0}enableAll(){this.mask=-1}toggle(t){this.mask^=1<<t|0}disable(t){this.mask&=~(1<<t|0)}disableAll(){this.mask=0}test(t){return(this.mask&t.mask)!==0}isEnabled(t){return(this.mask&(1<<t|0))!==0}},Np=0,Gu=new Q,fs=new Ni,Xi=new jt,Ua=new Q,or=new Q,Up=new Q,Op=new Ni,Hu=new Q(1,0,0),Wu=new Q(0,1,0),Xu=new Q(0,0,1),qu={type:"added"},kp={type:"removed"},ps={type:"childadded",child:null},Fc={type:"childremoved",child:null},ci=class s extends Di{constructor(){super(),this.isObject3D=!0,Object.defineProperty(this,"id",{value:Np++}),this.uuid=dn(),this.name="",this.type="Object3D",this.parent=null,this.children=[],this.up=s.DEFAULT_UP.clone();let t=new Q,e=new pn,i=new Ni,n=new Q(1,1,1);function r(){i.setFromEuler(e,!1)}function a(){e.setFromQuaternion(i,void 0,!1)}e._onChange(r),i._onChange(a),Object.defineProperties(this,{position:{configurable:!0,enumerable:!0,value:t},rotation:{configurable:!0,enumerable:!0,value:e},quaternion:{configurable:!0,enumerable:!0,value:i},scale:{configurable:!0,enumerable:!0,value:n},modelViewMatrix:{value:new jt},normalMatrix:{value:new Ot}}),this.matrix=new jt,this.matrixWorld=new jt,this.matrixAutoUpdate=s.DEFAULT_MATRIX_AUTO_UPDATE,this.matrixWorldAutoUpdate=s.DEFAULT_MATRIX_WORLD_AUTO_UPDATE,this.matrixWorldNeedsUpdate=!1,this.layers=new gr,this.visible=!0,this.castShadow=!1,this.receiveShadow=!1,this.frustumCulled=!0,this.renderOrder=0,this.animations=[],this.customDepthMaterial=void 0,this.customDistanceMaterial=void 0,this.static=!1,this.userData={},this.pivot=null}onBeforeShadow(){}onAfterShadow(){}onBeforeRender(){}onAfterRender(){}applyMatrix4(t){this.matrixAutoUpdate&&this.updateMatrix(),this.matrix.premultiply(t),this.matrix.decompose(this.position,this.quaternion,this.scale)}applyQuaternion(t){return this.quaternion.premultiply(t),this}setRotationFromAxisAngle(t,e){this.quaternion.setFromAxisAngle(t,e)}setRotationFromEuler(t){this.quaternion.setFromEuler(t,!0)}setRotationFromMatrix(t){this.quaternion.setFromRotationMatrix(t)}setRotationFromQuaternion(t){this.quaternion.copy(t)}rotateOnAxis(t,e){return fs.setFromAxisAngle(t,e),this.quaternion.multiply(fs),this}rotateOnWorldAxis(t,e){return fs.setFromAxisAngle(t,e),this.quaternion.premultiply(fs),this}rotateX(t){return this.rotateOnAxis(Hu,t)}rotateY(t){return this.rotateOnAxis(Wu,t)}rotateZ(t){return this.rotateOnAxis(Xu,t)}translateOnAxis(t,e){return Gu.copy(t).applyQuaternion(this.quaternion),this.position.add(Gu.multiplyScalar(e)),this}translateX(t){return this.translateOnAxis(Hu,t)}translateY(t){return this.translateOnAxis(Wu,t)}translateZ(t){return this.translateOnAxis(Xu,t)}localToWorld(t){return this.updateWorldMatrix(!0,!1),t.applyMatrix4(this.matrixWorld)}worldToLocal(t){return this.updateWorldMatrix(!0,!1),t.applyMatrix4(Xi.copy(this.matrixWorld).invert())}lookAt(t,e,i){t.isVector3?Ua.copy(t):Ua.set(t,e,i);let n=this.parent;this.updateWorldMatrix(!0,!1),or.setFromMatrixPosition(this.matrixWorld),this.isCamera||this.isLight?Xi.lookAt(or,Ua,this.up):Xi.lookAt(Ua,or,this.up),this.quaternion.setFromRotationMatrix(Xi),n&&(Xi.extractRotation(n.matrixWorld),fs.setFromRotationMatrix(Xi),this.quaternion.premultiply(fs.invert()))}add(t){if(arguments.length>1){for(let e=0;e<arguments.length;e++)this.add(arguments[e]);return this}return t===this?(Ut("Object3D.add: object can't be added as a child of itself.",t),this):(t&&t.isObject3D?(t.removeFromParent(),t.parent=this,this.children.push(t),t.dispatchEvent(qu),ps.child=t,this.dispatchEvent(ps),ps.child=null):Ut("Object3D.add: object not an instance of THREE.Object3D.",t),this)}remove(t){if(arguments.length>1){for(let i=0;i<arguments.length;i++)this.remove(arguments[i]);return this}let e=this.children.indexOf(t);return e!==-1&&(t.parent=null,this.children.splice(e,1),t.dispatchEvent(kp),Fc.child=t,this.dispatchEvent(Fc),Fc.child=null),this}removeFromParent(){let t=this.parent;return t!==null&&t.remove(this),this}clear(){return this.remove(...this.children)}attach(t){return this.updateWorldMatrix(!0,!1),Xi.copy(this.matrixWorld).invert(),t.parent!==null&&(t.parent.updateWorldMatrix(!0,!1),Xi.multiply(t.parent.matrixWorld)),t.applyMatrix4(Xi),t.removeFromParent(),t.parent=this,this.children.push(t),t.updateWorldMatrix(!1,!0),t.dispatchEvent(qu),ps.child=t,this.dispatchEvent(ps),ps.child=null,this}getObjectById(t){return this.getObjectByProperty("id",t)}getObjectByName(t){return this.getObjectByProperty("name",t)}getObjectByProperty(t,e){if(this[t]===e)return this;for(let i=0,n=this.children.length;i<n;i++){let a=this.children[i].getObjectByProperty(t,e);if(a!==void 0)return a}}getObjectsByProperty(t,e,i=[]){this[t]===e&&i.push(this);let n=this.children;for(let r=0,a=n.length;r<a;r++)n[r].getObjectsByProperty(t,e,i);return i}getWorldPosition(t){return this.updateWorldMatrix(!0,!1),t.setFromMatrixPosition(this.matrixWorld)}getWorldQuaternion(t){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(or,t,Up),t}getWorldScale(t){return this.updateWorldMatrix(!0,!1),this.matrixWorld.decompose(or,Op,t),t}getWorldDirection(t){this.updateWorldMatrix(!0,!1);let e=this.matrixWorld.elements;return t.set(e[8],e[9],e[10]).normalize()}raycast(){}intersectsFrustum(){}traverse(t){t(this);let e=this.children;for(let i=0,n=e.length;i<n;i++)e[i].traverse(t)}traverseVisible(t){if(this.visible===!1)return;t(this);let e=this.children;for(let i=0,n=e.length;i<n;i++)e[i].traverseVisible(t)}traverseAncestors(t){let e=this.parent;e!==null&&(t(e),e.traverseAncestors(t))}updateMatrix(){this.matrix.compose(this.position,this.quaternion,this.scale);let t=this.pivot;if(t!==null){let e=t.x,i=t.y,n=t.z,r=this.matrix.elements;r[12]+=e-r[0]*e-r[4]*i-r[8]*n,r[13]+=i-r[1]*e-r[5]*i-r[9]*n,r[14]+=n-r[2]*e-r[6]*i-r[10]*n}this.matrixWorldNeedsUpdate=!0}updateMatrixWorld(t){this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||t)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,t=!0);let e=this.children;for(let i=0,n=e.length;i<n;i++)e[i].updateMatrixWorld(t)}updateWorldMatrix(t,e,i=!1){let n=this.parent;if(t===!0&&n!==null&&n.updateWorldMatrix(!0,!1),this.matrixAutoUpdate&&this.updateMatrix(),(this.matrixWorldNeedsUpdate||i)&&(this.matrixWorldAutoUpdate===!0&&(this.parent===null?this.matrixWorld.copy(this.matrix):this.matrixWorld.multiplyMatrices(this.parent.matrixWorld,this.matrix)),this.matrixWorldNeedsUpdate=!1,i=!0),e===!0){let r=this.children;for(let a=0,o=r.length;a<o;a++)r[a].updateWorldMatrix(!1,!0,i)}}toJSON(t){let e=t===void 0||typeof t=="string",i={};e&&(t={geometries:{},materials:{},textures:{},images:{},shapes:{},skeletons:{},animations:{},nodes:{}},i.metadata={version:4.7,type:"Object",generator:"Object3D.toJSON"});let n={};n.uuid=this.uuid,n.type=this.type,n.name=this.name,n.castShadow=this.castShadow,n.receiveShadow=this.receiveShadow,n.visible=this.visible,n.frustumCulled=this.frustumCulled,n.renderOrder=this.renderOrder,n.static=this.static,n.matrixAutoUpdate=this.matrixAutoUpdate,Object.keys(this.userData).length>0&&(n.userData=this.userData),n.layers=this.layers.mask,n.matrix=this.matrix.toArray(),n.up=this.up.toArray(),this.pivot!==null&&(n.pivot=this.pivot.toArray()),this.morphTargetDictionary!==void 0&&(n.morphTargetDictionary=Object.assign({},this.morphTargetDictionary)),this.morphTargetInfluences!==void 0&&(n.morphTargetInfluences=this.morphTargetInfluences.slice()),this.isInstancedMesh&&(n.type="InstancedMesh",n.count=this.count,n.instanceMatrix=this.instanceMatrix.toJSON(),this.instanceColor!==null&&(n.instanceColor=this.instanceColor.toJSON())),this.isBatchedMesh&&(n.type="BatchedMesh",n.perObjectFrustumCulled=this.perObjectFrustumCulled,n.sortObjects=this.sortObjects,n.drawRanges=this._drawRanges,n.reservedRanges=this._reservedRanges,n.geometryInfo=this._geometryInfo.map(o=>({...o,boundingBox:o.boundingBox?o.boundingBox.toJSON():void 0,boundingSphere:o.boundingSphere?o.boundingSphere.toJSON():void 0})),n.instanceInfo=this._instanceInfo.map(o=>({...o})),n.availableInstanceIds=this._availableInstanceIds.slice(),n.availableGeometryIds=this._availableGeometryIds.slice(),n.nextIndexStart=this._nextIndexStart,n.nextVertexStart=this._nextVertexStart,n.geometryCount=this._geometryCount,n.maxInstanceCount=this._maxInstanceCount,n.maxVertexCount=this._maxVertexCount,n.maxIndexCount=this._maxIndexCount,n.geometryInitialized=this._geometryInitialized,n.matricesTexture=this._matricesTexture.toJSON(t),n.indirectTexture=this._indirectTexture.toJSON(t),this._colorsTexture!==null&&(n.colorsTexture=this._colorsTexture.toJSON(t)),this.boundingSphere!==null&&(n.boundingSphere=this.boundingSphere.toJSON()),this.boundingBox!==null&&(n.boundingBox=this.boundingBox.toJSON()));function r(o,l){return o[l.uuid]===void 0&&(o[l.uuid]=l.toJSON(t)),l.uuid}if(this.isScene)this.background&&(this.background.isColor?n.background=this.background.toJSON():this.background.isTexture&&(n.background=this.background.toJSON(t).uuid)),this.environment&&this.environment.isTexture&&this.environment.isRenderTargetTexture!==!0&&(n.environment=this.environment.toJSON(t).uuid);else if(this.isMesh||this.isLine||this.isPoints){n.geometry=r(t.geometries,this.geometry);let o=this.geometry.parameters;if(o!==void 0&&o.shapes!==void 0){let l=o.shapes;if(Array.isArray(l))for(let c=0,h=l.length;c<h;c++){let d=l[c];r(t.shapes,d)}else r(t.shapes,l)}}if(this.isSkinnedMesh&&(n.bindMode=this.bindMode,n.bindMatrix=this.bindMatrix.toArray(),this.skeleton!==void 0&&(r(t.skeletons,this.skeleton),n.skeleton=this.skeleton.uuid)),this.material!==void 0)if(Array.isArray(this.material)){let o=[];for(let l=0,c=this.material.length;l<c;l++)o.push(r(t.materials,this.material[l]));n.material=o}else n.material=r(t.materials,this.material);if(this.children.length>0){n.children=[];for(let o=0;o<this.children.length;o++)n.children.push(this.children[o].toJSON(t).object)}if(this.animations.length>0){n.animations=[];for(let o=0;o<this.animations.length;o++){let l=this.animations[o];n.animations.push(r(t.animations,l))}}if(e){let o=a(t.geometries),l=a(t.materials),c=a(t.textures),h=a(t.images),d=a(t.shapes),u=a(t.skeletons),f=a(t.animations),p=a(t.nodes);o.length>0&&(i.geometries=o),l.length>0&&(i.materials=l),c.length>0&&(i.textures=c),h.length>0&&(i.images=h),d.length>0&&(i.shapes=d),u.length>0&&(i.skeletons=u),f.length>0&&(i.animations=f),p.length>0&&(i.nodes=p)}return i.object=n,i;function a(o){let l=[];for(let c in o){let h=o[c];delete h.metadata,l.push(h)}return l}}clone(t){return new this.constructor().copy(this,t)}copy(t,e=!0){if(this.name=t.name,this.up.copy(t.up),this.position.copy(t.position),this.rotation.order=t.rotation.order,this.quaternion.copy(t.quaternion),this.scale.copy(t.scale),this.pivot=t.pivot!==null?t.pivot.clone():null,this.matrix.copy(t.matrix),this.matrixWorld.copy(t.matrixWorld),this.matrixAutoUpdate=t.matrixAutoUpdate,this.matrixWorldAutoUpdate=t.matrixWorldAutoUpdate,this.matrixWorldNeedsUpdate=t.matrixWorldNeedsUpdate,this.layers.mask=t.layers.mask,this.visible=t.visible,this.castShadow=t.castShadow,this.receiveShadow=t.receiveShadow,this.frustumCulled=t.frustumCulled,this.renderOrder=t.renderOrder,this.static=t.static,this.animations=t.animations.slice(),this.userData=JSON.parse(JSON.stringify(t.userData)),e===!0)for(let i=0;i<t.children.length;i++){let n=t.children[i];this.add(n.clone())}return this}dispose(){this.dispatchEvent({type:"dispose"})}};ci.DEFAULT_UP=new Q(0,1,0);ci.DEFAULT_MATRIX_AUTO_UPDATE=!0;ci.DEFAULT_MATRIX_WORLD_AUTO_UPDATE=!0;var Wn=class extends ci{constructor(){super(),this.isGroup=!0,this.type="Group"}},Bp={type:"move"},Cs=class{constructor(){this._targetRay=null,this._grip=null,this._hand=null}getHandSpace(){return this._hand===null&&(this._hand=new Wn,this._hand.matrixAutoUpdate=!1,this._hand.visible=!1,this._hand.joints={},this._hand.inputState={pinching:!1}),this._hand}getTargetRaySpace(){return this._targetRay===null&&(this._targetRay=new Wn,this._targetRay.matrixAutoUpdate=!1,this._targetRay.visible=!1,this._targetRay.hasLinearVelocity=!1,this._targetRay.linearVelocity=new Q,this._targetRay.hasAngularVelocity=!1,this._targetRay.angularVelocity=new Q),this._targetRay}getGripSpace(){return this._grip===null&&(this._grip=new Wn,this._grip.matrixAutoUpdate=!1,this._grip.visible=!1,this._grip.hasLinearVelocity=!1,this._grip.linearVelocity=new Q,this._grip.hasAngularVelocity=!1,this._grip.angularVelocity=new Q,this._grip.eventsEnabled=!1),this._grip}dispatchEvent(t){return this._targetRay!==null&&this._targetRay.dispatchEvent(t),this._grip!==null&&this._grip.dispatchEvent(t),this._hand!==null&&this._hand.dispatchEvent(t),this}connect(t){if(t&&t.hand){let e=this._hand;if(e)for(let i of t.hand.values())this._getHandJoint(e,i)}return this.dispatchEvent({type:"connected",data:t}),this}disconnect(t){return this.dispatchEvent({type:"disconnected",data:t}),this._targetRay!==null&&(this._targetRay.visible=!1),this._grip!==null&&(this._grip.visible=!1),this._hand!==null&&(this._hand.visible=!1),this}update(t,e,i){let n=null,r=null,a=null,o=this._targetRay,l=this._grip,c=this._hand;if(t&&e.session.visibilityState!=="visible-blurred"){if(c&&t.hand){a=!0;for(let y of t.hand.values()){let m=e.getJointPose(y,i),g=this._getHandJoint(c,y);m!==null&&(g.matrix.fromArray(m.transform.matrix),g.matrix.decompose(g.position,g.rotation,g.scale),g.matrixWorldNeedsUpdate=!0,g.jointRadius=m.radius),g.visible=m!==null}let h=c.joints["index-finger-tip"],d=c.joints["thumb-tip"],u=h.position.distanceTo(d.position),f=.02,p=.005;c.inputState.pinching&&u>f+p?(c.inputState.pinching=!1,this.dispatchEvent({type:"pinchend",handedness:t.handedness,target:this})):!c.inputState.pinching&&u<=f-p&&(c.inputState.pinching=!0,this.dispatchEvent({type:"pinchstart",handedness:t.handedness,target:this}))}else l!==null&&t.gripSpace&&(r=e.getPose(t.gripSpace,i),r!==null&&(l.matrix.fromArray(r.transform.matrix),l.matrix.decompose(l.position,l.rotation,l.scale),l.matrixWorldNeedsUpdate=!0,r.linearVelocity?(l.hasLinearVelocity=!0,l.linearVelocity.copy(r.linearVelocity)):l.hasLinearVelocity=!1,r.angularVelocity?(l.hasAngularVelocity=!0,l.angularVelocity.copy(r.angularVelocity)):l.hasAngularVelocity=!1,l.eventsEnabled&&l.dispatchEvent({type:"gripUpdated",data:t,target:this})));o!==null&&(n=e.getPose(t.targetRaySpace,i),n===null&&r!==null&&(n=r),n!==null&&(o.matrix.fromArray(n.transform.matrix),o.matrix.decompose(o.position,o.rotation,o.scale),o.matrixWorldNeedsUpdate=!0,n.linearVelocity?(o.hasLinearVelocity=!0,o.linearVelocity.copy(n.linearVelocity)):o.hasLinearVelocity=!1,n.angularVelocity?(o.hasAngularVelocity=!0,o.angularVelocity.copy(n.angularVelocity)):o.hasAngularVelocity=!1,this.dispatchEvent(Bp)))}return o!==null&&(o.visible=n!==null),l!==null&&(l.visible=r!==null),c!==null&&(c.visible=a!==null),this}_getHandJoint(t,e){if(t.joints[e.jointName]===void 0){let i=new Wn;i.matrixAutoUpdate=!1,i.visible=!1,t.joints[e.jointName]=i,t.add(i)}return t.joints[e.jointName]}},Cd={aliceblue:15792383,antiquewhite:16444375,aqua:65535,aquamarine:8388564,azure:15794175,beige:16119260,bisque:16770244,black:0,blanchedalmond:16772045,blue:255,blueviolet:9055202,brown:10824234,burlywood:14596231,cadetblue:6266528,chartreuse:8388352,chocolate:13789470,coral:16744272,cornflowerblue:6591981,cornsilk:16775388,crimson:14423100,cyan:65535,darkblue:139,darkcyan:35723,darkgoldenrod:12092939,darkgray:11119017,darkgreen:25600,darkgrey:11119017,darkkhaki:12433259,darkmagenta:9109643,darkolivegreen:5597999,darkorange:16747520,darkorchid:10040012,darkred:9109504,darksalmon:15308410,darkseagreen:9419919,darkslateblue:4734347,darkslategray:3100495,darkslategrey:3100495,darkturquoise:52945,darkviolet:9699539,deeppink:16716947,deepskyblue:49151,dimgray:6908265,dimgrey:6908265,dodgerblue:2003199,firebrick:11674146,floralwhite:16775920,forestgreen:2263842,fuchsia:16711935,gainsboro:14474460,ghostwhite:16316671,gold:16766720,goldenrod:14329120,gray:8421504,green:32768,greenyellow:11403055,grey:8421504,honeydew:15794160,hotpink:16738740,indianred:13458524,indigo:4915330,ivory:16777200,khaki:15787660,lavender:15132410,lavenderblush:16773365,lawngreen:8190976,lemonchiffon:16775885,lightblue:11393254,lightcoral:15761536,lightcyan:14745599,lightgoldenrodyellow:16448210,lightgray:13882323,lightgreen:9498256,lightgrey:13882323,lightpink:16758465,lightsalmon:16752762,lightseagreen:2142890,lightskyblue:8900346,lightslategray:7833753,lightslategrey:7833753,lightsteelblue:11584734,lightyellow:16777184,lime:65280,limegreen:3329330,linen:16445670,magenta:16711935,maroon:8388608,mediumaquamarine:6737322,mediumblue:205,mediumorchid:12211667,mediumpurple:9662683,mediumseagreen:3978097,mediumslateblue:8087790,mediumspringgreen:64154,mediumturquoise:4772300,mediumvioletred:13047173,midnightblue:1644912,mintcream:16121850,mistyrose:16770273,moccasin:16770229,navajowhite:16768685,navy:128,oldlace:16643558,olive:8421376,olivedrab:7048739,orange:16753920,orangered:16729344,orchid:14315734,palegoldenrod:15657130,palegreen:10025880,paleturquoise:11529966,palevioletred:14381203,papayawhip:16773077,peachpuff:16767673,peru:13468991,pink:16761035,plum:14524637,powderblue:11591910,purple:8388736,rebeccapurple:6697881,red:16711680,rosybrown:12357519,royalblue:4286945,saddlebrown:9127187,salmon:16416882,sandybrown:16032864,seagreen:3050327,seashell:16774638,sienna:10506797,silver:12632256,skyblue:8900331,slateblue:6970061,slategray:7372944,slategrey:7372944,snow:16775930,springgreen:65407,steelblue:4620980,tan:13808780,teal:32896,thistle:14204888,tomato:16737095,turquoise:4251856,violet:15631086,wheat:16113331,white:16777215,whitesmoke:16119285,yellow:16776960,yellowgreen:10145074},on={h:0,s:0,l:0},Oa={h:0,s:0,l:0};function Dc(s,t,e){return e<0&&(e+=1),e>1&&(e-=1),e<1/6?s+(t-s)*6*e:e<1/2?t:e<2/3?s+(t-s)*6*(2/3-e):s}var qt=class{constructor(t,e,i){return this.isColor=!0,this.r=1,this.g=1,this.b=1,this.set(t,e,i)}set(t,e,i){if(e===void 0&&i===void 0){let n=t;n&&n.isColor?this.copy(n):typeof n=="number"?this.setHex(n):typeof n=="string"&&this.setStyle(n)}else this.setRGB(t,e,i);return this}setScalar(t){return this.r=t,this.g=t,this.b=t,this}setHex(t,e=je){return t=Math.floor(t),this.r=(t>>16&255)/255,this.g=(t>>8&255)/255,this.b=(t&255)/255,Yt.colorSpaceToWorking(this,e),this}setRGB(t,e,i,n=Yt.workingColorSpace){return this.r=t,this.g=e,this.b=i,Yt.colorSpaceToWorking(this,n),this}setHSL(t,e,i,n=Yt.workingColorSpace){if(t=Rp(t,1),e=Kt(e,0,1),i=Kt(i,0,1),e===0)this.r=this.g=this.b=i;else{let r=i<=.5?i*(1+e):i+e-i*e,a=2*i-r;this.r=Dc(a,r,t+1/3),this.g=Dc(a,r,t),this.b=Dc(a,r,t-1/3)}return Yt.colorSpaceToWorking(this,n),this}setStyle(t,e=je){function i(r){r!==void 0&&parseFloat(r)<1&&Ft("Color: Alpha component of "+t+" will be ignored.")}let n;if(n=/^(\w+)\(([^\)]*)\)/.exec(t)){let r,a=n[1],o=n[2];switch(a){case"rgb":case"rgba":if(r=/^\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(255,parseInt(r[1],10))/255,Math.min(255,parseInt(r[2],10))/255,Math.min(255,parseInt(r[3],10))/255,e);if(r=/^\s*(\d+)\%\s*,\s*(\d+)\%\s*,\s*(\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setRGB(Math.min(100,parseInt(r[1],10))/100,Math.min(100,parseInt(r[2],10))/100,Math.min(100,parseInt(r[3],10))/100,e);break;case"hsl":case"hsla":if(r=/^\s*(\d*\.?\d+)\s*,\s*(\d*\.?\d+)\%\s*,\s*(\d*\.?\d+)\%\s*(?:,\s*(\d*\.?\d+)\s*)?$/.exec(o))return i(r[4]),this.setHSL(parseFloat(r[1])/360,parseFloat(r[2])/100,parseFloat(r[3])/100,e);break;default:Ft("Color: Unknown color model "+t)}}else if(n=/^\#([A-Fa-f\d]+)$/.exec(t)){let r=n[1],a=r.length;if(a===3)return this.setRGB(parseInt(r.charAt(0),16)/15,parseInt(r.charAt(1),16)/15,parseInt(r.charAt(2),16)/15,e);if(a===6)return this.setHex(parseInt(r,16),e);Ft("Color: Invalid hex color "+t)}else if(t&&t.length>0)return this.setColorName(t,e);return this}setColorName(t,e=je){let i=Cd[t.toLowerCase()];return i!==void 0?this.setHex(i,e):Ft("Color: Unknown color "+t),this}clone(){return new this.constructor(this.r,this.g,this.b)}copy(t){return this.r=t.r,this.g=t.g,this.b=t.b,this}copySRGBToLinear(t){return this.r=$i(t.r),this.g=$i(t.g),this.b=$i(t.b),this}copyLinearToSRGB(t){return this.r=ws(t.r),this.g=ws(t.g),this.b=ws(t.b),this}convertSRGBToLinear(){return this.copySRGBToLinear(this),this}convertLinearToSRGB(){return this.copyLinearToSRGB(this),this}getHex(t=je){return Yt.workingToColorSpace(Ue.copy(this),t),Math.round(Kt(Ue.r*255,0,255))*65536+Math.round(Kt(Ue.g*255,0,255))*256+Math.round(Kt(Ue.b*255,0,255))}getHexString(t=je){return("000000"+this.getHex(t).toString(16)).slice(-6)}getHSL(t,e=Yt.workingColorSpace){Yt.workingToColorSpace(Ue.copy(this),e);let i=Ue.r,n=Ue.g,r=Ue.b,a=Math.max(i,n,r),o=Math.min(i,n,r),l,c,h=(o+a)/2;if(o===a)l=0,c=0;else{let d=a-o;switch(c=h<=.5?d/(a+o):d/(2-a-o),a){case i:l=(n-r)/d+(n<r?6:0);break;case n:l=(r-i)/d+2;break;case r:l=(i-n)/d+4;break}l/=6}return t.h=l,t.s=c,t.l=h,t}getRGB(t,e=Yt.workingColorSpace){return Yt.workingToColorSpace(Ue.copy(this),e),t.r=Ue.r,t.g=Ue.g,t.b=Ue.b,t}getStyle(t=je){Yt.workingToColorSpace(Ue.copy(this),t);let e=Ue.r,i=Ue.g,n=Ue.b;return t!==je?`color(${t} ${e.toFixed(3)} ${i.toFixed(3)} ${n.toFixed(3)})`:`rgb(${Math.round(e*255)},${Math.round(i*255)},${Math.round(n*255)})`}offsetHSL(t,e,i){return this.getHSL(on),this.setHSL(on.h+t,on.s+e,on.l+i)}add(t){return this.r+=t.r,this.g+=t.g,this.b+=t.b,this}addColors(t,e){return this.r=t.r+e.r,this.g=t.g+e.g,this.b=t.b+e.b,this}addScalar(t){return this.r+=t,this.g+=t,this.b+=t,this}sub(t){return this.r=Math.max(0,this.r-t.r),this.g=Math.max(0,this.g-t.g),this.b=Math.max(0,this.b-t.b),this}multiply(t){return this.r*=t.r,this.g*=t.g,this.b*=t.b,this}multiplyScalar(t){return this.r*=t,this.g*=t,this.b*=t,this}lerp(t,e){return this.r+=(t.r-this.r)*e,this.g+=(t.g-this.g)*e,this.b+=(t.b-this.b)*e,this}lerpColors(t,e,i){return this.r=t.r+(e.r-t.r)*i,this.g=t.g+(e.g-t.g)*i,this.b=t.b+(e.b-t.b)*i,this}lerpHSL(t,e){this.getHSL(on),t.getHSL(Oa);let i=Cc(on.h,Oa.h,e),n=Cc(on.s,Oa.s,e),r=Cc(on.l,Oa.l,e);return this.setHSL(i,n,r),this}setFromVector3(t){return this.r=t.x,this.g=t.y,this.b=t.z,this}applyMatrix3(t){let e=this.r,i=this.g,n=this.b,r=t.elements;return this.r=r[0]*e+r[3]*i+r[6]*n,this.g=r[1]*e+r[4]*i+r[7]*n,this.b=r[2]*e+r[5]*i+r[8]*n,this}equals(t){return t.r===this.r&&t.g===this.g&&t.b===this.b}fromArray(t,e=0){return this.r=t[e],this.g=t[e+1],this.b=t[e+2],this}toArray(t=[],e=0){return t[e]=this.r,t[e+1]=this.g,t[e+2]=this.b,t}fromBufferAttribute(t,e){return this.r=t.getX(e),this.g=t.getY(e),this.b=t.getZ(e),this}toJSON(){return this.getHex()}*[Symbol.iterator](){yield this.r,yield this.g,yield this.b}},Ue=new qt;qt.NAMES=Cd;var mn=class extends ci{constructor(){super(),this.isScene=!0,this.type="Scene",this.background=null,this.environment=null,this.fog=null,this.backgroundBlurriness=0,this.backgroundIntensity=1,this.backgroundRotation=new pn,this.environmentIntensity=1,this.environmentRotation=new pn,this.overrideMaterial=null,typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}copy(t,e){return super.copy(t,e),t.background!==null&&(this.background=t.background.clone()),t.environment!==null&&(this.environment=t.environment.clone()),t.fog!==null&&(this.fog=t.fog.clone()),this.backgroundBlurriness=t.backgroundBlurriness,this.backgroundIntensity=t.backgroundIntensity,this.backgroundRotation.copy(t.backgroundRotation),this.environmentIntensity=t.environmentIntensity,this.environmentRotation.copy(t.environmentRotation),t.overrideMaterial!==null&&(this.overrideMaterial=t.overrideMaterial.clone()),this.matrixAutoUpdate=t.matrixAutoUpdate,this}toJSON(t){let e=super.toJSON(t);return this.fog!==null&&(e.object.fog=this.fog.toJSON()),e.object.backgroundBlurriness=this.backgroundBlurriness,e.object.backgroundIntensity=this.backgroundIntensity,e.object.backgroundRotation=this.backgroundRotation.toArray(),e.object.environmentIntensity=this.environmentIntensity,e.object.environmentRotation=this.environmentRotation.toArray(),e}},mi=new Q,qi=new Q,Nc=new Q,Yi=new Q,ms=new Q,gs=new Q,Yu=new Q,Uc=new Q,Oc=new Q,kc=new Q,Bc=new he,Vc=new he,zc=new he,un=class s{constructor(t=new Q,e=new Q,i=new Q){this.a=t,this.b=e,this.c=i}static getNormal(t,e,i,n){n.subVectors(i,e),mi.subVectors(t,e),n.cross(mi);let r=n.lengthSq();return r>0?n.multiplyScalar(1/Math.sqrt(r)):n.set(0,0,0)}static getBarycoord(t,e,i,n,r){mi.subVectors(n,e),qi.subVectors(i,e),Nc.subVectors(t,e);let a=mi.dot(mi),o=mi.dot(qi),l=mi.dot(Nc),c=qi.dot(qi),h=qi.dot(Nc),d=a*c-o*o;if(d===0)return r.set(0,0,0),null;let u=1/d,f=(c*l-o*h)*u,p=(a*h-o*l)*u;return r.set(1-f-p,p,f)}static containsPoint(t,e,i,n){return this.getBarycoord(t,e,i,n,Yi)===null?!1:Yi.x>=0&&Yi.y>=0&&Yi.x+Yi.y<=1}static getInterpolation(t,e,i,n,r,a,o,l){return this.getBarycoord(t,e,i,n,Yi)===null?(l.x=0,l.y=0,"z"in l&&(l.z=0),"w"in l&&(l.w=0),null):(l.setScalar(0),l.addScaledVector(r,Yi.x),l.addScaledVector(a,Yi.y),l.addScaledVector(o,Yi.z),l)}static getInterpolatedAttribute(t,e,i,n,r,a){return Bc.setScalar(0),Vc.setScalar(0),zc.setScalar(0),Bc.fromBufferAttribute(t,e),Vc.fromBufferAttribute(t,i),zc.fromBufferAttribute(t,n),a.setScalar(0),a.addScaledVector(Bc,r.x),a.addScaledVector(Vc,r.y),a.addScaledVector(zc,r.z),a}static isFrontFacing(t,e,i,n){return mi.subVectors(i,e),qi.subVectors(t,e),mi.cross(qi).dot(n)<0}set(t,e,i){return this.a.copy(t),this.b.copy(e),this.c.copy(i),this}setFromPointsAndIndices(t,e,i,n){return this.a.copy(t[e]),this.b.copy(t[i]),this.c.copy(t[n]),this}setFromAttributeAndIndices(t,e,i,n){return this.a.fromBufferAttribute(t,e),this.b.fromBufferAttribute(t,i),this.c.fromBufferAttribute(t,n),this}clone(){return new this.constructor().copy(this)}copy(t){return this.a.copy(t.a),this.b.copy(t.b),this.c.copy(t.c),this}getArea(){return mi.subVectors(this.c,this.b),qi.subVectors(this.a,this.b),mi.cross(qi).length()*.5}getMidpoint(t){return t.addVectors(this.a,this.b).add(this.c).multiplyScalar(1/3)}getNormal(t){return s.getNormal(this.a,this.b,this.c,t)}getPlane(t){return t.setFromCoplanarPoints(this.a,this.b,this.c)}getBarycoord(t,e){return s.getBarycoord(t,this.a,this.b,this.c,e)}getInterpolation(t,e,i,n,r){return s.getInterpolation(t,this.a,this.b,this.c,e,i,n,r)}containsPoint(t){return s.containsPoint(t,this.a,this.b,this.c)}isFrontFacing(t){return s.isFrontFacing(this.a,this.b,this.c,t)}intersectsBox(t){return t.intersectsTriangle(this)}closestPointToPoint(t,e){let i=this.a,n=this.b,r=this.c,a,o;ms.subVectors(n,i),gs.subVectors(r,i),Uc.subVectors(t,i);let l=ms.dot(Uc),c=gs.dot(Uc);if(l<=0&&c<=0)return e.copy(i);Oc.subVectors(t,n);let h=ms.dot(Oc),d=gs.dot(Oc);if(h>=0&&d<=h)return e.copy(n);let u=l*d-h*c;if(u<=0&&l>=0&&h<=0)return a=l/(l-h),e.copy(i).addScaledVector(ms,a);kc.subVectors(t,r);let f=ms.dot(kc),p=gs.dot(kc);if(p>=0&&f<=p)return e.copy(r);let y=f*c-l*p;if(y<=0&&c>=0&&p<=0)return o=c/(c-p),e.copy(i).addScaledVector(gs,o);let m=h*p-f*d;if(m<=0&&d-h>=0&&f-p>=0)return Yu.subVectors(r,n),o=(d-h)/(d-h+(f-p)),e.copy(n).addScaledVector(Yu,o);let g=1/(m+y+u);return a=y*g,o=u*g,e.copy(i).addScaledVector(ms,a).addScaledVector(gs,o)}equals(t){return t.a.equals(this.a)&&t.b.equals(this.b)&&t.c.equals(this.c)}},gn=class{constructor(t=new Q(1/0,1/0,1/0),e=new Q(-1/0,-1/0,-1/0)){this.isBox3=!0,this.min=t,this.max=e}set(t,e){return this.min.copy(t),this.max.copy(e),this}setFromArray(t){this.makeEmpty();for(let e=0,i=t.length;e<i;e+=3)this.expandByPoint(gi.fromArray(t,e));return this}setFromBufferAttribute(t){this.makeEmpty();for(let e=0,i=t.count;e<i;e++)this.expandByPoint(gi.fromBufferAttribute(t,e));return this}setFromPoints(t){this.makeEmpty();for(let e=0,i=t.length;e<i;e++)this.expandByPoint(t[e]);return this}setFromCenterAndSize(t,e){let i=gi.copy(e).multiplyScalar(.5);return this.min.copy(t).sub(i),this.max.copy(t).add(i),this}setFromObject(t,e=!1){return this.makeEmpty(),this.expandByObject(t,e)}clone(){return new this.constructor().copy(this)}copy(t){return this.min.copy(t.min),this.max.copy(t.max),this}makeEmpty(){return this.min.x=this.min.y=this.min.z=1/0,this.max.x=this.max.y=this.max.z=-1/0,this}isEmpty(){return this.max.x<this.min.x||this.max.y<this.min.y||this.max.z<this.min.z}getCenter(t){return this.isEmpty()?t.set(0,0,0):t.addVectors(this.min,this.max).multiplyScalar(.5)}getSize(t){return this.isEmpty()?t.set(0,0,0):t.subVectors(this.max,this.min)}expandByPoint(t){return this.min.min(t),this.max.max(t),this}expandByVector(t){return this.min.sub(t),this.max.add(t),this}expandByScalar(t){return this.min.addScalar(-t),this.max.addScalar(t),this}expandByObject(t,e=!1){t.updateWorldMatrix(!1,!1);let i=t.geometry;if(i!==void 0){let r=i.getAttribute("position");if(e===!0&&r!==void 0&&t.isInstancedMesh!==!0)for(let a=0,o=r.count;a<o;a++)t.isMesh===!0?t.getVertexPosition(a,gi):gi.fromBufferAttribute(r,a),gi.applyMatrix4(t.matrixWorld),this.expandByPoint(gi);else t.boundingBox!==void 0?(t.boundingBox===null&&t.computeBoundingBox(),ka.copy(t.boundingBox)):(i.boundingBox===null&&i.computeBoundingBox(),ka.copy(i.boundingBox)),ka.applyMatrix4(t.matrixWorld),this.union(ka)}let n=t.children;for(let r=0,a=n.length;r<a;r++)this.expandByObject(n[r],e);return this}containsPoint(t){return t.x>=this.min.x&&t.x<=this.max.x&&t.y>=this.min.y&&t.y<=this.max.y&&t.z>=this.min.z&&t.z<=this.max.z}containsBox(t){return this.min.x<=t.min.x&&t.max.x<=this.max.x&&this.min.y<=t.min.y&&t.max.y<=this.max.y&&this.min.z<=t.min.z&&t.max.z<=this.max.z}getParameter(t,e){return e.set((t.x-this.min.x)/(this.max.x-this.min.x),(t.y-this.min.y)/(this.max.y-this.min.y),(t.z-this.min.z)/(this.max.z-this.min.z))}intersectsBox(t){return t.max.x>=this.min.x&&t.min.x<=this.max.x&&t.max.y>=this.min.y&&t.min.y<=this.max.y&&t.max.z>=this.min.z&&t.min.z<=this.max.z}intersectsSphere(t){return this.clampPoint(t.center,gi),gi.distanceToSquared(t.center)<=t.radius*t.radius}intersectsPlane(t){let e,i;return t.normal.x>0?(e=t.normal.x*this.min.x,i=t.normal.x*this.max.x):(e=t.normal.x*this.max.x,i=t.normal.x*this.min.x),t.normal.y>0?(e+=t.normal.y*this.min.y,i+=t.normal.y*this.max.y):(e+=t.normal.y*this.max.y,i+=t.normal.y*this.min.y),t.normal.z>0?(e+=t.normal.z*this.min.z,i+=t.normal.z*this.max.z):(e+=t.normal.z*this.max.z,i+=t.normal.z*this.min.z),e<=-t.constant&&i>=-t.constant}intersectsTriangle(t){if(this.isEmpty())return!1;this.getCenter(lr),Ba.subVectors(this.max,lr),xs.subVectors(t.a,lr),ys.subVectors(t.b,lr),_s.subVectors(t.c,lr),ln.subVectors(ys,xs),cn.subVectors(_s,ys),Vn.subVectors(xs,_s);let e=[0,-ln.z,ln.y,0,-cn.z,cn.y,0,-Vn.z,Vn.y,ln.z,0,-ln.x,cn.z,0,-cn.x,Vn.z,0,-Vn.x,-ln.y,ln.x,0,-cn.y,cn.x,0,-Vn.y,Vn.x,0];return!Gc(e,xs,ys,_s,Ba)||(e=[1,0,0,0,1,0,0,0,1],!Gc(e,xs,ys,_s,Ba))?!1:(Va.crossVectors(ln,cn),e=[Va.x,Va.y,Va.z],Gc(e,xs,ys,_s,Ba))}clampPoint(t,e){return e.copy(t).clamp(this.min,this.max)}distanceToPoint(t){return this.clampPoint(t,gi).distanceTo(t)}getBoundingSphere(t){return this.isEmpty()?t.makeEmpty():(this.getCenter(t.center),t.radius=this.getSize(gi).length()*.5),t}intersect(t){return this.min.max(t.min),this.max.min(t.max),this.isEmpty()&&this.makeEmpty(),this}union(t){return this.min.min(t.min),this.max.max(t.max),this}applyMatrix4(t){return this.isEmpty()?this:(Ki[0].set(this.min.x,this.min.y,this.min.z).applyMatrix4(t),Ki[1].set(this.min.x,this.min.y,this.max.z).applyMatrix4(t),Ki[2].set(this.min.x,this.max.y,this.min.z).applyMatrix4(t),Ki[3].set(this.min.x,this.max.y,this.max.z).applyMatrix4(t),Ki[4].set(this.max.x,this.min.y,this.min.z).applyMatrix4(t),Ki[5].set(this.max.x,this.min.y,this.max.z).applyMatrix4(t),Ki[6].set(this.max.x,this.max.y,this.min.z).applyMatrix4(t),Ki[7].set(this.max.x,this.max.y,this.max.z).applyMatrix4(t),this.setFromPoints(Ki),this)}translate(t){return this.min.add(t),this.max.add(t),this}equals(t){return t.min.equals(this.min)&&t.max.equals(this.max)}toJSON(){return{min:this.min.toArray(),max:this.max.toArray()}}fromJSON(t){return this.min.fromArray(t.min),this.max.fromArray(t.max),this}},Ki=[new Q,new Q,new Q,new Q,new Q,new Q,new Q,new Q],gi=new Q,ka=new gn,xs=new Q,ys=new Q,_s=new Q,ln=new Q,cn=new Q,Vn=new Q,lr=new Q,Ba=new Q,Va=new Q,zn=new Q;function Gc(s,t,e,i,n){for(let r=0,a=s.length-3;r<=a;r+=3){zn.fromArray(s,r);let o=n.x*Math.abs(zn.x)+n.y*Math.abs(zn.y)+n.z*Math.abs(zn.z),l=t.dot(zn),c=e.dot(zn),h=i.dot(zn);if(Math.max(-Math.max(l,c,h),Math.min(l,c,h))>o)return!1}return!0}var Se=new Q,za=new Wt,Vp=0,Re=class extends Di{constructor(t,e,i=!1){if(super(),Array.isArray(t))throw new TypeError("THREE.BufferAttribute: array should be a Typed Array.");this.isBufferAttribute=!0,Object.defineProperty(this,"id",{value:Vp++}),this.name="",this.array=t,this.itemSize=e,this.count=t!==void 0?t.length/e:0,this.normalized=i,this.usage=Sh,this.updateRanges=[],this.gpuType=ii,this.version=0}onUploadCallback(){}set needsUpdate(t){t===!0&&this.version++}setUsage(t){return this.usage=t,this}addUpdateRange(t,e){this.updateRanges.push({start:t,count:e})}clearUpdateRanges(){this.updateRanges.length=0}copy(t){return this.name=t.name,this.array=new t.array.constructor(t.array),this.itemSize=t.itemSize,this.count=t.count,this.normalized=t.normalized,this.usage=t.usage,this.gpuType=t.gpuType,this}copyAt(t,e,i){t*=this.itemSize,i*=e.itemSize;for(let n=0,r=this.itemSize;n<r;n++)this.array[t+n]=e.array[i+n];return this}copyArray(t){return this.array.set(t),this}applyMatrix3(t){if(this.itemSize===2)for(let e=0,i=this.count;e<i;e++)za.fromBufferAttribute(this,e),za.applyMatrix3(t),this.setXY(e,za.x,za.y);else if(this.itemSize===3)for(let e=0,i=this.count;e<i;e++)Se.fromBufferAttribute(this,e),Se.applyMatrix3(t),this.setXYZ(e,Se.x,Se.y,Se.z);return this}applyMatrix4(t){for(let e=0,i=this.count;e<i;e++)Se.fromBufferAttribute(this,e),Se.applyMatrix4(t),this.setXYZ(e,Se.x,Se.y,Se.z);return this}applyNormalMatrix(t){for(let e=0,i=this.count;e<i;e++)Se.fromBufferAttribute(this,e),Se.applyNormalMatrix(t),this.setXYZ(e,Se.x,Se.y,Se.z);return this}transformDirection(t){for(let e=0,i=this.count;e<i;e++)Se.fromBufferAttribute(this,e),Se.transformDirection(t),this.setXYZ(e,Se.x,Se.y,Se.z);return this}set(t,e=0){return this.array.set(t,e),this}getComponent(t,e){let i=this.array[t*this.itemSize+e];return this.normalized&&(i=Pi(i,this.array)),i}setComponent(t,e,i){return this.normalized&&(i=re(i,this.array)),this.array[t*this.itemSize+e]=i,this}getX(t){let e=this.array[t*this.itemSize];return this.normalized&&(e=Pi(e,this.array)),e}setX(t,e){return this.normalized&&(e=re(e,this.array)),this.array[t*this.itemSize]=e,this}getY(t){let e=this.array[t*this.itemSize+1];return this.normalized&&(e=Pi(e,this.array)),e}setY(t,e){return this.normalized&&(e=re(e,this.array)),this.array[t*this.itemSize+1]=e,this}getZ(t){let e=this.array[t*this.itemSize+2];return this.normalized&&(e=Pi(e,this.array)),e}setZ(t,e){return this.normalized&&(e=re(e,this.array)),this.array[t*this.itemSize+2]=e,this}getW(t){let e=this.array[t*this.itemSize+3];return this.normalized&&(e=Pi(e,this.array)),e}setW(t,e){return this.normalized&&(e=re(e,this.array)),this.array[t*this.itemSize+3]=e,this}setXY(t,e,i){return t*=this.itemSize,this.normalized&&(e=re(e,this.array),i=re(i,this.array)),this.array[t+0]=e,this.array[t+1]=i,this}setXYZ(t,e,i,n){return t*=this.itemSize,this.normalized&&(e=re(e,this.array),i=re(i,this.array),n=re(n,this.array)),this.array[t+0]=e,this.array[t+1]=i,this.array[t+2]=n,this}setXYZW(t,e,i,n,r){return t*=this.itemSize,this.normalized&&(e=re(e,this.array),i=re(i,this.array),n=re(n,this.array),r=re(r,this.array)),this.array[t+0]=e,this.array[t+1]=i,this.array[t+2]=n,this.array[t+3]=r,this}onUpload(t){return this.onUploadCallback=t,this}clone(){return new this.constructor(this.array,this.itemSize).copy(this)}toJSON(){let t={itemSize:this.itemSize,type:this.array.constructor.name,array:Array.from(this.array),normalized:this.normalized};return t.name=this.name,t.usage=this.usage,t.gpuType=this.gpuType,t}dispose(){this.dispatchEvent({type:"dispose"})}};var xr=class extends Re{constructor(t,e,i){super(new Uint16Array(t),e,i)}};var yr=class extends Re{constructor(t,e,i){super(new Uint32Array(t),e,i)}};var li=class extends Re{constructor(t,e,i){super(new Float32Array(t),e,i)}},zp=new gn,cr=new Q,Hc=new Q,xn=class{constructor(t=new Q,e=-1){this.isSphere=!0,this.center=t,this.radius=e}set(t,e){return this.center.copy(t),this.radius=e,this}setFromPoints(t,e){let i=this.center;e!==void 0?i.copy(e):zp.setFromPoints(t).getCenter(i);let n=0;for(let r=0,a=t.length;r<a;r++)n=Math.max(n,i.distanceToSquared(t[r]));return this.radius=Math.sqrt(n),this}copy(t){return this.center.copy(t.center),this.radius=t.radius,this}isEmpty(){return this.radius<0}makeEmpty(){return this.center.set(0,0,0),this.radius=-1,this}containsPoint(t){return t.distanceToSquared(this.center)<=this.radius*this.radius}distanceToPoint(t){return t.distanceTo(this.center)-this.radius}intersectsSphere(t){let e=this.radius+t.radius;return t.center.distanceToSquared(this.center)<=e*e}intersectsBox(t){return t.intersectsSphere(this)}intersectsPlane(t){return Math.abs(t.distanceToPoint(this.center))<=this.radius}clampPoint(t,e){let i=this.center.distanceToSquared(t);return e.copy(t),i>this.radius*this.radius&&(e.sub(this.center).normalize(),e.multiplyScalar(this.radius).add(this.center)),e}getBoundingBox(t){return this.isEmpty()?(t.makeEmpty(),t):(t.set(this.center,this.center),t.expandByScalar(this.radius),t)}applyMatrix4(t){return this.center.applyMatrix4(t),this.radius=this.radius*t.getMaxScaleOnAxis(),this}translate(t){return this.center.add(t),this}expandByPoint(t){if(this.isEmpty())return this.center.copy(t),this.radius=0,this;cr.subVectors(t,this.center);let e=cr.lengthSq();if(e>this.radius*this.radius){let i=Math.sqrt(e),n=(i-this.radius)*.5;this.center.addScaledVector(cr,n/i),this.radius+=n}return this}union(t){return t.isEmpty()?this:this.isEmpty()?(this.copy(t),this):(this.center.equals(t.center)===!0?this.radius=Math.max(this.radius,t.radius):(Hc.subVectors(t.center,this.center).setLength(t.radius),this.expandByPoint(cr.copy(t.center).add(Hc)),this.expandByPoint(cr.copy(t.center).sub(Hc))),this)}equals(t){return t.center.equals(this.center)&&t.radius===this.radius}clone(){return new this.constructor().copy(this)}toJSON(){return{radius:this.radius,center:this.center.toArray()}}fromJSON(t){return this.radius=t.radius,this.center.fromArray(t.center),this}},Gp=0,oi=new jt,Wc=new ci,vs=new Q,Je=new gn,hr=new gn,Ce=new Q,Xe=class s extends Di{constructor(){super(),this.isBufferGeometry=!0,Object.defineProperty(this,"id",{value:Gp++}),this.uuid=dn(),this.name="",this.type="BufferGeometry",this.index=null,this.indirect=null,this.indirectOffset=0,this.attributes={},this.morphAttributes={},this.morphTargetsRelative=!1,this.groups=[],this.boundingBox=null,this.boundingSphere=null,this.drawRange={start:0,count:1/0},this.userData={},this._transformed=!1}getIndex(){return this.index}setIndex(t){return Array.isArray(t)?this.index=new(Ap(t)?yr:xr)(t,1):this.index=t,this}setIndirect(t,e=0){return this.indirect=t,this.indirectOffset=e,this}getIndirect(){return this.indirect}getAttribute(t){return this.attributes[t]}setAttribute(t,e){return this.attributes[t]=e,this}deleteAttribute(t){return delete this.attributes[t],this}hasAttribute(t){return this.attributes[t]!==void 0}addGroup(t,e,i=0){this.groups.push({start:t,count:e,materialIndex:i})}clearGroups(){this.groups=[]}setDrawRange(t,e){this.drawRange.start=t,this.drawRange.count=e}applyMatrix4(t){let e=this.attributes.position;e!==void 0&&(e.applyMatrix4(t),e.needsUpdate=!0);let i=this.attributes.normal;if(i!==void 0){let r=new Ot().getNormalMatrix(t);i.applyNormalMatrix(r),i.needsUpdate=!0}let n=this.attributes.tangent;return n!==void 0&&(n.transformDirection(t),n.needsUpdate=!0),this.boundingBox!==null&&this.computeBoundingBox(),this.boundingSphere!==null&&this.computeBoundingSphere(),this._transformed=!0,this}applyQuaternion(t){return oi.makeRotationFromQuaternion(t),this.applyMatrix4(oi),this}rotateX(t){return oi.makeRotationX(t),this.applyMatrix4(oi),this}rotateY(t){return oi.makeRotationY(t),this.applyMatrix4(oi),this}rotateZ(t){return oi.makeRotationZ(t),this.applyMatrix4(oi),this}translate(t,e,i){return oi.makeTranslation(t,e,i),this.applyMatrix4(oi),this}scale(t,e,i){return oi.makeScale(t,e,i),this.applyMatrix4(oi),this}lookAt(t){return Wc.lookAt(t),Wc.updateMatrix(),this.applyMatrix4(Wc.matrix),this}center(){return this.computeBoundingBox(),this.boundingBox.getCenter(vs).negate(),this.translate(vs.x,vs.y,vs.z),this}setFromPoints(t){let e=this.getAttribute("position");if(e===void 0){let i=[];for(let n=0,r=t.length;n<r;n++){let a=t[n];i.push(a.x,a.y,a.z||0)}this.setAttribute("position",new li(i,3))}else{let i=Math.min(t.length,e.count);for(let n=0;n<i;n++){let r=t[n];e.setXYZ(n,r.x,r.y,r.z||0)}t.length>e.count&&Ft("BufferGeometry: Buffer size too small for points data. Use .dispose() and create a new geometry."),e.needsUpdate=!0}return this}computeBoundingBox(){this.boundingBox===null&&(this.boundingBox=new gn);let t=this.attributes.position,e=this.morphAttributes.position;if(t&&t.isGLBufferAttribute){Ut("BufferGeometry.computeBoundingBox(): GLBufferAttribute requires a manual bounding box.",this),this.boundingBox.set(new Q(-1/0,-1/0,-1/0),new Q(1/0,1/0,1/0));return}if(t!==void 0){if(this.boundingBox.setFromBufferAttribute(t),e)for(let i=0,n=e.length;i<n;i++){let r=e[i];Je.setFromBufferAttribute(r),this.morphTargetsRelative?(Ce.addVectors(this.boundingBox.min,Je.min),this.boundingBox.expandByPoint(Ce),Ce.addVectors(this.boundingBox.max,Je.max),this.boundingBox.expandByPoint(Ce)):(this.boundingBox.expandByPoint(Je.min),this.boundingBox.expandByPoint(Je.max))}}else this.boundingBox.makeEmpty();(isNaN(this.boundingBox.min.x)||isNaN(this.boundingBox.min.y)||isNaN(this.boundingBox.min.z))&&Ut('BufferGeometry.computeBoundingBox(): Computed min/max have NaN values. The "position" attribute is likely to have NaN values.',this)}computeBoundingSphere(){this.boundingSphere===null&&(this.boundingSphere=new xn);let t=this.attributes.position,e=this.morphAttributes.position;if(t&&t.isGLBufferAttribute){Ut("BufferGeometry.computeBoundingSphere(): GLBufferAttribute requires a manual bounding sphere.",this),this.boundingSphere.set(new Q,1/0);return}if(t){let i=this.boundingSphere.center;if(Je.setFromBufferAttribute(t),e)for(let r=0,a=e.length;r<a;r++){let o=e[r];hr.setFromBufferAttribute(o),this.morphTargetsRelative?(Ce.addVectors(Je.min,hr.min),Je.expandByPoint(Ce),Ce.addVectors(Je.max,hr.max),Je.expandByPoint(Ce)):(Je.expandByPoint(hr.min),Je.expandByPoint(hr.max))}Je.getCenter(i);let n=0;for(let r=0,a=t.count;r<a;r++)Ce.fromBufferAttribute(t,r),n=Math.max(n,i.distanceToSquared(Ce));if(e)for(let r=0,a=e.length;r<a;r++){let o=e[r],l=this.morphTargetsRelative;for(let c=0,h=o.count;c<h;c++)Ce.fromBufferAttribute(o,c),l&&(vs.fromBufferAttribute(t,c),Ce.add(vs)),n=Math.max(n,i.distanceToSquared(Ce))}this.boundingSphere.radius=Math.sqrt(n),isNaN(this.boundingSphere.radius)&&Ut('BufferGeometry.computeBoundingSphere(): Computed radius is NaN. The "position" attribute is likely to have NaN values.',this)}}computeTangents(){let t=this.index,e=this.attributes;if(t===null||e.position===void 0||e.normal===void 0||e.uv===void 0){Ut("BufferGeometry: .computeTangents() failed. Missing required attributes (index, position, normal or uv)");return}let i=e.position,n=e.normal,r=e.uv,a=this.getAttribute("tangent");(a===void 0||a.count!==i.count)&&(a=new Re(new Float32Array(4*i.count),4),this.setAttribute("tangent",a));let o=[],l=[];for(let S=0;S<i.count;S++)o[S]=new Q,l[S]=new Q;let c=new Q,h=new Q,d=new Q,u=new Wt,f=new Wt,p=new Wt,y=new Q,m=new Q;function g(S,R,B){c.fromBufferAttribute(i,S),h.fromBufferAttribute(i,R),d.fromBufferAttribute(i,B),u.fromBufferAttribute(r,S),f.fromBufferAttribute(r,R),p.fromBufferAttribute(r,B),h.sub(c),d.sub(c),f.sub(u),p.sub(u);let z=1/(f.x*p.y-p.x*f.y);isFinite(z)&&(y.copy(h).multiplyScalar(p.y).addScaledVector(d,-f.y).multiplyScalar(z),m.copy(d).multiplyScalar(f.x).addScaledVector(h,-p.x).multiplyScalar(z),o[S].add(y),o[R].add(y),o[B].add(y),l[S].add(m),l[R].add(m),l[B].add(m))}let E=this.groups;E.length===0&&(E=[{start:0,count:t.count}]);for(let S=0,R=E.length;S<R;++S){let B=E[S],z=B.start,W=B.count;for(let $=z,V=z+W;$<V;$+=3)g(t.getX($+0),t.getX($+1),t.getX($+2))}let L=new Q,b=new Q,T=new Q,M=new Q;function F(S){T.fromBufferAttribute(n,S),M.copy(T);let R=o[S];L.copy(R),L.sub(T.multiplyScalar(T.dot(R))).normalize(),b.crossVectors(M,R);let z=b.dot(l[S])<0?-1:1;a.setXYZW(S,L.x,L.y,L.z,z)}for(let S=0,R=E.length;S<R;++S){let B=E[S],z=B.start,W=B.count;for(let $=z,V=z+W;$<V;$+=3)F(t.getX($+0)),F(t.getX($+1)),F(t.getX($+2))}this._transformed=!0}computeVertexNormals(){let t=this.index,e=this.getAttribute("position");if(e!==void 0){let i=this.getAttribute("normal");if(i===void 0||i.count!==e.count)i=new Re(new Float32Array(e.count*3),3),this.setAttribute("normal",i);else for(let u=0,f=i.count;u<f;u++)i.setXYZ(u,0,0,0);let n=new Q,r=new Q,a=new Q,o=new Q,l=new Q,c=new Q,h=new Q,d=new Q;if(t)for(let u=0,f=t.count;u<f;u+=3){let p=t.getX(u+0),y=t.getX(u+1),m=t.getX(u+2);n.fromBufferAttribute(e,p),r.fromBufferAttribute(e,y),a.fromBufferAttribute(e,m),h.subVectors(a,r),d.subVectors(n,r),h.cross(d),o.fromBufferAttribute(i,p),l.fromBufferAttribute(i,y),c.fromBufferAttribute(i,m),o.add(h),l.add(h),c.add(h),i.setXYZ(p,o.x,o.y,o.z),i.setXYZ(y,l.x,l.y,l.z),i.setXYZ(m,c.x,c.y,c.z)}else for(let u=0,f=e.count;u<f;u+=3)n.fromBufferAttribute(e,u+0),r.fromBufferAttribute(e,u+1),a.fromBufferAttribute(e,u+2),h.subVectors(a,r),d.subVectors(n,r),h.cross(d),i.setXYZ(u+0,h.x,h.y,h.z),i.setXYZ(u+1,h.x,h.y,h.z),i.setXYZ(u+2,h.x,h.y,h.z);this.normalizeNormals(),i.needsUpdate=!0}}normalizeNormals(){let t=this.attributes.normal;for(let e=0,i=t.count;e<i;e++)Ce.fromBufferAttribute(t,e),Ce.normalize(),t.setXYZ(e,Ce.x,Ce.y,Ce.z)}toNonIndexed(){function t(o,l){let c=o.array,h=o.itemSize,d=o.normalized,u=new c.constructor(l.length*h),f=0,p=0;for(let y=0,m=l.length;y<m;y++){o.isInterleavedBufferAttribute?f=l[y]*o.data.stride+o.offset:f=l[y]*h;for(let g=0;g<h;g++)u[p++]=c[f++]}return new Re(u,h,d)}if(this.index===null)return Ft("BufferGeometry.toNonIndexed(): BufferGeometry is already non-indexed."),this;let e=new s,i=this.index.array,n=this.attributes;for(let o in n){let l=n[o],c=t(l,i);e.setAttribute(o,c)}let r=this.morphAttributes;for(let o in r){let l=[],c=r[o];for(let h=0,d=c.length;h<d;h++){let u=c[h],f=t(u,i);l.push(f)}e.morphAttributes[o]=l}e.morphTargetsRelative=this.morphTargetsRelative;let a=this.groups;for(let o=0,l=a.length;o<l;o++){let c=a[o];e.addGroup(c.start,c.count,c.materialIndex)}return e}toJSON(){let t={metadata:{version:4.7,type:"BufferGeometry",generator:"BufferGeometry.toJSON"}};if(t.uuid=this.uuid,t.type=this.parameters!==void 0&&this._transformed===!0?"BufferGeometry":this.type,t.name=this.name,Object.keys(this.userData).length>0&&(t.userData=this.userData),this.parameters!==void 0&&this._transformed!==!0){let l=this.parameters;for(let c in l)l[c]!==void 0&&(t[c]=l[c]);return t}t.data={attributes:{}};let e=this.index;e!==null&&(t.data.index={type:e.array.constructor.name,array:Array.prototype.slice.call(e.array)});let i=this.attributes;for(let l in i){let c=i[l];t.data.attributes[l]=c.toJSON(t.data)}let n={},r=!1;for(let l in this.morphAttributes){let c=this.morphAttributes[l],h=[];for(let d=0,u=c.length;d<u;d++){let f=c[d];h.push(f.toJSON(t.data))}h.length>0&&(n[l]=h,r=!0)}r&&(t.data.morphAttributes=n,t.data.morphTargetsRelative=this.morphTargetsRelative);let a=this.groups;a.length>0&&(t.data.groups=JSON.parse(JSON.stringify(a)));let o=this.boundingSphere;return o!==null&&(t.data.boundingSphere=o.toJSON()),t}clone(){return new this.constructor().copy(this)}copy(t){this.index=null,this.attributes={},this.morphAttributes={},this.groups=[],this.boundingBox=null,this.boundingSphere=null;let e={};this.name=t.name;let i=t.index;i!==null&&this.setIndex(i.clone());let n=t.attributes;for(let c in n){let h=n[c];this.setAttribute(c,h.clone(e))}let r=t.morphAttributes;for(let c in r){let h=[],d=r[c];for(let u=0,f=d.length;u<f;u++)h.push(d[u].clone(e));this.morphAttributes[c]=h}this.morphTargetsRelative=t.morphTargetsRelative;let a=t.groups;for(let c=0,h=a.length;c<h;c++){let d=a[c];this.addGroup(d.start,d.count,d.materialIndex)}let o=t.boundingBox;o!==null&&(this.boundingBox=o.clone());let l=t.boundingSphere;return l!==null&&(this.boundingSphere=l.clone()),this.drawRange.start=t.drawRange.start,this.drawRange.count=t.drawRange.count,this.userData=t.userData,this._transformed=t._transformed,this}dispose(){this.dispatchEvent({type:"dispose"})}},_r=class{constructor(t,e){this.isInterleavedBuffer=!0,this.array=t,this.stride=e,this.count=t!==void 0?t.length/e:0,this.usage=Sh,this.updateRanges=[],this.version=0,this.uuid=dn()}onUploadCallback(){}set needsUpdate(t){t===!0&&this.version++}setUsage(t){return this.usage=t,this}addUpdateRange(t,e){this.updateRanges.push({start:t,count:e})}clearUpdateRanges(){this.updateRanges.length=0}copy(t){return this.array=new t.array.constructor(t.array),this.count=t.count,this.stride=t.stride,this.usage=t.usage,this}copyAt(t,e,i){t*=this.stride,i*=e.stride;for(let n=0,r=this.stride;n<r;n++)this.array[t+n]=e.array[i+n];return this}set(t,e=0){return this.array.set(t,e),this}clone(t){t.arrayBuffers===void 0&&(t.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=dn()),t.arrayBuffers[this.array.buffer._uuid]===void 0&&(t.arrayBuffers[this.array.buffer._uuid]=this.array.slice(0).buffer);let e=new this.array.constructor(t.arrayBuffers[this.array.buffer._uuid]),i=new this.constructor(e,this.stride);return i.setUsage(this.usage),i}onUpload(t){return this.onUploadCallback=t,this}toJSON(t){t.arrayBuffers===void 0&&(t.arrayBuffers={}),this.array.buffer._uuid===void 0&&(this.array.buffer._uuid=dn()),t.arrayBuffers[this.array.buffer._uuid]===void 0&&(t.arrayBuffers[this.array.buffer._uuid]=Array.from(new Uint32Array(this.array.buffer)));let e={uuid:this.uuid,buffer:this.array.buffer._uuid,type:this.array.constructor.name,stride:this.stride};return e.usage=this.usage,e}},Ge=new Q,Yn=class s{constructor(t,e,i,n=!1){this.isInterleavedBufferAttribute=!0,this.name="",this.data=t,this.itemSize=e,this.offset=i,this.normalized=n}get count(){return this.data.count}get array(){return this.data.array}set needsUpdate(t){this.data.needsUpdate=t}applyMatrix4(t){for(let e=0,i=this.data.count;e<i;e++)Ge.fromBufferAttribute(this,e),Ge.applyMatrix4(t),this.setXYZ(e,Ge.x,Ge.y,Ge.z);return this}applyNormalMatrix(t){for(let e=0,i=this.count;e<i;e++)Ge.fromBufferAttribute(this,e),Ge.applyNormalMatrix(t),this.setXYZ(e,Ge.x,Ge.y,Ge.z);return this}transformDirection(t){for(let e=0,i=this.count;e<i;e++)Ge.fromBufferAttribute(this,e),Ge.transformDirection(t),this.setXYZ(e,Ge.x,Ge.y,Ge.z);return this}getComponent(t,e){let i=this.array[t*this.data.stride+this.offset+e];return this.normalized&&(i=Pi(i,this.array)),i}setComponent(t,e,i){return this.normalized&&(i=re(i,this.array)),this.data.array[t*this.data.stride+this.offset+e]=i,this}setX(t,e){return this.normalized&&(e=re(e,this.array)),this.data.array[t*this.data.stride+this.offset]=e,this}setY(t,e){return this.normalized&&(e=re(e,this.array)),this.data.array[t*this.data.stride+this.offset+1]=e,this}setZ(t,e){return this.normalized&&(e=re(e,this.array)),this.data.array[t*this.data.stride+this.offset+2]=e,this}setW(t,e){return this.normalized&&(e=re(e,this.array)),this.data.array[t*this.data.stride+this.offset+3]=e,this}getX(t){let e=this.data.array[t*this.data.stride+this.offset];return this.normalized&&(e=Pi(e,this.array)),e}getY(t){let e=this.data.array[t*this.data.stride+this.offset+1];return this.normalized&&(e=Pi(e,this.array)),e}getZ(t){let e=this.data.array[t*this.data.stride+this.offset+2];return this.normalized&&(e=Pi(e,this.array)),e}getW(t){let e=this.data.array[t*this.data.stride+this.offset+3];return this.normalized&&(e=Pi(e,this.array)),e}setXY(t,e,i){return t=t*this.data.stride+this.offset,this.normalized&&(e=re(e,this.array),i=re(i,this.array)),this.data.array[t+0]=e,this.data.array[t+1]=i,this}setXYZ(t,e,i,n){return t=t*this.data.stride+this.offset,this.normalized&&(e=re(e,this.array),i=re(i,this.array),n=re(n,this.array)),this.data.array[t+0]=e,this.data.array[t+1]=i,this.data.array[t+2]=n,this}setXYZW(t,e,i,n,r){return t=t*this.data.stride+this.offset,this.normalized&&(e=re(e,this.array),i=re(i,this.array),n=re(n,this.array),r=re(r,this.array)),this.data.array[t+0]=e,this.data.array[t+1]=i,this.data.array[t+2]=n,this.data.array[t+3]=r,this}clone(t){if(t===void 0){mr("InterleavedBufferAttribute.clone(): Cloning an interleaved buffer attribute will de-interleave buffer data.");let e=[];for(let i=0;i<this.count;i++){let n=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)e.push(this.data.array[n+r])}return new Re(new this.array.constructor(e),this.itemSize,this.normalized)}else return t.interleavedBuffers===void 0&&(t.interleavedBuffers={}),t.interleavedBuffers[this.data.uuid]===void 0&&(t.interleavedBuffers[this.data.uuid]=this.data.clone(t)),new s(t.interleavedBuffers[this.data.uuid],this.itemSize,this.offset,this.normalized)}toJSON(t){if(t===void 0){mr("InterleavedBufferAttribute.toJSON(): Serializing an interleaved buffer attribute will de-interleave buffer data.");let e=[];for(let i=0;i<this.count;i++){let n=i*this.data.stride+this.offset;for(let r=0;r<this.itemSize;r++)e.push(this.data.array[n+r])}return{itemSize:this.itemSize,type:this.array.constructor.name,array:e,normalized:this.normalized}}else return t.interleavedBuffers===void 0&&(t.interleavedBuffers={}),t.interleavedBuffers[this.data.uuid]===void 0&&(t.interleavedBuffers[this.data.uuid]=this.data.toJSON(t)),{isInterleavedBufferAttribute:!0,itemSize:this.itemSize,data:this.data.uuid,offset:this.offset,normalized:this.normalized}}},Xc=new Q,Hp=new Q,Wp=new Ot,xi=class{constructor(t=new Q(1,0,0),e=0){this.isPlane=!0,this.normal=t,this.constant=e}set(t,e){return this.normal.copy(t),this.constant=e,this}setComponents(t,e,i,n){return this.normal.set(t,e,i),this.constant=n,this}setFromNormalAndCoplanarPoint(t,e){return this.normal.copy(t),this.constant=-e.dot(this.normal),this}setFromCoplanarPoints(t,e,i){let n=Xc.subVectors(i,e).cross(Hp.subVectors(t,e)).normalize();return this.setFromNormalAndCoplanarPoint(n,t),this}copy(t){return this.normal.copy(t.normal),this.constant=t.constant,this}normalize(){let t=1/this.normal.length();return this.normal.multiplyScalar(t),this.constant*=t,this}negate(){return this.constant*=-1,this.normal.negate(),this}distanceToPoint(t){return this.normal.dot(t)+this.constant}distanceToSphere(t){return this.distanceToPoint(t.center)-t.radius}projectPoint(t,e){return e.copy(t).addScaledVector(this.normal,-this.distanceToPoint(t))}intersectLine(t,e,i=!0){let n=t.delta(Xc),r=this.normal.dot(n);if(r===0)return this.distanceToPoint(t.start)===0?e.copy(t.start):null;let a=-(t.start.dot(this.normal)+this.constant)/r;return i===!0&&(a<0||a>1)?null:e.copy(t.start).addScaledVector(n,a)}intersectsLine(t){let e=this.distanceToPoint(t.start),i=this.distanceToPoint(t.end);return e<0&&i>0||i<0&&e>0}intersectsBox(t){return t.intersectsPlane(this)}intersectsSphere(t){return t.intersectsPlane(this)}coplanarPoint(t){return t.copy(this.normal).multiplyScalar(-this.constant)}applyMatrix4(t,e){let i=e||Wp.getNormalMatrix(t),n=this.coplanarPoint(Xc).applyMatrix4(t),r=this.normal.applyMatrix3(i).normalize();return this.constant=-n.dot(r),this}translate(t){return this.constant-=t.dot(this.normal),this}equals(t){return t.normal.equals(this.normal)&&t.constant===this.constant}clone(){return new this.constructor().copy(this)}toJSON(){return{normal:this.normal.toArray(),constant:this.constant}}fromJSON(t){return this.normal.fromArray(t.normal),this.constant=t.constant,this}},Xp=0,Kn=class extends Di{constructor(){super(),this.isMaterial=!0,Object.defineProperty(this,"id",{value:Xp++}),this.uuid=dn(),this.name="",this.type="Material",this.blending=Ps,this.side=Mn,this.vertexColors=!1,this.opacity=1,this.transparent=!1,this.alphaHash=!1,this.blendSrc=Ir,this.blendDst=Pr,this.blendEquation=ji,this.blendSrcAlpha=null,this.blendDstAlpha=null,this.blendEquationAlpha=null,this.blendColor=new qt(0,0,0),this.blendAlpha=0,this.depthFunc=Ts,this.depthTest=!0,this.depthWrite=!0,this.stencilWriteMask=255,this.stencilFunc=xd,this.stencilRef=0,this.stencilFuncMask=255,this.stencilFail=eo,this.stencilZFail=eo,this.stencilZPass=eo,this.stencilWrite=!1,this.clippingPlanes=null,this.clipIntersection=!1,this.clipShadows=!1,this.shadowSide=null,this.colorWrite=!0,this.precision=null,this.polygonOffset=!1,this.polygonOffsetFactor=0,this.polygonOffsetUnits=0,this.dithering=!1,this.alphaToCoverage=!1,this.premultipliedAlpha=!1,this.forceSinglePass=!1,this.allowOverride=!0,this.visible=!0,this.toneMapped=!0,this.userData={},this.version=0,this._alphaTest=0}get alphaTest(){return this._alphaTest}set alphaTest(t){this._alphaTest>0!=t>0&&this.version++,this._alphaTest=t}onBeforeRender(){}onBeforeCompile(){}customProgramCacheKey(){return this.onBeforeCompile.toString()}setValues(t){if(t!==void 0)for(let e in t){let i=t[e];if(i===void 0){Ft(`Material: parameter '${e}' has value of undefined.`);continue}let n=this[e];if(n===void 0){Ft(`Material: '${e}' is not a property of THREE.${this.type}.`);continue}n&&n.isColor?n.set(i):n&&n.isVector2&&i&&i.isVector2||n&&n.isEuler&&i&&i.isEuler||n&&n.isVector3&&i&&i.isVector3?n.copy(i):this[e]=i}}toJSON(t){let e=t===void 0||typeof t=="string";e&&(t={textures:{},images:{}});let i={metadata:{version:4.7,type:"Material",generator:"Material.toJSON"}};i.uuid=this.uuid,i.type=this.type,i.blending=this.blending,i.side=this.side,i.shadowSide=this.shadowSide,i.vertexColors=this.vertexColors,i.opacity=this.opacity,i.transparent=this.transparent,i.blendSrc=this.blendSrc,i.blendDst=this.blendDst,i.blendEquation=this.blendEquation,i.blendSrcAlpha=this.blendSrcAlpha,i.blendDstAlpha=this.blendDstAlpha,i.blendEquationAlpha=this.blendEquationAlpha,i.blendColor=this.blendColor.getHex(),i.blendAlpha=this.blendAlpha,i.depthFunc=this.depthFunc,i.depthTest=this.depthTest,i.depthWrite=this.depthWrite,i.colorWrite=this.colorWrite,i.clipIntersection=this.clipIntersection,i.clipShadows=this.clipShadows,i.stencilWriteMask=this.stencilWriteMask,i.stencilFunc=this.stencilFunc,i.stencilRef=this.stencilRef,i.stencilFuncMask=this.stencilFuncMask,i.stencilFail=this.stencilFail,i.stencilZFail=this.stencilZFail,i.stencilZPass=this.stencilZPass,i.stencilWrite=this.stencilWrite,i.polygonOffset=this.polygonOffset,i.polygonOffsetFactor=this.polygonOffsetFactor,i.polygonOffsetUnits=this.polygonOffsetUnits,i.dithering=this.dithering,i.alphaTest=this.alphaTest,i.alphaHash=this.alphaHash,i.alphaToCoverage=this.alphaToCoverage,i.premultipliedAlpha=this.premultipliedAlpha,i.forceSinglePass=this.forceSinglePass,i.allowOverride=this.allowOverride,i.visible=this.visible,i.toneMapped=this.toneMapped,i.name=this.name,this.color&&this.color.isColor&&(i.color=this.color.getHex()),this.roughness!==void 0&&(i.roughness=this.roughness),this.metalness!==void 0&&(i.metalness=this.metalness),this.sheen!==void 0&&(i.sheen=this.sheen),this.sheenColor&&this.sheenColor.isColor&&(i.sheenColor=this.sheenColor.getHex()),this.sheenRoughness!==void 0&&(i.sheenRoughness=this.sheenRoughness),this.emissive&&this.emissive.isColor&&(i.emissive=this.emissive.getHex()),this.emissiveIntensity!==void 0&&(i.emissiveIntensity=this.emissiveIntensity),this.specular&&this.specular.isColor&&(i.specular=this.specular.getHex()),this.specularIntensity!==void 0&&(i.specularIntensity=this.specularIntensity),this.specularColor&&this.specularColor.isColor&&(i.specularColor=this.specularColor.getHex()),this.shininess!==void 0&&(i.shininess=this.shininess),this.clearcoat!==void 0&&(i.clearcoat=this.clearcoat),this.clearcoatRoughness!==void 0&&(i.clearcoatRoughness=this.clearcoatRoughness),this.clearcoatMap&&this.clearcoatMap.isTexture&&(i.clearcoatMap=this.clearcoatMap.toJSON(t).uuid),this.clearcoatRoughnessMap&&this.clearcoatRoughnessMap.isTexture&&(i.clearcoatRoughnessMap=this.clearcoatRoughnessMap.toJSON(t).uuid),this.clearcoatNormalMap&&this.clearcoatNormalMap.isTexture&&(i.clearcoatNormalMap=this.clearcoatNormalMap.toJSON(t).uuid,i.clearcoatNormalScale=this.clearcoatNormalScale.toArray()),this.sheenColorMap&&this.sheenColorMap.isTexture&&(i.sheenColorMap=this.sheenColorMap.toJSON(t).uuid),this.sheenRoughnessMap&&this.sheenRoughnessMap.isTexture&&(i.sheenRoughnessMap=this.sheenRoughnessMap.toJSON(t).uuid),this.dispersion!==void 0&&(i.dispersion=this.dispersion),this.retroreflectivity!==void 0&&(i.retroreflectivity=this.retroreflectivity),this.iridescence!==void 0&&(i.iridescence=this.iridescence),this.iridescenceIOR!==void 0&&(i.iridescenceIOR=this.iridescenceIOR),this.iridescenceThicknessRange!==void 0&&(i.iridescenceThicknessRange=this.iridescenceThicknessRange),this.iridescenceMap&&this.iridescenceMap.isTexture&&(i.iridescenceMap=this.iridescenceMap.toJSON(t).uuid),this.iridescenceThicknessMap&&this.iridescenceThicknessMap.isTexture&&(i.iridescenceThicknessMap=this.iridescenceThicknessMap.toJSON(t).uuid),this.anisotropy!==void 0&&(i.anisotropy=this.anisotropy),this.anisotropyRotation!==void 0&&(i.anisotropyRotation=this.anisotropyRotation),this.anisotropyMap&&this.anisotropyMap.isTexture&&(i.anisotropyMap=this.anisotropyMap.toJSON(t).uuid),this.map&&this.map.isTexture&&(i.map=this.map.toJSON(t).uuid),this.matcap&&this.matcap.isTexture&&(i.matcap=this.matcap.toJSON(t).uuid),this.alphaMap&&this.alphaMap.isTexture&&(i.alphaMap=this.alphaMap.toJSON(t).uuid),this.lightMap&&this.lightMap.isTexture&&(i.lightMap=this.lightMap.toJSON(t).uuid,i.lightMapIntensity=this.lightMapIntensity),this.aoMap&&this.aoMap.isTexture&&(i.aoMap=this.aoMap.toJSON(t).uuid,i.aoMapIntensity=this.aoMapIntensity),this.bumpMap&&this.bumpMap.isTexture&&(i.bumpMap=this.bumpMap.toJSON(t).uuid,i.bumpScale=this.bumpScale),this.normalMap&&this.normalMap.isTexture&&(i.normalMap=this.normalMap.toJSON(t).uuid,i.normalMapType=this.normalMapType,i.normalScale=this.normalScale.toArray()),this.displacementMap&&this.displacementMap.isTexture&&(i.displacementMap=this.displacementMap.toJSON(t).uuid,i.displacementScale=this.displacementScale,i.displacementBias=this.displacementBias),this.roughnessMap&&this.roughnessMap.isTexture&&(i.roughnessMap=this.roughnessMap.toJSON(t).uuid),this.metalnessMap&&this.metalnessMap.isTexture&&(i.metalnessMap=this.metalnessMap.toJSON(t).uuid),this.emissiveMap&&this.emissiveMap.isTexture&&(i.emissiveMap=this.emissiveMap.toJSON(t).uuid),this.specularMap&&this.specularMap.isTexture&&(i.specularMap=this.specularMap.toJSON(t).uuid),this.specularIntensityMap&&this.specularIntensityMap.isTexture&&(i.specularIntensityMap=this.specularIntensityMap.toJSON(t).uuid),this.specularColorMap&&this.specularColorMap.isTexture&&(i.specularColorMap=this.specularColorMap.toJSON(t).uuid),this.envMap&&this.envMap.isTexture&&(i.envMap=this.envMap.toJSON(t).uuid,this.combine!==void 0&&(i.combine=this.combine)),this.envMapRotation!==void 0&&(i.envMapRotation=this.envMapRotation.toArray()),this.envMapIntensity!==void 0&&(i.envMapIntensity=this.envMapIntensity),this.reflectivity!==void 0&&(i.reflectivity=this.reflectivity),this.refractionRatio!==void 0&&(i.refractionRatio=this.refractionRatio),this.gradientMap&&this.gradientMap.isTexture&&(i.gradientMap=this.gradientMap.toJSON(t).uuid),this.transmission!==void 0&&(i.transmission=this.transmission),this.transmissionMap&&this.transmissionMap.isTexture&&(i.transmissionMap=this.transmissionMap.toJSON(t).uuid),this.thickness!==void 0&&(i.thickness=this.thickness),this.thicknessMap&&this.thicknessMap.isTexture&&(i.thicknessMap=this.thicknessMap.toJSON(t).uuid),this.attenuationDistance!==void 0&&(i.attenuationDistance=this.attenuationDistance),this.attenuationColor!==void 0&&(i.attenuationColor=this.attenuationColor.getHex()),this.size!==void 0&&(i.size=this.size),this.sizeAttenuation!==void 0&&(i.sizeAttenuation=this.sizeAttenuation),Array.isArray(this.clippingPlanes)&&this.clippingPlanes.length>0&&(i.clippingPlanes=this.clippingPlanes.map(r=>r.toJSON())),this.rotation!==void 0&&(i.rotation=this.rotation),this.depthPacking!==void 0&&(i.depthPacking=this.depthPacking),this.linewidth!==void 0&&(i.linewidth=this.linewidth),this.linecap!==void 0&&(i.linecap=this.linecap),this.linejoin!==void 0&&(i.linejoin=this.linejoin),this.dashSize!==void 0&&(i.dashSize=this.dashSize),this.gapSize!==void 0&&(i.gapSize=this.gapSize),this.scale!==void 0&&(i.scale=this.scale),this.wireframe!==void 0&&(i.wireframe=this.wireframe),this.wireframeLinewidth!==void 0&&(i.wireframeLinewidth=this.wireframeLinewidth),this.wireframeLinecap!==void 0&&(i.wireframeLinecap=this.wireframeLinecap),this.wireframeLinejoin!==void 0&&(i.wireframeLinejoin=this.wireframeLinejoin),this.flatShading!==void 0&&(i.flatShading=this.flatShading),this.fog!==void 0&&(i.fog=this.fog),Object.keys(this.userData).length>0&&(i.userData=this.userData);function n(r){let a=[];for(let o in r){let l=r[o];delete l.metadata,a.push(l)}return a}if(e){let r=n(t.textures),a=n(t.images);r.length>0&&(i.textures=r),a.length>0&&(i.images=a)}return i}fromJSON(t,e){if(t.uuid!==void 0&&(this.uuid=t.uuid),t.name!==void 0&&(this.name=t.name),t.color!==void 0&&this.color!==void 0&&this.color.setHex(t.color),t.roughness!==void 0&&(this.roughness=t.roughness),t.metalness!==void 0&&(this.metalness=t.metalness),t.sheen!==void 0&&(this.sheen=t.sheen),t.sheenColor!==void 0&&(this.sheenColor=new qt().setHex(t.sheenColor)),t.sheenRoughness!==void 0&&(this.sheenRoughness=t.sheenRoughness),t.emissive!==void 0&&this.emissive!==void 0&&this.emissive.setHex(t.emissive),t.specular!==void 0&&this.specular!==void 0&&this.specular.setHex(t.specular),t.specularIntensity!==void 0&&(this.specularIntensity=t.specularIntensity),t.specularColor!==void 0&&this.specularColor!==void 0&&this.specularColor.setHex(t.specularColor),t.shininess!==void 0&&(this.shininess=t.shininess),t.clearcoat!==void 0&&(this.clearcoat=t.clearcoat),t.clearcoatRoughness!==void 0&&(this.clearcoatRoughness=t.clearcoatRoughness),t.dispersion!==void 0&&(this.dispersion=t.dispersion),t.retroreflectivity!==void 0&&(this.retroreflectivity=t.retroreflectivity),t.iridescence!==void 0&&(this.iridescence=t.iridescence),t.iridescenceIOR!==void 0&&(this.iridescenceIOR=t.iridescenceIOR),t.iridescenceThicknessRange!==void 0&&(this.iridescenceThicknessRange=t.iridescenceThicknessRange),t.transmission!==void 0&&(this.transmission=t.transmission),t.thickness!==void 0&&(this.thickness=t.thickness),t.attenuationDistance!==void 0&&(this.attenuationDistance=t.attenuationDistance),t.attenuationColor!==void 0&&this.attenuationColor!==void 0&&this.attenuationColor.setHex(t.attenuationColor),t.anisotropy!==void 0&&(this.anisotropy=t.anisotropy),t.anisotropyRotation!==void 0&&(this.anisotropyRotation=t.anisotropyRotation),t.fog!==void 0&&(this.fog=t.fog),t.flatShading!==void 0&&(this.flatShading=t.flatShading),t.blending!==void 0&&(this.blending=t.blending),t.combine!==void 0&&(this.combine=t.combine),t.side!==void 0&&(this.side=t.side),t.shadowSide!==void 0&&(this.shadowSide=t.shadowSide),t.opacity!==void 0&&(this.opacity=t.opacity),t.transparent!==void 0&&(this.transparent=t.transparent),t.alphaTest!==void 0&&(this.alphaTest=t.alphaTest),t.alphaHash!==void 0&&(this.alphaHash=t.alphaHash),t.depthFunc!==void 0&&(this.depthFunc=t.depthFunc),t.depthTest!==void 0&&(this.depthTest=t.depthTest),t.depthWrite!==void 0&&(this.depthWrite=t.depthWrite),t.colorWrite!==void 0&&(this.colorWrite=t.colorWrite),t.clippingPlanes!==void 0&&(this.clippingPlanes=t.clippingPlanes.map(i=>new xi().fromJSON(i))),t.clipIntersection!==void 0&&(this.clipIntersection=t.clipIntersection),t.clipShadows!==void 0&&(this.clipShadows=t.clipShadows),t.depthPacking!==void 0&&(this.depthPacking=t.depthPacking),t.blendSrc!==void 0&&(this.blendSrc=t.blendSrc),t.blendDst!==void 0&&(this.blendDst=t.blendDst),t.blendEquation!==void 0&&(this.blendEquation=t.blendEquation),t.blendSrcAlpha!==void 0&&(this.blendSrcAlpha=t.blendSrcAlpha),t.blendDstAlpha!==void 0&&(this.blendDstAlpha=t.blendDstAlpha),t.blendEquationAlpha!==void 0&&(this.blendEquationAlpha=t.blendEquationAlpha),t.blendColor!==void 0&&this.blendColor!==void 0&&this.blendColor.setHex(t.blendColor),t.blendAlpha!==void 0&&(this.blendAlpha=t.blendAlpha),t.stencilWriteMask!==void 0&&(this.stencilWriteMask=t.stencilWriteMask),t.stencilFunc!==void 0&&(this.stencilFunc=t.stencilFunc),t.stencilRef!==void 0&&(this.stencilRef=t.stencilRef),t.stencilFuncMask!==void 0&&(this.stencilFuncMask=t.stencilFuncMask),t.stencilFail!==void 0&&(this.stencilFail=t.stencilFail),t.stencilZFail!==void 0&&(this.stencilZFail=t.stencilZFail),t.stencilZPass!==void 0&&(this.stencilZPass=t.stencilZPass),t.stencilWrite!==void 0&&(this.stencilWrite=t.stencilWrite),t.wireframe!==void 0&&(this.wireframe=t.wireframe),t.wireframeLinewidth!==void 0&&(this.wireframeLinewidth=t.wireframeLinewidth),t.wireframeLinecap!==void 0&&(this.wireframeLinecap=t.wireframeLinecap),t.wireframeLinejoin!==void 0&&(this.wireframeLinejoin=t.wireframeLinejoin),t.rotation!==void 0&&(this.rotation=t.rotation),t.linewidth!==void 0&&(this.linewidth=t.linewidth),t.linecap!==void 0&&(this.linecap=t.linecap),t.linejoin!==void 0&&(this.linejoin=t.linejoin),t.dashSize!==void 0&&(this.dashSize=t.dashSize),t.gapSize!==void 0&&(this.gapSize=t.gapSize),t.scale!==void 0&&(this.scale=t.scale),t.polygonOffset!==void 0&&(this.polygonOffset=t.polygonOffset),t.polygonOffsetFactor!==void 0&&(this.polygonOffsetFactor=t.polygonOffsetFactor),t.polygonOffsetUnits!==void 0&&(this.polygonOffsetUnits=t.polygonOffsetUnits),t.dithering!==void 0&&(this.dithering=t.dithering),t.alphaToCoverage!==void 0&&(this.alphaToCoverage=t.alphaToCoverage),t.premultipliedAlpha!==void 0&&(this.premultipliedAlpha=t.premultipliedAlpha),t.forceSinglePass!==void 0&&(this.forceSinglePass=t.forceSinglePass),t.allowOverride!==void 0&&(this.allowOverride=t.allowOverride),t.visible!==void 0&&(this.visible=t.visible),t.toneMapped!==void 0&&(this.toneMapped=t.toneMapped),t.userData!==void 0&&(this.userData=t.userData),t.vertexColors!==void 0&&(typeof t.vertexColors=="number"?this.vertexColors=t.vertexColors>0:this.vertexColors=t.vertexColors),t.size!==void 0&&(this.size=t.size),t.sizeAttenuation!==void 0&&(this.sizeAttenuation=t.sizeAttenuation),t.map!==void 0&&(this.map=e[t.map]||null),t.matcap!==void 0&&(this.matcap=e[t.matcap]||null),t.alphaMap!==void 0&&(this.alphaMap=e[t.alphaMap]||null),t.bumpMap!==void 0&&(this.bumpMap=e[t.bumpMap]||null),t.bumpScale!==void 0&&(this.bumpScale=t.bumpScale),t.normalMap!==void 0&&(this.normalMap=e[t.normalMap]||null),t.normalMapType!==void 0&&(this.normalMapType=t.normalMapType),t.normalScale!==void 0){let i=t.normalScale;Array.isArray(i)===!1&&(i=[i,i]),this.normalScale=new Wt().fromArray(i)}return t.displacementMap!==void 0&&(this.displacementMap=e[t.displacementMap]||null),t.displacementScale!==void 0&&(this.displacementScale=t.displacementScale),t.displacementBias!==void 0&&(this.displacementBias=t.displacementBias),t.roughnessMap!==void 0&&(this.roughnessMap=e[t.roughnessMap]||null),t.metalnessMap!==void 0&&(this.metalnessMap=e[t.metalnessMap]||null),t.emissiveMap!==void 0&&(this.emissiveMap=e[t.emissiveMap]||null),t.emissiveIntensity!==void 0&&(this.emissiveIntensity=t.emissiveIntensity),t.specularMap!==void 0&&(this.specularMap=e[t.specularMap]||null),t.specularIntensityMap!==void 0&&(this.specularIntensityMap=e[t.specularIntensityMap]||null),t.specularColorMap!==void 0&&(this.specularColorMap=e[t.specularColorMap]||null),t.envMap!==void 0&&(this.envMap=e[t.envMap]||null),t.envMapRotation!==void 0&&this.envMapRotation.fromArray(t.envMapRotation),t.envMapIntensity!==void 0&&(this.envMapIntensity=t.envMapIntensity),t.reflectivity!==void 0&&(this.reflectivity=t.reflectivity),t.refractionRatio!==void 0&&(this.refractionRatio=t.refractionRatio),t.lightMap!==void 0&&(this.lightMap=e[t.lightMap]||null),t.lightMapIntensity!==void 0&&(this.lightMapIntensity=t.lightMapIntensity),t.aoMap!==void 0&&(this.aoMap=e[t.aoMap]||null),t.aoMapIntensity!==void 0&&(this.aoMapIntensity=t.aoMapIntensity),t.gradientMap!==void 0&&(this.gradientMap=e[t.gradientMap]||null),t.clearcoatMap!==void 0&&(this.clearcoatMap=e[t.clearcoatMap]||null),t.clearcoatRoughnessMap!==void 0&&(this.clearcoatRoughnessMap=e[t.clearcoatRoughnessMap]||null),t.clearcoatNormalMap!==void 0&&(this.clearcoatNormalMap=e[t.clearcoatNormalMap]||null),t.clearcoatNormalScale!==void 0&&(this.clearcoatNormalScale=new Wt().fromArray(t.clearcoatNormalScale)),t.iridescenceMap!==void 0&&(this.iridescenceMap=e[t.iridescenceMap]||null),t.iridescenceThicknessMap!==void 0&&(this.iridescenceThicknessMap=e[t.iridescenceThicknessMap]||null),t.transmissionMap!==void 0&&(this.transmissionMap=e[t.transmissionMap]||null),t.thicknessMap!==void 0&&(this.thicknessMap=e[t.thicknessMap]||null),t.anisotropyMap!==void 0&&(this.anisotropyMap=e[t.anisotropyMap]||null),t.sheenColorMap!==void 0&&(this.sheenColorMap=e[t.sheenColorMap]||null),t.sheenRoughnessMap!==void 0&&(this.sheenRoughnessMap=e[t.sheenRoughnessMap]||null),this}clone(){return new this.constructor().copy(this)}copy(t){this.name=t.name,this.blending=t.blending,this.side=t.side,this.vertexColors=t.vertexColors,this.opacity=t.opacity,this.transparent=t.transparent,this.blendSrc=t.blendSrc,this.blendDst=t.blendDst,this.blendEquation=t.blendEquation,this.blendSrcAlpha=t.blendSrcAlpha,this.blendDstAlpha=t.blendDstAlpha,this.blendEquationAlpha=t.blendEquationAlpha,this.blendColor.copy(t.blendColor),this.blendAlpha=t.blendAlpha,this.depthFunc=t.depthFunc,this.depthTest=t.depthTest,this.depthWrite=t.depthWrite,this.stencilWriteMask=t.stencilWriteMask,this.stencilFunc=t.stencilFunc,this.stencilRef=t.stencilRef,this.stencilFuncMask=t.stencilFuncMask,this.stencilFail=t.stencilFail,this.stencilZFail=t.stencilZFail,this.stencilZPass=t.stencilZPass,this.stencilWrite=t.stencilWrite;let e=t.clippingPlanes,i=null;if(e!==null){let n=e.length;i=new Array(n);for(let r=0;r!==n;++r)i[r]=e[r].clone()}return this.clippingPlanes=i,this.clipIntersection=t.clipIntersection,this.clipShadows=t.clipShadows,this.shadowSide=t.shadowSide,this.colorWrite=t.colorWrite,this.precision=t.precision,this.polygonOffset=t.polygonOffset,this.polygonOffsetFactor=t.polygonOffsetFactor,this.polygonOffsetUnits=t.polygonOffsetUnits,this.dithering=t.dithering,this.alphaTest=t.alphaTest,this.alphaHash=t.alphaHash,this.alphaToCoverage=t.alphaToCoverage,this.premultipliedAlpha=t.premultipliedAlpha,this.forceSinglePass=t.forceSinglePass,this.allowOverride=t.allowOverride,this.visible=t.visible,this.toneMapped=t.toneMapped,this.userData=JSON.parse(JSON.stringify(t.userData)),this}dispose(){this.dispatchEvent({type:"dispose"})}set needsUpdate(t){t===!0&&this.version++}};var Zi=new Q,qc=new Q,Ga=new Q,Ha=new Q,go=class{constructor(t=new Q,e=new Q(0,0,-1)){this.origin=t,this.direction=e}set(t,e){return this.origin.copy(t),this.direction.copy(e),this}copy(t){return this.origin.copy(t.origin),this.direction.copy(t.direction),this}at(t,e){return e.copy(this.origin).addScaledVector(this.direction,t)}lookAt(t){return this.direction.copy(t).sub(this.origin).normalize(),this}recast(t){return this.origin.copy(this.at(t,Zi)),this}closestPointToPoint(t,e){e.subVectors(t,this.origin);let i=e.dot(this.direction);return i<0?e.copy(this.origin):e.copy(this.origin).addScaledVector(this.direction,i)}distanceToPoint(t){return Math.sqrt(this.distanceSqToPoint(t))}distanceSqToPoint(t){let e=Zi.subVectors(t,this.origin).dot(this.direction);return e<0?this.origin.distanceToSquared(t):(Zi.copy(this.origin).addScaledVector(this.direction,e),Zi.distanceToSquared(t))}distanceSqToSegment(t,e,i,n){qc.copy(t).add(e).multiplyScalar(.5),Ga.copy(e).sub(t).normalize(),Ha.copy(this.origin).sub(qc);let r=t.distanceTo(e)*.5,a=-this.direction.dot(Ga),o=Ha.dot(this.direction),l=-Ha.dot(Ga),c=Ha.lengthSq(),h=Math.abs(1-a*a),d,u,f,p;if(h>0)if(d=a*l-o,u=a*o-l,p=r*h,d>=0)if(u>=-p)if(u<=p){let y=1/h;d*=y,u*=y,f=d*(d+a*u+2*o)+u*(a*d+u+2*l)+c}else u=r,d=Math.max(0,-(a*u+o)),f=-d*d+u*(u+2*l)+c;else u=-r,d=Math.max(0,-(a*u+o)),f=-d*d+u*(u+2*l)+c;else u<=-p?(d=Math.max(0,-(-a*r+o)),u=d>0?-r:Math.min(Math.max(-r,-l),r),f=-d*d+u*(u+2*l)+c):u<=p?(d=0,u=Math.min(Math.max(-r,-l),r),f=u*(u+2*l)+c):(d=Math.max(0,-(a*r+o)),u=d>0?r:Math.min(Math.max(-r,-l),r),f=-d*d+u*(u+2*l)+c);else u=a>0?-r:r,d=Math.max(0,-(a*u+o)),f=-d*d+u*(u+2*l)+c;return i&&i.copy(this.origin).addScaledVector(this.direction,d),n&&n.copy(qc).addScaledVector(Ga,u),f}intersectSphere(t,e){if(t.radius<0)return null;Zi.subVectors(t.center,this.origin);let i=Zi.dot(this.direction),n=Zi.dot(Zi)-i*i,r=t.radius*t.radius;if(n>r)return null;let a=Math.sqrt(r-n),o=i-a,l=i+a;return l<0?null:o<0?this.at(l,e):this.at(o,e)}intersectsSphere(t){return t.radius<0?!1:this.distanceSqToPoint(t.center)<=t.radius*t.radius}distanceToPlane(t){let e=t.normal.dot(this.direction);if(e===0)return t.distanceToPoint(this.origin)===0?0:null;let i=-(this.origin.dot(t.normal)+t.constant)/e;return i>=0?i:null}intersectPlane(t,e){let i=this.distanceToPlane(t);return i===null?null:this.at(i,e)}intersectsPlane(t){let e=t.distanceToPoint(this.origin);return e===0||t.normal.dot(this.direction)*e<0}intersectBox(t,e){let i,n,r,a,o,l,c=1/this.direction.x,h=1/this.direction.y,d=1/this.direction.z,u=this.origin;return c>=0?(i=(t.min.x-u.x)*c,n=(t.max.x-u.x)*c):(i=(t.max.x-u.x)*c,n=(t.min.x-u.x)*c),h>=0?(r=(t.min.y-u.y)*h,a=(t.max.y-u.y)*h):(r=(t.max.y-u.y)*h,a=(t.min.y-u.y)*h),i>a||r>n||((r>i||isNaN(i))&&(i=r),(a<n||isNaN(n))&&(n=a),d>=0?(o=(t.min.z-u.z)*d,l=(t.max.z-u.z)*d):(o=(t.max.z-u.z)*d,l=(t.min.z-u.z)*d),i>l||o>n)||((o>i||i!==i)&&(i=o),(l<n||n!==n)&&(n=l),n<0)?null:this.at(i>=0?i:n,e)}intersectsBox(t){return this.intersectBox(t,Zi)!==null}intersectTriangle(t,e,i,n,r){let a=this.origin,o=this.direction,l=o.x,c=o.y,h=o.z,d=t.x-a.x,u=t.y-a.y,f=t.z-a.z,p=e.x-a.x,y=e.y-a.y,m=e.z-a.z,g=i.x-a.x,E=i.y-a.y,L=i.z-a.z,b=Math.abs(l),T=Math.abs(c),M=Math.abs(h),F,S,R,B,z,W,$,V,_,C,P,k;if(b>=T&&b>=M?(R=l,W=d,_=p,k=g,l>=0?(F=c,S=h,B=u,z=f,$=y,V=m,C=E,P=L):(F=h,S=c,B=f,z=u,$=m,V=y,C=L,P=E)):T>=M?(R=c,W=u,_=y,k=E,c>=0?(F=h,S=l,B=f,z=d,$=m,V=p,C=L,P=g):(F=l,S=h,B=d,z=f,$=p,V=m,C=g,P=L)):(R=h,W=f,_=m,k=L,h>=0?(F=l,S=c,B=d,z=u,$=p,V=y,C=g,P=E):(F=c,S=l,B=u,z=d,$=y,V=p,C=E,P=g)),R===0)return null;let D=F/R,G=S/R,X=1/R,w=B-D*W,I=z-G*W,Y=$-D*_,j=V-G*_,at=C-D*k,q=P-G*k,et=at*j-q*Y,ct=w*q-I*at,Mt=Y*I-j*w;if(n){if(et<0||ct<0||Mt<0)return null}else if((et<0||ct<0||Mt<0)&&(et>0||ct>0||Mt>0))return null;let ut=et+ct+Mt;if(ut===0)return null;let Lt=X*(et*W+ct*_+Mt*k);return(ut>0?Lt<0:Lt>0)?null:this.at(Lt/ut,r)}applyMatrix4(t){return this.origin.applyMatrix4(t),this.direction.transformDirection(t),this}equals(t){return t.origin.equals(this.origin)&&t.direction.equals(this.direction)}clone(){return new this.constructor().copy(this)}},vr=class extends Kn{constructor(t){super(),this.isMeshBasicMaterial=!0,this.type="MeshBasicMaterial",this.color=new qt(16777215),this.map=null,this.lightMap=null,this.lightMapIntensity=1,this.aoMap=null,this.aoMapIntensity=1,this.specularMap=null,this.alphaMap=null,this.envMap=null,this.envMapRotation=new pn,this.combine=rh,this.reflectivity=1,this.refractionRatio=.98,this.wireframe=!1,this.wireframeLinewidth=1,this.wireframeLinecap="round",this.wireframeLinejoin="round",this.fog=!0,this.setValues(t)}copy(t){return super.copy(t),this.color.copy(t.color),this.map=t.map,this.lightMap=t.lightMap,this.lightMapIntensity=t.lightMapIntensity,this.aoMap=t.aoMap,this.aoMapIntensity=t.aoMapIntensity,this.specularMap=t.specularMap,this.alphaMap=t.alphaMap,this.envMap=t.envMap,this.envMapRotation.copy(t.envMapRotation),this.combine=t.combine,this.reflectivity=t.reflectivity,this.refractionRatio=t.refractionRatio,this.wireframe=t.wireframe,this.wireframeLinewidth=t.wireframeLinewidth,this.wireframeLinecap=t.wireframeLinecap,this.wireframeLinejoin=t.wireframeLinejoin,this.fog=t.fog,this}},Ku=new jt,Gn=new go,Wa=new xn,Zu=new Q,Xa=new Q,qa=new Q,Ya=new Q,Yc=new Q,Ka=new Q,$u=new Q,Za=new Q,Oe=class extends ci{constructor(t=new Xe,e=new vr){super(),this.isMesh=!0,this.type="Mesh",this.geometry=t,this.material=e,this.morphTargetDictionary=void 0,this.morphTargetInfluences=void 0,this.count=1,this.updateMorphTargets()}copy(t,e){return super.copy(t,e),t.morphTargetInfluences!==void 0&&(this.morphTargetInfluences=t.morphTargetInfluences.slice()),t.morphTargetDictionary!==void 0&&(this.morphTargetDictionary=Object.assign({},t.morphTargetDictionary)),this.material=Array.isArray(t.material)?t.material.slice():t.material,this.geometry=t.geometry,this}updateMorphTargets(){let e=this.geometry.morphAttributes,i=Object.keys(e);if(i.length>0){let n=e[i[0]];if(n!==void 0){this.morphTargetInfluences=[],this.morphTargetDictionary={};for(let r=0,a=n.length;r<a;r++){let o=n[r].name||String(r);this.morphTargetInfluences.push(0),this.morphTargetDictionary[o]=r}}}}getVertexPosition(t,e){let i=this.geometry,n=i.attributes.position,r=i.morphAttributes.position,a=i.morphTargetsRelative;e.fromBufferAttribute(n,t);let o=this.morphTargetInfluences;if(r&&o){Ka.set(0,0,0);for(let l=0,c=r.length;l<c;l++){let h=o[l],d=r[l];h!==0&&(Yc.fromBufferAttribute(d,t),a?Ka.addScaledVector(Yc,h):Ka.addScaledVector(Yc.sub(e),h))}e.add(Ka)}return e}intersectsFrustum(t){return t.intersectsObject(this)}raycast(t,e){let i=this.geometry,n=this.material,r=this.matrixWorld;n!==void 0&&(i.boundingSphere===null&&i.computeBoundingSphere(),Wa.copy(i.boundingSphere),Wa.applyMatrix4(r),Gn.copy(t.ray).recast(t.near),!(Wa.containsPoint(Gn.origin)===!1&&(Gn.intersectSphere(Wa,Zu)===null||Gn.origin.distanceToSquared(Zu)>(t.far-t.near)**2))&&(Ku.copy(r).invert(),Gn.copy(t.ray).applyMatrix4(Ku),!(i.boundingBox!==null&&Gn.intersectsBox(i.boundingBox)===!1)&&this._computeIntersections(t,e,Gn)))}_computeIntersections(t,e,i){let n,r=this.geometry,a=this.material,o=r.index,l=r.attributes.position,c=r.attributes.uv,h=r.attributes.uv1,d=r.attributes.normal,u=r.groups,f=r.drawRange;if(o!==null)if(Array.isArray(a))for(let p=0,y=u.length;p<y;p++){let m=u[p],g=a[m.materialIndex],E=Math.max(m.start,f.start),L=Math.min(o.count,Math.min(m.start+m.count,f.start+f.count));for(let b=E,T=L;b<T;b+=3){let M=o.getX(b),F=o.getX(b+1),S=o.getX(b+2);n=$a(this,g,t,i,c,h,d,M,F,S),n&&(n.faceIndex=Math.floor(b/3),n.face.materialIndex=m.materialIndex,e.push(n))}}else{let p=Math.max(0,f.start),y=Math.min(o.count,f.start+f.count);for(let m=p,g=y;m<g;m+=3){let E=o.getX(m),L=o.getX(m+1),b=o.getX(m+2);n=$a(this,a,t,i,c,h,d,E,L,b),n&&(n.faceIndex=Math.floor(m/3),e.push(n))}}else if(l!==void 0)if(Array.isArray(a))for(let p=0,y=u.length;p<y;p++){let m=u[p],g=a[m.materialIndex],E=Math.max(m.start,f.start),L=Math.min(l.count,Math.min(m.start+m.count,f.start+f.count));for(let b=E,T=L;b<T;b+=3){let M=b,F=b+1,S=b+2;n=$a(this,g,t,i,c,h,d,M,F,S),n&&(n.faceIndex=Math.floor(b/3),n.face.materialIndex=m.materialIndex,e.push(n))}}else{let p=Math.max(0,f.start),y=Math.min(l.count,f.start+f.count);for(let m=p,g=y;m<g;m+=3){let E=m,L=m+1,b=m+2;n=$a(this,a,t,i,c,h,d,E,L,b),n&&(n.faceIndex=Math.floor(m/3),e.push(n))}}}};function qp(s,t,e,i,n,r,a,o){let l;if(t.side===Pe?l=i.intersectTriangle(a,r,n,!0,o):l=i.intersectTriangle(n,r,a,t.side===Mn,o),l===null)return null;Za.copy(o),Za.applyMatrix4(s.matrixWorld);let c=e.ray.origin.distanceTo(Za);return c<e.near||c>e.far?null:{distance:c,point:Za.clone(),object:s}}function $a(s,t,e,i,n,r,a,o,l,c){s.getVertexPosition(o,Xa),s.getVertexPosition(l,qa),s.getVertexPosition(c,Ya);let h=qp(s,t,e,i,Xa,qa,Ya,$u);if(h){let d=new Q;un.getBarycoord($u,Xa,qa,Ya,d),n&&(h.uv=un.getInterpolatedAttribute(n,o,l,c,d,new Wt)),r&&(h.uv1=un.getInterpolatedAttribute(r,o,l,c,d,new Wt)),a&&(h.normal=un.getInterpolatedAttribute(a,o,l,c,d,new Q),h.normal.dot(i.direction)>0&&h.normal.multiplyScalar(-1));let u={a:o,b:l,c,normal:new Q,materialIndex:0};un.getNormal(Xa,qa,Ya,u.normal),h.face=u,h.barycoord=d}return h}var yn=class extends We{constructor(t=null,e=1,i=1,n,r,a,o,l,c=oe,h=oe,d,u){super(null,a,o,l,c,h,n,r,d,u),this.isDataTexture=!0,this.image={data:t,width:e,height:i},this.generateMipmaps=!1,this.flipY=!1,this.unpackAlignment=1}};var Hn=new xn,Yp=new Wt(.5,.5),Ja=new Q,Sr=class{constructor(t=new xi,e=new xi,i=new xi,n=new xi,r=new xi,a=new xi){this.planes=[t,e,i,n,r,a]}set(t,e,i,n,r,a){let o=this.planes;return o[0].copy(t),o[1].copy(e),o[2].copy(i),o[3].copy(n),o[4].copy(r),o[5].copy(a),this}copy(t){let e=this.planes;for(let i=0;i<6;i++)e[i].copy(t.planes[i]);return this}setFromProjectionMatrix(t,e=yi,i=!1){let n=this.planes,r=t.elements,a=r[0],o=r[1],l=r[2],c=r[3],h=r[4],d=r[5],u=r[6],f=r[7],p=r[8],y=r[9],m=r[10],g=r[11],E=r[12],L=r[13],b=r[14],T=r[15];if(n[0].setComponents(c-a,f-h,g-p,T-E).normalize(),n[1].setComponents(c+a,f+h,g+p,T+E).normalize(),n[2].setComponents(c+o,f+d,g+y,T+L).normalize(),n[3].setComponents(c-o,f-d,g-y,T-L).normalize(),i)n[4].setComponents(l,u,m,b).normalize(),n[5].setComponents(c-l,f-u,g-m,T-b).normalize();else if(n[4].setComponents(c-l,f-u,g-m,T-b).normalize(),e===yi)n[5].setComponents(c+l,f+u,g+m,T+b).normalize();else if(e===fr)n[5].setComponents(l,u,m,b).normalize();else throw new Error("THREE.Frustum.setFromProjectionMatrix(): Invalid coordinate system: "+e);return this}intersectsObject(t){if(t.boundingSphere!==void 0)t.boundingSphere===null&&t.computeBoundingSphere(),Hn.copy(t.boundingSphere).applyMatrix4(t.matrixWorld);else{let e=t.geometry;e.boundingSphere===null&&e.computeBoundingSphere(),Hn.copy(e.boundingSphere).applyMatrix4(t.matrixWorld)}return this.intersectsSphere(Hn)}intersectsSprite(t){Hn.center.set(0,0,0);let e=Yp.distanceTo(t.center);return Hn.radius=.7071067811865476+e,Hn.applyMatrix4(t.matrixWorld),this.intersectsSphere(Hn)}intersectsSphere(t){let e=this.planes,i=t.center,n=-t.radius;for(let r=0;r<6;r++)if(e[r].distanceToPoint(i)<n)return!1;return!0}intersectsBox(t){let e=this.planes;for(let i=0;i<6;i++){let n=e[i];if(Ja.x=n.normal.x>0?t.max.x:t.min.x,Ja.y=n.normal.y>0?t.max.y:t.min.y,Ja.z=n.normal.z>0?t.max.z:t.min.z,n.distanceToPoint(Ja)<0)return!1}return!0}containsPoint(t){let e=this.planes;for(let i=0;i<6;i++)if(e[i].distanceToPoint(t)<0)return!1;return!0}clone(){return new this.constructor().copy(this)}};var br=class extends We{constructor(t=[],e=wn,i,n,r,a,o,l,c,h){super(t,e,i,n,r,a,o,l,c,h),this.isCubeTexture=!0,this.flipY=!1}get images(){return this.image}set images(t){this.image=t}};var _n=class extends We{constructor(t,e,i=vi,n,r,a,o=oe,l=oe,c,h=Fi,d=1){if(h!==Fi&&h!==En)throw new Error("THREE.DepthTexture: format must be either THREE.DepthFormat or THREE.DepthStencilFormat");let u={width:t,height:e,depth:d};super(u,n,r,a,o,l,h,i,c),this.isDepthTexture=!0,this.flipY=!1,this.generateMipmaps=!1,this.compareFunction=null}copy(t){return super.copy(t),this.source=new As(Object.assign({},t.image)),this.compareFunction=t.compareFunction,this}toJSON(t){let e=super.toJSON(t);return e.compareFunction=this.compareFunction,e}},xo=class extends _n{constructor(t,e=vi,i=wn,n,r,a=oe,o=oe,l,c=Fi){let h={width:t,height:t,depth:1},d=[h,h,h,h,h,h];super(t,t,e,i,n,r,a,o,l,c),this.image=d,this.isCubeDepthTexture=!0,this.isCubeTexture=!0}get images(){return this.image}set images(t){this.image=t}},Mr=class extends We{constructor(t=null){super(),this.sourceTexture=t,this.isExternalTexture=!0}copy(t){return super.copy(t),this.sourceTexture=t.sourceTexture,this}},Rs=class s extends Xe{constructor(t=1,e=1,i=1,n=1,r=1,a=1){super(),this.type="BoxGeometry",this.parameters={width:t,height:e,depth:i,widthSegments:n,heightSegments:r,depthSegments:a};let o=this;n=Math.floor(n),r=Math.floor(r),a=Math.floor(a);let l=[],c=[],h=[],d=[],u=0,f=0;p("z","y","x",-1,-1,i,e,t,a,r,0),p("z","y","x",1,-1,i,e,-t,a,r,1),p("x","z","y",1,1,t,i,e,n,a,2),p("x","z","y",1,-1,t,i,-e,n,a,3),p("x","y","z",1,-1,t,e,i,n,r,4),p("x","y","z",-1,-1,t,e,-i,n,r,5),this.setIndex(l),this.setAttribute("position",new li(c,3)),this.setAttribute("normal",new li(h,3)),this.setAttribute("uv",new li(d,2));function p(y,m,g,E,L,b,T,M,F,S,R){let B=b/F,z=T/S,W=b/2,$=T/2,V=M/2,_=F+1,C=S+1,P=0,k=0,D=new Q;for(let G=0;G<C;G++){let X=G*z-$;for(let w=0;w<_;w++){let I=w*B-W;D[y]=I*E,D[m]=X*L,D[g]=V,c.push(D.x,D.y,D.z),D[y]=0,D[m]=0,D[g]=M>0?1:-1,h.push(D.x,D.y,D.z),d.push(w/F),d.push(1-G/S),P+=1}}for(let G=0;G<S;G++)for(let X=0;X<F;X++){let w=u+X+_*G,I=u+X+_*(G+1),Y=u+(X+1)+_*(G+1),j=u+(X+1)+_*G;l.push(w,I,j),l.push(I,Y,j),k+=6}o.addGroup(f,k,R),f+=k,u+=P}}copy(t){return super.copy(t),this.parameters=Object.assign({},t.parameters),this}static fromJSON(t){return new s(t.width,t.height,t.depth,t.widthSegments,t.heightSegments,t.depthSegments)}};var wr=class s extends Xe{constructor(t=1,e=1,i=1,n=1){super(),this.type="PlaneGeometry",this.parameters={width:t,height:e,widthSegments:i,heightSegments:n};let r=t/2,a=e/2,o=Math.floor(i),l=Math.floor(n),c=o+1,h=l+1,d=t/o,u=e/l,f=[],p=[],y=[],m=[];for(let g=0;g<h;g++){let E=g*u-a;for(let L=0;L<c;L++){let b=L*d-r;p.push(b,-E,0),y.push(0,0,1),m.push(L/o),m.push(1-g/l)}}for(let g=0;g<l;g++)for(let E=0;E<o;E++){let L=E+c*g,b=E+c*(g+1),T=E+1+c*(g+1),M=E+1+c*g;f.push(L,b,M),f.push(b,T,M)}this.setIndex(f),this.setAttribute("position",new li(p,3)),this.setAttribute("normal",new li(y,3)),this.setAttribute("uv",new li(m,2))}copy(t){return super.copy(t),this.parameters=Object.assign({},t.parameters),this}static fromJSON(t){return new s(t.width,t.height,t.widthSegments,t.heightSegments)}};function Jn(s){let t={};for(let e in s){t[e]={};for(let i in s[e]){let n=s[e][i];if(Ju(n))n.isRenderTargetTexture?(Ft("UniformsUtils: Textures of render targets cannot be cloned via cloneUniforms() or mergeUniforms()."),t[e][i]=null):t[e][i]=n.clone();else if(Array.isArray(n))if(Ju(n[0])){let r=[];for(let a=0,o=n.length;a<o;a++)r[a]=n[a].clone();t[e][i]=r}else t[e][i]=n.slice();else t[e][i]=n}}return t}function Be(s){let t={};for(let e=0;e<s.length;e++){let i=Jn(s[e]);for(let n in i)t[n]=i[n]}return t}function Ju(s){return s&&(s.isColor||s.isMatrix3||s.isMatrix4||s.isVector2||s.isVector3||s.isVector4||s.isTexture||s.isQuaternion)}function Kp(s){let t=[];for(let e=0;e<s.length;e++)t.push(s[e].clone());return t}function bh(s){let t=s.getRenderTarget();return t===null?s.outputColorSpace:t.isXRRenderTarget===!0?t.texture.colorSpace:Yt.workingColorSpace}var Rd={clone:Jn,merge:Be},Zp=`void main() {
	gl_Position = projectionMatrix * modelViewMatrix * vec4( position, 1.0 );
}`,$p=`void main() {
	gl_FragColor = vec4( 1.0, 0.0, 0.0, 1.0 );
}`,Qe=class extends Kn{constructor(t){super(),this.isShaderMaterial=!0,this.type="ShaderMaterial",this.defines={},this.uniforms={},this.uniformsGroups=[],this.vertexShader=Zp,this.fragmentShader=$p,this.linewidth=1,this.wireframe=!1,this.wireframeLinewidth=1,this.fog=!1,this.lights=!1,this.clipping=!1,this.forceSinglePass=!0,this.extensions={clipCullDistance:!1,multiDraw:!1},this.defaultAttributeValues={color:[1,1,1],uv:[0,0],uv1:[0,0]},this.index0AttributeName=void 0,this.uniformsNeedUpdate=!1,this.glslVersion=null,t!==void 0&&this.setValues(t)}copy(t){return super.copy(t),this.fragmentShader=t.fragmentShader,this.vertexShader=t.vertexShader,this.uniforms=Jn(t.uniforms),this.uniformsGroups=Kp(t.uniformsGroups),this.defines=Object.assign({},t.defines),this.wireframe=t.wireframe,this.wireframeLinewidth=t.wireframeLinewidth,this.fog=t.fog,this.lights=t.lights,this.clipping=t.clipping,this.extensions=Object.assign({},t.extensions),this.glslVersion=t.glslVersion,this.defaultAttributeValues=Object.assign({},t.defaultAttributeValues),this.index0AttributeName=t.index0AttributeName,this.uniformsNeedUpdate=t.uniformsNeedUpdate,this}toJSON(t){let e=super.toJSON(t);e.glslVersion=this.glslVersion,e.uniforms={};for(let n in this.uniforms){let a=this.uniforms[n].value;a&&a.isTexture?e.uniforms[n]={type:"t",value:a.toJSON(t).uuid}:a&&a.isColor?e.uniforms[n]={type:"c",value:a.getHex()}:a&&a.isVector2?e.uniforms[n]={type:"v2",value:a.toArray()}:a&&a.isVector3?e.uniforms[n]={type:"v3",value:a.toArray()}:a&&a.isVector4?e.uniforms[n]={type:"v4",value:a.toArray()}:a&&a.isMatrix3?e.uniforms[n]={type:"m3",value:a.toArray()}:a&&a.isMatrix4?e.uniforms[n]={type:"m4",value:a.toArray()}:e.uniforms[n]={value:a}}Object.keys(this.defines).length>0&&(e.defines=this.defines),e.vertexShader=this.vertexShader,e.fragmentShader=this.fragmentShader,e.lights=this.lights,e.clipping=this.clipping;let i={};for(let n in this.extensions)this.extensions[n]===!0&&(i[n]=!0);return Object.keys(i).length>0&&(e.extensions=i),e}fromJSON(t,e){if(super.fromJSON(t,e),t.uniforms!==void 0)for(let i in t.uniforms){let n=t.uniforms[i];switch(this.uniforms[i]={},n.type){case"t":this.uniforms[i].value=e[n.value]||null;break;case"c":this.uniforms[i].value=new qt().setHex(n.value);break;case"v2":this.uniforms[i].value=new Wt().fromArray(n.value);break;case"v3":this.uniforms[i].value=new Q().fromArray(n.value);break;case"v4":this.uniforms[i].value=new he().fromArray(n.value);break;case"m3":this.uniforms[i].value=new Ot().fromArray(n.value);break;case"m4":this.uniforms[i].value=new jt().fromArray(n.value);break;default:this.uniforms[i].value=n.value}}if(t.defines!==void 0&&(this.defines=t.defines),t.vertexShader!==void 0&&(this.vertexShader=t.vertexShader),t.fragmentShader!==void 0&&(this.fragmentShader=t.fragmentShader),t.glslVersion!==void 0&&(this.glslVersion=t.glslVersion),t.extensions!==void 0)for(let i in t.extensions)this.extensions[i]=t.extensions[i];return t.lights!==void 0&&(this.lights=t.lights),t.clipping!==void 0&&(this.clipping=t.clipping),this}},Ji=class extends Qe{constructor(t){super(t),this.isRawShaderMaterial=!0,this.type="RawShaderMaterial"}};var yo=class extends Kn{constructor(t){super(),this.isMeshDepthMaterial=!0,this.type="MeshDepthMaterial",this.depthPacking=md,this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.wireframe=!1,this.wireframeLinewidth=1,this.setValues(t)}copy(t){return super.copy(t),this.depthPacking=t.depthPacking,this.map=t.map,this.alphaMap=t.alphaMap,this.displacementMap=t.displacementMap,this.displacementScale=t.displacementScale,this.displacementBias=t.displacementBias,this.wireframe=t.wireframe,this.wireframeLinewidth=t.wireframeLinewidth,this}},_o=class extends Kn{constructor(t){super(),this.isMeshDistanceMaterial=!0,this.type="MeshDistanceMaterial",this.map=null,this.alphaMap=null,this.displacementMap=null,this.displacementScale=1,this.displacementBias=0,this.setValues(t)}copy(t){return super.copy(t),this.map=t.map,this.alphaMap=t.alphaMap,this.displacementMap=t.displacementMap,this.displacementScale=t.displacementScale,this.displacementBias=t.displacementBias,this}};function Ss(s,t){return!s||s.constructor===t?s:typeof t.BYTES_PER_ELEMENT=="number"?new t(s):Array.prototype.slice.call(s)}function Kc(s){return s!==void 0&&s.inTangents!==void 0&&s.outTangents!==void 0}var vn=class{constructor(t,e,i,n){this.parameterPositions=t,this._cachedIndex=0,this.resultBuffer=n!==void 0?n:new e.constructor(i),this.sampleValues=e,this.valueSize=i,this.settings=null,this.DefaultSettings_={}}evaluate(t){let e=this.parameterPositions,i=this._cachedIndex,n=e[i],r=e[i-1];i:{t:{let a;e:{n:if(!(t<n)){for(let o=i+2;;){if(n===void 0){if(t<r)break n;return i=e.length,this._cachedIndex=i,this.copySampleValue_(i-1)}if(i===o)break;if(r=n,n=e[++i],t<n)break t}a=e.length;break e}if(!(t>=r)){let o=e[1];t<o&&(i=2,r=o);for(let l=i-2;;){if(r===void 0)return this._cachedIndex=0,this.copySampleValue_(0);if(i===l)break;if(n=r,r=e[--i-1],t>=r)break t}a=i,i=0;break e}break i}for(;i<a;){let o=i+a>>>1;t<e[o]?a=o:i=o+1}if(n=e[i],r=e[i-1],r===void 0)return this._cachedIndex=0,this.copySampleValue_(0);if(n===void 0)return i=e.length,this._cachedIndex=i,this.copySampleValue_(i-1)}this._cachedIndex=i,this.intervalChanged_(i,r,n)}return this.interpolate_(i,r,t,n)}getSettings_(){return this.settings||this.DefaultSettings_}copySampleValue_(t){let e=this.resultBuffer,i=this.sampleValues,n=this.valueSize,r=t*n;for(let a=0;a!==n;++a)e[a]=i[r+a];return e}interpolate_(){throw new Error("THREE.Interpolant: Call to abstract method.")}intervalChanged_(){}},vo=class extends vn{constructor(t,e,i,n){super(t,e,i,n),this._weightPrev=-0,this._offsetPrev=-0,this._weightNext=-0,this._offsetNext=-0,this.DefaultSettings_={endingStart:$c,endingEnd:$c}}intervalChanged_(t,e,i){let n=this.parameterPositions,r=t-2,a=t+1,o=n[r],l=n[a];if(o===void 0)switch(this.getSettings_().endingStart){case Jc:r=t,o=2*e-i;break;case jc:r=n.length-2,o=e+n[r]-n[r+1];break;default:r=t,o=i}if(l===void 0)switch(this.getSettings_().endingEnd){case Jc:a=t,l=2*i-e;break;case jc:a=1,l=i+n[1]-n[0];break;default:a=t-1,l=e}let c=(i-e)*.5,h=this.valueSize;this._weightPrev=c/(e-o),this._weightNext=c/(l-i),this._offsetPrev=r*h,this._offsetNext=a*h}interpolate_(t,e,i,n){let r=this.resultBuffer,a=this.sampleValues,o=this.valueSize,l=t*o,c=l-o,h=this._offsetPrev,d=this._offsetNext,u=this._weightPrev,f=this._weightNext,p=(i-e)/(n-e),y=p*p,m=y*p,g=-u*m+2*u*y-u*p,E=(1+u)*m+(-1.5-2*u)*y+(-.5+u)*p+1,L=(-1-f)*m+(1.5+f)*y+.5*p,b=f*m-f*y;for(let T=0;T!==o;++T)r[T]=g*a[h+T]+E*a[c+T]+L*a[l+T]+b*a[d+T];return r}},So=class extends vn{constructor(t,e,i,n){super(t,e,i,n)}interpolate_(t,e,i,n){let r=this.resultBuffer,a=this.sampleValues,o=this.valueSize,l=t*o,c=l-o,h=(i-e)/(n-e),d=1-h;for(let u=0;u!==o;++u)r[u]=a[c+u]*d+a[l+u]*h;return r}},bo=class extends vn{constructor(t,e,i,n){super(t,e,i,n)}interpolate_(t){return this.copySampleValue_(t-1)}},Mo=class extends vn{interpolate_(t,e,i,n){let r=this.resultBuffer,a=this.sampleValues,o=this.valueSize,l=t*o,c=l-o,h=this.inTangents,d=this.outTangents;if(!h||!d){let p=(i-e)/(n-e),y=1-p;for(let m=0;m!==o;++m)r[m]=a[c+m]*y+a[l+m]*p;return r}let u=o*2,f=t-1;for(let p=0;p!==o;++p){let y=a[c+p],m=a[l+p],g=f*u+p*2,E=d[g],L=d[g+1],b=t*u+p*2,T=h[b],M=h[b+1],F=jp(i,e,E,T,n);r[p]=Id(F,y,L,M,m)}return r}};function Id(s,t,e,i,n){let r=1-s;return r*r*r*t+3*r*r*s*e+3*r*s*s*i+s*s*s*n}function Jp(s,t,e,i,n){let r=1-s;return 3*r*r*(e-t)+6*r*s*(i-e)+3*s*s*(n-i)}function jp(s,t,e,i,n){let r=(s-t)/(n-t);for(let a=0;a<8;a++){let o=Id(r,t,e,i,n)-s;if(Math.abs(o)<1e-10)break;let l=Jp(r,t,e,i,n);if(Math.abs(l)<1e-10)break;r=Math.max(0,Math.min(1,r-o/l))}return r}var ti=class{constructor(t,e,i,n){if(t===void 0)throw new Error("THREE.KeyframeTrack: track name is undefined");if(e===void 0||e.length===0)throw new Error("THREE.KeyframeTrack: no keyframes in track named "+t);this.name=t,this.times=Ss(e,this.TimeBufferType),this.values=Ss(i,this.ValueBufferType),this.setInterpolation(n||this.DefaultInterpolation)}static toJSON(t){let e=t.constructor,i;if(e.toJSON!==this.toJSON)i=e.toJSON(t);else{i={name:t.name,times:Ss(t.times,Array),values:Ss(t.values,Array)};let n=t.getInterpolation();n!==t.DefaultInterpolation&&(i.interpolation=n),Kc(t.settings)&&(i.settings={inTangents:Ss(t.settings.inTangents,Array),outTangents:Ss(t.settings.outTangents,Array)})}return i.type=t.ValueTypeName,i}InterpolantFactoryMethodDiscrete(t){return new bo(this.times,this.values,this.getValueSize(),t)}InterpolantFactoryMethodLinear(t){return new So(this.times,this.values,this.getValueSize(),t)}InterpolantFactoryMethodSmooth(t){return new vo(this.times,this.values,this.getValueSize(),t)}InterpolantFactoryMethodBezier(t){let e=new Mo(this.times,this.values,this.getValueSize(),t);return this.settings&&(e.inTangents=this.settings.inTangents,e.outTangents=this.settings.outTangents),e}setInterpolation(t){let e;switch(t){case ur:e=this.InterpolantFactoryMethodDiscrete;break;case ho:e=this.InterpolantFactoryMethodLinear;break;case to:e=this.InterpolantFactoryMethodSmooth;break;case Zc:e=this.InterpolantFactoryMethodBezier;break}if(e===void 0){let i="unsupported interpolation for "+this.ValueTypeName+" keyframe track named "+this.name;if(this.createInterpolant===void 0)if(t!==this.DefaultInterpolation)this.setInterpolation(this.DefaultInterpolation);else throw new Error(i);return Ft("KeyframeTrack:",i),this}return this.createInterpolant=e,this}getInterpolation(){switch(this.createInterpolant){case this.InterpolantFactoryMethodDiscrete:return ur;case this.InterpolantFactoryMethodLinear:return ho;case this.InterpolantFactoryMethodSmooth:return to;case this.InterpolantFactoryMethodBezier:return Zc}}getValueSize(){return this.values.length/this.times.length}shift(t){if(t!==0){let e=this.times;for(let i=0,n=e.length;i!==n;++i)e[i]+=t}return this}scale(t){if(t!==1){let e=this.times;for(let i=0,n=e.length;i!==n;++i)e[i]*=t;Kc(this.settings)&&(ju(this.settings.inTangents,t),ju(this.settings.outTangents,t))}return this}trim(t,e){let i=this.times,n=i.length,r=0,a=n-1;for(;r!==n&&i[r]<t;)++r;for(;a!==-1&&i[a]>e;)--a;if(++a,r!==0||a!==n){r>=a&&(a=Math.max(a,1),r=a-1);let o=this.getValueSize();this.times=i.slice(r,a),this.values=this.values.slice(r*o,a*o)}return this}validate(){let t=!0,e=this.getValueSize();e-Math.floor(e)!==0&&(Ut("KeyframeTrack: Invalid value size in track.",this),t=!1);let i=this.times,n=this.values,r=i.length;r===0&&(Ut("KeyframeTrack: Track is empty.",this),t=!1);let a=null;for(let o=0;o!==r;o++){let l=i[o];if(typeof l=="number"&&isNaN(l)){Ut("KeyframeTrack: Time is not a valid number.",this,o,l),t=!1;break}if(a!==null&&a>l){Ut("KeyframeTrack: Out of order keys.",this,o,l,a),t=!1;break}a=l}if(n!==void 0&&Cp(n))for(let o=0,l=n.length;o!==l;++o){let c=n[o];if(isNaN(c)){Ut("KeyframeTrack: Value is not a valid number.",this,o,c),t=!1;break}}return t}optimize(){let t=this.times.slice(),e=this.values.slice(),i=this.getValueSize(),n=this.getInterpolation()===to,r=t.length-1,a=1;for(let o=1;o<r;++o){let l=!1,c=t[o],h=t[o+1];if(c!==h&&(o!==1||c!==t[0]))if(n)l=!0;else{let d=o*i,u=d-i,f=d+i;for(let p=0;p!==i;++p){let y=e[d+p];if(y!==e[u+p]||y!==e[f+p]){l=!0;break}}}if(l){if(o!==a){t[a]=t[o];let d=o*i,u=a*i;for(let f=0;f!==i;++f)e[u+f]=e[d+f]}++a}}if(r>0){t[a]=t[r];for(let o=r*i,l=a*i,c=0;c!==i;++c)e[l+c]=e[o+c];++a}return a!==t.length?(this.times=t.slice(0,a),this.values=e.slice(0,a*i)):(this.times=t,this.values=e),this}clone(){let t=this.times.slice(),e=this.values.slice(),i=this.constructor,n=new i(this.name,t,e);return n.createInterpolant=this.createInterpolant,Kc(this.settings)&&(n.settings={inTangents:this.settings.inTangents.slice(),outTangents:this.settings.outTangents.slice()}),n}};function ju(s,t){for(let e=0,i=s.length;e!==i;e+=2)s[e]*=t}ti.prototype.ValueTypeName="";ti.prototype.TimeBufferType=Float32Array;ti.prototype.ValueBufferType=Float32Array;ti.prototype.DefaultInterpolation=ho;var Sn=class extends ti{constructor(t,e,i){super(t,e,i)}};Sn.prototype.ValueTypeName="bool";Sn.prototype.ValueBufferType=Array;Sn.prototype.DefaultInterpolation=ur;Sn.prototype.InterpolantFactoryMethodLinear=void 0;Sn.prototype.InterpolantFactoryMethodSmooth=void 0;var wo=class extends ti{constructor(t,e,i,n){super(t,e,i,n)}};wo.prototype.ValueTypeName="color";var To=class extends ti{constructor(t,e,i,n){super(t,e,i,n)}};To.prototype.ValueTypeName="number";var Eo=class extends vn{constructor(t,e,i,n){super(t,e,i,n)}interpolate_(t,e,i,n){let r=this.resultBuffer,a=this.sampleValues,o=this.valueSize,l=(i-e)/(n-e),c=t*o;for(let h=c+o;c!==h;c+=4)Ni.slerpFlat(r,0,a,c-o,a,c,l);return r}},Tr=class extends ti{constructor(t,e,i,n){super(t,e,i,n)}InterpolantFactoryMethodLinear(t){return new Eo(this.times,this.values,this.getValueSize(),t)}};Tr.prototype.ValueTypeName="quaternion";Tr.prototype.InterpolantFactoryMethodSmooth=void 0;var bn=class extends ti{constructor(t,e,i){super(t,e,i)}};bn.prototype.ValueTypeName="string";bn.prototype.ValueBufferType=Array;bn.prototype.DefaultInterpolation=ur;bn.prototype.InterpolantFactoryMethodLinear=void 0;bn.prototype.InterpolantFactoryMethodSmooth=void 0;var Ao=class extends ti{constructor(t,e,i,n){super(t,e,i,n)}};Ao.prototype.ValueTypeName="vector";var Co=class{constructor(t,e,i){let n=this,r=!1,a=0,o=0,l,c=[];this.onStart=void 0,this.onLoad=t,this.onProgress=e,this.onError=i,this._abortController=null,this.itemStart=function(h){o++,r===!1&&n.onStart!==void 0&&n.onStart(h,a,o),r=!0},this.itemEnd=function(h){a++,n.onProgress!==void 0&&n.onProgress(h,a,o),a===o&&(r=!1,n.onLoad!==void 0&&n.onLoad())},this.itemError=function(h){n.onError!==void 0&&n.onError(h)},this.resolveURL=function(h){return h=h.normalize("NFC"),l?l(h):h},this.setURLModifier=function(h){return l=h,this},this.addHandler=function(h,d){return c.push(h,d),this},this.removeHandler=function(h){let d=c.indexOf(h);return d!==-1&&c.splice(d,2),this},this.getHandler=function(h){for(let d=0,u=c.length;d<u;d+=2){let f=c[d],p=c[d+1];if(f.global&&(f.lastIndex=0),f.test(h))return p}return null},this.abort=function(){return this.abortController.abort(),this._abortController=null,this}}get abortController(){return this._abortController||(this._abortController=new AbortController),this._abortController}},Pd=new Co,Ro=class{constructor(t){this.manager=t!==void 0?t:Pd,this.crossOrigin="anonymous",this.withCredentials=!1,this.path="",this.resourcePath="",this.requestHeader={},typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}load(){}loadAsync(t,e){let i=this;return new Promise(function(n,r){i.load(t,n,e,r)})}parse(){}setCrossOrigin(t){return this.crossOrigin=t,this}setWithCredentials(t){return this.withCredentials=t,this}setPath(t){return this.path=t,this}setResourcePath(t){return this.resourcePath=t,this}setRequestHeader(t){return this.requestHeader=t,this}abort(){return this}};Ro.DEFAULT_MATERIAL_NAME="__DEFAULT";var ja=new Q,Qa=new Ni,Ii=new Q,Zn=class extends ci{constructor(){super(),this.isCamera=!0,this.type="Camera",this.matrixWorldInverse=new jt,this.projectionMatrix=new jt,this.projectionMatrixInverse=new jt,this.coordinateSystem=yi,this._reversedDepth=!1}get reversedDepth(){return this._reversedDepth}copy(t,e){return super.copy(t,e),this.matrixWorldInverse.copy(t.matrixWorldInverse),this.projectionMatrix.copy(t.projectionMatrix),this.projectionMatrixInverse.copy(t.projectionMatrixInverse),this.coordinateSystem=t.coordinateSystem,this}getWorldDirection(t){return super.getWorldDirection(t).negate()}updateMatrixWorld(t){super.updateMatrixWorld(t),this.matrixWorld.decompose(ja,Qa,Ii),Ii.x===1&&Ii.y===1&&Ii.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(ja,Qa,Ii.set(1,1,1)).invert()}updateWorldMatrix(t,e,i=!1){super.updateWorldMatrix(t,e,i),this.matrixWorld.decompose(ja,Qa,Ii),Ii.x===1&&Ii.y===1&&Ii.z===1?this.matrixWorldInverse.copy(this.matrixWorld).invert():this.matrixWorldInverse.compose(ja,Qa,Ii.set(1,1,1)).invert()}clone(){return new this.constructor().copy(this)}},hn=new Q,Qu=new Wt,td=new Wt,He=class extends Zn{constructor(t=50,e=1,i=.1,n=2e3){super(),this.isPerspectiveCamera=!0,this.type="PerspectiveCamera",this.fov=t,this.zoom=1,this.near=i,this.far=n,this.focus=10,this.aspect=e,this.view=null,this.filmGauge=35,this.filmOffset=0,this.updateProjectionMatrix()}copy(t,e){return super.copy(t,e),this.fov=t.fov,this.zoom=t.zoom,this.near=t.near,this.far=t.far,this.focus=t.focus,this.aspect=t.aspect,this.view=t.view===null?null:Object.assign({},t.view),this.filmGauge=t.filmGauge,this.filmOffset=t.filmOffset,this}setFocalLength(t){let e=.5*this.getFilmHeight()/t;this.fov=uo*2*Math.atan(e),this.updateProjectionMatrix()}getFocalLength(){let t=Math.tan(Ac*.5*this.fov);return .5*this.getFilmHeight()/t}getEffectiveFOV(){return uo*2*Math.atan(Math.tan(Ac*.5*this.fov)/this.zoom)}getFilmWidth(){return this.filmGauge*Math.min(this.aspect,1)}getFilmHeight(){return this.filmGauge/Math.max(this.aspect,1)}getViewBounds(t,e,i){hn.set(-1,-1,.5).applyMatrix4(this.projectionMatrixInverse),e.set(hn.x,hn.y).multiplyScalar(-t/hn.z),hn.set(1,1,.5).applyMatrix4(this.projectionMatrixInverse),i.set(hn.x,hn.y).multiplyScalar(-t/hn.z)}getViewSize(t,e){return this.getViewBounds(t,Qu,td),e.subVectors(td,Qu)}setViewOffset(t,e,i,n,r,a){this.aspect=t/e,this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=t,this.view.fullHeight=e,this.view.offsetX=i,this.view.offsetY=n,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){let t=this.near,e=t*Math.tan(Ac*.5*this.fov)/this.zoom,i=2*e,n=this.aspect*i,r=-.5*n,a=this.view;if(this.view!==null&&this.view.enabled){let l=a.fullWidth,c=a.fullHeight;r+=a.offsetX*n/l,e-=a.offsetY*i/c,n*=a.width/l,i*=a.height/c}let o=this.filmOffset;o!==0&&(r+=t*o/this.getFilmWidth()),this.projectionMatrix.makePerspective(r,r+n,e,e-i,t,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(t){let e=super.toJSON(t);return e.object.fov=this.fov,e.object.zoom=this.zoom,e.object.near=this.near,e.object.far=this.far,e.object.focus=this.focus,e.object.aspect=this.aspect,this.view!==null&&(e.object.view=Object.assign({},this.view)),e.object.filmGauge=this.filmGauge,e.object.filmOffset=this.filmOffset,e}};var Er=class extends Zn{constructor(t=-1,e=1,i=1,n=-1,r=.1,a=2e3){super(),this.isOrthographicCamera=!0,this.type="OrthographicCamera",this.zoom=1,this.view=null,this.left=t,this.right=e,this.top=i,this.bottom=n,this.near=r,this.far=a,this.updateProjectionMatrix()}copy(t,e){return super.copy(t,e),this.left=t.left,this.right=t.right,this.top=t.top,this.bottom=t.bottom,this.near=t.near,this.far=t.far,this.zoom=t.zoom,this.view=t.view===null?null:Object.assign({},t.view),this}setViewOffset(t,e,i,n,r,a){this.view===null&&(this.view={enabled:!0,fullWidth:1,fullHeight:1,offsetX:0,offsetY:0,width:1,height:1}),this.view.enabled=!0,this.view.fullWidth=t,this.view.fullHeight=e,this.view.offsetX=i,this.view.offsetY=n,this.view.width=r,this.view.height=a,this.updateProjectionMatrix()}clearViewOffset(){this.view!==null&&(this.view.enabled=!1),this.updateProjectionMatrix()}updateProjectionMatrix(){let t=(this.right-this.left)/(2*this.zoom),e=(this.top-this.bottom)/(2*this.zoom),i=(this.right+this.left)/2,n=(this.top+this.bottom)/2,r=i-t,a=i+t,o=n+e,l=n-e;if(this.view!==null&&this.view.enabled){let c=(this.right-this.left)/this.view.fullWidth/this.zoom,h=(this.top-this.bottom)/this.view.fullHeight/this.zoom;r+=c*this.view.offsetX,a=r+c*this.view.width,o-=h*this.view.offsetY,l=o-h*this.view.height}this.projectionMatrix.makeOrthographic(r,a,o,l,this.near,this.far,this.coordinateSystem,this.reversedDepth),this.projectionMatrixInverse.copy(this.projectionMatrix).invert()}toJSON(t){let e=super.toJSON(t);return e.object.zoom=this.zoom,e.object.left=this.left,e.object.right=this.right,e.object.top=this.top,e.object.bottom=this.bottom,e.object.near=this.near,e.object.far=this.far,this.view!==null&&(e.object.view=Object.assign({},this.view)),e}};var bs=-90,Ms=1,Io=class extends ci{constructor(t,e,i){super(),this.type="CubeCamera",this.renderTarget=i,this.coordinateSystem=null,this.activeMipmapLevel=0;let n=new He(bs,Ms,t,e);n.layers=this.layers,this.add(n);let r=new He(bs,Ms,t,e);r.layers=this.layers,this.add(r);let a=new He(bs,Ms,t,e);a.layers=this.layers,this.add(a);let o=new He(bs,Ms,t,e);o.layers=this.layers,this.add(o);let l=new He(bs,Ms,t,e);l.layers=this.layers,this.add(l);let c=new He(bs,Ms,t,e);c.layers=this.layers,this.add(c)}updateCoordinateSystem(){let t=this.coordinateSystem,e=this.children.concat(),[i,n,r,a,o,l]=e;for(let c of e)this.remove(c);if(t===yi)i.up.set(0,1,0),i.lookAt(1,0,0),n.up.set(0,1,0),n.lookAt(-1,0,0),r.up.set(0,0,-1),r.lookAt(0,1,0),a.up.set(0,0,1),a.lookAt(0,-1,0),o.up.set(0,1,0),o.lookAt(0,0,1),l.up.set(0,1,0),l.lookAt(0,0,-1);else if(t===fr)i.up.set(0,-1,0),i.lookAt(-1,0,0),n.up.set(0,-1,0),n.lookAt(1,0,0),r.up.set(0,0,1),r.lookAt(0,1,0),a.up.set(0,0,-1),a.lookAt(0,-1,0),o.up.set(0,-1,0),o.lookAt(0,0,1),l.up.set(0,-1,0),l.lookAt(0,0,-1);else throw new Error("THREE.CubeCamera.updateCoordinateSystem(): Invalid coordinate system: "+t);for(let c of e)this.add(c),c.updateMatrixWorld()}update(t,e){this.parent===null&&this.updateMatrixWorld();let{renderTarget:i,activeMipmapLevel:n}=this;this.coordinateSystem!==t.coordinateSystem&&(this.coordinateSystem=t.coordinateSystem,this.updateCoordinateSystem());let[r,a,o,l,c,h]=this.children,d=t.getRenderTarget(),u=t.getActiveCubeFace(),f=t.getActiveMipmapLevel(),p=t.xr.enabled;t.xr.enabled=!1;let y=i.texture.generateMipmaps;i.texture.generateMipmaps=!1;let m=!1;t.isWebGLRenderer===!0?m=t.state.buffers.depth.getReversed():m=t.reversedDepthBuffer,t.setRenderTarget(i,0,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,r),t.setRenderTarget(i,1,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,a),t.setRenderTarget(i,2,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,o),t.setRenderTarget(i,3,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,l),t.setRenderTarget(i,4,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,c),i.texture.generateMipmaps=y,t.setRenderTarget(i,5,n),m&&t.autoClear===!1&&t.clearDepth(),t.render(e,h),t.setRenderTarget(d,u,f),t.xr.enabled=p,i.texture.needsPMREMUpdate=!0}},Po=class extends He{constructor(t=[]){super(),this.isArrayCamera=!0,this.isMultiViewCamera=!1,this.cameras=t}};var Mh="\\[\\]\\.:\\/",Qp=new RegExp("["+Mh+"]","g"),wh="[^"+Mh+"]",tm="[^"+Mh.replace("\\.","")+"]",em=/((?:WC+[\/:])*)/.source.replace("WC",wh),im=/(WCOD+)?/.source.replace("WCOD",tm),nm=/(?:\.(WC+)(?:\[(.+)\])?)?/.source.replace("WC",wh),sm=/\.(WC+)(?:\[(.+)\])?/.source.replace("WC",wh),rm=new RegExp("^"+em+im+nm+sm+"$"),am=["material","materials","bones","map"],Qc=class{constructor(t,e,i){let n=i||de.parseTrackName(e);this._targetGroup=t,this._bindings=t.subscribe_(e,n)}getValue(t,e){this.bind();let i=this._targetGroup.nCachedObjects_,n=this._bindings[i];n!==void 0&&n.getValue(t,e)}setValue(t,e){let i=this._bindings;for(let n=this._targetGroup.nCachedObjects_,r=i.length;n!==r;++n)i[n].setValue(t,e)}bind(){let t=this._bindings;for(let e=this._targetGroup.nCachedObjects_,i=t.length;e!==i;++e)t[e].bind()}unbind(){let t=this._bindings;for(let e=this._targetGroup.nCachedObjects_,i=t.length;e!==i;++e)t[e].unbind()}},de=class s{constructor(t,e,i){this.path=e,this.parsedPath=i||s.parseTrackName(e),this.node=s.findNode(t,this.parsedPath.nodeName),this.rootNode=t,this.getValue=this._getValue_unbound,this.setValue=this._setValue_unbound}static create(t,e,i){return t&&t.isAnimationObjectGroup?new s.Composite(t,e,i):new s(t,e,i)}static sanitizeNodeName(t){return t.replace(/\s/g,"_").replace(Qp,"")}static parseTrackName(t){let e=rm.exec(t);if(e===null)throw new Error("THREE.PropertyBinding: Cannot parse trackName: "+t);let i={nodeName:e[2],objectName:e[3],objectIndex:e[4],propertyName:e[5],propertyIndex:e[6]},n=i.nodeName&&i.nodeName.lastIndexOf(".");if(n!==void 0&&n!==-1){let r=i.nodeName.substring(n+1);am.indexOf(r)!==-1&&(i.nodeName=i.nodeName.substring(0,n),i.objectName=r)}if(i.propertyName===null||i.propertyName.length===0)throw new Error("THREE.PropertyBinding: can not parse propertyName from trackName: "+t);return i}static findNode(t,e){if(e===void 0||e===""||e==="."||e===-1||e===t.name||e===t.uuid)return t;if(t.skeleton){let i=t.skeleton.getBoneByName(e);if(i!==void 0)return i}if(t.children){let i=function(r){for(let a=0;a<r.length;a++){let o=r[a];if(o.name===e||o.uuid===e)return o;let l=i(o.children);if(l)return l}return null},n=i(t.children);if(n)return n}return null}_getValue_unavailable(){}_setValue_unavailable(){}_getValue_direct(t,e){t[e]=this.targetObject[this.propertyName]}_getValue_array(t,e){let i=this.resolvedProperty;for(let n=0,r=i.length;n!==r;++n)t[e++]=i[n]}_getValue_arrayElement(t,e){t[e]=this.resolvedProperty[this.propertyIndex]}_getValue_toArray(t,e){this.resolvedProperty.toArray(t,e)}_setValue_direct(t,e){this.targetObject[this.propertyName]=t[e]}_setValue_direct_setNeedsUpdate(t,e){this.targetObject[this.propertyName]=t[e],this.targetObject.needsUpdate=!0}_setValue_direct_setMatrixWorldNeedsUpdate(t,e){this.targetObject[this.propertyName]=t[e],this.targetObject.matrixWorldNeedsUpdate=!0}_setValue_array(t,e){let i=this.resolvedProperty;for(let n=0,r=i.length;n!==r;++n)i[n]=t[e++]}_setValue_array_setNeedsUpdate(t,e){let i=this.resolvedProperty;for(let n=0,r=i.length;n!==r;++n)i[n]=t[e++];this.targetObject.needsUpdate=!0}_setValue_array_setMatrixWorldNeedsUpdate(t,e){let i=this.resolvedProperty;for(let n=0,r=i.length;n!==r;++n)i[n]=t[e++];this.targetObject.matrixWorldNeedsUpdate=!0}_setValue_arrayElement(t,e){this.resolvedProperty[this.propertyIndex]=t[e]}_setValue_arrayElement_setNeedsUpdate(t,e){this.resolvedProperty[this.propertyIndex]=t[e],this.targetObject.needsUpdate=!0}_setValue_arrayElement_setMatrixWorldNeedsUpdate(t,e){this.resolvedProperty[this.propertyIndex]=t[e],this.targetObject.matrixWorldNeedsUpdate=!0}_setValue_fromArray(t,e){this.resolvedProperty.fromArray(t,e)}_setValue_fromArray_setNeedsUpdate(t,e){this.resolvedProperty.fromArray(t,e),this.targetObject.needsUpdate=!0}_setValue_fromArray_setMatrixWorldNeedsUpdate(t,e){this.resolvedProperty.fromArray(t,e),this.targetObject.matrixWorldNeedsUpdate=!0}_getValue_unbound(t,e){this.bind(),this.getValue(t,e)}_setValue_unbound(t,e){this.bind(),this.setValue(t,e)}bind(){let t=this.node,e=this.parsedPath,i=e.objectName,n=e.propertyName,r=e.propertyIndex;if(t||(t=s.findNode(this.rootNode,e.nodeName),this.node=t),this.getValue=this._getValue_unavailable,this.setValue=this._setValue_unavailable,!t){Ft("PropertyBinding: No target node found for track: "+this.path+".");return}if(i){let c=e.objectIndex;switch(i){case"materials":if(!t.material){Ut("PropertyBinding: Can not bind to material as node does not have a material.",this);return}if(!t.material.materials){Ut("PropertyBinding: Can not bind to material.materials as node.material does not have a materials array.",this);return}t=t.material.materials;break;case"bones":if(!t.skeleton){Ut("PropertyBinding: Can not bind to bones as node does not have a skeleton.",this);return}t=t.skeleton.bones;for(let h=0;h<t.length;h++)if(t[h].name===c){c=h;break}break;case"map":if("map"in t){t=t.map;break}if(!t.material){Ut("PropertyBinding: Can not bind to material as node does not have a material.",this);return}if(!t.material.map){Ut("PropertyBinding: Can not bind to material.map as node.material does not have a map.",this);return}t=t.material.map;break;default:if(t[i]===void 0){Ut("PropertyBinding: Can not bind to objectName of node undefined.",this);return}t=t[i]}if(c!==void 0){if(t[c]===void 0){Ut("PropertyBinding: Trying to bind to objectIndex of objectName, but is undefined.",this,t);return}t=t[c]}}let a=t[n];if(a===void 0){let c=e.nodeName;Ut("PropertyBinding: Trying to update property for track: "+c+"."+n+" but it wasn't found.",t);return}let o=this.Versioning.None;this.targetObject=t,t.isMaterial===!0?o=this.Versioning.NeedsUpdate:t.isObject3D===!0&&(o=this.Versioning.MatrixWorldNeedsUpdate);let l=this.BindingType.Direct;if(r!==void 0){if(n==="morphTargetInfluences"){if(!t.geometry){Ut("PropertyBinding: Can not bind to morphTargetInfluences because node does not have a geometry.",this);return}if(!t.geometry.morphAttributes){Ut("PropertyBinding: Can not bind to morphTargetInfluences because node does not have a geometry.morphAttributes.",this);return}t.morphTargetDictionary[r]!==void 0&&(r=t.morphTargetDictionary[r])}l=this.BindingType.ArrayElement,this.resolvedProperty=a,this.propertyIndex=r}else a.fromArray!==void 0&&a.toArray!==void 0?(l=this.BindingType.HasFromToArray,this.resolvedProperty=a):Array.isArray(a)?(l=this.BindingType.EntireArray,this.resolvedProperty=a):this.propertyName=n;this.getValue=this.GetterByBindingType[l],this.setValue=this.SetterByBindingTypeAndVersioning[l][o]}unbind(){this.node=null,this.getValue=this._getValue_unbound,this.setValue=this._setValue_unbound}};de.Composite=Qc;de.prototype.BindingType={Direct:0,EntireArray:1,ArrayElement:2,HasFromToArray:3};de.prototype.Versioning={None:0,NeedsUpdate:1,MatrixWorldNeedsUpdate:2};de.prototype.GetterByBindingType=[de.prototype._getValue_direct,de.prototype._getValue_array,de.prototype._getValue_arrayElement,de.prototype._getValue_toArray];de.prototype.SetterByBindingTypeAndVersioning=[[de.prototype._setValue_direct,de.prototype._setValue_direct_setNeedsUpdate,de.prototype._setValue_direct_setMatrixWorldNeedsUpdate],[de.prototype._setValue_array,de.prototype._setValue_array_setNeedsUpdate,de.prototype._setValue_array_setMatrixWorldNeedsUpdate],[de.prototype._setValue_arrayElement,de.prototype._setValue_arrayElement_setNeedsUpdate,de.prototype._setValue_arrayElement_setMatrixWorldNeedsUpdate],[de.prototype._setValue_fromArray,de.prototype._setValue_fromArray_setNeedsUpdate,de.prototype._setValue_fromArray_setMatrixWorldNeedsUpdate]];var Rv=new Float32Array(1);var th=class s{static{s.prototype.isMatrix2=!0}constructor(t,e,i,n){this.elements=[1,0,0,1],t!==void 0&&this.set(t,e,i,n)}identity(){return this.set(1,0,0,1),this}fromArray(t,e=0){for(let i=0;i<4;i++)this.elements[i]=t[i+e];return this}set(t,e,i,n){let r=this.elements;return r[0]=t,r[2]=e,r[1]=i,r[3]=n,this}};function Th(s,t,e,i){let n=om(i);switch(e){case yh:return s*t;case Ds:return s*t/n.components*n.byteLength;case qo:return s*t/n.components*n.byteLength;case An:return s*t*2/n.components*n.byteLength;case Yo:return s*t*2/n.components*n.byteLength;case _h:return s*t*3/n.components*n.byteLength;case ke:return s*t*4/n.components*n.byteLength;case Ko:return s*t*4/n.components*n.byteLength;case Dr:case Nr:return Math.floor((s+3)/4)*Math.floor((t+3)/4)*8;case Ur:case Or:return Math.floor((s+3)/4)*Math.floor((t+3)/4)*16;case $o:case jo:return Math.max(s,16)*Math.max(t,8)/4;case Zo:case Jo:return Math.max(s,8)*Math.max(t,8)/2;case Qo:case tl:case il:case nl:return Math.floor((s+3)/4)*Math.floor((t+3)/4)*8;case el:case kr:case sl:return Math.floor((s+3)/4)*Math.floor((t+3)/4)*16;case rl:return Math.floor((s+3)/4)*Math.floor((t+3)/4)*16;case al:return Math.floor((s+4)/5)*Math.floor((t+3)/4)*16;case ol:return Math.floor((s+4)/5)*Math.floor((t+4)/5)*16;case ll:return Math.floor((s+5)/6)*Math.floor((t+4)/5)*16;case cl:return Math.floor((s+5)/6)*Math.floor((t+5)/6)*16;case hl:return Math.floor((s+7)/8)*Math.floor((t+4)/5)*16;case ul:return Math.floor((s+7)/8)*Math.floor((t+5)/6)*16;case dl:return Math.floor((s+7)/8)*Math.floor((t+7)/8)*16;case fl:return Math.floor((s+9)/10)*Math.floor((t+4)/5)*16;case pl:return Math.floor((s+9)/10)*Math.floor((t+5)/6)*16;case ml:return Math.floor((s+9)/10)*Math.floor((t+7)/8)*16;case gl:return Math.floor((s+9)/10)*Math.floor((t+9)/10)*16;case xl:return Math.floor((s+11)/12)*Math.floor((t+9)/10)*16;case yl:return Math.floor((s+11)/12)*Math.floor((t+11)/12)*16;case _l:case vl:case Sl:return Math.ceil(s/4)*Math.ceil(t/4)*16;case bl:case Ml:return Math.ceil(s/4)*Math.ceil(t/4)*8;case Br:case wl:return Math.ceil(s/4)*Math.ceil(t/4)*16}throw new Error(`Unable to determine texture byte length for ${e} format.`)}function om(s){switch(s){case Le:case ph:return{byteLength:1,components:1};case Ls:case mh:case Si:return{byteLength:2,components:1};case Wo:case Xo:return{byteLength:2,components:4};case vi:case Ho:case ii:return{byteLength:4,components:1};case gh:case xh:return{byteLength:4,components:3}}throw new Error(`THREE.TextureUtils: Unknown texture type ${s}.`)}typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("register",{detail:{revision:"186"}}));typeof window<"u"&&(window.__THREE__?Ft("WARNING: Multiple instances of Three.js being imported."):window.__THREE__="186");function Qd(){let s=null,t=!1,e=null,i=null;function n(r,a){i=s.requestAnimationFrame(n),e(r,a)}return{start:function(){t!==!0&&e!==null&&s!==null&&(i=s.requestAnimationFrame(n),t=!0)},stop:function(){s!==null&&s.cancelAnimationFrame(i),t=!1},setAnimationLoop:function(r){e=r},setContext:function(r){s=r}}}function cm(s){let t=new WeakMap;function e(o,l){let c=o.array,h=o.usage,d=c.byteLength,u=s.createBuffer();s.bindBuffer(l,u),s.bufferData(l,c,h),o.onUploadCallback();let f;if(c instanceof Float32Array)f=s.FLOAT;else if(typeof Float16Array<"u"&&c instanceof Float16Array)f=s.HALF_FLOAT;else if(c instanceof Uint16Array)o.isFloat16BufferAttribute?f=s.HALF_FLOAT:f=s.UNSIGNED_SHORT;else if(c instanceof Int16Array)f=s.SHORT;else if(c instanceof Uint32Array)f=s.UNSIGNED_INT;else if(c instanceof Int32Array)f=s.INT;else if(c instanceof Int8Array)f=s.BYTE;else if(c instanceof Uint8Array)f=s.UNSIGNED_BYTE;else if(c instanceof Uint8ClampedArray)f=s.UNSIGNED_BYTE;else throw new Error("THREE.WebGLAttributes: Unsupported buffer data format: "+c);return{buffer:u,type:f,bytesPerElement:c.BYTES_PER_ELEMENT,version:o.version,size:d}}function i(o,l,c){let h=l.array,d=l.updateRanges;if(s.bindBuffer(c,o),d.length===0)s.bufferSubData(c,0,h);else{d.sort((f,p)=>f.start-p.start);let u=0;for(let f=1;f<d.length;f++){let p=d[u],y=d[f];y.start<=p.start+p.count+1?p.count=Math.max(p.count,y.start+y.count-p.start):(++u,d[u]=y)}d.length=u+1;for(let f=0,p=d.length;f<p;f++){let y=d[f];s.bufferSubData(c,y.start*h.BYTES_PER_ELEMENT,h,y.start,y.count)}l.clearUpdateRanges()}l.onUploadCallback()}function n(o){return o.isInterleavedBufferAttribute&&(o=o.data),t.get(o)}function r(o){o.isInterleavedBufferAttribute&&(o=o.data);let l=t.get(o);l&&(s.deleteBuffer(l.buffer),t.delete(o))}function a(o,l){if(o.isInterleavedBufferAttribute&&(o=o.data),o.isGLBufferAttribute){let h=t.get(o);(!h||h.version<o.version)&&t.set(o,{buffer:o.buffer,type:o.type,bytesPerElement:o.elementSize,version:o.version});return}let c=t.get(o);if(c===void 0)t.set(o,e(o,l));else if(c.version<o.version){if(c.size!==o.array.byteLength)throw new Error("THREE.WebGLAttributes: The size of the buffer attribute's array buffer does not match the original size. Resizing buffer attributes is not supported.");i(c.buffer,o,l),c.version=o.version}}return{get:n,remove:r,update:a}}var hm=`#ifdef USE_ALPHAHASH
	if ( diffuseColor.a < getAlphaHashThreshold( vPosition ) ) discard;
#endif`,um=`#ifdef USE_ALPHAHASH
	const float ALPHA_HASH_SCALE = 0.05;
	float hash2D( vec2 value ) {
		return fract( 1.0e4 * sin( 17.0 * value.x + 0.1 * value.y ) * ( 0.1 + abs( sin( 13.0 * value.y + value.x ) ) ) );
	}
	float hash3D( vec3 value ) {
		return hash2D( vec2( hash2D( value.xy ), value.z ) );
	}
	float getAlphaHashThreshold( vec3 position ) {
		float maxDeriv = max(
			length( dFdx( position.xyz ) ),
			length( dFdy( position.xyz ) )
		);
		float pixScale = 1.0 / ( ALPHA_HASH_SCALE * maxDeriv );
		vec2 pixScales = vec2(
			exp2( floor( log2( pixScale ) ) ),
			exp2( ceil( log2( pixScale ) ) )
		);
		vec2 alpha = vec2(
			hash3D( floor( pixScales.x * position.xyz ) ),
			hash3D( floor( pixScales.y * position.xyz ) )
		);
		float lerpFactor = fract( log2( pixScale ) );
		float x = ( 1.0 - lerpFactor ) * alpha.x + lerpFactor * alpha.y;
		float a = min( lerpFactor, 1.0 - lerpFactor );
		vec3 cases = vec3(
			x * x / ( 2.0 * a * ( 1.0 - a ) ),
			( x - 0.5 * a ) / ( 1.0 - a ),
			1.0 - ( ( 1.0 - x ) * ( 1.0 - x ) / ( 2.0 * a * ( 1.0 - a ) ) )
		);
		float threshold = ( x < ( 1.0 - a ) )
			? ( ( x < a ) ? cases.x : cases.y )
			: cases.z;
		return clamp( threshold , 1.0e-6, 1.0 );
	}
#endif`,dm=`#ifdef USE_ALPHAMAP
	diffuseColor.a *= texture2D( alphaMap, vAlphaMapUv ).g;
#endif`,fm=`#ifdef USE_ALPHAMAP
	uniform sampler2D alphaMap;
#endif`,pm=`#ifdef USE_ALPHATEST
	#ifdef ALPHA_TO_COVERAGE
	diffuseColor.a = smoothstep( alphaTest, alphaTest + fwidth( diffuseColor.a ), diffuseColor.a );
	if ( diffuseColor.a == 0.0 ) discard;
	#else
	if ( diffuseColor.a < alphaTest ) discard;
	#endif
#endif`,mm=`#ifdef USE_ALPHATEST
	uniform float alphaTest;
#endif`,gm=`#ifdef USE_AOMAP
	float ambientOcclusion = ( texture2D( aoMap, vAoMapUv ).r - 1.0 ) * aoMapIntensity + 1.0;
	reflectedLight.indirectDiffuse *= ambientOcclusion;
	#if defined( USE_CLEARCOAT ) 
		clearcoatSpecularIndirect *= ambientOcclusion;
	#endif
	#if defined( USE_SHEEN ) 
		sheenSpecularIndirect *= ambientOcclusion;
	#endif
	#if defined( USE_ENVMAP ) && defined( STANDARD )
		float dotNV = saturate( dot( geometryNormal, geometryViewDir ) );
		reflectedLight.indirectSpecular *= computeSpecularOcclusion( dotNV, ambientOcclusion, material.roughness );
	#endif
#endif`,xm=`#ifdef USE_AOMAP
	uniform sampler2D aoMap;
	uniform float aoMapIntensity;
#endif`,ym=`#ifdef USE_BATCHING
	#if ! defined( GL_ANGLE_multi_draw )
	#define gl_DrawID _gl_DrawID
	uniform int _gl_DrawID;
	#endif
	uniform highp sampler2D batchingTexture;
	uniform highp usampler2D batchingIdTexture;
	mat4 getBatchingMatrix( const in float i ) {
		int size = textureSize( batchingTexture, 0 ).x;
		int j = int( i ) * 4;
		int x = j % size;
		int y = j / size;
		vec4 v1 = texelFetch( batchingTexture, ivec2( x, y ), 0 );
		vec4 v2 = texelFetch( batchingTexture, ivec2( x + 1, y ), 0 );
		vec4 v3 = texelFetch( batchingTexture, ivec2( x + 2, y ), 0 );
		vec4 v4 = texelFetch( batchingTexture, ivec2( x + 3, y ), 0 );
		return mat4( v1, v2, v3, v4 );
	}
	float getIndirectIndex( const in int i ) {
		int size = textureSize( batchingIdTexture, 0 ).x;
		int x = i % size;
		int y = i / size;
		return float( texelFetch( batchingIdTexture, ivec2( x, y ), 0 ).r );
	}
#endif
#ifdef USE_BATCHING_COLOR
	uniform sampler2D batchingColorTexture;
	vec4 getBatchingColor( const in float i ) {
		int size = textureSize( batchingColorTexture, 0 ).x;
		int j = int( i );
		int x = j % size;
		int y = j / size;
		return texelFetch( batchingColorTexture, ivec2( x, y ), 0 );
	}
#endif`,_m=`#ifdef USE_BATCHING
	mat4 batchingMatrix = getBatchingMatrix( getIndirectIndex( gl_DrawID ) );
#endif`,vm=`vec3 transformed = vec3( position );
#ifdef USE_ALPHAHASH
	vPosition = vec3( position );
#endif`,Sm=`vec3 objectNormal = vec3( normal );
#ifdef USE_TANGENT
	vec3 objectTangent = vec3( tangent.xyz );
#endif`,bm=`float G_BlinnPhong_Implicit( ) {
	return 0.25;
}
float D_BlinnPhong( const in float shininess, const in float dotNH ) {
	return RECIPROCAL_PI * ( shininess * 0.5 + 1.0 ) * pow( dotNH, shininess );
}
vec3 BRDF_BlinnPhong( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in vec3 specularColor, const in float shininess ) {
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNH = saturate( dot( normal, halfDir ) );
	float dotVH = saturate( dot( viewDir, halfDir ) );
	vec3 F = F_Schlick( specularColor, 1.0, dotVH );
	float G = G_BlinnPhong_Implicit( );
	float D = D_BlinnPhong( shininess, dotNH );
	return F * ( G * D );
} // validated`,Mm=`#ifdef USE_IRIDESCENCE
	const mat3 XYZ_TO_REC709 = mat3(
		 3.2404542, -0.9692660,  0.0556434,
		-1.5371385,  1.8760108, -0.2040259,
		-0.4985314,  0.0415560,  1.0572252
	);
	vec3 Fresnel0ToIor( vec3 fresnel0 ) {
		vec3 sqrtF0 = sqrt( fresnel0 );
		return ( vec3( 1.0 ) + sqrtF0 ) / ( vec3( 1.0 ) - sqrtF0 );
	}
	vec3 IorToFresnel0( vec3 transmittedIor, float incidentIor ) {
		return pow2( ( transmittedIor - vec3( incidentIor ) ) / ( transmittedIor + vec3( incidentIor ) ) );
	}
	float IorToFresnel0( float transmittedIor, float incidentIor ) {
		return pow2( ( transmittedIor - incidentIor ) / ( transmittedIor + incidentIor ));
	}
	vec3 evalSensitivity( float OPD, vec3 shift ) {
		float phase = 2.0 * PI * OPD * 1.0e-9;
		vec3 val = vec3( 5.4856e-13, 4.4201e-13, 5.2481e-13 );
		vec3 pos = vec3( 1.6810e+06, 1.7953e+06, 2.2084e+06 );
		vec3 var = vec3( 4.3278e+09, 9.3046e+09, 6.6121e+09 );
		vec3 xyz = val * sqrt( 2.0 * PI * var ) * cos( pos * phase + shift ) * exp( - pow2( phase ) * var );
		xyz.x += 9.7470e-14 * sqrt( 2.0 * PI * 4.5282e+09 ) * cos( 2.2399e+06 * phase + shift[ 0 ] ) * exp( - 4.5282e+09 * pow2( phase ) );
		xyz /= 1.0685e-7;
		vec3 rgb = XYZ_TO_REC709 * xyz;
		return rgb;
	}
	vec3 evalIridescence( float outsideIOR, float eta2, float cosTheta1, float thinFilmThickness, vec3 baseF0 ) {
		vec3 I;
		float iridescenceIOR = mix( outsideIOR, eta2, smoothstep( 0.0, 0.03, thinFilmThickness ) );
		float sinTheta2Sq = pow2( outsideIOR / iridescenceIOR ) * ( 1.0 - pow2( cosTheta1 ) );
		float cosTheta2Sq = 1.0 - sinTheta2Sq;
		if ( cosTheta2Sq < 0.0 ) {
			return vec3( 1.0 );
		}
		float cosTheta2 = sqrt( cosTheta2Sq );
		float R0 = IorToFresnel0( iridescenceIOR, outsideIOR );
		float R12 = F_Schlick( R0, 1.0, cosTheta1 );
		float T121 = 1.0 - R12;
		float phi12 = 0.0;
		if ( iridescenceIOR < outsideIOR ) phi12 = PI;
		float phi21 = PI - phi12;
		vec3 baseIOR = Fresnel0ToIor( clamp( baseF0, 0.0, 0.9999 ) );		vec3 R1 = IorToFresnel0( baseIOR, iridescenceIOR );
		vec3 R23 = F_Schlick( R1, 1.0, cosTheta2 );
		vec3 phi23 = vec3( 0.0 );
		if ( baseIOR[ 0 ] < iridescenceIOR ) phi23[ 0 ] = PI;
		if ( baseIOR[ 1 ] < iridescenceIOR ) phi23[ 1 ] = PI;
		if ( baseIOR[ 2 ] < iridescenceIOR ) phi23[ 2 ] = PI;
		float OPD = 2.0 * iridescenceIOR * thinFilmThickness * cosTheta2;
		vec3 phi = vec3( phi21 ) + phi23;
		vec3 R123 = clamp( R12 * R23, 1e-5, 0.9999 );
		vec3 r123 = sqrt( R123 );
		vec3 Rs = pow2( T121 ) * R23 / ( vec3( 1.0 ) - R123 );
		vec3 C0 = R12 + Rs;
		I = C0;
		vec3 Cm = Rs - T121;
		for ( int m = 1; m <= 2; ++ m ) {
			Cm *= r123;
			vec3 Sm = 2.0 * evalSensitivity( float( m ) * OPD, float( m ) * phi );
			I += Cm * Sm;
		}
		return max( I, vec3( 0.0 ) );
	}
#endif`,wm=`#ifdef USE_BUMPMAP
	uniform sampler2D bumpMap;
	uniform float bumpScale;
	vec2 dHdxy_fwd() {
		vec2 dSTdx = dFdx( vBumpMapUv );
		vec2 dSTdy = dFdy( vBumpMapUv );
		float Hll = bumpScale * texture2D( bumpMap, vBumpMapUv ).x;
		float dBx = bumpScale * texture2D( bumpMap, vBumpMapUv + dSTdx ).x - Hll;
		float dBy = bumpScale * texture2D( bumpMap, vBumpMapUv + dSTdy ).x - Hll;
		return vec2( dBx, dBy );
	}
	vec3 perturbNormalArb( vec3 surf_pos, vec3 surf_norm, vec2 dHdxy, float faceDirection ) {
		vec3 vSigmaX = normalize( dFdx( surf_pos.xyz ) );
		vec3 vSigmaY = normalize( dFdy( surf_pos.xyz ) );
		vec3 vN = surf_norm;
		vec3 R1 = cross( vSigmaY, vN );
		vec3 R2 = cross( vN, vSigmaX );
		float fDet = dot( vSigmaX, R1 ) * faceDirection;
		vec3 vGrad = sign( fDet ) * ( dHdxy.x * R1 + dHdxy.y * R2 );
		return normalize( abs( fDet ) * surf_norm - vGrad );
	}
#endif`,Tm=`#if NUM_CLIPPING_PLANES > 0
	vec4 plane;
	#ifdef ALPHA_TO_COVERAGE
		float distanceToPlane, distanceGradient;
		float clipOpacity = 1.0;
		#pragma unroll_loop_start
		for ( int i = 0; i < UNION_CLIPPING_PLANES; i ++ ) {
			plane = clippingPlanes[ i ];
			distanceToPlane = - dot( vClipPosition, plane.xyz ) + plane.w;
			distanceGradient = fwidth( distanceToPlane ) / 2.0;
			clipOpacity *= smoothstep( - distanceGradient, distanceGradient, distanceToPlane );
			if ( clipOpacity == 0.0 ) discard;
		}
		#pragma unroll_loop_end
		#if UNION_CLIPPING_PLANES < NUM_CLIPPING_PLANES
			float unionClipOpacity = 1.0;
			#pragma unroll_loop_start
			for ( int i = UNION_CLIPPING_PLANES; i < NUM_CLIPPING_PLANES; i ++ ) {
				plane = clippingPlanes[ i ];
				distanceToPlane = - dot( vClipPosition, plane.xyz ) + plane.w;
				distanceGradient = fwidth( distanceToPlane ) / 2.0;
				unionClipOpacity *= 1.0 - smoothstep( - distanceGradient, distanceGradient, distanceToPlane );
			}
			#pragma unroll_loop_end
			clipOpacity *= 1.0 - unionClipOpacity;
		#endif
		diffuseColor.a *= clipOpacity;
		if ( diffuseColor.a == 0.0 ) discard;
	#else
		#pragma unroll_loop_start
		for ( int i = 0; i < UNION_CLIPPING_PLANES; i ++ ) {
			plane = clippingPlanes[ i ];
			if ( dot( vClipPosition, plane.xyz ) > plane.w ) discard;
		}
		#pragma unroll_loop_end
		#if UNION_CLIPPING_PLANES < NUM_CLIPPING_PLANES
			bool clipped = true;
			#pragma unroll_loop_start
			for ( int i = UNION_CLIPPING_PLANES; i < NUM_CLIPPING_PLANES; i ++ ) {
				plane = clippingPlanes[ i ];
				clipped = ( dot( vClipPosition, plane.xyz ) > plane.w ) && clipped;
			}
			#pragma unroll_loop_end
			if ( clipped ) discard;
		#endif
	#endif
#endif`,Em=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
	uniform vec4 clippingPlanes[ NUM_CLIPPING_PLANES ];
#endif`,Am=`#if NUM_CLIPPING_PLANES > 0
	varying vec3 vClipPosition;
#endif`,Cm=`#if NUM_CLIPPING_PLANES > 0
	vClipPosition = - mvPosition.xyz;
#endif`,Rm=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	diffuseColor *= vColor;
#endif`,Im=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
	varying vec4 vColor;
#endif`,Pm=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
	varying vec4 vColor;
#endif`,Lm=`#if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA ) || defined( USE_INSTANCING_COLOR ) || defined( USE_BATCHING_COLOR )
	vColor = vec4( 1.0 );
#endif
#ifdef USE_COLOR_ALPHA
	vColor *= color;
#elif defined( USE_COLOR )
	vColor.rgb *= color;
#endif
#ifdef USE_INSTANCING_COLOR
	vColor.rgb *= instanceColor.rgb;
#endif
#ifdef USE_BATCHING_COLOR
	vColor *= getBatchingColor( getIndirectIndex( gl_DrawID ) );
#endif`,Fm=`#define PI 3.141592653589793
#define PI2 6.283185307179586
#define PI_HALF 1.5707963267948966
#define RECIPROCAL_PI 0.3183098861837907
#define RECIPROCAL_PI2 0.15915494309189535
#define EPSILON 1e-6
#ifndef saturate
#define saturate( a ) clamp( a, 0.0, 1.0 )
#endif
#define whiteComplement( a ) ( 1.0 - saturate( a ) )
float pow2( const in float x ) { return x*x; }
vec3 pow2( const in vec3 x ) { return x*x; }
float pow3( const in float x ) { return x*x*x; }
float pow4( const in float x ) { float x2 = x*x; return x2*x2; }
float max3( const in vec3 v ) { return max( max( v.x, v.y ), v.z ); }
float average( const in vec3 v ) { return dot( v, vec3( 0.3333333 ) ); }
highp float rand( const in vec2 uv ) {
	const highp float a = 12.9898, b = 78.233, c = 43758.5453;
	highp float dt = dot( uv.xy, vec2( a,b ) ), sn = mod( dt, PI );
	return fract( sin( sn ) * c );
}
#ifdef HIGH_PRECISION
	float precisionSafeLength( vec3 v ) { return length( v ); }
#else
	float precisionSafeLength( vec3 v ) {
		float maxComponent = max3( abs( v ) );
		return length( v / maxComponent ) * maxComponent;
	}
#endif
struct IncidentLight {
	vec3 color;
	vec3 direction;
	bool visible;
};
struct ReflectedLight {
	vec3 directDiffuse;
	vec3 directSpecular;
	vec3 indirectDiffuse;
	vec3 indirectSpecular;
};
#ifdef USE_ALPHAHASH
	varying vec3 vPosition;
#endif
vec3 transformDirection( in vec3 dir, in mat4 matrix ) {
	return normalize( ( matrix * vec4( dir, 0.0 ) ).xyz );
}
#define inverseTransformDirection transformDirectionByInverseViewMatrix
vec3 transformNormalByInverseViewMatrix( in vec3 normal, in mat4 viewMatrix ) {
	return normalize( ( vec4( normal, 0.0 ) * viewMatrix ).xyz );
}
vec3 transformDirectionByInverseViewMatrix( in vec3 dir, in mat4 viewMatrix ) {
	return normalize( ( vec4( dir, 0.0 ) * viewMatrix ).xyz );
}
bool isPerspectiveMatrix( mat4 m ) {
	return m[ 2 ][ 3 ] == - 1.0;
}
vec2 equirectUv( in vec3 dir ) {
	float u = atan( dir.z, dir.x ) * RECIPROCAL_PI2 + 0.5;
	float v = asin( clamp( dir.y, - 1.0, 1.0 ) ) * RECIPROCAL_PI + 0.5;
	return vec2( u, v );
}
vec3 BRDF_Lambert( const in vec3 diffuseColor ) {
	return RECIPROCAL_PI * diffuseColor;
}
vec3 F_Schlick( const in vec3 f0, const in float f90, const in float dotVH ) {
	float fresnel = exp2( ( - 5.55473 * dotVH - 6.98316 ) * dotVH );
	return f0 * ( 1.0 - fresnel ) + ( f90 * fresnel );
}
float F_Schlick( const in float f0, const in float f90, const in float dotVH ) {
	float fresnel = exp2( ( - 5.55473 * dotVH - 6.98316 ) * dotVH );
	return f0 * ( 1.0 - fresnel ) + ( f90 * fresnel );
} // validated`,Dm=`#ifdef ENVMAP_TYPE_CUBE_UV
	#define cubeUV_minMipLevel 4.0
	#define cubeUV_minTileSize 16.0
	float getFace( vec3 direction ) {
		vec3 absDirection = abs( direction );
		float face = - 1.0;
		if ( absDirection.x > absDirection.z ) {
			if ( absDirection.x > absDirection.y )
				face = direction.x > 0.0 ? 0.0 : 3.0;
			else
				face = direction.y > 0.0 ? 1.0 : 4.0;
		} else {
			if ( absDirection.z > absDirection.y )
				face = direction.z > 0.0 ? 2.0 : 5.0;
			else
				face = direction.y > 0.0 ? 1.0 : 4.0;
		}
		return face;
	}
	vec2 getUV( vec3 direction, float face ) {
		vec2 uv;
		if ( face == 0.0 ) {
			uv = vec2( direction.z, direction.y ) / abs( direction.x );
		} else if ( face == 1.0 ) {
			uv = vec2( - direction.x, - direction.z ) / abs( direction.y );
		} else if ( face == 2.0 ) {
			uv = vec2( - direction.x, direction.y ) / abs( direction.z );
		} else if ( face == 3.0 ) {
			uv = vec2( - direction.z, direction.y ) / abs( direction.x );
		} else if ( face == 4.0 ) {
			uv = vec2( - direction.x, direction.z ) / abs( direction.y );
		} else {
			uv = vec2( direction.x, direction.y ) / abs( direction.z );
		}
		return 0.5 * ( uv + 1.0 );
	}
	vec3 bilinearCubeUV( sampler2D envMap, vec3 direction, float mipInt ) {
		float face = getFace( direction );
		float filterInt = max( cubeUV_minMipLevel - mipInt, 0.0 );
		mipInt = max( mipInt, cubeUV_minMipLevel );
		float faceSize = exp2( mipInt );
		highp vec2 uv = getUV( direction, face ) * ( faceSize - 2.0 ) + 1.0;
		if ( face > 2.0 ) {
			uv.y += faceSize;
			face -= 3.0;
		}
		uv.x += face * faceSize;
		uv.x += filterInt * 3.0 * cubeUV_minTileSize;
		uv.y += 4.0 * ( exp2( CUBEUV_MAX_MIP ) - faceSize );
		uv.x *= CUBEUV_TEXEL_WIDTH;
		uv.y *= CUBEUV_TEXEL_HEIGHT;
		#ifdef texture2DGradEXT
			return texture2DGradEXT( envMap, uv, vec2( 0.0 ), vec2( 0.0 ) ).rgb;
		#else
			return texture2D( envMap, uv ).rgb;
		#endif
	}
	#define cubeUV_r0 1.0
	#define cubeUV_m0 - 2.0
	#define cubeUV_r1 0.8
	#define cubeUV_m1 - 1.0
	#define cubeUV_r4 0.4
	#define cubeUV_m4 2.0
	#define cubeUV_r5 0.305
	#define cubeUV_m5 3.0
	#define cubeUV_r6 0.21
	#define cubeUV_m6 4.0
	float roughnessToMip( float roughness ) {
		float mip = 0.0;
		if ( roughness >= cubeUV_r1 ) {
			mip = ( cubeUV_r0 - roughness ) * ( cubeUV_m1 - cubeUV_m0 ) / ( cubeUV_r0 - cubeUV_r1 ) + cubeUV_m0;
		} else if ( roughness >= cubeUV_r4 ) {
			mip = ( cubeUV_r1 - roughness ) * ( cubeUV_m4 - cubeUV_m1 ) / ( cubeUV_r1 - cubeUV_r4 ) + cubeUV_m1;
		} else if ( roughness >= cubeUV_r5 ) {
			mip = ( cubeUV_r4 - roughness ) * ( cubeUV_m5 - cubeUV_m4 ) / ( cubeUV_r4 - cubeUV_r5 ) + cubeUV_m4;
		} else if ( roughness >= cubeUV_r6 ) {
			mip = ( cubeUV_r5 - roughness ) * ( cubeUV_m6 - cubeUV_m5 ) / ( cubeUV_r5 - cubeUV_r6 ) + cubeUV_m5;
		} else {
			mip = - 2.0 * log2( 1.16 * roughness );		}
		return mip;
	}
	vec4 textureCubeUV( sampler2D envMap, vec3 sampleDir, float roughness ) {
		float mip = clamp( roughnessToMip( roughness ), cubeUV_m0, CUBEUV_MAX_MIP );
		float mipF = fract( mip );
		float mipInt = floor( mip );
		vec3 color0 = bilinearCubeUV( envMap, sampleDir, mipInt );
		if ( mipF == 0.0 ) {
			return vec4( color0, 1.0 );
		} else {
			vec3 color1 = bilinearCubeUV( envMap, sampleDir, mipInt + 1.0 );
			return vec4( mix( color0, color1, mipF ), 1.0 );
		}
	}
#endif`,Nm=`vec3 transformedNormal = objectNormal;
#ifdef USE_TANGENT
	vec3 transformedTangent = objectTangent;
#endif
#ifdef USE_BATCHING
	mat3 bm = mat3( batchingMatrix );
	transformedNormal /= vec3( dot( bm[ 0 ], bm[ 0 ] ), dot( bm[ 1 ], bm[ 1 ] ), dot( bm[ 2 ], bm[ 2 ] ) );
	transformedNormal = bm * transformedNormal;
	#ifdef USE_TANGENT
		transformedTangent = bm * transformedTangent;
	#endif
#endif
#ifdef USE_INSTANCING
	mat3 im = mat3( instanceMatrix );
	transformedNormal /= vec3( dot( im[ 0 ], im[ 0 ] ), dot( im[ 1 ], im[ 1 ] ), dot( im[ 2 ], im[ 2 ] ) );
	transformedNormal = im * transformedNormal;
	#ifdef USE_TANGENT
		transformedTangent = im * transformedTangent;
	#endif
#endif
transformedNormal = normalMatrix * transformedNormal;
#ifdef FLIP_SIDED
	transformedNormal = - transformedNormal;
#endif
#ifdef USE_TANGENT
	transformedTangent = ( modelViewMatrix * vec4( transformedTangent, 0.0 ) ).xyz;
#endif`,Um=`#ifdef USE_DISPLACEMENTMAP
	uniform sampler2D displacementMap;
	uniform float displacementScale;
	uniform float displacementBias;
#endif`,Om=`#ifdef USE_DISPLACEMENTMAP
	transformed += normalize( objectNormal ) * ( texture2D( displacementMap, vDisplacementMapUv ).x * displacementScale + displacementBias );
#endif`,km=`#ifdef USE_EMISSIVEMAP
	vec4 emissiveColor = texture2D( emissiveMap, vEmissiveMapUv );
	#ifdef DECODE_VIDEO_TEXTURE_EMISSIVE
		emissiveColor = sRGBTransferEOTF( emissiveColor );
	#endif
	totalEmissiveRadiance *= emissiveColor.rgb;
#endif`,Bm=`#ifdef USE_EMISSIVEMAP
	uniform sampler2D emissiveMap;
#endif`,Vm="gl_FragColor = linearToOutputTexel( gl_FragColor );",zm=`vec4 LinearTransferOETF( in vec4 value ) {
	return value;
}
vec4 sRGBTransferEOTF( in vec4 value ) {
	return vec4( mix( pow( value.rgb * 0.9478672986 + vec3( 0.0521327014 ), vec3( 2.4 ) ), value.rgb * 0.0773993808, vec3( lessThanEqual( value.rgb, vec3( 0.04045 ) ) ) ), value.a );
}
vec4 sRGBTransferOETF( in vec4 value ) {
	return vec4( mix( pow( value.rgb, vec3( 0.41666 ) ) * 1.055 - vec3( 0.055 ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a );
}`,Gm=`#ifdef USE_ENVMAP
	#ifdef ENV_WORLDPOS
		vec3 cameraToFrag;
		if ( isOrthographic ) {
			cameraToFrag = normalize( vec3( - viewMatrix[ 0 ][ 2 ], - viewMatrix[ 1 ][ 2 ], - viewMatrix[ 2 ][ 2 ] ) );
		} else {
			cameraToFrag = normalize( vWorldPosition - cameraPosition );
		}
		vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
		#ifdef ENVMAP_MODE_REFLECTION
			vec3 reflectVec = reflect( cameraToFrag, worldNormal );
		#else
			vec3 reflectVec = refract( cameraToFrag, worldNormal, refractionRatio );
		#endif
	#else
		vec3 reflectVec = vReflect;
	#endif
	#ifdef ENVMAP_TYPE_CUBE
		vec4 envColor = textureCube( envMap, envMapRotation * reflectVec );
		#ifdef ENVMAP_BLENDING_MULTIPLY
			outgoingLight = mix( outgoingLight, outgoingLight * envColor.xyz, specularStrength * reflectivity );
		#elif defined( ENVMAP_BLENDING_MIX )
			outgoingLight = mix( outgoingLight, envColor.xyz, specularStrength * reflectivity );
		#elif defined( ENVMAP_BLENDING_ADD )
			outgoingLight += envColor.xyz * specularStrength * reflectivity;
		#endif
	#endif
#endif`,Hm=`#ifdef USE_ENVMAP
	uniform float envMapIntensity;
	uniform mat3 envMapRotation;
	#ifdef ENVMAP_TYPE_CUBE
		uniform samplerCube envMap;
	#else
		uniform sampler2D envMap;
	#endif
#endif`,Wm=`#ifdef USE_ENVMAP
	uniform float reflectivity;
	#if defined( USE_BUMPMAP ) || defined( USE_NORMALMAP ) || defined( PHONG ) || defined( LAMBERT )
		#define ENV_WORLDPOS
	#endif
	#ifdef ENV_WORLDPOS
		varying vec3 vWorldPosition;
		uniform float refractionRatio;
	#else
		varying vec3 vReflect;
	#endif
#endif`,Xm=`#ifdef USE_ENVMAP
	#if defined( USE_BUMPMAP ) || defined( USE_NORMALMAP ) || defined( PHONG ) || defined( LAMBERT )
		#define ENV_WORLDPOS
	#endif
	#ifdef ENV_WORLDPOS
		
		varying vec3 vWorldPosition;
	#else
		varying vec3 vReflect;
		uniform float refractionRatio;
	#endif
#endif`,qm=`#ifdef USE_ENVMAP
	#ifdef ENV_WORLDPOS
		vWorldPosition = worldPosition.xyz;
	#else
		vec3 cameraToVertex;
		if ( isOrthographic ) {
			cameraToVertex = normalize( vec3( - viewMatrix[ 0 ][ 2 ], - viewMatrix[ 1 ][ 2 ], - viewMatrix[ 2 ][ 2 ] ) );
		} else {
			cameraToVertex = normalize( worldPosition.xyz - cameraPosition );
		}
		vec3 worldNormal = transformNormalByInverseViewMatrix( transformedNormal, viewMatrix );
		#ifdef ENVMAP_MODE_REFLECTION
			vReflect = reflect( cameraToVertex, worldNormal );
		#else
			vReflect = refract( cameraToVertex, worldNormal, refractionRatio );
		#endif
	#endif
#endif`,Ym=`#ifdef USE_FOG
	vFogDepth = - mvPosition.z;
#endif`,Km=`#ifdef USE_FOG
	varying float vFogDepth;
#endif`,Zm=`#ifdef USE_FOG
	#ifdef FOG_EXP2
		float fogFactor = 1.0 - exp( - fogDensity * fogDensity * vFogDepth * vFogDepth );
	#else
		float fogFactor = smoothstep( fogNear, fogFar, vFogDepth );
	#endif
	gl_FragColor.rgb = mix( gl_FragColor.rgb, fogColor, fogFactor );
#endif`,$m=`#ifdef USE_FOG
	uniform vec3 fogColor;
	varying float vFogDepth;
	#ifdef FOG_EXP2
		uniform float fogDensity;
	#else
		uniform float fogNear;
		uniform float fogFar;
	#endif
#endif`,Jm=`#ifdef USE_GRADIENTMAP
	uniform sampler2D gradientMap;
#endif
vec3 getGradientIrradiance( vec3 normal, vec3 lightDirection ) {
	float dotNL = dot( normal, lightDirection );
	vec2 coord = vec2( dotNL * 0.5 + 0.5, 0.0 );
	#ifdef USE_GRADIENTMAP
		return vec3( texture2D( gradientMap, coord ).r );
	#else
		vec2 fw = fwidth( coord ) * 0.5;
		return mix( vec3( 0.7 ), vec3( 1.0 ), smoothstep( 0.7 - fw.x, 0.7 + fw.x, coord.x ) );
	#endif
}`,jm=`#ifdef USE_LIGHTMAP
	uniform sampler2D lightMap;
	uniform float lightMapIntensity;
#endif`,Qm=`LambertMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularStrength = specularStrength;`,t0=`varying vec3 vViewPosition;
struct LambertMaterial {
	vec3 diffuseColor;
	float specularStrength;
};
void RE_Direct_Lambert( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in LambertMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
void RE_IndirectDiffuse_Lambert( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in LambertMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_Lambert
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Lambert`,e0=`uniform bool receiveShadow;
uniform vec3 ambientLightColor;
#if defined( USE_LIGHT_PROBES )
	uniform vec3 lightProbe[ 9 ];
#endif
vec3 shGetIrradianceAt( in vec3 normal, in vec3 shCoefficients[ 9 ] ) {
	float x = normal.x, y = normal.y, z = normal.z;
	vec3 result = shCoefficients[ 0 ] * 0.886227;
	result += shCoefficients[ 1 ] * 2.0 * 0.511664 * y;
	result += shCoefficients[ 2 ] * 2.0 * 0.511664 * z;
	result += shCoefficients[ 3 ] * 2.0 * 0.511664 * x;
	result += shCoefficients[ 4 ] * 2.0 * 0.429043 * x * y;
	result += shCoefficients[ 5 ] * 2.0 * 0.429043 * y * z;
	result += shCoefficients[ 6 ] * ( 0.743125 * z * z - 0.247708 );
	result += shCoefficients[ 7 ] * 2.0 * 0.429043 * x * z;
	result += shCoefficients[ 8 ] * 0.429043 * ( x * x - y * y );
	return result;
}
vec3 getLightProbeIrradiance( const in vec3 lightProbe[ 9 ], const in vec3 normal ) {
	vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
	vec3 irradiance = shGetIrradianceAt( worldNormal, lightProbe );
	return irradiance;
}
vec3 getAmbientLightIrradiance( const in vec3 ambientLightColor ) {
	vec3 irradiance = ambientLightColor;
	return irradiance;
}
float getDistanceAttenuation( const in float lightDistance, const in float cutoffDistance, const in float decayExponent ) {
	float distanceFalloff = 1.0 / max( pow( lightDistance, decayExponent ), 0.01 );
	if ( cutoffDistance > 0.0 ) {
		distanceFalloff *= pow2( saturate( 1.0 - pow4( lightDistance / cutoffDistance ) ) );
	}
	return distanceFalloff;
}
float getSpotAttenuation( const in float coneCosine, const in float penumbraCosine, const in float angleCosine ) {
	return smoothstep( coneCosine, penumbraCosine, angleCosine );
}
#if NUM_SUN_LIGHTS > 0
	struct SunLight {
		vec3 direction;
		vec3 color;
	};
	uniform SunLight sunLights[ NUM_SUN_LIGHTS ];
	void getSunLightInfo( const in SunLight sunLight, out IncidentLight light ) {
		light.color = sunLight.color;
		light.direction = sunLight.direction;
		light.visible = true;
	}
#endif
#if NUM_DIR_LIGHTS > 0
	struct DirectionalLight {
		vec3 direction;
		vec3 color;
	};
	uniform DirectionalLight directionalLights[ NUM_DIR_LIGHTS ];
	void getDirectionalLightInfo( const in DirectionalLight directionalLight, out IncidentLight light ) {
		light.color = directionalLight.color;
		light.direction = directionalLight.direction;
		light.visible = true;
	}
#endif
#if NUM_POINT_LIGHTS > 0
	struct PointLight {
		vec3 position;
		vec3 color;
		float distance;
		float decay;
	};
	uniform PointLight pointLights[ NUM_POINT_LIGHTS ];
	void getPointLightInfo( const in PointLight pointLight, const in vec3 geometryPosition, out IncidentLight light ) {
		vec3 lVector = pointLight.position - geometryPosition;
		light.direction = normalize( lVector );
		float lightDistance = length( lVector );
		light.color = pointLight.color;
		light.color *= getDistanceAttenuation( lightDistance, pointLight.distance, pointLight.decay );
		light.visible = ( light.color != vec3( 0.0 ) );
	}
#endif
#if NUM_SPOT_LIGHTS > 0
	struct SpotLight {
		vec3 position;
		vec3 direction;
		vec3 color;
		float distance;
		float decay;
		float coneCos;
		float penumbraCos;
	};
	uniform SpotLight spotLights[ NUM_SPOT_LIGHTS ];
	void getSpotLightInfo( const in SpotLight spotLight, const in vec3 geometryPosition, out IncidentLight light ) {
		vec3 lVector = spotLight.position - geometryPosition;
		light.direction = normalize( lVector );
		float angleCos = dot( light.direction, spotLight.direction );
		float spotAttenuation = getSpotAttenuation( spotLight.coneCos, spotLight.penumbraCos, angleCos );
		if ( spotAttenuation > 0.0 ) {
			float lightDistance = length( lVector );
			light.color = spotLight.color * spotAttenuation;
			light.color *= getDistanceAttenuation( lightDistance, spotLight.distance, spotLight.decay );
			light.visible = ( light.color != vec3( 0.0 ) );
		} else {
			light.color = vec3( 0.0 );
			light.visible = false;
		}
	}
#endif
#if NUM_RECT_AREA_LIGHTS > 0
	struct RectAreaLight {
		vec3 color;
		vec3 position;
		vec3 halfWidth;
		vec3 halfHeight;
	};
	uniform sampler2D ltc_1;	uniform sampler2D ltc_2;
	uniform RectAreaLight rectAreaLights[ NUM_RECT_AREA_LIGHTS ];
#endif
#if NUM_HEMI_LIGHTS > 0
	struct HemisphereLight {
		vec3 direction;
		vec3 skyColor;
		vec3 groundColor;
	};
	uniform HemisphereLight hemisphereLights[ NUM_HEMI_LIGHTS ];
	vec3 getHemisphereLightIrradiance( const in HemisphereLight hemiLight, const in vec3 normal ) {
		float dotNL = dot( normal, hemiLight.direction );
		float hemiDiffuseWeight = 0.5 * dotNL + 0.5;
		vec3 irradiance = mix( hemiLight.groundColor, hemiLight.skyColor, hemiDiffuseWeight );
		return irradiance;
	}
#endif
#include <lightprobes_pars_fragment>`,i0=`#ifdef USE_ENVMAP
	vec3 getIBLIrradiance( const in vec3 normal ) {
		#ifdef ENVMAP_TYPE_CUBE_UV
			vec3 worldNormal = transformNormalByInverseViewMatrix( normal, viewMatrix );
			vec4 envMapColor = textureCubeUV( envMap, envMapRotation * worldNormal, 1.0 );
			return PI * envMapColor.rgb * envMapIntensity;
		#else
			return vec3( 0.0 );
		#endif
	}
	vec3 getIBLRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness ) {
		#ifdef ENVMAP_TYPE_CUBE_UV
			vec3 reflectVec = reflect( - viewDir, normal );
			reflectVec = normalize( mix( reflectVec, normal, pow4( roughness ) ) );
			reflectVec = transformDirectionByInverseViewMatrix( reflectVec, viewMatrix );
			vec4 envMapColor = textureCubeUV( envMap, envMapRotation * reflectVec, roughness );
			return envMapColor.rgb * envMapIntensity;
		#else
			return vec3( 0.0 );
		#endif
	}
	#ifdef USE_RETROREFLECTION
		vec3 getIBLRetroRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness ) {
			#ifdef ENVMAP_TYPE_CUBE_UV
				vec3 retroVec = normalize( mix( viewDir, normal, pow4( roughness ) ) );
				retroVec = transformDirectionByInverseViewMatrix( retroVec, viewMatrix );
				vec4 envMapColor = textureCubeUV( envMap, envMapRotation * retroVec, roughness );
				return envMapColor.rgb * envMapIntensity;
			#else
				return vec3( 0.0 );
			#endif
		}
	#endif
	#ifdef USE_ANISOTROPY
		vec3 getIBLAnisotropyRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness, const in vec3 bitangent, const in float anisotropy ) {
			#ifdef ENVMAP_TYPE_CUBE_UV
				vec3 bentNormal = cross( bitangent, viewDir );
				bentNormal = normalize( cross( bentNormal, bitangent ) );
				bentNormal = normalize( mix( bentNormal, normal, pow2( pow2( 1.0 - anisotropy * ( 1.0 - roughness ) ) ) ) );
				return getIBLRadiance( viewDir, bentNormal, roughness );
			#else
				return vec3( 0.0 );
			#endif
		}
		#ifdef USE_RETROREFLECTION
			vec3 getIBLAnisotropyRetroRadiance( const in vec3 viewDir, const in vec3 normal, const in float roughness, const in vec3 bitangent, const in float anisotropy ) {
				#ifdef ENVMAP_TYPE_CUBE_UV
					vec3 bentNormal = cross( bitangent, viewDir );
					bentNormal = normalize( cross( bentNormal, bitangent ) );
					bentNormal = normalize( mix( bentNormal, normal, pow2( pow2( 1.0 - anisotropy * ( 1.0 - roughness ) ) ) ) );
					return getIBLRetroRadiance( viewDir, bentNormal, roughness );
				#else
					return vec3( 0.0 );
				#endif
			}
		#endif
	#endif
#endif`,n0=`ToonMaterial material;
material.diffuseColor = diffuseColor.rgb;`,s0=`varying vec3 vViewPosition;
struct ToonMaterial {
	vec3 diffuseColor;
};
void RE_Direct_Toon( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in ToonMaterial material, inout ReflectedLight reflectedLight ) {
	vec3 irradiance = getGradientIrradiance( geometryNormal, directLight.direction ) * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
void RE_IndirectDiffuse_Toon( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in ToonMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_Toon
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Toon`,r0=`BlinnPhongMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.specularColor = specular;
material.specularShininess = shininess;
material.specularStrength = specularStrength;`,a0=`varying vec3 vViewPosition;
struct BlinnPhongMaterial {
	vec3 diffuseColor;
	vec3 specularColor;
	float specularShininess;
	float specularStrength;
};
void RE_Direct_BlinnPhong( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in BlinnPhongMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
	reflectedLight.directSpecular += irradiance * BRDF_BlinnPhong( directLight.direction, geometryViewDir, geometryNormal, material.specularColor, material.specularShininess ) * material.specularStrength;
}
void RE_IndirectDiffuse_BlinnPhong( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in BlinnPhongMaterial material, inout ReflectedLight reflectedLight ) {
	reflectedLight.indirectDiffuse += irradiance * BRDF_Lambert( material.diffuseColor );
}
#define RE_Direct				RE_Direct_BlinnPhong
#define RE_IndirectDiffuse		RE_IndirectDiffuse_BlinnPhong`,o0=`PhysicalMaterial material;
material.diffuseColor = diffuseColor.rgb;
material.diffuseContribution = diffuseColor.rgb * ( 1.0 - metalnessFactor );
material.metalness = metalnessFactor;
vec3 dxy = max( abs( dFdx( nonPerturbedNormal ) ), abs( dFdy( nonPerturbedNormal ) ) );
float geometryRoughness = max( max( dxy.x, dxy.y ), dxy.z );
material.roughness = max( roughnessFactor, 0.0525 );material.roughness += geometryRoughness;
material.roughness = min( material.roughness, 1.0 );
#ifdef IOR
	material.ior = ior;
	#ifdef USE_SPECULAR
		float specularIntensityFactor = specularIntensity;
		vec3 specularColorFactor = specularColor;
		#ifdef USE_SPECULAR_COLORMAP
			specularColorFactor *= texture2D( specularColorMap, vSpecularColorMapUv ).rgb;
		#endif
		#ifdef USE_SPECULAR_INTENSITYMAP
			specularIntensityFactor *= texture2D( specularIntensityMap, vSpecularIntensityMapUv ).a;
		#endif
		material.specularF90 = mix( specularIntensityFactor, 1.0, metalnessFactor );
	#else
		float specularIntensityFactor = 1.0;
		vec3 specularColorFactor = vec3( 1.0 );
		material.specularF90 = 1.0;
	#endif
	material.specularColor = min( pow2( ( material.ior - 1.0 ) / ( material.ior + 1.0 ) ) * specularColorFactor, vec3( 1.0 ) ) * specularIntensityFactor;
	material.specularColorBlended = mix( material.specularColor, diffuseColor.rgb, metalnessFactor );
#else
	material.specularColor = vec3( 0.04 );
	material.specularColorBlended = mix( material.specularColor, diffuseColor.rgb, metalnessFactor );
	material.specularF90 = 1.0;
#endif
#ifdef USE_CLEARCOAT
	material.clearcoat = clearcoat;
	material.clearcoatRoughness = clearcoatRoughness;
	material.clearcoatF0 = vec3( 0.04 );
	material.clearcoatF90 = 1.0;
	#ifdef USE_CLEARCOATMAP
		material.clearcoat *= texture2D( clearcoatMap, vClearcoatMapUv ).x;
	#endif
	#ifdef USE_CLEARCOAT_ROUGHNESSMAP
		material.clearcoatRoughness *= texture2D( clearcoatRoughnessMap, vClearcoatRoughnessMapUv ).y;
	#endif
	material.clearcoat = saturate( material.clearcoat );	material.clearcoatRoughness = max( material.clearcoatRoughness, 0.0525 );
	material.clearcoatRoughness += geometryRoughness;
	material.clearcoatRoughness = min( material.clearcoatRoughness, 1.0 );
#endif
#ifdef USE_DISPERSION
	material.dispersion = dispersion;
#endif
#ifdef USE_RETROREFLECTION
	material.retroreflectivity = retroreflectivity;
#endif
#ifdef USE_IRIDESCENCE
	material.iridescence = iridescence;
	material.iridescenceIOR = iridescenceIOR;
	#ifdef USE_IRIDESCENCEMAP
		material.iridescence *= texture2D( iridescenceMap, vIridescenceMapUv ).r;
	#endif
	#ifdef USE_IRIDESCENCE_THICKNESSMAP
		material.iridescenceThickness = (iridescenceThicknessMaximum - iridescenceThicknessMinimum) * texture2D( iridescenceThicknessMap, vIridescenceThicknessMapUv ).g + iridescenceThicknessMinimum;
	#else
		material.iridescenceThickness = iridescenceThicknessMaximum;
	#endif
#endif
#ifdef USE_SHEEN
	material.sheenColor = sheenColor;
	#ifdef USE_SHEEN_COLORMAP
		material.sheenColor *= texture2D( sheenColorMap, vSheenColorMapUv ).rgb;
	#endif
	material.sheenRoughness = clamp( sheenRoughness, 0.0001, 1.0 );
	#ifdef USE_SHEEN_ROUGHNESSMAP
		material.sheenRoughness *= texture2D( sheenRoughnessMap, vSheenRoughnessMapUv ).a;
	#endif
#endif
#ifdef USE_ANISOTROPY
	#ifdef USE_ANISOTROPYMAP
		mat2 anisotropyMat = mat2( anisotropyVector.x, anisotropyVector.y, - anisotropyVector.y, anisotropyVector.x );
		vec3 anisotropyPolar = texture2D( anisotropyMap, vAnisotropyMapUv ).rgb;
		vec2 anisotropyV = anisotropyMat * normalize( 2.0 * anisotropyPolar.rg - vec2( 1.0 ) ) * anisotropyPolar.b;
	#else
		vec2 anisotropyV = anisotropyVector;
	#endif
	material.anisotropy = length( anisotropyV );
	if( material.anisotropy == 0.0 ) {
		anisotropyV = vec2( 1.0, 0.0 );
	} else {
		anisotropyV /= material.anisotropy;
		material.anisotropy = saturate( material.anisotropy );
	}
	material.alphaT = mix( pow2( material.roughness ), 1.0, pow2( material.anisotropy ) );
	material.anisotropyT = tbn[ 0 ] * anisotropyV.x + tbn[ 1 ] * anisotropyV.y;
	material.anisotropyB = tbn[ 1 ] * anisotropyV.x - tbn[ 0 ] * anisotropyV.y;
#endif`,l0=`uniform sampler2D dfgLUT;
struct PhysicalMaterial {
	vec3 diffuseColor;
	vec3 diffuseContribution;
	vec3 specularColor;
	vec3 specularColorBlended;
	float roughness;
	float metalness;
	float specularF90;
	float dispersion;
	vec2 dfg;
	vec3 multiScatteringCompensation;
	#ifdef USE_RETROREFLECTION
		float retroreflectivity;
	#endif
	#ifdef USE_CLEARCOAT
		float clearcoat;
		float clearcoatRoughness;
		vec3 clearcoatF0;
		float clearcoatF90;
	#endif
	#ifdef USE_IRIDESCENCE
		float iridescence;
		float iridescenceIOR;
		float iridescenceThickness;
		vec3 iridescenceFresnel;
		vec3 iridescenceF0Dielectric;
		vec3 iridescenceF0Metallic;
	#endif
	#ifdef USE_SHEEN
		vec3 sheenColor;
		float sheenRoughness;
	#endif
	#ifdef IOR
		float ior;
	#endif
	#ifdef USE_TRANSMISSION
		float transmission;
		float transmissionAlpha;
		float thickness;
		float attenuationDistance;
		vec3 attenuationColor;
	#endif
	#ifdef USE_ANISOTROPY
		float anisotropy;
		float alphaT;
		vec3 anisotropyT;
		vec3 anisotropyB;
	#endif
};
vec3 clearcoatSpecularDirect = vec3( 0.0 );
vec3 clearcoatSpecularIndirect = vec3( 0.0 );
vec3 sheenSpecularDirect = vec3( 0.0 );
vec3 sheenSpecularIndirect = vec3(0.0 );
vec3 Schlick_to_F0( const in vec3 f, const in float f90, const in float dotVH ) {
    float x = clamp( 1.0 - dotVH, 0.0, 1.0 );
    float x2 = x * x;
    float x5 = clamp( x * x2 * x2, 0.0, 0.9999 );
    return ( f - vec3( f90 ) * x5 ) / ( 1.0 - x5 );
}
float V_GGX_SmithCorrelated( const in float alpha, const in float dotNL, const in float dotNV ) {
	float a2 = pow2( alpha );
	float gv = dotNL * sqrt( a2 + ( 1.0 - a2 ) * pow2( dotNV ) );
	float gl = dotNV * sqrt( a2 + ( 1.0 - a2 ) * pow2( dotNL ) );
	return 0.5 / max( gv + gl, EPSILON );
}
float D_GGX( const in float alpha, const in float dotNH ) {
	float a2 = pow2( alpha );
	float denom = pow2( dotNH ) * ( a2 - 1.0 ) + 1.0;
	return RECIPROCAL_PI * a2 / pow2( denom );
}
#ifdef USE_ANISOTROPY
	float V_GGX_SmithCorrelated_Anisotropic( const in float alphaT, const in float alphaB, const in float dotTV, const in float dotBV, const in float dotTL, const in float dotBL, const in float dotNV, const in float dotNL ) {
		float gv = dotNL * length( vec3( alphaT * dotTV, alphaB * dotBV, dotNV ) );
		float gl = dotNV * length( vec3( alphaT * dotTL, alphaB * dotBL, dotNL ) );
		return 0.5 / max( gv + gl, EPSILON );
	}
	float D_GGX_Anisotropic( const in float alphaT, const in float alphaB, const in float dotNH, const in float dotTH, const in float dotBH ) {
		float a2 = alphaT * alphaB;
		highp vec3 v = vec3( alphaB * dotTH, alphaT * dotBH, a2 * dotNH );
		highp float v2 = dot( v, v );
		float w2 = a2 / v2;
		return RECIPROCAL_PI * a2 * pow2 ( w2 );
	}
#endif
#ifdef USE_CLEARCOAT
	vec3 BRDF_GGX_Clearcoat( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in PhysicalMaterial material) {
		vec3 f0 = material.clearcoatF0;
		float f90 = material.clearcoatF90;
		float roughness = material.clearcoatRoughness;
		float alpha = pow2( roughness );
		vec3 halfDir = normalize( lightDir + viewDir );
		float dotNL = saturate( dot( normal, lightDir ) );
		float dotNV = saturate( dot( normal, viewDir ) );
		float dotNH = saturate( dot( normal, halfDir ) );
		float dotVH = saturate( dot( viewDir, halfDir ) );
		vec3 F = F_Schlick( f0, f90, dotVH );
		float V = V_GGX_SmithCorrelated( alpha, dotNL, dotNV );
		float D = D_GGX( alpha, dotNH );
		return F * ( V * D );
	}
#endif
vec3 BRDF_GGX( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, const in PhysicalMaterial material ) {
	vec3 f0 = material.specularColorBlended;
	float f90 = material.specularF90;
	float roughness = material.roughness;
	float alpha = pow2( roughness );
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNL = saturate( dot( normal, lightDir ) );
	float dotNV = saturate( dot( normal, viewDir ) );
	float dotNH = saturate( dot( normal, halfDir ) );
	float dotVH = saturate( dot( viewDir, halfDir ) );
	vec3 F = F_Schlick( f0, f90, dotVH );
	#ifdef USE_IRIDESCENCE
		F = mix( F, material.iridescenceFresnel, material.iridescence );
	#endif
	#ifdef USE_ANISOTROPY
		float dotTL = dot( material.anisotropyT, lightDir );
		float dotTV = dot( material.anisotropyT, viewDir );
		float dotTH = dot( material.anisotropyT, halfDir );
		float dotBL = dot( material.anisotropyB, lightDir );
		float dotBV = dot( material.anisotropyB, viewDir );
		float dotBH = dot( material.anisotropyB, halfDir );
		float V = V_GGX_SmithCorrelated_Anisotropic( material.alphaT, alpha, dotTV, dotBV, dotTL, dotBL, dotNV, dotNL );
		float D = D_GGX_Anisotropic( material.alphaT, alpha, dotNH, dotTH, dotBH );
	#else
		float V = V_GGX_SmithCorrelated( alpha, dotNL, dotNV );
		float D = D_GGX( alpha, dotNH );
	#endif
	return F * ( V * D );
}
vec2 LTC_Uv( const in vec3 N, const in vec3 V, const in float roughness ) {
	const float LUT_SIZE = 64.0;
	const float LUT_SCALE = ( LUT_SIZE - 1.0 ) / LUT_SIZE;
	const float LUT_BIAS = 0.5 / LUT_SIZE;
	float dotNV = saturate( dot( N, V ) );
	vec2 uv = vec2( roughness, sqrt( 1.0 - dotNV ) );
	uv = uv * LUT_SCALE + LUT_BIAS;
	return uv;
}
float LTC_ClippedSphereFormFactor( const in vec3 f ) {
	float l = length( f );
	return max( ( l * l + f.z ) / ( l + 1.0 ), 0.0 );
}
vec3 LTC_EdgeVectorFormFactor( const in vec3 v1, const in vec3 v2 ) {
	float x = dot( v1, v2 );
	float y = abs( x );
	float a = 0.8543985 + ( 0.4965155 + 0.0145206 * y ) * y;
	float b = 3.4175940 + ( 4.1616724 + y ) * y;
	float v = a / b;
	float theta_sintheta = ( x > 0.0 ) ? v : 0.5 * inversesqrt( max( 1.0 - x * x, 1e-7 ) ) - v;
	return cross( v1, v2 ) * theta_sintheta;
}
vec3 LTC_Evaluate( const in vec3 N, const in vec3 V, const in vec3 P, const in mat3 mInv, const in vec3 rectCoords[ 4 ] ) {
	vec3 v1 = rectCoords[ 1 ] - rectCoords[ 0 ];
	vec3 v2 = rectCoords[ 3 ] - rectCoords[ 0 ];
	vec3 lightNormal = cross( v1, v2 );
	if( dot( lightNormal, P - rectCoords[ 0 ] ) < 0.0 ) return vec3( 0.0 );
	vec3 T1, T2;
	T1 = normalize( V - N * dot( V, N ) );
	T2 = - cross( N, T1 );
	mat3 mat = mInv * transpose( mat3( T1, T2, N ) );
	vec3 coords[ 4 ];
	coords[ 0 ] = mat * ( rectCoords[ 0 ] - P );
	coords[ 1 ] = mat * ( rectCoords[ 1 ] - P );
	coords[ 2 ] = mat * ( rectCoords[ 2 ] - P );
	coords[ 3 ] = mat * ( rectCoords[ 3 ] - P );
	coords[ 0 ] = normalize( coords[ 0 ] );
	coords[ 1 ] = normalize( coords[ 1 ] );
	coords[ 2 ] = normalize( coords[ 2 ] );
	coords[ 3 ] = normalize( coords[ 3 ] );
	vec3 vectorFormFactor = vec3( 0.0 );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 0 ], coords[ 1 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 1 ], coords[ 2 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 2 ], coords[ 3 ] );
	vectorFormFactor += LTC_EdgeVectorFormFactor( coords[ 3 ], coords[ 0 ] );
	float result = LTC_ClippedSphereFormFactor( vectorFormFactor );
	return vec3( result );
}
#if defined( USE_SHEEN )
float D_Charlie( float roughness, float dotNH ) {
	float alpha = pow2( roughness );
	float invAlpha = 1.0 / alpha;
	float cos2h = dotNH * dotNH;
	float sin2h = max( 1.0 - cos2h, 0.0078125 );
	return ( 2.0 + invAlpha ) * pow( sin2h, invAlpha * 0.5 ) / ( 2.0 * PI );
}
float V_Neubelt( float dotNV, float dotNL ) {
	return saturate( 1.0 / ( 4.0 * ( dotNL + dotNV - dotNL * dotNV ) ) );
}
vec3 BRDF_Sheen( const in vec3 lightDir, const in vec3 viewDir, const in vec3 normal, vec3 sheenColor, const in float sheenRoughness ) {
	vec3 halfDir = normalize( lightDir + viewDir );
	float dotNL = saturate( dot( normal, lightDir ) );
	float dotNV = saturate( dot( normal, viewDir ) );
	float dotNH = saturate( dot( normal, halfDir ) );
	float D = D_Charlie( sheenRoughness, dotNH );
	float V = V_Neubelt( dotNV, dotNL );
	return sheenColor * ( D * V );
}
#endif
float IBLSheenBRDF( const in vec3 normal, const in vec3 viewDir, const in float roughness ) {
	float dotNV = saturate( dot( normal, viewDir ) );
	float r2 = roughness * roughness;
	float rInv = 1.0 / ( roughness + 0.1 );
	float a = -1.9362 + 1.0678 * roughness + 0.4573 * r2 - 0.8469 * rInv;
	float b = -0.6014 + 0.5538 * roughness - 0.4670 * r2 - 0.1255 * rInv;
	float DG = exp( a * dotNV + b );
	return saturate( DG );
}
vec3 EnvironmentBRDF( const in vec3 normal, const in vec3 viewDir, const in vec3 specularColor, const in float specularF90, const in float roughness ) {
	float dotNV = saturate( dot( normal, viewDir ) );
	vec2 fab = texture2D( dfgLUT, vec2( roughness, dotNV ) ).rg;
	return specularColor * fab.x + specularF90 * fab.y;
}
#ifdef USE_IRIDESCENCE
void computeMultiscatteringIridescence( const in vec2 fab, const in vec3 specularColor, const in float specularF90, const in float iridescence, const in vec3 iridescenceF0, inout vec3 singleScatter, inout vec3 multiScatter ) {
#else
void computeMultiscattering( const in vec2 fab, const in vec3 specularColor, const in float specularF90, inout vec3 singleScatter, inout vec3 multiScatter ) {
#endif
	#ifdef USE_IRIDESCENCE
		vec3 Fr = mix( specularColor, iridescenceF0, iridescence );
	#else
		vec3 Fr = specularColor;
	#endif
	vec3 FssEss = Fr * fab.x + specularF90 * fab.y;
	float Ess = fab.x + fab.y;
	float Ems = 1.0 - Ess;
	vec3 Favg = Fr + ( 1.0 - Fr ) * 0.047619;	vec3 Fms = FssEss * Favg / ( 1.0 - Ems * Favg );
	singleScatter += FssEss;
	multiScatter += Fms * Ems;
}
#if NUM_RECT_AREA_LIGHTS > 0
	void RE_Direct_RectArea_Physical( const in RectAreaLight rectAreaLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
		vec3 normal = geometryNormal;
		vec3 viewDir = geometryViewDir;
		vec3 position = geometryPosition;
		vec3 lightPos = rectAreaLight.position;
		vec3 halfWidth = rectAreaLight.halfWidth;
		vec3 halfHeight = rectAreaLight.halfHeight;
		vec3 lightColor = rectAreaLight.color;
		float roughness = material.roughness;
		vec3 rectCoords[ 4 ];
		rectCoords[ 0 ] = lightPos + halfWidth - halfHeight;		rectCoords[ 1 ] = lightPos - halfWidth - halfHeight;
		rectCoords[ 2 ] = lightPos - halfWidth + halfHeight;
		rectCoords[ 3 ] = lightPos + halfWidth + halfHeight;
		vec2 uv = LTC_Uv( normal, viewDir, roughness );
		vec4 t1 = texture2D( ltc_1, uv );
		vec4 t2 = texture2D( ltc_2, uv );
		mat3 mInv = mat3(
			vec3( t1.x, 0, t1.y ),
			vec3(    0, 1,    0 ),
			vec3( t1.z, 0, t1.w )
		);
		vec3 fresnel = ( material.specularColorBlended * t2.x + ( material.specularF90 - material.specularColorBlended ) * t2.y );
		reflectedLight.directSpecular += lightColor * fresnel * LTC_Evaluate( normal, viewDir, position, mInv, rectCoords );
		reflectedLight.directDiffuse += lightColor * material.diffuseContribution * LTC_Evaluate( normal, viewDir, position, mat3( 1.0 ), rectCoords );
		#ifdef USE_CLEARCOAT
			vec3 Ncc = geometryClearcoatNormal;
			vec2 uvClearcoat = LTC_Uv( Ncc, viewDir, material.clearcoatRoughness );
			vec4 t1Clearcoat = texture2D( ltc_1, uvClearcoat );
			vec4 t2Clearcoat = texture2D( ltc_2, uvClearcoat );
			mat3 mInvClearcoat = mat3(
				vec3( t1Clearcoat.x, 0, t1Clearcoat.y ),
				vec3(             0, 1,             0 ),
				vec3( t1Clearcoat.z, 0, t1Clearcoat.w )
			);
			vec3 fresnelClearcoat = material.clearcoatF0 * t2Clearcoat.x + ( material.clearcoatF90 - material.clearcoatF0 ) * t2Clearcoat.y;
			clearcoatSpecularDirect += lightColor * fresnelClearcoat * LTC_Evaluate( Ncc, viewDir, position, mInvClearcoat, rectCoords );
		#endif
	}
#endif
void RE_Direct_Physical( const in IncidentLight directLight, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
	float dotNL = saturate( dot( geometryNormal, directLight.direction ) );
	vec3 irradiance = dotNL * directLight.color;
	#ifdef USE_CLEARCOAT
		float dotNLcc = saturate( dot( geometryClearcoatNormal, directLight.direction ) );
		vec3 ccIrradiance = dotNLcc * directLight.color;
		clearcoatSpecularDirect += ccIrradiance * BRDF_GGX_Clearcoat( directLight.direction, geometryViewDir, geometryClearcoatNormal, material );
	#endif
	#ifdef USE_SHEEN
 
 		sheenSpecularDirect += irradiance * BRDF_Sheen( directLight.direction, geometryViewDir, geometryNormal, material.sheenColor, material.sheenRoughness );
 
 		float sheenAlbedoV = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
 		float sheenAlbedoL = IBLSheenBRDF( geometryNormal, directLight.direction, material.sheenRoughness );
 
 		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * max( sheenAlbedoV, sheenAlbedoL );
 
 		irradiance *= sheenEnergyComp;
 
 	#endif
	vec3 specularBRDF = BRDF_GGX( directLight.direction, geometryViewDir, geometryNormal, material );
	#ifdef USE_RETROREFLECTION
		vec3 retroViewDir = reflect( - geometryViewDir, geometryNormal );
		vec3 retroSpecularBRDF = BRDF_GGX( directLight.direction, retroViewDir, geometryNormal, material );
		specularBRDF = mix( specularBRDF, retroSpecularBRDF, saturate( material.retroreflectivity ) );
	#endif
	reflectedLight.directSpecular += irradiance * specularBRDF * material.multiScatteringCompensation;
	vec3 halfDir = normalize( directLight.direction + geometryViewDir );
	float dotVH = saturate( dot( geometryViewDir, halfDir ) );
	vec3 F = F_Schlick( material.specularColor, material.specularF90, dotVH );
	#ifdef USE_RETROREFLECTION
		vec3 retroHalfDir = normalize( directLight.direction + retroViewDir );
		float dotRetroVH = saturate( dot( retroViewDir, retroHalfDir ) );
		vec3 retroF = F_Schlick( material.specularColor, material.specularF90, dotRetroVH );
		F = mix( F, retroF, saturate( material.retroreflectivity ) );
	#endif
	reflectedLight.directDiffuse += irradiance * BRDF_Lambert( material.diffuseContribution ) * ( 1.0 - F );
}
void RE_IndirectDiffuse_Physical( const in vec3 irradiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight ) {
	vec3 singleScattering = vec3( 0.0 );
	vec3 multiScattering = vec3( 0.0 );
	#ifdef USE_IRIDESCENCE
		computeMultiscatteringIridescence( material.dfg, material.specularColor, material.specularF90, material.iridescence, material.iridescenceF0Dielectric, singleScattering, multiScattering );
	#else
		computeMultiscattering( material.dfg, material.specularColor, material.specularF90, singleScattering, multiScattering );
	#endif
	vec3 diffuse = irradiance * BRDF_Lambert( material.diffuseContribution ) * ( 1.0 - singleScattering - multiScattering );
	#ifdef USE_SHEEN
		float sheenAlbedo = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
		sheenSpecularIndirect += irradiance * material.sheenColor * sheenAlbedo * RECIPROCAL_PI;
		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * sheenAlbedo;
		diffuse *= sheenEnergyComp;
	#endif
	reflectedLight.indirectDiffuse += diffuse;
}
void RE_IndirectSpecular_Physical( const in vec3 radiance, const in vec3 irradiance, const in vec3 clearcoatRadiance, const in vec3 geometryPosition, const in vec3 geometryNormal, const in vec3 geometryViewDir, const in vec3 geometryClearcoatNormal, const in PhysicalMaterial material, inout ReflectedLight reflectedLight) {
	#ifdef USE_CLEARCOAT
		clearcoatSpecularIndirect += clearcoatRadiance * EnvironmentBRDF( geometryClearcoatNormal, geometryViewDir, material.clearcoatF0, material.clearcoatF90, material.clearcoatRoughness );
	#endif
	#ifdef USE_SHEEN
		sheenSpecularIndirect += irradiance * material.sheenColor * IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness ) * RECIPROCAL_PI;
 	#endif
	vec3 singleScatteringDielectric = vec3( 0.0 );
	vec3 multiScatteringDielectric = vec3( 0.0 );
	vec3 singleScatteringMetallic = vec3( 0.0 );
	vec3 multiScatteringMetallic = vec3( 0.0 );
	#ifdef USE_IRIDESCENCE
		computeMultiscatteringIridescence( material.dfg, material.specularColor, material.specularF90, material.iridescence, material.iridescenceF0Dielectric, singleScatteringDielectric, multiScatteringDielectric );
		computeMultiscatteringIridescence( material.dfg, material.diffuseColor, material.specularF90, material.iridescence, material.iridescenceF0Metallic, singleScatteringMetallic, multiScatteringMetallic );
	#else
		computeMultiscattering( material.dfg, material.specularColor, material.specularF90, singleScatteringDielectric, multiScatteringDielectric );
		computeMultiscattering( material.dfg, material.diffuseColor, material.specularF90, singleScatteringMetallic, multiScatteringMetallic );
	#endif
	vec3 singleScattering = mix( singleScatteringDielectric, singleScatteringMetallic, material.metalness );
	vec3 multiScattering = mix( multiScatteringDielectric, multiScatteringMetallic, material.metalness );
	vec3 totalScatteringDielectric = singleScatteringDielectric + multiScatteringDielectric;
	vec3 diffuse = material.diffuseContribution * ( 1.0 - totalScatteringDielectric );
	vec3 cosineWeightedIrradiance = irradiance * RECIPROCAL_PI;
	vec3 indirectSpecular = radiance * singleScattering;
	indirectSpecular += multiScattering * cosineWeightedIrradiance;
	vec3 indirectDiffuse = diffuse * cosineWeightedIrradiance;
	#ifdef USE_SHEEN
		float sheenAlbedo = IBLSheenBRDF( geometryNormal, geometryViewDir, material.sheenRoughness );
		float sheenEnergyComp = 1.0 - max3( material.sheenColor ) * sheenAlbedo;
		indirectSpecular *= sheenEnergyComp;
		indirectDiffuse *= sheenEnergyComp;
	#endif
	reflectedLight.indirectSpecular += indirectSpecular;
	reflectedLight.indirectDiffuse += indirectDiffuse;
}
#define RE_Direct				RE_Direct_Physical
#define RE_Direct_RectArea		RE_Direct_RectArea_Physical
#define RE_IndirectDiffuse		RE_IndirectDiffuse_Physical
#define RE_IndirectSpecular		RE_IndirectSpecular_Physical
float computeSpecularOcclusion( const in float dotNV, const in float ambientOcclusion, const in float roughness ) {
	return saturate( pow( dotNV + ambientOcclusion, exp2( - 16.0 * roughness - 1.0 ) ) - 1.0 + ambientOcclusion );
}`,c0=`
vec3 geometryPosition = - vViewPosition;
vec3 geometryNormal = normal;
vec3 geometryViewDir = ( isOrthographic ) ? vec3( 0, 0, 1 ) : normalize( vViewPosition );
vec3 geometryClearcoatNormal = vec3( 0.0 );
#ifdef USE_CLEARCOAT
	geometryClearcoatNormal = clearcoatNormal;
#endif
#ifdef USE_IRIDESCENCE
	float dotNVi = saturate( dot( normal, geometryViewDir ) );
	if ( material.iridescenceThickness == 0.0 ) {
		material.iridescence = 0.0;
	} else {
		material.iridescence = saturate( material.iridescence );
	}
	if ( material.iridescence > 0.0 ) {
		vec3 iridescenceFresnelDielectric = evalIridescence( 1.0, material.iridescenceIOR, dotNVi, material.iridescenceThickness, material.specularColor );
		vec3 iridescenceFresnelMetallic = evalIridescence( 1.0, material.iridescenceIOR, dotNVi, material.iridescenceThickness, material.diffuseColor );
		material.iridescenceFresnel = mix( iridescenceFresnelDielectric, iridescenceFresnelMetallic, material.metalness );
		material.iridescenceF0Dielectric = Schlick_to_F0( iridescenceFresnelDielectric, 1.0, dotNVi );
		material.iridescenceF0Metallic = Schlick_to_F0( iridescenceFresnelMetallic, 1.0, dotNVi );
	}
#endif
#ifdef STANDARD
	float dotNVms = saturate( dot( geometryNormal, geometryViewDir ) );
	material.dfg = texture2D( dfgLUT, vec2( material.roughness, dotNVms ) ).rg;
	#if ( NUM_SUN_LIGHTS > 0 || NUM_DIR_LIGHTS > 0 || NUM_POINT_LIGHTS > 0 || NUM_SPOT_LIGHTS > 0 )
		float EssMs = material.dfg.x + material.dfg.y;
		material.multiScatteringCompensation = 1.0 + material.specularColorBlended * ( 1.0 / EssMs - 1.0 );
	#endif
#endif
IncidentLight directLight;
#if ( NUM_POINT_LIGHTS > 0 ) && defined( RE_Direct )
	PointLight pointLight;
	#if defined( USE_SHADOWMAP ) && NUM_POINT_LIGHT_SHADOWS > 0
	PointLightShadow pointLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_POINT_LIGHTS; i ++ ) {
		pointLight = pointLights[ i ];
		getPointLightInfo( pointLight, geometryPosition, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_POINT_LIGHT_SHADOWS ) && ( defined( SHADOWMAP_TYPE_PCF ) || defined( SHADOWMAP_TYPE_BASIC ) )
		pointLightShadow = pointLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getPointShadow( pointShadowMap[ i ], pointLightShadow.shadowMapSize, pointLightShadow.shadowIntensity, pointLightShadow.shadowBias, pointLightShadow.shadowRadius, vPointShadowCoord[ i ], pointLightShadow.shadowCameraNear, pointLightShadow.shadowCameraFar ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_SPOT_LIGHTS > 0 ) && defined( RE_Direct )
	SpotLight spotLight;
	vec4 spotColor;
	vec3 spotLightCoord;
	bool inSpotLightMap;
	#if defined( USE_SHADOWMAP ) && NUM_SPOT_LIGHT_SHADOWS > 0
	SpotLightShadow spotLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHTS; i ++ ) {
		spotLight = spotLights[ i ];
		getSpotLightInfo( spotLight, geometryPosition, directLight );
		#if ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS )
		#define SPOT_LIGHT_MAP_INDEX UNROLLED_LOOP_INDEX
		#elif ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
		#define SPOT_LIGHT_MAP_INDEX NUM_SPOT_LIGHT_MAPS
		#else
		#define SPOT_LIGHT_MAP_INDEX ( UNROLLED_LOOP_INDEX - NUM_SPOT_LIGHT_SHADOWS + NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS )
		#endif
		#if ( SPOT_LIGHT_MAP_INDEX < NUM_SPOT_LIGHT_MAPS )
			spotLightCoord = vSpotLightCoord[ i ].xyz / vSpotLightCoord[ i ].w;
			inSpotLightMap = all( lessThan( abs( spotLightCoord * 2. - 1. ), vec3( 1.0 ) ) );
			spotColor = texture2D( spotLightMap[ SPOT_LIGHT_MAP_INDEX ], spotLightCoord.xy );
			directLight.color = inSpotLightMap ? directLight.color * spotColor.rgb : directLight.color;
		#endif
		#undef SPOT_LIGHT_MAP_INDEX
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
		spotLightShadow = spotLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getShadow( spotShadowMap[ i ], spotLightShadow.shadowMapSize, spotLightShadow.shadowIntensity, spotLightShadow.shadowBias, spotLightShadow.shadowRadius, vSpotLightCoord[ i ] ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_SUN_LIGHTS > 0 ) && defined( RE_Direct )
	SunLight sunLight;
	#if defined( USE_SHADOWMAP ) && NUM_SUN_LIGHT_SHADOWS > 0
	SunLightShadow sunLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SUN_LIGHTS; i ++ ) {
		sunLight = sunLights[ i ];
		getSunLightInfo( sunLight, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_SUN_LIGHT_SHADOWS )
		sunLightShadow = sunLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getSunShadow( sunShadowMap[ i ], sunLightShadow, UNROLLED_LOOP_INDEX ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_DIR_LIGHTS > 0 ) && defined( RE_Direct )
	DirectionalLight directionalLight;
	#if defined( USE_SHADOWMAP ) && NUM_DIR_LIGHT_SHADOWS > 0
	DirectionalLightShadow directionalLightShadow;
	#endif
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_DIR_LIGHTS; i ++ ) {
		directionalLight = directionalLights[ i ];
		getDirectionalLightInfo( directionalLight, directLight );
		#if defined( USE_SHADOWMAP ) && ( UNROLLED_LOOP_INDEX < NUM_DIR_LIGHT_SHADOWS )
		directionalLightShadow = directionalLightShadows[ i ];
		directLight.color *= ( directLight.visible && receiveShadow ) ? getShadow( directionalShadowMap[ i ], directionalLightShadow.shadowMapSize, directionalLightShadow.shadowIntensity, directionalLightShadow.shadowBias, directionalLightShadow.shadowRadius, vDirectionalShadowCoord[ i ] ) : 1.0;
		#endif
		RE_Direct( directLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if ( NUM_RECT_AREA_LIGHTS > 0 ) && defined( RE_Direct_RectArea )
	RectAreaLight rectAreaLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_RECT_AREA_LIGHTS; i ++ ) {
		rectAreaLight = rectAreaLights[ i ];
		RE_Direct_RectArea( rectAreaLight, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
	}
	#pragma unroll_loop_end
#endif
#if defined( RE_IndirectDiffuse )
	vec3 iblIrradiance = vec3( 0.0 );
	vec3 irradiance = getAmbientLightIrradiance( ambientLightColor );
	#if defined( USE_LIGHT_PROBES )
		irradiance += getLightProbeIrradiance( lightProbe, geometryNormal );
	#endif
	#if ( NUM_HEMI_LIGHTS > 0 )
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_HEMI_LIGHTS; i ++ ) {
			irradiance += getHemisphereLightIrradiance( hemisphereLights[ i ], geometryNormal );
		}
		#pragma unroll_loop_end
	#endif
	#ifdef USE_LIGHT_PROBES_GRID
		vec3 probeWorldPos = ( ( vec4( geometryPosition, 1.0 ) - viewMatrix[ 3 ] ) * viewMatrix ).xyz;
		vec3 probeWorldNormal = transformNormalByInverseViewMatrix( geometryNormal, viewMatrix );
		irradiance += getLightProbeGridIrradiance( probeWorldPos, probeWorldNormal );
	#endif
#endif
#if defined( RE_IndirectSpecular )
	vec3 radiance = vec3( 0.0 );
	vec3 clearcoatRadiance = vec3( 0.0 );
#endif`,h0=`#if defined( RE_IndirectDiffuse )
	#ifdef USE_LIGHTMAP
		vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );
		vec3 lightMapIrradiance = lightMapTexel.rgb * lightMapIntensity;
		irradiance += lightMapIrradiance;
	#endif
	#if defined( USE_ENVMAP ) && defined( ENVMAP_TYPE_CUBE_UV )
		#if defined( STANDARD ) || defined( LAMBERT ) || defined( PHONG )
			iblIrradiance += getIBLIrradiance( geometryNormal );
		#endif
	#endif
#endif
#if defined( USE_ENVMAP ) && defined( RE_IndirectSpecular )
	#ifdef USE_ANISOTROPY
		vec3 iblRadiance = getIBLAnisotropyRadiance( geometryViewDir, geometryNormal, material.roughness, material.anisotropyB, material.anisotropy );
	#else
		vec3 iblRadiance = getIBLRadiance( geometryViewDir, geometryNormal, material.roughness );
	#endif
	#ifdef USE_RETROREFLECTION
		#ifdef USE_ANISOTROPY
			vec3 retroIBLRadiance = getIBLAnisotropyRetroRadiance( geometryViewDir, geometryNormal, material.roughness, material.anisotropyB, material.anisotropy );
		#else
			vec3 retroIBLRadiance = getIBLRetroRadiance( geometryViewDir, geometryNormal, material.roughness );
		#endif
		iblRadiance = mix( iblRadiance, retroIBLRadiance, saturate( material.retroreflectivity ) );
	#endif
	radiance += iblRadiance;
	#ifdef USE_CLEARCOAT
		clearcoatRadiance += getIBLRadiance( geometryViewDir, geometryClearcoatNormal, material.clearcoatRoughness );
	#endif
#endif`,u0=`#if defined( RE_IndirectDiffuse )
	#if defined( LAMBERT ) || defined( PHONG )
		irradiance += iblIrradiance;
	#endif
	RE_IndirectDiffuse( irradiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif
#if defined( RE_IndirectSpecular )
	RE_IndirectSpecular( radiance, iblIrradiance, clearcoatRadiance, geometryPosition, geometryNormal, geometryViewDir, geometryClearcoatNormal, material, reflectedLight );
#endif`,d0=`#ifdef USE_LIGHT_PROBES_GRID
uniform highp sampler3D probesSH;
uniform vec3 probesMin;
uniform vec3 probesMax;
uniform vec3 probesResolution;
vec3 getLightProbeGridIrradiance( vec3 worldPos, vec3 worldNormal ) {
	vec3 res = probesResolution;
	vec3 gridRange = probesMax - probesMin;
	vec3 resMinusOne = res - 1.0;
	vec3 probeSpacing = gridRange / resMinusOne;
	vec3 samplePos = worldPos + worldNormal * probeSpacing * 0.5;
	vec3 uvw = clamp( ( samplePos - probesMin ) / gridRange, 0.0, 1.0 );
	uvw = uvw * resMinusOne / res + 0.5 / res;
	float nz          = res.z;
	float paddedSlices = nz + 2.0;
	float atlasDepth  = 7.0 * paddedSlices;
	float uvZBase     = uvw.z * nz + 1.0;
	vec4 s0 = texture( probesSH, vec3( uvw.xy, ( uvZBase                       ) / atlasDepth ) );
	vec4 s1 = texture( probesSH, vec3( uvw.xy, ( uvZBase +       paddedSlices   ) / atlasDepth ) );
	vec4 s2 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 2.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s3 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 3.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s4 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 4.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s5 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 5.0 * paddedSlices   ) / atlasDepth ) );
	vec4 s6 = texture( probesSH, vec3( uvw.xy, ( uvZBase + 6.0 * paddedSlices   ) / atlasDepth ) );
	vec3 c0 = s0.xyz;
	vec3 c1 = vec3( s0.w, s1.xy );
	vec3 c2 = vec3( s1.zw, s2.x );
	vec3 c3 = s2.yzw;
	vec3 c4 = s3.xyz;
	vec3 c5 = vec3( s3.w, s4.xy );
	vec3 c6 = vec3( s4.zw, s5.x );
	vec3 c7 = s5.yzw;
	vec3 c8 = s6.xyz;
	float x = worldNormal.x, y = worldNormal.y, z = worldNormal.z;
	vec3 result = c0 * 0.886227;
	result += c1 * 2.0 * 0.511664 * y;
	result += c2 * 2.0 * 0.511664 * z;
	result += c3 * 2.0 * 0.511664 * x;
	result += c4 * 2.0 * 0.429043 * x * y;
	result += c5 * 2.0 * 0.429043 * y * z;
	result += c6 * ( 0.743125 * z * z - 0.247708 );
	result += c7 * 2.0 * 0.429043 * x * z;
	result += c8 * 0.429043 * ( x * x - y * y );
	return max( result, vec3( 0.0 ) );
}
#endif`,f0=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	gl_FragDepth = vIsPerspective == 0.0 ? gl_FragCoord.z : log2( vFragDepth ) * logDepthBufFC * 0.5;
#endif`,p0=`#if defined( USE_LOGARITHMIC_DEPTH_BUFFER )
	uniform float logDepthBufFC;
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,m0=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	varying float vFragDepth;
	varying float vIsPerspective;
#endif`,g0=`#ifdef USE_LOGARITHMIC_DEPTH_BUFFER
	vFragDepth = 1.0 + gl_Position.w;
	vIsPerspective = float( isPerspectiveMatrix( projectionMatrix ) );
#endif`,x0=`#ifdef USE_MAP
	vec4 sampledDiffuseColor = texture2D( map, vMapUv );
	#ifdef DECODE_VIDEO_TEXTURE
		sampledDiffuseColor = sRGBTransferEOTF( sampledDiffuseColor );
	#endif
	diffuseColor *= sampledDiffuseColor;
#endif`,y0=`#ifdef USE_MAP
	uniform sampler2D map;
#endif`,_0=`#if defined( USE_MAP ) || defined( USE_ALPHAMAP )
	#if defined( USE_POINTS_UV )
		vec2 uv = vUv;
	#else
		vec2 uv = ( uvTransform * vec3( gl_PointCoord.x, 1.0 - gl_PointCoord.y, 1 ) ).xy;
	#endif
#endif
#ifdef USE_MAP
	diffuseColor *= texture2D( map, uv );
#endif
#ifdef USE_ALPHAMAP
	diffuseColor.a *= texture2D( alphaMap, uv ).g;
#endif`,v0=`#if defined( USE_POINTS_UV )
	varying vec2 vUv;
#else
	#if defined( USE_MAP ) || defined( USE_ALPHAMAP )
		uniform mat3 uvTransform;
	#endif
#endif
#ifdef USE_MAP
	uniform sampler2D map;
#endif
#ifdef USE_ALPHAMAP
	uniform sampler2D alphaMap;
#endif`,S0=`float metalnessFactor = metalness;
#ifdef USE_METALNESSMAP
	vec4 texelMetalness = texture2D( metalnessMap, vMetalnessMapUv );
	metalnessFactor *= texelMetalness.b;
#endif`,b0=`#ifdef USE_METALNESSMAP
	uniform sampler2D metalnessMap;
#endif`,M0=`#ifdef USE_INSTANCING_MORPH
	float morphTargetInfluences[ MORPHTARGETS_COUNT ];
	float morphTargetBaseInfluence = texelFetch( morphTexture, ivec2( 0, gl_InstanceID ), 0 ).r;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		morphTargetInfluences[i] =  texelFetch( morphTexture, ivec2( i + 1, gl_InstanceID ), 0 ).r;
	}
#endif`,w0=`#if defined( USE_MORPHCOLORS )
	vColor *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		#if defined( USE_COLOR_ALPHA )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ) * morphTargetInfluences[ i ];
		#elif defined( USE_COLOR )
			if ( morphTargetInfluences[ i ] != 0.0 ) vColor += getMorph( gl_VertexID, i, 2 ).rgb * morphTargetInfluences[ i ];
		#endif
	}
#endif`,T0=`#ifdef USE_MORPHNORMALS
	objectNormal *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) objectNormal += getMorph( gl_VertexID, i, 1 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,E0=`#ifdef USE_MORPHTARGETS
	#ifndef USE_INSTANCING_MORPH
		uniform float morphTargetBaseInfluence;
		uniform float morphTargetInfluences[ MORPHTARGETS_COUNT ];
	#endif
	uniform sampler2DArray morphTargetsTexture;
	uniform ivec2 morphTargetsTextureSize;
	vec4 getMorph( const in int vertexIndex, const in int morphTargetIndex, const in int offset ) {
		int texelIndex = vertexIndex * MORPHTARGETS_TEXTURE_STRIDE + offset;
		int y = texelIndex / morphTargetsTextureSize.x;
		int x = texelIndex - y * morphTargetsTextureSize.x;
		ivec3 morphUV = ivec3( x, y, morphTargetIndex );
		return texelFetch( morphTargetsTexture, morphUV, 0 );
	}
#endif`,A0=`#ifdef USE_MORPHTARGETS
	transformed *= morphTargetBaseInfluence;
	for ( int i = 0; i < MORPHTARGETS_COUNT; i ++ ) {
		if ( morphTargetInfluences[ i ] != 0.0 ) transformed += getMorph( gl_VertexID, i, 0 ).xyz * morphTargetInfluences[ i ];
	}
#endif`,C0=`float faceDirection = gl_FrontFacing ? 1.0 : - 1.0;
#ifdef FLAT_SHADED
	vec3 fdx = dFdx( vViewPosition );
	vec3 fdy = dFdy( vViewPosition );
	vec3 normal = normalize( cross( fdx, fdy ) );
#else
	vec3 normal = normalize( vNormal );
	#ifdef DOUBLE_SIDED
		normal *= faceDirection;
	#endif
#endif
#if defined( USE_NORMALMAP_TANGENTSPACE ) || defined( USE_CLEARCOAT_NORMALMAP ) || defined( USE_ANISOTROPY )
	#ifdef USE_TANGENT
		mat3 tbn = mat3( normalize( vTangent ), normalize( vBitangent ), normal );
	#else
		mat3 tbn = getTangentFrame( - vViewPosition, normal,
		#if defined( USE_NORMALMAP )
			vNormalMapUv
		#elif defined( USE_CLEARCOAT_NORMALMAP )
			vClearcoatNormalMapUv
		#else
			vUv
		#endif
		);
	#endif
	#ifdef DOUBLE_SIDED
		tbn[0] *= faceDirection;
		tbn[1] *= faceDirection;
	#endif
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	#ifdef USE_TANGENT
		mat3 tbn2 = mat3( normalize( vTangent ), normalize( vBitangent ), normal );
	#else
		mat3 tbn2 = getTangentFrame( - vViewPosition, normal, vClearcoatNormalMapUv );
	#endif
	#ifdef DOUBLE_SIDED
		tbn2[0] *= faceDirection;
		tbn2[1] *= faceDirection;
	#endif
#endif
vec3 nonPerturbedNormal = normal;`,R0=`#ifdef USE_NORMALMAP_OBJECTSPACE
	normal = texture2D( normalMap, vNormalMapUv ).xyz * 2.0 - 1.0;
	#ifdef FLIP_SIDED
		normal = - normal;
	#endif
	#ifdef DOUBLE_SIDED
		normal = normal * faceDirection;
	#endif
	normal = normalize( normalMatrix * normal );
#elif defined( USE_NORMALMAP_TANGENTSPACE )
	vec3 mapN = texture2D( normalMap, vNormalMapUv ).xyz * 2.0 - 1.0;
	#if defined( USE_PACKED_NORMALMAP )
		mapN = vec3( mapN.xy, sqrt( saturate( 1.0 - dot( mapN.xy, mapN.xy ) ) ) );
	#endif
	mapN.xy *= normalScale;
	normal = normalize( tbn * mapN );
#elif defined( USE_BUMPMAP )
	normal = perturbNormalArb( - vViewPosition, normal, dHdxy_fwd(), faceDirection );
#endif`,I0=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,P0=`#ifndef FLAT_SHADED
	varying vec3 vNormal;
	#ifdef USE_TANGENT
		varying vec3 vTangent;
		varying vec3 vBitangent;
	#endif
#endif`,L0=`#ifndef FLAT_SHADED
	vNormal = normalize( transformedNormal );
	#ifdef USE_TANGENT
		vTangent = normalize( transformedTangent );
		vBitangent = normalize( cross( vNormal, vTangent ) * tangent.w );
		#ifdef FLIP_SIDED
			vBitangent = - vBitangent;
		#endif
	#endif
#endif`,F0=`#ifdef USE_NORMALMAP
	uniform sampler2D normalMap;
	uniform vec2 normalScale;
#endif
#ifdef USE_NORMALMAP_OBJECTSPACE
	uniform mat3 normalMatrix;
#endif
#if ! defined ( USE_TANGENT ) && ( defined ( USE_NORMALMAP_TANGENTSPACE ) || defined ( USE_CLEARCOAT_NORMALMAP ) || defined( USE_ANISOTROPY ) )
	mat3 getTangentFrame( vec3 eye_pos, vec3 surf_norm, vec2 uv ) {
		vec3 q0 = dFdx( eye_pos.xyz );
		vec3 q1 = dFdy( eye_pos.xyz );
		vec2 st0 = dFdx( uv.st );
		vec2 st1 = dFdy( uv.st );
		vec3 N = surf_norm;
		vec3 q1perp = cross( q1, N );
		vec3 q0perp = cross( N, q0 );
		vec3 T = q1perp * st0.x + q0perp * st1.x;
		vec3 B = q1perp * st0.y + q0perp * st1.y;
		float det = max( dot( T, T ), dot( B, B ) );
		float scale = ( det == 0.0 ) ? 0.0 : inversesqrt( det );
		return mat3( T * scale, B * scale, N );
	}
#endif`,D0=`#ifdef USE_CLEARCOAT
	vec3 clearcoatNormal = nonPerturbedNormal;
#endif`,N0=`#ifdef USE_CLEARCOAT_NORMALMAP
	vec3 clearcoatMapN = texture2D( clearcoatNormalMap, vClearcoatNormalMapUv ).xyz * 2.0 - 1.0;
	clearcoatMapN.xy *= clearcoatNormalScale;
	clearcoatNormal = normalize( tbn2 * clearcoatMapN );
#endif`,U0=`#ifdef USE_CLEARCOATMAP
	uniform sampler2D clearcoatMap;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	uniform sampler2D clearcoatNormalMap;
	uniform vec2 clearcoatNormalScale;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	uniform sampler2D clearcoatRoughnessMap;
#endif`,O0=`#ifdef USE_IRIDESCENCEMAP
	uniform sampler2D iridescenceMap;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	uniform sampler2D iridescenceThicknessMap;
#endif`,k0=`#ifdef OPAQUE
diffuseColor.a = 1.0;
#endif
#ifdef USE_TRANSMISSION
diffuseColor.a *= material.transmissionAlpha;
#endif
gl_FragColor = vec4( outgoingLight, diffuseColor.a );`,B0=`vec3 packNormalToRGB( const in vec3 normal ) {
	return normalize( normal ) * 0.5 + 0.5;
}
vec3 unpackRGBToNormal( const in vec3 rgb ) {
	return 2.0 * rgb.xyz - 1.0;
}
const float PackUpscale = 256. / 255.;const float UnpackDownscale = 255. / 256.;const float ShiftRight8 = 1. / 256.;
const float Inv255 = 1. / 255.;
const vec4 PackFactors = vec4( 1.0, 256.0, 256.0 * 256.0, 256.0 * 256.0 * 256.0 );
const vec2 UnpackFactors2 = vec2( UnpackDownscale, 1.0 / PackFactors.g );
const vec3 UnpackFactors3 = vec3( UnpackDownscale / PackFactors.rg, 1.0 / PackFactors.b );
const vec4 UnpackFactors4 = vec4( UnpackDownscale / PackFactors.rgb, 1.0 / PackFactors.a );
vec4 packDepthToRGBA( const in float v ) {
	if( v <= 0.0 )
		return vec4( 0., 0., 0., 0. );
	if( v >= 1.0 )
		return vec4( 1., 1., 1., 1. );
	float vuf;
	float af = modf( v * PackFactors.a, vuf );
	float bf = modf( vuf * ShiftRight8, vuf );
	float gf = modf( vuf * ShiftRight8, vuf );
	return vec4( vuf * Inv255, gf * PackUpscale, bf * PackUpscale, af );
}
vec3 packDepthToRGB( const in float v ) {
	if( v <= 0.0 )
		return vec3( 0., 0., 0. );
	if( v >= 1.0 )
		return vec3( 1., 1., 1. );
	float vuf;
	float bf = modf( v * PackFactors.b, vuf );
	float gf = modf( vuf * ShiftRight8, vuf );
	return vec3( vuf * Inv255, gf * PackUpscale, bf );
}
vec2 packDepthToRG( const in float v ) {
	if( v <= 0.0 )
		return vec2( 0., 0. );
	if( v >= 1.0 )
		return vec2( 1., 1. );
	float vuf;
	float gf = modf( v * 256., vuf );
	return vec2( vuf * Inv255, gf );
}
float unpackRGBAToDepth( const in vec4 v ) {
	return dot( v, UnpackFactors4 );
}
float unpackRGBToDepth( const in vec3 v ) {
	return dot( v, UnpackFactors3 );
}
float unpackRGToDepth( const in vec2 v ) {
	return v.r * UnpackFactors2.r + v.g * UnpackFactors2.g;
}
vec4 pack2HalfToRGBA( const in vec2 v ) {
	vec4 r = vec4( v.x, fract( v.x * 255.0 ), v.y, fract( v.y * 255.0 ) );
	return vec4( r.x - r.y / 255.0, r.y, r.z - r.w / 255.0, r.w );
}
vec2 unpackRGBATo2Half( const in vec4 v ) {
	return vec2( v.x + ( v.y / 255.0 ), v.z + ( v.w / 255.0 ) );
}
float viewZToOrthographicDepth( const in float viewZ, const in float near, const in float far ) {
	return ( viewZ + near ) / ( near - far );
}
float orthographicDepthToViewZ( const in float depth, const in float near, const in float far ) {
	#ifdef USE_REVERSED_DEPTH_BUFFER
	
		return depth * ( far - near ) - far;
	#else
		return depth * ( near - far ) - near;
	#endif
}
float viewZToPerspectiveDepth( const in float viewZ, const in float near, const in float far ) {
	return ( ( near + viewZ ) * far ) / ( ( far - near ) * viewZ );
}
float perspectiveDepthToViewZ( const in float depth, const in float near, const in float far ) {
	
	#ifdef USE_REVERSED_DEPTH_BUFFER
		return ( near * far ) / ( ( near - far ) * depth - near );
	#else
		return ( near * far ) / ( ( far - near ) * depth - far );
	#endif
}`,V0=`#ifdef PREMULTIPLIED_ALPHA
	gl_FragColor.rgb *= gl_FragColor.a;
#endif`,z0=`vec4 mvPosition = vec4( transformed, 1.0 );
#ifdef USE_BATCHING
	mvPosition = batchingMatrix * mvPosition;
#endif
#ifdef USE_INSTANCING
	mvPosition = instanceMatrix * mvPosition;
#endif
mvPosition = modelViewMatrix * mvPosition;
gl_Position = projectionMatrix * mvPosition;`,G0=`#ifdef DITHERING
	gl_FragColor.rgb = dithering( gl_FragColor.rgb );
#endif`,H0=`#ifdef DITHERING
	vec3 dithering( vec3 color ) {
		float grid_position = rand( gl_FragCoord.xy );
		vec3 dither_shift_RGB = vec3( 0.25 / 255.0, -0.25 / 255.0, 0.25 / 255.0 );
		dither_shift_RGB = mix( 2.0 * dither_shift_RGB, -2.0 * dither_shift_RGB, grid_position );
		return color + dither_shift_RGB;
	}
#endif`,W0=`float roughnessFactor = roughness;
#ifdef USE_ROUGHNESSMAP
	vec4 texelRoughness = texture2D( roughnessMap, vRoughnessMapUv );
	roughnessFactor *= texelRoughness.g;
#endif`,X0=`#ifdef USE_ROUGHNESSMAP
	uniform sampler2D roughnessMap;
#endif`,q0=`#if NUM_SPOT_LIGHT_COORDS > 0
	varying vec4 vSpotLightCoord[ NUM_SPOT_LIGHT_COORDS ];
#endif
#if NUM_SPOT_LIGHT_MAPS > 0
	uniform sampler2D spotLightMap[ NUM_SPOT_LIGHT_MAPS ];
#endif
#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
		#define SUN_LIGHT_CASCADES 2
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow sunShadowMap[ NUM_SUN_LIGHT_SHADOWS ];
		#else
			uniform sampler2D sunShadowMap[ NUM_SUN_LIGHT_SHADOWS ];
		#endif
		uniform mat4 sunShadowMatrix[ NUM_SUN_LIGHT_SHADOWS * SUN_LIGHT_CASCADES ];
		uniform vec4 sunShadowCascade[ NUM_SUN_LIGHT_SHADOWS * SUN_LIGHT_CASCADES ];
		varying vec4 vSunShadowWorldPosition;
		varying vec3 vSunShadowWorldNormal;
		struct SunLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SunLightShadow sunLightShadows[ NUM_SUN_LIGHT_SHADOWS ];
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow directionalShadowMap[ NUM_DIR_LIGHT_SHADOWS ];
		#else
			uniform sampler2D directionalShadowMap[ NUM_DIR_LIGHT_SHADOWS ];
		#endif
		varying vec4 vDirectionalShadowCoord[ NUM_DIR_LIGHT_SHADOWS ];
		struct DirectionalLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform DirectionalLightShadow directionalLightShadows[ NUM_DIR_LIGHT_SHADOWS ];
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform sampler2DShadow spotShadowMap[ NUM_SPOT_LIGHT_SHADOWS ];
		#else
			uniform sampler2D spotShadowMap[ NUM_SPOT_LIGHT_SHADOWS ];
		#endif
		struct SpotLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SpotLightShadow spotLightShadows[ NUM_SPOT_LIGHT_SHADOWS ];
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		#if defined( SHADOWMAP_TYPE_PCF )
			uniform samplerCubeShadow pointShadowMap[ NUM_POINT_LIGHT_SHADOWS ];
		#elif defined( SHADOWMAP_TYPE_BASIC )
			uniform samplerCube pointShadowMap[ NUM_POINT_LIGHT_SHADOWS ];
		#endif
		varying vec4 vPointShadowCoord[ NUM_POINT_LIGHT_SHADOWS ];
		struct PointLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
			float shadowCameraNear;
			float shadowCameraFar;
		};
		uniform PointLightShadow pointLightShadows[ NUM_POINT_LIGHT_SHADOWS ];
	#endif
	#if defined( SHADOWMAP_TYPE_PCF )
		float interleavedGradientNoise( vec2 position ) {
			return fract( 52.9829189 * fract( dot( position, vec2( 0.06711056, 0.00583715 ) ) ) );
		}
		vec2 vogelDiskSample( int sampleIndex, int samplesCount, float phi ) {
			const float goldenAngle = 2.399963229728653;
			float r = sqrt( ( float( sampleIndex ) + 0.5 ) / float( samplesCount ) );
			float theta = float( sampleIndex ) * goldenAngle + phi;
			return vec2( cos( theta ), sin( theta ) ) * r;
		}
	#endif
	#if defined( SHADOWMAP_TYPE_PCF )
		float getShadow( sampler2DShadow shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			shadowCoord.z += shadowBias;
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				vec2 texelSize = vec2( 1.0 ) / shadowMapSize;
				float radius = shadowRadius * texelSize.x;
				float phi = interleavedGradientNoise( gl_FragCoord.xy ) * PI2;
				shadow = (
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 0, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 1, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 2, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 3, 5, phi ) * radius, shadowCoord.z ) ) +
					texture( shadowMap, vec3( shadowCoord.xy + vogelDiskSample( 4, 5, phi ) * radius, shadowCoord.z ) )
				) * 0.2;
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#elif defined( SHADOWMAP_TYPE_VSM )
		float getShadow( sampler2D shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				shadowCoord.z -= shadowBias;
			#else
				shadowCoord.z += shadowBias;
			#endif
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				vec2 distribution = texture2D( shadowMap, shadowCoord.xy ).rg;
				float mean = distribution.x;
				float variance = distribution.y * distribution.y;
				#ifdef USE_REVERSED_DEPTH_BUFFER
					float hard_shadow = step( mean, shadowCoord.z );
				#else
					float hard_shadow = step( shadowCoord.z, mean );
				#endif
				
				if ( hard_shadow == 1.0 ) {
					shadow = 1.0;
				} else {
					variance = max( variance, 0.0000001 );
					float d = shadowCoord.z - mean;
					float p_max = variance / ( variance + d * d );
					p_max = clamp( ( p_max - 0.3 ) / 0.65, 0.0, 1.0 );
					shadow = max( hard_shadow, p_max );
				}
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#else
		float getShadow( sampler2D shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord ) {
			float shadow = 1.0;
			shadowCoord.xyz /= shadowCoord.w;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				shadowCoord.z -= shadowBias;
			#else
				shadowCoord.z += shadowBias;
			#endif
			bool inFrustum = shadowCoord.x >= 0.0 && shadowCoord.x <= 1.0 && shadowCoord.y >= 0.0 && shadowCoord.y <= 1.0;
			bool frustumTest = inFrustum && shadowCoord.z <= 1.0;
			if ( frustumTest ) {
				float depth = texture2D( shadowMap, shadowCoord.xy ).r;
				#ifdef USE_REVERSED_DEPTH_BUFFER
					shadow = step( depth, shadowCoord.z );
				#else
					shadow = step( shadowCoord.z, depth );
				#endif
			}
			return mix( 1.0, shadow, shadowIntensity );
		}
	#endif
	#if NUM_SUN_LIGHT_SHADOWS > 0
		float getSunShadow(
			#if defined( SHADOWMAP_TYPE_PCF )
				sampler2DShadow shadowMap,
			#else
				sampler2D shadowMap,
			#endif
			SunLightShadow sunLightShadow,
			int shadowIndex
		) {
			vec4 shadowWorldPosition = vec4( vSunShadowWorldPosition.xyz + vSunShadowWorldNormal * sunLightShadow.shadowNormalBias, 1.0 );
			float viewDepth = vSunShadowWorldPosition.w;
			int cascadeOffset = shadowIndex * SUN_LIGHT_CASCADES;
			float shadow = 1.0;
			for ( int i = SUN_LIGHT_CASCADES - 1; i >= 0; i -- ) {
				vec4 cascade = sunShadowCascade[ cascadeOffset + i ];
				if ( viewDepth >= cascade.x && viewDepth < cascade.y ) {
					float cascadeShadow = getShadow(
						shadowMap,
						sunLightShadow.shadowMapSize,
						sunLightShadow.shadowIntensity,
						sunLightShadow.shadowBias,
						sunLightShadow.shadowRadius,
						sunShadowMatrix[ cascadeOffset + i ] * shadowWorldPosition
					);
					shadow = mix( cascadeShadow, shadow, smoothstep( cascade.z, cascade.y, viewDepth ) );
				}
			}
			return shadow;
		}
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
	#if defined( SHADOWMAP_TYPE_PCF )
	float getPointShadow( samplerCubeShadow shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord, float shadowCameraNear, float shadowCameraFar ) {
		float shadow = 1.0;
		vec3 lightToPosition = shadowCoord.xyz;
		vec3 bd3D = normalize( lightToPosition );
		vec3 absVec = abs( lightToPosition );
		float viewSpaceZ = max( max( absVec.x, absVec.y ), absVec.z );
		if ( viewSpaceZ - shadowCameraFar <= 0.0 && viewSpaceZ - shadowCameraNear >= 0.0 ) {
			#ifdef USE_REVERSED_DEPTH_BUFFER
				float dp = ( shadowCameraNear * ( shadowCameraFar - viewSpaceZ ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
				dp -= shadowBias;
			#else
				float dp = ( shadowCameraFar * ( viewSpaceZ - shadowCameraNear ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
				dp += shadowBias;
			#endif
			float texelSize = shadowRadius / shadowMapSize.x;
			vec3 absDir = abs( bd3D );
			vec3 tangent = absDir.x > absDir.z ? vec3( 0.0, 1.0, 0.0 ) : vec3( 1.0, 0.0, 0.0 );
			tangent = normalize( cross( bd3D, tangent ) );
			vec3 bitangent = cross( bd3D, tangent );
			float phi = interleavedGradientNoise( gl_FragCoord.xy ) * PI2;
			vec2 sample0 = vogelDiskSample( 0, 5, phi );
			vec2 sample1 = vogelDiskSample( 1, 5, phi );
			vec2 sample2 = vogelDiskSample( 2, 5, phi );
			vec2 sample3 = vogelDiskSample( 3, 5, phi );
			vec2 sample4 = vogelDiskSample( 4, 5, phi );
			shadow = (
				texture( shadowMap, vec4( bd3D + ( tangent * sample0.x + bitangent * sample0.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample1.x + bitangent * sample1.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample2.x + bitangent * sample2.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample3.x + bitangent * sample3.y ) * texelSize, dp ) ) +
				texture( shadowMap, vec4( bd3D + ( tangent * sample4.x + bitangent * sample4.y ) * texelSize, dp ) )
			) * 0.2;
		}
		return mix( 1.0, shadow, shadowIntensity );
	}
	#elif defined( SHADOWMAP_TYPE_BASIC )
	float getPointShadow( samplerCube shadowMap, vec2 shadowMapSize, float shadowIntensity, float shadowBias, float shadowRadius, vec4 shadowCoord, float shadowCameraNear, float shadowCameraFar ) {
		float shadow = 1.0;
		vec3 lightToPosition = shadowCoord.xyz;
		vec3 absVec = abs( lightToPosition );
		float viewSpaceZ = max( max( absVec.x, absVec.y ), absVec.z );
		if ( viewSpaceZ - shadowCameraFar <= 0.0 && viewSpaceZ - shadowCameraNear >= 0.0 ) {
			float dp = ( shadowCameraFar * ( viewSpaceZ - shadowCameraNear ) ) / ( viewSpaceZ * ( shadowCameraFar - shadowCameraNear ) );
			dp += shadowBias;
			vec3 bd3D = normalize( lightToPosition );
			float depth = textureCube( shadowMap, bd3D ).r;
			#ifdef USE_REVERSED_DEPTH_BUFFER
				depth = 1.0 - depth;
			#endif
			shadow = step( dp, depth );
		}
		return mix( 1.0, shadow, shadowIntensity );
	}
	#endif
	#endif
#endif`,Y0=`#if NUM_SPOT_LIGHT_COORDS > 0
	uniform mat4 spotLightMatrix[ NUM_SPOT_LIGHT_COORDS ];
	varying vec4 vSpotLightCoord[ NUM_SPOT_LIGHT_COORDS ];
#endif
#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
		varying vec4 vSunShadowWorldPosition;
		varying vec3 vSunShadowWorldNormal;
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		uniform mat4 directionalShadowMatrix[ NUM_DIR_LIGHT_SHADOWS ];
		varying vec4 vDirectionalShadowCoord[ NUM_DIR_LIGHT_SHADOWS ];
		struct DirectionalLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform DirectionalLightShadow directionalLightShadows[ NUM_DIR_LIGHT_SHADOWS ];
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
		struct SpotLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
		};
		uniform SpotLightShadow spotLightShadows[ NUM_SPOT_LIGHT_SHADOWS ];
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		uniform mat4 pointShadowMatrix[ NUM_POINT_LIGHT_SHADOWS ];
		varying vec4 vPointShadowCoord[ NUM_POINT_LIGHT_SHADOWS ];
		struct PointLightShadow {
			float shadowIntensity;
			float shadowBias;
			float shadowNormalBias;
			float shadowRadius;
			vec2 shadowMapSize;
			float shadowCameraNear;
			float shadowCameraFar;
		};
		uniform PointLightShadow pointLightShadows[ NUM_POINT_LIGHT_SHADOWS ];
	#endif
#endif`,K0=`#if ( defined( USE_SHADOWMAP ) && ( NUM_DIR_LIGHT_SHADOWS > 0 || NUM_SUN_LIGHT_SHADOWS > 0 || NUM_POINT_LIGHT_SHADOWS > 0 ) ) || ( NUM_SPOT_LIGHT_COORDS > 0 )
	#ifdef HAS_NORMAL
		vec3 shadowWorldNormal = transformNormalByInverseViewMatrix( transformedNormal, viewMatrix );
	#else
		vec3 shadowWorldNormal = vec3( 0.0 );
	#endif
	vec4 shadowWorldPosition;
#endif
#if defined( USE_SHADOWMAP )
	#if NUM_SUN_LIGHT_SHADOWS > 0
		vSunShadowWorldPosition = vec4( worldPosition.xyz, - mvPosition.z );
		vSunShadowWorldNormal = shadowWorldNormal;
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_DIR_LIGHT_SHADOWS; i ++ ) {
			shadowWorldPosition = worldPosition + vec4( shadowWorldNormal * directionalLightShadows[ i ].shadowNormalBias, 0 );
			vDirectionalShadowCoord[ i ] = directionalShadowMatrix[ i ] * shadowWorldPosition;
		}
		#pragma unroll_loop_end
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0
		#pragma unroll_loop_start
		for ( int i = 0; i < NUM_POINT_LIGHT_SHADOWS; i ++ ) {
			shadowWorldPosition = worldPosition + vec4( shadowWorldNormal * pointLightShadows[ i ].shadowNormalBias, 0 );
			vPointShadowCoord[ i ] = pointShadowMatrix[ i ] * shadowWorldPosition;
		}
		#pragma unroll_loop_end
	#endif
#endif
#if NUM_SPOT_LIGHT_COORDS > 0
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHT_COORDS; i ++ ) {
		shadowWorldPosition = worldPosition;
		#if ( defined( USE_SHADOWMAP ) && UNROLLED_LOOP_INDEX < NUM_SPOT_LIGHT_SHADOWS )
			shadowWorldPosition.xyz += shadowWorldNormal * spotLightShadows[ i ].shadowNormalBias;
		#endif
		vSpotLightCoord[ i ] = spotLightMatrix[ i ] * shadowWorldPosition;
	}
	#pragma unroll_loop_end
#endif`,Z0=`float getShadowMask() {
	float shadow = 1.0;
	#ifdef USE_SHADOWMAP
	#if NUM_SUN_LIGHT_SHADOWS > 0
	SunLightShadow sunLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SUN_LIGHT_SHADOWS; i ++ ) {
		sunLight = sunLightShadows[ i ];
		shadow *= receiveShadow ? getSunShadow( sunShadowMap[ i ], sunLight, UNROLLED_LOOP_INDEX ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_DIR_LIGHT_SHADOWS > 0
	DirectionalLightShadow directionalLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_DIR_LIGHT_SHADOWS; i ++ ) {
		directionalLight = directionalLightShadows[ i ];
		shadow *= receiveShadow ? getShadow( directionalShadowMap[ i ], directionalLight.shadowMapSize, directionalLight.shadowIntensity, directionalLight.shadowBias, directionalLight.shadowRadius, vDirectionalShadowCoord[ i ] ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_SPOT_LIGHT_SHADOWS > 0
	SpotLightShadow spotLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_SPOT_LIGHT_SHADOWS; i ++ ) {
		spotLight = spotLightShadows[ i ];
		shadow *= receiveShadow ? getShadow( spotShadowMap[ i ], spotLight.shadowMapSize, spotLight.shadowIntensity, spotLight.shadowBias, spotLight.shadowRadius, vSpotLightCoord[ i ] ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#if NUM_POINT_LIGHT_SHADOWS > 0 && ( defined( SHADOWMAP_TYPE_PCF ) || defined( SHADOWMAP_TYPE_BASIC ) )
	PointLightShadow pointLight;
	#pragma unroll_loop_start
	for ( int i = 0; i < NUM_POINT_LIGHT_SHADOWS; i ++ ) {
		pointLight = pointLightShadows[ i ];
		shadow *= receiveShadow ? getPointShadow( pointShadowMap[ i ], pointLight.shadowMapSize, pointLight.shadowIntensity, pointLight.shadowBias, pointLight.shadowRadius, vPointShadowCoord[ i ], pointLight.shadowCameraNear, pointLight.shadowCameraFar ) : 1.0;
	}
	#pragma unroll_loop_end
	#endif
	#endif
	return shadow;
}`,$0=`#ifdef USE_SKINNING
	mat4 boneMatX = getBoneMatrix( skinIndex.x );
	mat4 boneMatY = getBoneMatrix( skinIndex.y );
	mat4 boneMatZ = getBoneMatrix( skinIndex.z );
	mat4 boneMatW = getBoneMatrix( skinIndex.w );
#endif`,J0=`#ifdef USE_SKINNING
	uniform mat4 bindMatrix;
	uniform mat4 bindMatrixInverse;
	uniform highp sampler2D boneTexture;
	mat4 getBoneMatrix( const in float i ) {
		int size = textureSize( boneTexture, 0 ).x;
		int j = int( i ) * 4;
		int x = j % size;
		int y = j / size;
		vec4 v1 = texelFetch( boneTexture, ivec2( x, y ), 0 );
		vec4 v2 = texelFetch( boneTexture, ivec2( x + 1, y ), 0 );
		vec4 v3 = texelFetch( boneTexture, ivec2( x + 2, y ), 0 );
		vec4 v4 = texelFetch( boneTexture, ivec2( x + 3, y ), 0 );
		return mat4( v1, v2, v3, v4 );
	}
#endif`,j0=`#ifdef USE_SKINNING
	vec4 skinVertex = bindMatrix * vec4( transformed, 1.0 );
	vec4 skinned = vec4( 0.0 );
	skinned += boneMatX * skinVertex * skinWeight.x;
	skinned += boneMatY * skinVertex * skinWeight.y;
	skinned += boneMatZ * skinVertex * skinWeight.z;
	skinned += boneMatW * skinVertex * skinWeight.w;
	transformed = ( bindMatrixInverse * skinned ).xyz;
#endif`,Q0=`#ifdef USE_SKINNING
	mat4 skinMatrix = mat4( 0.0 );
	skinMatrix += skinWeight.x * boneMatX;
	skinMatrix += skinWeight.y * boneMatY;
	skinMatrix += skinWeight.z * boneMatZ;
	skinMatrix += skinWeight.w * boneMatW;
	skinMatrix = bindMatrixInverse * skinMatrix * bindMatrix;
	objectNormal = vec4( skinMatrix * vec4( objectNormal, 0.0 ) ).xyz;
	#ifdef USE_TANGENT
		objectTangent = vec4( skinMatrix * vec4( objectTangent, 0.0 ) ).xyz;
	#endif
#endif`,tg=`float specularStrength;
#ifdef USE_SPECULARMAP
	vec4 texelSpecular = texture2D( specularMap, vSpecularMapUv );
	specularStrength = texelSpecular.r;
#else
	specularStrength = 1.0;
#endif`,eg=`#ifdef USE_SPECULARMAP
	uniform sampler2D specularMap;
#endif`,ig=`#if defined( TONE_MAPPING )
	gl_FragColor.rgb = toneMapping( gl_FragColor.rgb );
#endif`,ng=`#ifndef saturate
#define saturate( a ) clamp( a, 0.0, 1.0 )
#endif
uniform float toneMappingExposure;
vec3 LinearToneMapping( vec3 color ) {
	return saturate( toneMappingExposure * color );
}
vec3 ReinhardToneMapping( vec3 color ) {
	color *= toneMappingExposure;
	return saturate( color / ( vec3( 1.0 ) + color ) );
}
vec3 CineonToneMapping( vec3 color ) {
	color *= toneMappingExposure;
	color = max( vec3( 0.0 ), color - 0.004 );
	return pow( ( color * ( 6.2 * color + 0.5 ) ) / ( color * ( 6.2 * color + 1.7 ) + 0.06 ), vec3( 2.2 ) );
}
vec3 RRTAndODTFit( vec3 v ) {
	vec3 a = v * ( v + 0.0245786 ) - 0.000090537;
	vec3 b = v * ( 0.983729 * v + 0.4329510 ) + 0.238081;
	return a / b;
}
vec3 ACESFilmicToneMapping( vec3 color ) {
	const mat3 ACESInputMat = mat3(
		vec3( 0.59719, 0.07600, 0.02840 ),		vec3( 0.35458, 0.90834, 0.13383 ),
		vec3( 0.04823, 0.01566, 0.83777 )
	);
	const mat3 ACESOutputMat = mat3(
		vec3(  1.60475, -0.10208, -0.00327 ),		vec3( -0.53108,  1.10813, -0.07276 ),
		vec3( -0.07367, -0.00605,  1.07602 )
	);
	color *= toneMappingExposure / 0.6;
	color = ACESInputMat * color;
	color = RRTAndODTFit( color );
	color = ACESOutputMat * color;
	return saturate( color );
}
const mat3 LINEAR_REC2020_TO_LINEAR_SRGB = mat3(
	vec3( 1.6605, - 0.1246, - 0.0182 ),
	vec3( - 0.5876, 1.1329, - 0.1006 ),
	vec3( - 0.0728, - 0.0083, 1.1187 )
);
const mat3 LINEAR_SRGB_TO_LINEAR_REC2020 = mat3(
	vec3( 0.6274, 0.0691, 0.0164 ),
	vec3( 0.3293, 0.9195, 0.0880 ),
	vec3( 0.0433, 0.0113, 0.8956 )
);
vec3 agxDefaultContrastApprox( vec3 x ) {
	vec3 x2 = x * x;
	vec3 x4 = x2 * x2;
	return + 15.5 * x4 * x2
		- 40.14 * x4 * x
		+ 31.96 * x4
		- 6.868 * x2 * x
		+ 0.4298 * x2
		+ 0.1191 * x
		- 0.00232;
}
vec3 AgXToneMapping( vec3 color ) {
	const mat3 AgXInsetMatrix = mat3(
		vec3( 0.856627153315983, 0.137318972929847, 0.11189821299995 ),
		vec3( 0.0951212405381588, 0.761241990602591, 0.0767994186031903 ),
		vec3( 0.0482516061458583, 0.101439036467562, 0.811302368396859 )
	);
	const mat3 AgXOutsetMatrix = mat3(
		vec3( 1.1271005818144368, - 0.1413297634984383, - 0.14132976349843826 ),
		vec3( - 0.11060664309660323, 1.157823702216272, - 0.11060664309660294 ),
		vec3( - 0.016493938717834573, - 0.016493938717834257, 1.2519364065950405 )
	);
	const float AgxMinEv = - 12.47393;	const float AgxMaxEv = 4.026069;
	color *= toneMappingExposure;
	color = LINEAR_SRGB_TO_LINEAR_REC2020 * color;
	color = AgXInsetMatrix * color;
	color = max( color, 1e-10 );	color = log2( color );
	color = ( color - AgxMinEv ) / ( AgxMaxEv - AgxMinEv );
	color = clamp( color, 0.0, 1.0 );
	color = agxDefaultContrastApprox( color );
	color = AgXOutsetMatrix * color;
	color = pow( max( vec3( 0.0 ), color ), vec3( 2.2 ) );
	color = LINEAR_REC2020_TO_LINEAR_SRGB * color;
	color = clamp( color, 0.0, 1.0 );
	return color;
}
vec3 NeutralToneMapping( vec3 color ) {
	const float StartCompression = 0.8 - 0.04;
	const float Desaturation = 0.15;
	color *= toneMappingExposure;
	float x = min( color.r, min( color.g, color.b ) );
	float offset = x < 0.08 ? x - 6.25 * x * x : 0.04;
	color -= offset;
	float peak = max( color.r, max( color.g, color.b ) );
	if ( peak < StartCompression ) return color;
	float d = 1. - StartCompression;
	float newPeak = 1. - d * d / ( peak + d - StartCompression );
	color *= newPeak / peak;
	float g = 1. - 1. / ( Desaturation * ( peak - newPeak ) + 1. );
	return mix( color, vec3( newPeak ), g );
}
vec3 CustomToneMapping( vec3 color ) { return color; }`,sg=`#ifdef USE_TRANSMISSION
	material.transmission = transmission;
	material.transmissionAlpha = 1.0;
	material.thickness = thickness;
	material.attenuationDistance = attenuationDistance;
	material.attenuationColor = attenuationColor;
	#ifdef USE_TRANSMISSIONMAP
		material.transmission *= texture2D( transmissionMap, vTransmissionMapUv ).r;
	#endif
	#ifdef USE_THICKNESSMAP
		material.thickness *= texture2D( thicknessMap, vThicknessMapUv ).g;
	#endif
	vec3 pos = vWorldPosition;
	vec3 v = normalize( cameraPosition - pos );
	vec3 n = transformNormalByInverseViewMatrix( normal, viewMatrix );
	vec4 transmitted = getIBLVolumeRefraction(
		n, v, material.roughness, material.diffuseContribution, material.specularColorBlended, material.specularF90,
		pos, modelMatrix, viewMatrix, projectionMatrix, material.dispersion, material.ior, material.thickness,
		material.attenuationColor, material.attenuationDistance );
	material.transmissionAlpha = mix( material.transmissionAlpha, transmitted.a, material.transmission );
	totalDiffuse = mix( totalDiffuse, transmitted.rgb, material.transmission );
#endif`,rg=`#ifdef USE_TRANSMISSION
	uniform float transmission;
	uniform float thickness;
	uniform float attenuationDistance;
	uniform vec3 attenuationColor;
	#ifdef USE_TRANSMISSIONMAP
		uniform sampler2D transmissionMap;
	#endif
	#ifdef USE_THICKNESSMAP
		uniform sampler2D thicknessMap;
	#endif
	uniform vec2 transmissionSamplerSize;
	uniform sampler2D transmissionSamplerMap;
	uniform mat4 modelMatrix;
	uniform mat4 projectionMatrix;
	varying vec3 vWorldPosition;
	float w0( float a ) {
		return ( 1.0 / 6.0 ) * ( a * ( a * ( - a + 3.0 ) - 3.0 ) + 1.0 );
	}
	float w1( float a ) {
		return ( 1.0 / 6.0 ) * ( a *  a * ( 3.0 * a - 6.0 ) + 4.0 );
	}
	float w2( float a ){
		return ( 1.0 / 6.0 ) * ( a * ( a * ( - 3.0 * a + 3.0 ) + 3.0 ) + 1.0 );
	}
	float w3( float a ) {
		return ( 1.0 / 6.0 ) * ( a * a * a );
	}
	float g0( float a ) {
		return w0( a ) + w1( a );
	}
	float g1( float a ) {
		return w2( a ) + w3( a );
	}
	float h0( float a ) {
		return - 1.0 + w1( a ) / ( w0( a ) + w1( a ) );
	}
	float h1( float a ) {
		return 1.0 + w3( a ) / ( w2( a ) + w3( a ) );
	}
	vec4 bicubic( sampler2D tex, vec2 uv, vec4 texelSize, float lod ) {
		uv = uv * texelSize.zw + 0.5;
		vec2 iuv = floor( uv );
		vec2 fuv = fract( uv );
		float g0x = g0( fuv.x );
		float g1x = g1( fuv.x );
		float h0x = h0( fuv.x );
		float h1x = h1( fuv.x );
		float h0y = h0( fuv.y );
		float h1y = h1( fuv.y );
		vec2 p0 = ( vec2( iuv.x + h0x, iuv.y + h0y ) - 0.5 ) * texelSize.xy;
		vec2 p1 = ( vec2( iuv.x + h1x, iuv.y + h0y ) - 0.5 ) * texelSize.xy;
		vec2 p2 = ( vec2( iuv.x + h0x, iuv.y + h1y ) - 0.5 ) * texelSize.xy;
		vec2 p3 = ( vec2( iuv.x + h1x, iuv.y + h1y ) - 0.5 ) * texelSize.xy;
		return g0( fuv.y ) * ( g0x * textureLod( tex, p0, lod ) + g1x * textureLod( tex, p1, lod ) ) +
			g1( fuv.y ) * ( g0x * textureLod( tex, p2, lod ) + g1x * textureLod( tex, p3, lod ) );
	}
	vec4 textureBicubic( sampler2D sampler, vec2 uv, float lod ) {
		vec2 fLodSize = vec2( textureSize( sampler, int( lod ) ) );
		vec2 cLodSize = vec2( textureSize( sampler, int( lod + 1.0 ) ) );
		vec2 fLodSizeInv = 1.0 / fLodSize;
		vec2 cLodSizeInv = 1.0 / cLodSize;
		vec4 fSample = bicubic( sampler, uv, vec4( fLodSizeInv, fLodSize ), floor( lod ) );
		vec4 cSample = bicubic( sampler, uv, vec4( cLodSizeInv, cLodSize ), ceil( lod ) );
		return mix( fSample, cSample, fract( lod ) );
	}
	vec3 getVolumeTransmissionRay( const in vec3 n, const in vec3 v, const in float thickness, const in float ior, const in mat4 modelMatrix ) {
		vec3 refractionVector = refract( - v, normalize( n ), 1.0 / ior );
		vec3 modelScale;
		modelScale.x = length( vec3( modelMatrix[ 0 ].xyz ) );
		modelScale.y = length( vec3( modelMatrix[ 1 ].xyz ) );
		modelScale.z = length( vec3( modelMatrix[ 2 ].xyz ) );
		return normalize( refractionVector ) * thickness * modelScale;
	}
	float applyIorToRoughness( const in float roughness, const in float ior ) {
		return roughness * clamp( ior * 2.0 - 2.0, 0.0, 1.0 );
	}
	vec4 getTransmissionSample( const in vec2 fragCoord, const in float roughness, const in float ior ) {
		float lod = log2( transmissionSamplerSize.x ) * applyIorToRoughness( roughness, ior );
		return textureBicubic( transmissionSamplerMap, fragCoord.xy, lod );
	}
	vec3 volumeAttenuation( const in float transmissionDistance, const in vec3 attenuationColor, const in float attenuationDistance ) {
		if ( isinf( attenuationDistance ) ) {
			return vec3( 1.0 );
		} else {
			vec3 attenuationCoefficient = -log( attenuationColor ) / attenuationDistance;
			vec3 transmittance = exp( - attenuationCoefficient * transmissionDistance );			return transmittance;
		}
	}
	vec4 getIBLVolumeRefraction( const in vec3 n, const in vec3 v, const in float roughness, const in vec3 diffuseColor,
		const in vec3 specularColor, const in float specularF90, const in vec3 position, const in mat4 modelMatrix,
		const in mat4 viewMatrix, const in mat4 projMatrix, const in float dispersion, const in float ior, const in float thickness,
		const in vec3 attenuationColor, const in float attenuationDistance ) {
		vec4 transmittedLight;
		vec3 transmittance;
		#ifdef USE_DISPERSION
			float halfSpread = ( ior - 1.0 ) * 0.025 * dispersion;
			vec3 iors = vec3( ior - halfSpread, ior, ior + halfSpread );
			for ( int i = 0; i < 3; i ++ ) {
				vec3 transmissionRay = getVolumeTransmissionRay( n, v, thickness, iors[ i ], modelMatrix );
				vec3 refractedRayExit = position + transmissionRay;
				vec4 ndcPos = projMatrix * viewMatrix * vec4( refractedRayExit, 1.0 );
				vec2 refractionCoords = ndcPos.xy / ndcPos.w;
				refractionCoords += 1.0;
				refractionCoords /= 2.0;
				vec4 transmissionSample = getTransmissionSample( refractionCoords, roughness, iors[ i ] );
				transmittedLight[ i ] = transmissionSample[ i ];
				transmittedLight.a += transmissionSample.a;
				transmittance[ i ] = diffuseColor[ i ] * volumeAttenuation( length( transmissionRay ), attenuationColor, attenuationDistance )[ i ];
			}
			transmittedLight.a /= 3.0;
		#else
			vec3 transmissionRay = getVolumeTransmissionRay( n, v, thickness, ior, modelMatrix );
			vec3 refractedRayExit = position + transmissionRay;
			vec4 ndcPos = projMatrix * viewMatrix * vec4( refractedRayExit, 1.0 );
			vec2 refractionCoords = ndcPos.xy / ndcPos.w;
			refractionCoords += 1.0;
			refractionCoords /= 2.0;
			transmittedLight = getTransmissionSample( refractionCoords, roughness, ior );
			transmittance = diffuseColor * volumeAttenuation( length( transmissionRay ), attenuationColor, attenuationDistance );
		#endif
		vec3 attenuatedColor = transmittance * transmittedLight.rgb;
		vec3 F = EnvironmentBRDF( n, v, specularColor, specularF90, roughness );
		float transmittanceFactor = ( transmittance.r + transmittance.g + transmittance.b ) / 3.0;
		return vec4( ( 1.0 - F ) * attenuatedColor, 1.0 - ( 1.0 - transmittedLight.a ) * transmittanceFactor );
	}
#endif`,ag=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	varying vec2 vUv;
#endif
#ifdef USE_MAP
	varying vec2 vMapUv;
#endif
#ifdef USE_ALPHAMAP
	varying vec2 vAlphaMapUv;
#endif
#ifdef USE_LIGHTMAP
	varying vec2 vLightMapUv;
#endif
#ifdef USE_AOMAP
	varying vec2 vAoMapUv;
#endif
#ifdef USE_BUMPMAP
	varying vec2 vBumpMapUv;
#endif
#ifdef USE_NORMALMAP
	varying vec2 vNormalMapUv;
#endif
#ifdef USE_EMISSIVEMAP
	varying vec2 vEmissiveMapUv;
#endif
#ifdef USE_METALNESSMAP
	varying vec2 vMetalnessMapUv;
#endif
#ifdef USE_ROUGHNESSMAP
	varying vec2 vRoughnessMapUv;
#endif
#ifdef USE_ANISOTROPYMAP
	varying vec2 vAnisotropyMapUv;
#endif
#ifdef USE_CLEARCOATMAP
	varying vec2 vClearcoatMapUv;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	varying vec2 vClearcoatNormalMapUv;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	varying vec2 vClearcoatRoughnessMapUv;
#endif
#ifdef USE_IRIDESCENCEMAP
	varying vec2 vIridescenceMapUv;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	varying vec2 vIridescenceThicknessMapUv;
#endif
#ifdef USE_SHEEN_COLORMAP
	varying vec2 vSheenColorMapUv;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	varying vec2 vSheenRoughnessMapUv;
#endif
#ifdef USE_SPECULARMAP
	varying vec2 vSpecularMapUv;
#endif
#ifdef USE_SPECULAR_COLORMAP
	varying vec2 vSpecularColorMapUv;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	varying vec2 vSpecularIntensityMapUv;
#endif
#ifdef USE_TRANSMISSIONMAP
	uniform mat3 transmissionMapTransform;
	varying vec2 vTransmissionMapUv;
#endif
#ifdef USE_THICKNESSMAP
	uniform mat3 thicknessMapTransform;
	varying vec2 vThicknessMapUv;
#endif`,og=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	varying vec2 vUv;
#endif
#ifdef USE_MAP
	uniform mat3 mapTransform;
	varying vec2 vMapUv;
#endif
#ifdef USE_ALPHAMAP
	uniform mat3 alphaMapTransform;
	varying vec2 vAlphaMapUv;
#endif
#ifdef USE_LIGHTMAP
	uniform mat3 lightMapTransform;
	varying vec2 vLightMapUv;
#endif
#ifdef USE_AOMAP
	uniform mat3 aoMapTransform;
	varying vec2 vAoMapUv;
#endif
#ifdef USE_BUMPMAP
	uniform mat3 bumpMapTransform;
	varying vec2 vBumpMapUv;
#endif
#ifdef USE_NORMALMAP
	uniform mat3 normalMapTransform;
	varying vec2 vNormalMapUv;
#endif
#ifdef USE_DISPLACEMENTMAP
	uniform mat3 displacementMapTransform;
	varying vec2 vDisplacementMapUv;
#endif
#ifdef USE_EMISSIVEMAP
	uniform mat3 emissiveMapTransform;
	varying vec2 vEmissiveMapUv;
#endif
#ifdef USE_METALNESSMAP
	uniform mat3 metalnessMapTransform;
	varying vec2 vMetalnessMapUv;
#endif
#ifdef USE_ROUGHNESSMAP
	uniform mat3 roughnessMapTransform;
	varying vec2 vRoughnessMapUv;
#endif
#ifdef USE_ANISOTROPYMAP
	uniform mat3 anisotropyMapTransform;
	varying vec2 vAnisotropyMapUv;
#endif
#ifdef USE_CLEARCOATMAP
	uniform mat3 clearcoatMapTransform;
	varying vec2 vClearcoatMapUv;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	uniform mat3 clearcoatNormalMapTransform;
	varying vec2 vClearcoatNormalMapUv;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	uniform mat3 clearcoatRoughnessMapTransform;
	varying vec2 vClearcoatRoughnessMapUv;
#endif
#ifdef USE_SHEEN_COLORMAP
	uniform mat3 sheenColorMapTransform;
	varying vec2 vSheenColorMapUv;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	uniform mat3 sheenRoughnessMapTransform;
	varying vec2 vSheenRoughnessMapUv;
#endif
#ifdef USE_IRIDESCENCEMAP
	uniform mat3 iridescenceMapTransform;
	varying vec2 vIridescenceMapUv;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	uniform mat3 iridescenceThicknessMapTransform;
	varying vec2 vIridescenceThicknessMapUv;
#endif
#ifdef USE_SPECULARMAP
	uniform mat3 specularMapTransform;
	varying vec2 vSpecularMapUv;
#endif
#ifdef USE_SPECULAR_COLORMAP
	uniform mat3 specularColorMapTransform;
	varying vec2 vSpecularColorMapUv;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	uniform mat3 specularIntensityMapTransform;
	varying vec2 vSpecularIntensityMapUv;
#endif
#ifdef USE_TRANSMISSIONMAP
	uniform mat3 transmissionMapTransform;
	varying vec2 vTransmissionMapUv;
#endif
#ifdef USE_THICKNESSMAP
	uniform mat3 thicknessMapTransform;
	varying vec2 vThicknessMapUv;
#endif`,lg=`#if defined( USE_UV ) || defined( USE_ANISOTROPY )
	vUv = vec3( uv, 1 ).xy;
#endif
#ifdef USE_MAP
	vMapUv = ( mapTransform * vec3( MAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ALPHAMAP
	vAlphaMapUv = ( alphaMapTransform * vec3( ALPHAMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_LIGHTMAP
	vLightMapUv = ( lightMapTransform * vec3( LIGHTMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_AOMAP
	vAoMapUv = ( aoMapTransform * vec3( AOMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_BUMPMAP
	vBumpMapUv = ( bumpMapTransform * vec3( BUMPMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_NORMALMAP
	vNormalMapUv = ( normalMapTransform * vec3( NORMALMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_DISPLACEMENTMAP
	vDisplacementMapUv = ( displacementMapTransform * vec3( DISPLACEMENTMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_EMISSIVEMAP
	vEmissiveMapUv = ( emissiveMapTransform * vec3( EMISSIVEMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_METALNESSMAP
	vMetalnessMapUv = ( metalnessMapTransform * vec3( METALNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ROUGHNESSMAP
	vRoughnessMapUv = ( roughnessMapTransform * vec3( ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_ANISOTROPYMAP
	vAnisotropyMapUv = ( anisotropyMapTransform * vec3( ANISOTROPYMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOATMAP
	vClearcoatMapUv = ( clearcoatMapTransform * vec3( CLEARCOATMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOAT_NORMALMAP
	vClearcoatNormalMapUv = ( clearcoatNormalMapTransform * vec3( CLEARCOAT_NORMALMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_CLEARCOAT_ROUGHNESSMAP
	vClearcoatRoughnessMapUv = ( clearcoatRoughnessMapTransform * vec3( CLEARCOAT_ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_IRIDESCENCEMAP
	vIridescenceMapUv = ( iridescenceMapTransform * vec3( IRIDESCENCEMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_IRIDESCENCE_THICKNESSMAP
	vIridescenceThicknessMapUv = ( iridescenceThicknessMapTransform * vec3( IRIDESCENCE_THICKNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SHEEN_COLORMAP
	vSheenColorMapUv = ( sheenColorMapTransform * vec3( SHEEN_COLORMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SHEEN_ROUGHNESSMAP
	vSheenRoughnessMapUv = ( sheenRoughnessMapTransform * vec3( SHEEN_ROUGHNESSMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULARMAP
	vSpecularMapUv = ( specularMapTransform * vec3( SPECULARMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULAR_COLORMAP
	vSpecularColorMapUv = ( specularColorMapTransform * vec3( SPECULAR_COLORMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_SPECULAR_INTENSITYMAP
	vSpecularIntensityMapUv = ( specularIntensityMapTransform * vec3( SPECULAR_INTENSITYMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_TRANSMISSIONMAP
	vTransmissionMapUv = ( transmissionMapTransform * vec3( TRANSMISSIONMAP_UV, 1 ) ).xy;
#endif
#ifdef USE_THICKNESSMAP
	vThicknessMapUv = ( thicknessMapTransform * vec3( THICKNESSMAP_UV, 1 ) ).xy;
#endif`,cg=`#if defined( USE_ENVMAP ) || defined( DISTANCE ) || defined ( USE_SHADOWMAP ) || defined ( USE_TRANSMISSION ) || NUM_SPOT_LIGHT_COORDS > 0
	vec4 worldPosition = vec4( transformed, 1.0 );
	#ifdef USE_BATCHING
		worldPosition = batchingMatrix * worldPosition;
	#endif
	#ifdef USE_INSTANCING
		worldPosition = instanceMatrix * worldPosition;
	#endif
	worldPosition = modelMatrix * worldPosition;
#endif`,hg=`varying vec2 vUv;
uniform mat3 uvTransform;
void main() {
	vUv = ( uvTransform * vec3( uv, 1 ) ).xy;
	gl_Position = vec4( position.xy, 1.0, 1.0 );
}`,ug=`uniform sampler2D t2D;
uniform float backgroundIntensity;
varying vec2 vUv;
void main() {
	vec4 texColor = texture2D( t2D, vUv );
	#ifdef DECODE_VIDEO_TEXTURE
		texColor = vec4( mix( pow( texColor.rgb * 0.9478672986 + vec3( 0.0521327014 ), vec3( 2.4 ) ), texColor.rgb * 0.0773993808, vec3( lessThanEqual( texColor.rgb, vec3( 0.04045 ) ) ) ), texColor.w );
	#endif
	texColor.rgb *= backgroundIntensity;
	gl_FragColor = texColor;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,dg=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,fg=`#ifdef ENVMAP_TYPE_CUBE
	uniform samplerCube envMap;
#elif defined( ENVMAP_TYPE_CUBE_UV )
	uniform sampler2D envMap;
#endif
uniform float backgroundBlurriness;
uniform float backgroundIntensity;
uniform mat3 backgroundRotation;
varying vec3 vWorldDirection;
#include <cube_uv_reflection_fragment>
void main() {
	#ifdef ENVMAP_TYPE_CUBE
		vec4 texColor = textureCube( envMap, backgroundRotation * vWorldDirection );
	#elif defined( ENVMAP_TYPE_CUBE_UV )
		vec4 texColor = textureCubeUV( envMap, backgroundRotation * vWorldDirection, backgroundBlurriness );
	#else
		vec4 texColor = vec4( 0.0, 0.0, 0.0, 1.0 );
	#endif
	texColor.rgb *= backgroundIntensity;
	gl_FragColor = texColor;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,pg=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
	gl_Position.z = gl_Position.w;
}`,mg=`uniform samplerCube tCube;
uniform float tFlip;
uniform float opacity;
varying vec3 vWorldDirection;
void main() {
	vec4 texColor = textureCube( tCube, vec3( tFlip * vWorldDirection.x, vWorldDirection.yz ) );
	gl_FragColor = texColor;
	gl_FragColor.a *= opacity;
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,gg=`#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
varying vec2 vHighPrecisionZW;
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <skinbase_vertex>
	#include <morphinstance_vertex>
	#ifdef USE_DISPLACEMENTMAP
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vHighPrecisionZW = gl_Position.zw;
}`,xg=`#if DEPTH_PACKING == 3200
	uniform float opacity;
#endif
#include <common>
#include <packing>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
varying vec2 vHighPrecisionZW;
void main() {
	vec4 diffuseColor = vec4( 1.0 );
	#include <clipping_planes_fragment>
	#if DEPTH_PACKING == 3200
		diffuseColor.a = opacity;
	#endif
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <logdepthbuf_fragment>
	#ifdef USE_REVERSED_DEPTH_BUFFER
		float fragCoordZ = vHighPrecisionZW[ 0 ] / vHighPrecisionZW[ 1 ];
	#else
		float fragCoordZ = 0.5 * vHighPrecisionZW[ 0 ] / vHighPrecisionZW[ 1 ] + 0.5;
	#endif
	#if DEPTH_PACKING == 3200
		gl_FragColor = vec4( vec3( 1.0 - fragCoordZ ), opacity );
	#elif DEPTH_PACKING == 3201
		gl_FragColor = packDepthToRGBA( fragCoordZ );
	#elif DEPTH_PACKING == 3202
		gl_FragColor = vec4( packDepthToRGB( fragCoordZ ), 1.0 );
	#elif DEPTH_PACKING == 3203
		gl_FragColor = vec4( packDepthToRG( fragCoordZ ), 0.0, 1.0 );
	#endif
}`,yg=`#define DISTANCE
varying vec3 vWorldPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <skinbase_vertex>
	#include <morphinstance_vertex>
	#ifdef USE_DISPLACEMENTMAP
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <worldpos_vertex>
	#include <clipping_planes_vertex>
	vWorldPosition = worldPosition.xyz;
}`,_g=`#define DISTANCE
uniform vec3 referencePosition;
uniform float nearDistance;
uniform float farDistance;
varying vec3 vWorldPosition;
#include <common>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( 1.0 );
	#include <clipping_planes_fragment>
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	float dist = length( vWorldPosition - referencePosition );
	dist = ( dist - nearDistance ) / ( farDistance - nearDistance );
	dist = saturate( dist );
	gl_FragColor = vec4( dist, 0.0, 0.0, 1.0 );
}`,vg=`varying vec3 vWorldDirection;
#include <common>
void main() {
	vWorldDirection = transformDirection( position, modelMatrix );
	#include <begin_vertex>
	#include <project_vertex>
}`,Sg=`uniform sampler2D tEquirect;
varying vec3 vWorldDirection;
#include <common>
void main() {
	vec3 direction = normalize( vWorldDirection );
	vec2 sampleUV = equirectUv( direction );
	gl_FragColor = texture2D( tEquirect, sampleUV );
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
}`,bg=`uniform float scale;
attribute float lineDistance;
varying float vLineDistance;
#include <common>
#include <uv_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	vLineDistance = scale * lineDistance;
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
}`,Mg=`uniform vec3 diffuse;
uniform float opacity;
uniform float dashSize;
uniform float totalSize;
varying float vLineDistance;
#include <common>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	if ( mod( vLineDistance, totalSize ) > dashSize ) {
		discard;
	}
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,wg=`#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#if defined ( USE_ENVMAP ) || defined ( USE_SKINNING )
		#include <beginnormal_vertex>
		#include <morphnormal_vertex>
		#include <skinbase_vertex>
		#include <skinnormal_vertex>
		#include <defaultnormal_vertex>
	#endif
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <fog_vertex>
}`,Tg=`uniform vec3 diffuse;
uniform float opacity;
#ifndef FLAT_SHADED
	varying vec3 vNormal;
#endif
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <fog_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	#ifdef USE_LIGHTMAP
		vec4 lightMapTexel = texture2D( lightMap, vLightMapUv );
		reflectedLight.indirectDiffuse += lightMapTexel.rgb * lightMapIntensity * RECIPROCAL_PI;
	#else
		reflectedLight.indirectDiffuse += vec3( 1.0 );
	#endif
	#include <aomap_fragment>
	reflectedLight.indirectDiffuse *= diffuseColor.rgb;
	vec3 outgoingLight = reflectedLight.indirectDiffuse;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Eg=`#define LAMBERT
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,Ag=`#define LAMBERT
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_lambert_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_lambert_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + totalEmissiveRadiance;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Cg=`#define MATCAP
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <color_pars_vertex>
#include <displacementmap_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
	vViewPosition = - mvPosition.xyz;
}`,Rg=`#define MATCAP
uniform vec3 diffuse;
uniform float opacity;
uniform sampler2D matcap;
varying vec3 vViewPosition;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <normal_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	vec3 viewDir = normalize( vViewPosition );
	vec3 x = normalize( vec3( viewDir.z, 0.0, - viewDir.x ) );
	vec3 y = cross( viewDir, x );
	vec2 uv = vec2( dot( x, normal ), dot( y, normal ) ) * 0.495 + 0.5;
	#ifdef USE_MATCAP
		vec4 matcapColor = texture2D( matcap, uv );
	#else
		vec4 matcapColor = vec4( vec3( mix( 0.2, 0.8, uv.y ) ), 1.0 );
	#endif
	vec3 outgoingLight = diffuseColor.rgb * matcapColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Ig=`#define NORMAL
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	varying vec3 vViewPosition;
#endif
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	vViewPosition = - mvPosition.xyz;
#endif
}`,Pg=`#define NORMAL
uniform float opacity;
#if defined( FLAT_SHADED ) || defined( USE_BUMPMAP ) || defined( USE_NORMALMAP_TANGENTSPACE )
	varying vec3 vViewPosition;
#endif
#include <uv_pars_fragment>
#include <normal_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( 0.0, 0.0, 0.0, opacity );
	#include <clipping_planes_fragment>
	#include <logdepthbuf_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	gl_FragColor = vec4( normalize( normal ) * 0.5 + 0.5, diffuseColor.a );
	#ifdef OPAQUE
		gl_FragColor.a = 1.0;
	#endif
}`,Lg=`#define PHONG
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <envmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <envmap_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,Fg=`#define PHONG
uniform vec3 diffuse;
uniform vec3 emissive;
uniform vec3 specular;
uniform float shininess;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_phong_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <specularmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <specularmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_phong_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + reflectedLight.directSpecular + reflectedLight.indirectSpecular + totalEmissiveRadiance;
	#include <envmap_fragment>
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Dg=`#define STANDARD
varying vec3 vViewPosition;
#ifdef USE_TRANSMISSION
	varying vec3 vWorldPosition;
#endif
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
#ifdef USE_TRANSMISSION
	vWorldPosition = worldPosition.xyz;
#endif
}`,Ng=`#define STANDARD
#ifdef PHYSICAL
	#define IOR
	#define USE_SPECULAR
#endif
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float roughness;
uniform float metalness;
uniform float opacity;
#ifdef IOR
	uniform float ior;
#endif
#ifdef USE_SPECULAR
	uniform float specularIntensity;
	uniform vec3 specularColor;
	#ifdef USE_SPECULAR_COLORMAP
		uniform sampler2D specularColorMap;
	#endif
	#ifdef USE_SPECULAR_INTENSITYMAP
		uniform sampler2D specularIntensityMap;
	#endif
#endif
#ifdef USE_CLEARCOAT
	uniform float clearcoat;
	uniform float clearcoatRoughness;
#endif
#ifdef USE_DISPERSION
	uniform float dispersion;
#endif
#ifdef USE_RETROREFLECTION
	uniform float retroreflectivity;
#endif
#ifdef USE_IRIDESCENCE
	uniform float iridescence;
	uniform float iridescenceIOR;
	uniform float iridescenceThicknessMinimum;
	uniform float iridescenceThicknessMaximum;
#endif
#ifdef USE_SHEEN
	uniform vec3 sheenColor;
	uniform float sheenRoughness;
	#ifdef USE_SHEEN_COLORMAP
		uniform sampler2D sheenColorMap;
	#endif
	#ifdef USE_SHEEN_ROUGHNESSMAP
		uniform sampler2D sheenRoughnessMap;
	#endif
#endif
#ifdef USE_ANISOTROPY
	uniform vec2 anisotropyVector;
	#ifdef USE_ANISOTROPYMAP
		uniform sampler2D anisotropyMap;
	#endif
#endif
varying vec3 vViewPosition;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <iridescence_fragment>
#include <cube_uv_reflection_fragment>
#include <envmap_common_pars_fragment>
#include <envmap_physical_pars_fragment>
#include <fog_pars_fragment>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_physical_pars_fragment>
#include <transmission_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <clearcoat_pars_fragment>
#include <iridescence_pars_fragment>
#include <roughnessmap_pars_fragment>
#include <metalnessmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <roughnessmap_fragment>
	#include <metalnessmap_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <clearcoat_normal_fragment_begin>
	#include <clearcoat_normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_physical_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 totalDiffuse = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse;
	vec3 totalSpecular = reflectedLight.directSpecular + reflectedLight.indirectSpecular;
	#include <transmission_fragment>
	vec3 outgoingLight = totalDiffuse + totalSpecular + totalEmissiveRadiance;
	#ifdef USE_SHEEN
 
		outgoingLight = outgoingLight + sheenSpecularDirect + sheenSpecularIndirect;
 
 	#endif
	#ifdef USE_CLEARCOAT
		float dotNVcc = saturate( dot( geometryClearcoatNormal, geometryViewDir ) );
		vec3 Fcc = F_Schlick( material.clearcoatF0, material.clearcoatF90, dotNVcc );
		outgoingLight = outgoingLight * ( 1.0 - material.clearcoat * Fcc ) + ( clearcoatSpecularDirect + clearcoatSpecularIndirect ) * material.clearcoat;
	#endif
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,Ug=`#define TOON
varying vec3 vViewPosition;
#include <common>
#include <batching_pars_vertex>
#include <uv_pars_vertex>
#include <displacementmap_pars_vertex>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <normal_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <shadowmap_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <normal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <displacementmap_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	vViewPosition = - mvPosition.xyz;
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,Og=`#define TOON
uniform vec3 diffuse;
uniform vec3 emissive;
uniform float opacity;
#include <common>
#include <dithering_pars_fragment>
#include <color_pars_fragment>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <aomap_pars_fragment>
#include <lightmap_pars_fragment>
#include <emissivemap_pars_fragment>
#include <gradientmap_pars_fragment>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <normal_pars_fragment>
#include <lights_toon_pars_fragment>
#include <shadowmap_pars_fragment>
#include <bumpmap_pars_fragment>
#include <normalmap_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	ReflectedLight reflectedLight = ReflectedLight( vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ), vec3( 0.0 ) );
	vec3 totalEmissiveRadiance = emissive;
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <color_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	#include <normal_fragment_begin>
	#include <normal_fragment_maps>
	#include <emissivemap_fragment>
	#include <lights_toon_fragment>
	#include <lights_fragment_begin>
	#include <lights_fragment_maps>
	#include <lights_fragment_end>
	#include <aomap_fragment>
	vec3 outgoingLight = reflectedLight.directDiffuse + reflectedLight.indirectDiffuse + totalEmissiveRadiance;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
	#include <dithering_fragment>
}`,kg=`uniform float size;
uniform float scale;
#include <common>
#include <color_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
#ifdef USE_POINTS_UV
	varying vec2 vUv;
	uniform mat3 uvTransform;
#endif
void main() {
	#ifdef USE_POINTS_UV
		vUv = ( uvTransform * vec3( uv, 1 ) ).xy;
	#endif
	#include <color_vertex>
	#include <morphinstance_vertex>
	#include <morphcolor_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <project_vertex>
	gl_PointSize = size;
	#ifdef USE_SIZEATTENUATION
		bool isPerspective = isPerspectiveMatrix( projectionMatrix );
		if ( isPerspective ) gl_PointSize *= ( scale / - mvPosition.z );
	#endif
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <worldpos_vertex>
	#include <fog_vertex>
}`,Bg=`uniform vec3 diffuse;
uniform float opacity;
#include <common>
#include <color_pars_fragment>
#include <map_particle_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_particle_fragment>
	#include <color_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,Vg=`#include <common>
#include <batching_pars_vertex>
#include <fog_pars_vertex>
#include <morphtarget_pars_vertex>
#include <skinning_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <shadowmap_pars_vertex>
void main() {
	#include <batching_vertex>
	#include <beginnormal_vertex>
	#include <morphinstance_vertex>
	#include <morphnormal_vertex>
	#include <skinbase_vertex>
	#include <skinnormal_vertex>
	#include <defaultnormal_vertex>
	#include <begin_vertex>
	#include <morphtarget_vertex>
	#include <skinning_vertex>
	#include <project_vertex>
	#include <logdepthbuf_vertex>
	#include <worldpos_vertex>
	#include <shadowmap_vertex>
	#include <fog_vertex>
}`,zg=`uniform vec3 color;
uniform float opacity;
#include <common>
#include <fog_pars_fragment>
#include <bsdfs>
#include <lights_pars_begin>
#include <logdepthbuf_pars_fragment>
#include <shadowmap_pars_fragment>
#include <shadowmask_pars_fragment>
void main() {
	#include <logdepthbuf_fragment>
	gl_FragColor = vec4( color, opacity * ( 1.0 - getShadowMask() ) );
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
	#include <premultiplied_alpha_fragment>
}`,Gg=`uniform float rotation;
uniform vec2 center;
#include <common>
#include <uv_pars_vertex>
#include <fog_pars_vertex>
#include <logdepthbuf_pars_vertex>
#include <clipping_planes_pars_vertex>
void main() {
	#include <uv_vertex>
	vec4 mvPosition = modelViewMatrix[ 3 ];
	vec2 scale = vec2( length( modelMatrix[ 0 ].xyz ), length( modelMatrix[ 1 ].xyz ) );
	#ifndef USE_SIZEATTENUATION
		bool isPerspective = isPerspectiveMatrix( projectionMatrix );
		if ( isPerspective ) scale *= - mvPosition.z;
	#endif
	vec2 alignedPosition = ( position.xy - ( center - vec2( 0.5 ) ) ) * scale;
	vec2 rotatedPosition;
	rotatedPosition.x = cos( rotation ) * alignedPosition.x - sin( rotation ) * alignedPosition.y;
	rotatedPosition.y = sin( rotation ) * alignedPosition.x + cos( rotation ) * alignedPosition.y;
	mvPosition.xy += rotatedPosition;
	gl_Position = projectionMatrix * mvPosition;
	#include <logdepthbuf_vertex>
	#include <clipping_planes_vertex>
	#include <fog_vertex>
}`,Hg=`uniform vec3 diffuse;
uniform float opacity;
#include <common>
#include <uv_pars_fragment>
#include <map_pars_fragment>
#include <alphamap_pars_fragment>
#include <alphatest_pars_fragment>
#include <alphahash_pars_fragment>
#include <fog_pars_fragment>
#include <logdepthbuf_pars_fragment>
#include <clipping_planes_pars_fragment>
void main() {
	vec4 diffuseColor = vec4( diffuse, opacity );
	#include <clipping_planes_fragment>
	vec3 outgoingLight = vec3( 0.0 );
	#include <logdepthbuf_fragment>
	#include <map_fragment>
	#include <alphamap_fragment>
	#include <alphatest_fragment>
	#include <alphahash_fragment>
	outgoingLight = diffuseColor.rgb;
	#include <opaque_fragment>
	#include <tonemapping_fragment>
	#include <colorspace_fragment>
	#include <fog_fragment>
}`,Ht={alphahash_fragment:hm,alphahash_pars_fragment:um,alphamap_fragment:dm,alphamap_pars_fragment:fm,alphatest_fragment:pm,alphatest_pars_fragment:mm,aomap_fragment:gm,aomap_pars_fragment:xm,batching_pars_vertex:ym,batching_vertex:_m,begin_vertex:vm,beginnormal_vertex:Sm,bsdfs:bm,iridescence_fragment:Mm,bumpmap_pars_fragment:wm,clipping_planes_fragment:Tm,clipping_planes_pars_fragment:Em,clipping_planes_pars_vertex:Am,clipping_planes_vertex:Cm,color_fragment:Rm,color_pars_fragment:Im,color_pars_vertex:Pm,color_vertex:Lm,common:Fm,cube_uv_reflection_fragment:Dm,defaultnormal_vertex:Nm,displacementmap_pars_vertex:Um,displacementmap_vertex:Om,emissivemap_fragment:km,emissivemap_pars_fragment:Bm,colorspace_fragment:Vm,colorspace_pars_fragment:zm,envmap_fragment:Gm,envmap_common_pars_fragment:Hm,envmap_pars_fragment:Wm,envmap_pars_vertex:Xm,envmap_physical_pars_fragment:i0,envmap_vertex:qm,fog_vertex:Ym,fog_pars_vertex:Km,fog_fragment:Zm,fog_pars_fragment:$m,gradientmap_pars_fragment:Jm,lightmap_pars_fragment:jm,lights_lambert_fragment:Qm,lights_lambert_pars_fragment:t0,lights_pars_begin:e0,lights_toon_fragment:n0,lights_toon_pars_fragment:s0,lights_phong_fragment:r0,lights_phong_pars_fragment:a0,lights_physical_fragment:o0,lights_physical_pars_fragment:l0,lights_fragment_begin:c0,lights_fragment_maps:h0,lights_fragment_end:u0,lightprobes_pars_fragment:d0,logdepthbuf_fragment:f0,logdepthbuf_pars_fragment:p0,logdepthbuf_pars_vertex:m0,logdepthbuf_vertex:g0,map_fragment:x0,map_pars_fragment:y0,map_particle_fragment:_0,map_particle_pars_fragment:v0,metalnessmap_fragment:S0,metalnessmap_pars_fragment:b0,morphinstance_vertex:M0,morphcolor_vertex:w0,morphnormal_vertex:T0,morphtarget_pars_vertex:E0,morphtarget_vertex:A0,normal_fragment_begin:C0,normal_fragment_maps:R0,normal_pars_fragment:I0,normal_pars_vertex:P0,normal_vertex:L0,normalmap_pars_fragment:F0,clearcoat_normal_fragment_begin:D0,clearcoat_normal_fragment_maps:N0,clearcoat_pars_fragment:U0,iridescence_pars_fragment:O0,opaque_fragment:k0,packing:B0,premultiplied_alpha_fragment:V0,project_vertex:z0,dithering_fragment:G0,dithering_pars_fragment:H0,roughnessmap_fragment:W0,roughnessmap_pars_fragment:X0,shadowmap_pars_fragment:q0,shadowmap_pars_vertex:Y0,shadowmap_vertex:K0,shadowmask_pars_fragment:Z0,skinbase_vertex:$0,skinning_pars_vertex:J0,skinning_vertex:j0,skinnormal_vertex:Q0,specularmap_fragment:tg,specularmap_pars_fragment:eg,tonemapping_fragment:ig,tonemapping_pars_fragment:ng,transmission_fragment:sg,transmission_pars_fragment:rg,uv_pars_fragment:ag,uv_pars_vertex:og,uv_vertex:lg,worldpos_vertex:cg,background_vert:hg,background_frag:ug,backgroundCube_vert:dg,backgroundCube_frag:fg,cube_vert:pg,cube_frag:mg,depth_vert:gg,depth_frag:xg,distance_vert:yg,distance_frag:_g,equirect_vert:vg,equirect_frag:Sg,linedashed_vert:bg,linedashed_frag:Mg,meshbasic_vert:wg,meshbasic_frag:Tg,meshlambert_vert:Eg,meshlambert_frag:Ag,meshmatcap_vert:Cg,meshmatcap_frag:Rg,meshnormal_vert:Ig,meshnormal_frag:Pg,meshphong_vert:Lg,meshphong_frag:Fg,meshphysical_vert:Dg,meshphysical_frag:Ng,meshtoon_vert:Ug,meshtoon_frag:Og,points_vert:kg,points_frag:Bg,shadow_vert:Vg,shadow_frag:zg,sprite_vert:Gg,sprite_frag:Hg},xt={common:{diffuse:{value:new qt(16777215)},opacity:{value:1},map:{value:null},mapTransform:{value:new Ot},alphaMap:{value:null},alphaMapTransform:{value:new Ot},alphaTest:{value:0}},specularmap:{specularMap:{value:null},specularMapTransform:{value:new Ot}},envmap:{envMap:{value:null},envMapRotation:{value:new Ot},reflectivity:{value:1},ior:{value:1.5},refractionRatio:{value:.98},dfgLUT:{value:null}},aomap:{aoMap:{value:null},aoMapIntensity:{value:1},aoMapTransform:{value:new Ot}},lightmap:{lightMap:{value:null},lightMapIntensity:{value:1},lightMapTransform:{value:new Ot}},bumpmap:{bumpMap:{value:null},bumpMapTransform:{value:new Ot},bumpScale:{value:1}},normalmap:{normalMap:{value:null},normalMapTransform:{value:new Ot},normalScale:{value:new Wt(1,1)}},displacementmap:{displacementMap:{value:null},displacementMapTransform:{value:new Ot},displacementScale:{value:1},displacementBias:{value:0}},emissivemap:{emissiveMap:{value:null},emissiveMapTransform:{value:new Ot}},metalnessmap:{metalnessMap:{value:null},metalnessMapTransform:{value:new Ot}},roughnessmap:{roughnessMap:{value:null},roughnessMapTransform:{value:new Ot}},gradientmap:{gradientMap:{value:null}},fog:{fogDensity:{value:25e-5},fogNear:{value:1},fogFar:{value:2e3},fogColor:{value:new qt(16777215)}},lights:{ambientLightColor:{value:[]},lightProbe:{value:[]},sunLights:{value:[],properties:{direction:{},color:{}}},sunLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},sunShadowMatrix:{value:[]},sunShadowCascade:{value:[]},directionalLights:{value:[],properties:{direction:{},color:{}}},directionalLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},directionalShadowMatrix:{value:[]},spotLights:{value:[],properties:{color:{},position:{},direction:{},distance:{},coneCos:{},penumbraCos:{},decay:{}}},spotLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{}}},spotLightMap:{value:[]},spotLightMatrix:{value:[]},pointLights:{value:[],properties:{color:{},position:{},decay:{},distance:{}}},pointLightShadows:{value:[],properties:{shadowIntensity:1,shadowBias:{},shadowNormalBias:{},shadowRadius:{},shadowMapSize:{},shadowCameraNear:{},shadowCameraFar:{}}},pointShadowMatrix:{value:[]},hemisphereLights:{value:[],properties:{direction:{},skyColor:{},groundColor:{}}},rectAreaLights:{value:[],properties:{color:{},position:{},width:{},height:{}}},ltc_1:{value:null},ltc_2:{value:null},probesSH:{value:null},probesMin:{value:new Q},probesMax:{value:new Q},probesResolution:{value:new Q}},points:{diffuse:{value:new qt(16777215)},opacity:{value:1},size:{value:1},scale:{value:1},map:{value:null},alphaMap:{value:null},alphaMapTransform:{value:new Ot},alphaTest:{value:0},uvTransform:{value:new Ot}},sprite:{diffuse:{value:new qt(16777215)},opacity:{value:1},center:{value:new Wt(.5,.5)},rotation:{value:0},map:{value:null},mapTransform:{value:new Ot},alphaMap:{value:null},alphaMapTransform:{value:new Ot},alphaTest:{value:0}}},ki={basic:{uniforms:Be([xt.common,xt.specularmap,xt.envmap,xt.aomap,xt.lightmap,xt.fog]),vertexShader:Ht.meshbasic_vert,fragmentShader:Ht.meshbasic_frag},lambert:{uniforms:Be([xt.common,xt.specularmap,xt.envmap,xt.aomap,xt.lightmap,xt.emissivemap,xt.bumpmap,xt.normalmap,xt.displacementmap,xt.fog,xt.lights,{emissive:{value:new qt(0)},envMapIntensity:{value:1}}]),vertexShader:Ht.meshlambert_vert,fragmentShader:Ht.meshlambert_frag},phong:{uniforms:Be([xt.common,xt.specularmap,xt.envmap,xt.aomap,xt.lightmap,xt.emissivemap,xt.bumpmap,xt.normalmap,xt.displacementmap,xt.fog,xt.lights,{emissive:{value:new qt(0)},specular:{value:new qt(1118481)},shininess:{value:30},envMapIntensity:{value:1}}]),vertexShader:Ht.meshphong_vert,fragmentShader:Ht.meshphong_frag},standard:{uniforms:Be([xt.common,xt.envmap,xt.aomap,xt.lightmap,xt.emissivemap,xt.bumpmap,xt.normalmap,xt.displacementmap,xt.roughnessmap,xt.metalnessmap,xt.fog,xt.lights,{emissive:{value:new qt(0)},roughness:{value:1},metalness:{value:0},envMapIntensity:{value:1}}]),vertexShader:Ht.meshphysical_vert,fragmentShader:Ht.meshphysical_frag},toon:{uniforms:Be([xt.common,xt.aomap,xt.lightmap,xt.emissivemap,xt.bumpmap,xt.normalmap,xt.displacementmap,xt.gradientmap,xt.fog,xt.lights,{emissive:{value:new qt(0)}}]),vertexShader:Ht.meshtoon_vert,fragmentShader:Ht.meshtoon_frag},matcap:{uniforms:Be([xt.common,xt.bumpmap,xt.normalmap,xt.displacementmap,xt.fog,{matcap:{value:null}}]),vertexShader:Ht.meshmatcap_vert,fragmentShader:Ht.meshmatcap_frag},points:{uniforms:Be([xt.points,xt.fog]),vertexShader:Ht.points_vert,fragmentShader:Ht.points_frag},dashed:{uniforms:Be([xt.common,xt.fog,{scale:{value:1},dashSize:{value:1},totalSize:{value:2}}]),vertexShader:Ht.linedashed_vert,fragmentShader:Ht.linedashed_frag},depth:{uniforms:Be([xt.common,xt.displacementmap]),vertexShader:Ht.depth_vert,fragmentShader:Ht.depth_frag},normal:{uniforms:Be([xt.common,xt.bumpmap,xt.normalmap,xt.displacementmap,{opacity:{value:1}}]),vertexShader:Ht.meshnormal_vert,fragmentShader:Ht.meshnormal_frag},sprite:{uniforms:Be([xt.sprite,xt.fog]),vertexShader:Ht.sprite_vert,fragmentShader:Ht.sprite_frag},background:{uniforms:{uvTransform:{value:new Ot},t2D:{value:null},backgroundIntensity:{value:1}},vertexShader:Ht.background_vert,fragmentShader:Ht.background_frag},backgroundCube:{uniforms:{envMap:{value:null},backgroundBlurriness:{value:0},backgroundIntensity:{value:1},backgroundRotation:{value:new Ot}},vertexShader:Ht.backgroundCube_vert,fragmentShader:Ht.backgroundCube_frag},cube:{uniforms:{tCube:{value:null},tFlip:{value:-1},opacity:{value:1}},vertexShader:Ht.cube_vert,fragmentShader:Ht.cube_frag},equirect:{uniforms:{tEquirect:{value:null}},vertexShader:Ht.equirect_vert,fragmentShader:Ht.equirect_frag},distance:{uniforms:Be([xt.common,xt.displacementmap,{referencePosition:{value:new Q},nearDistance:{value:1},farDistance:{value:1e3}}]),vertexShader:Ht.distance_vert,fragmentShader:Ht.distance_frag},shadow:{uniforms:Be([xt.lights,xt.fog,{color:{value:new qt(0)},opacity:{value:1}}]),vertexShader:Ht.shadow_vert,fragmentShader:Ht.shadow_frag}};ki.physical={uniforms:Be([ki.standard.uniforms,{clearcoat:{value:0},clearcoatMap:{value:null},clearcoatMapTransform:{value:new Ot},clearcoatNormalMap:{value:null},clearcoatNormalMapTransform:{value:new Ot},clearcoatNormalScale:{value:new Wt(1,1)},clearcoatRoughness:{value:0},clearcoatRoughnessMap:{value:null},clearcoatRoughnessMapTransform:{value:new Ot},dispersion:{value:0},retroreflectivity:{value:0},iridescence:{value:0},iridescenceMap:{value:null},iridescenceMapTransform:{value:new Ot},iridescenceIOR:{value:1.3},iridescenceThicknessMinimum:{value:100},iridescenceThicknessMaximum:{value:400},iridescenceThicknessMap:{value:null},iridescenceThicknessMapTransform:{value:new Ot},sheen:{value:0},sheenColor:{value:new qt(0)},sheenColorMap:{value:null},sheenColorMapTransform:{value:new Ot},sheenRoughness:{value:1},sheenRoughnessMap:{value:null},sheenRoughnessMapTransform:{value:new Ot},transmission:{value:0},transmissionMap:{value:null},transmissionMapTransform:{value:new Ot},transmissionSamplerSize:{value:new Wt},transmissionSamplerMap:{value:null},thickness:{value:0},thicknessMap:{value:null},thicknessMapTransform:{value:new Ot},attenuationDistance:{value:0},attenuationColor:{value:new qt(0)},specularColor:{value:new qt(1,1,1)},specularColorMap:{value:null},specularColorMapTransform:{value:new Ot},specularIntensity:{value:1},specularIntensityMap:{value:null},specularIntensityMapTransform:{value:new Ot},anisotropyVector:{value:new Wt},anisotropyMap:{value:null},anisotropyMapTransform:{value:new Ot}}]),vertexShader:Ht.meshphysical_vert,fragmentShader:Ht.meshphysical_frag};var Al={r:0,b:0,g:0},Wg=new jt,tf=new Ot;tf.set(-1,0,0,0,1,0,0,0,1);function Xg(s,t,e,i,n,r){let a=new qt(0),o=n===!0?0:1,l,c,h=null,d=0,u=null;function f(E){let L=E.isScene===!0?E.background:null;if(L&&L.isTexture){let b=E.backgroundBlurriness>0;L=t.get(L,b)}return L}function p(E){let L=!1,b=f(E);b===null?m(a,o):b&&b.isColor&&(m(b,1),L=!0);let T=s.xr.getEnvironmentBlendMode();T==="additive"?e.buffers.color.setClear(0,0,0,1,r):T==="alpha-blend"&&e.buffers.color.setClear(0,0,0,0,r),(s.autoClear||L)&&(e.buffers.depth.setTest(!0),e.buffers.depth.setMask(!0),e.buffers.color.setMask(!0),s.clear(s.autoClearColor,s.autoClearDepth,s.autoClearStencil))}function y(E,L){let b=f(L);b&&(b.isCubeTexture||b.mapping===Lr)?(c===void 0&&(c=new Oe(new Rs(1,1,1),new Qe({name:"BackgroundCubeMaterial",uniforms:Jn(ki.backgroundCube.uniforms),vertexShader:ki.backgroundCube.vertexShader,fragmentShader:ki.backgroundCube.fragmentShader,side:Pe,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),c.geometry.deleteAttribute("normal"),c.geometry.deleteAttribute("uv"),c.onBeforeRender=function(T,M,F){this.matrixWorld.copyPosition(F.matrixWorld)},Object.defineProperty(c.material,"envMap",{get:function(){return this.uniforms.envMap.value}}),i.update(c)),c.material.uniforms.envMap.value=b,c.material.uniforms.backgroundBlurriness.value=L.backgroundBlurriness,c.material.uniforms.backgroundIntensity.value=L.backgroundIntensity,c.material.uniforms.backgroundRotation.value.setFromMatrix4(Wg.makeRotationFromEuler(L.backgroundRotation)).transpose(),b.isCubeTexture&&b.isRenderTargetTexture===!1&&c.material.uniforms.backgroundRotation.value.premultiply(tf),c.material.toneMapped=Yt.getTransfer(b.colorSpace)!==ee,(h!==b||d!==b.version||u!==s.toneMapping)&&(c.material.needsUpdate=!0,h=b,d=b.version,u=s.toneMapping),c.layers.enableAll(),E.unshift(c,c.geometry,c.material,0,0,null)):b&&b.isTexture&&(l===void 0&&(l=new Oe(new wr(2,2),new Qe({name:"BackgroundMaterial",uniforms:Jn(ki.background.uniforms),vertexShader:ki.background.vertexShader,fragmentShader:ki.background.fragmentShader,side:Mn,depthTest:!1,depthWrite:!1,fog:!1,allowOverride:!1})),l.geometry.deleteAttribute("normal"),Object.defineProperty(l.material,"map",{get:function(){return this.uniforms.t2D.value}}),i.update(l)),l.material.uniforms.t2D.value=b,l.material.uniforms.backgroundIntensity.value=L.backgroundIntensity,l.material.toneMapped=Yt.getTransfer(b.colorSpace)!==ee,b.matrixAutoUpdate===!0&&b.updateMatrix(),l.material.uniforms.uvTransform.value.copy(b.matrix),(h!==b||d!==b.version||u!==s.toneMapping)&&(l.material.needsUpdate=!0,h=b,d=b.version,u=s.toneMapping),l.layers.enableAll(),E.unshift(l,l.geometry,l.material,0,0,null))}function m(E,L){E.getRGB(Al,bh(s)),e.buffers.color.setClear(Al.r,Al.g,Al.b,L,r)}function g(){c!==void 0&&(c.geometry.dispose(),c.material.dispose(),c=void 0),l!==void 0&&(l.geometry.dispose(),l.material.dispose(),l=void 0)}return{getClearColor:function(){return a},setClearColor:function(E,L=1){a.set(E),o=L,m(a,o)},getClearAlpha:function(){return o},setClearAlpha:function(E){o=E,m(a,o)},render:p,addToRenderList:y,dispose:g}}function qg(s,t){let e=s.getParameter(s.MAX_VERTEX_ATTRIBS),i={},n=u(null),r=n,a=!1;function o(z,W,$,V,_){let C=!1,P=d(z,V,$,W);r!==P&&(r=P,c(r.object)),C=f(z,V,$,_),C&&p(z,V,$,_),_!==null&&t.update(_,s.ELEMENT_ARRAY_BUFFER),(C||a)&&(a=!1,b(z,W,$,V),_!==null&&s.bindBuffer(s.ELEMENT_ARRAY_BUFFER,t.get(_).buffer))}function l(){return s.createVertexArray()}function c(z){return s.bindVertexArray(z)}function h(z){return s.deleteVertexArray(z)}function d(z,W,$,V){let _=V.wireframe===!0,C=i[W.id];C===void 0&&(C={},i[W.id]=C);let P=z.isInstancedMesh===!0?z.id:0,k=C[P];k===void 0&&(k={},C[P]=k);let D=k[$.id];D===void 0&&(D={},k[$.id]=D);let G=D[_];return G===void 0&&(G=u(l()),D[_]=G),G}function u(z){let W=[],$=[],V=[];for(let _=0;_<e;_++)W[_]=0,$[_]=0,V[_]=0;return{geometry:null,program:null,wireframe:!1,newAttributes:W,enabledAttributes:$,attributeDivisors:V,object:z,attributes:{},index:null}}function f(z,W,$,V){let _=r.attributes,C=W.attributes,P=0,k=$.getAttributes();for(let D in k)if(k[D].location>=0){let X=_[D],w=C[D];if(w===void 0&&(D==="instanceMatrix"&&z.instanceMatrix&&(w=z.instanceMatrix),D==="instanceColor"&&z.instanceColor&&(w=z.instanceColor)),X===void 0||X.attribute!==w||w&&X.data!==w.data)return!0;P++}return r.attributesNum!==P||r.index!==V}function p(z,W,$,V){let _={},C=W.attributes,P=0,k=$.getAttributes();for(let D in k)if(k[D].location>=0){let X=C[D];X===void 0&&(D==="instanceMatrix"&&z.instanceMatrix&&(X=z.instanceMatrix),D==="instanceColor"&&z.instanceColor&&(X=z.instanceColor));let w={};w.attribute=X,X&&X.data&&(w.data=X.data),_[D]=w,P++}r.attributes=_,r.attributesNum=P,r.index=V}function y(){let z=r.newAttributes;for(let W=0,$=z.length;W<$;W++)z[W]=0}function m(z){g(z,0)}function g(z,W){let $=r.newAttributes,V=r.enabledAttributes,_=r.attributeDivisors;$[z]=1,V[z]===0&&(s.enableVertexAttribArray(z),V[z]=1),_[z]!==W&&(s.vertexAttribDivisor(z,W),_[z]=W)}function E(){let z=r.newAttributes,W=r.enabledAttributes;for(let $=0,V=W.length;$<V;$++)W[$]!==z[$]&&(s.disableVertexAttribArray($),W[$]=0)}function L(z,W,$,V,_,C,P){P===!0?s.vertexAttribIPointer(z,W,$,_,C):s.vertexAttribPointer(z,W,$,V,_,C)}function b(z,W,$,V){y();let _=V.attributes,C=$.getAttributes(),P=W.defaultAttributeValues;for(let k in C){let D=C[k];if(D.location>=0){let G=_[k];if(G===void 0&&(k==="instanceMatrix"&&z.instanceMatrix&&(G=z.instanceMatrix),k==="instanceColor"&&z.instanceColor&&(G=z.instanceColor)),G!==void 0){let X=G.normalized,w=G.itemSize,I=t.get(G);if(I===void 0)continue;let Y=I.buffer,j=I.type,at=I.bytesPerElement,q=j===s.INT||j===s.UNSIGNED_INT||G.gpuType===Ho;if(G.isInterleavedBufferAttribute){let et=G.data,ct=et.stride,Mt=G.offset;if(et.isInstancedInterleavedBuffer){for(let ut=0;ut<D.locationSize;ut++)g(D.location+ut,et.meshPerAttribute);z.isInstancedMesh!==!0&&V._maxInstanceCount===void 0&&(V._maxInstanceCount=et.meshPerAttribute*et.count)}else for(let ut=0;ut<D.locationSize;ut++)m(D.location+ut);s.bindBuffer(s.ARRAY_BUFFER,Y);for(let ut=0;ut<D.locationSize;ut++)L(D.location+ut,w/D.locationSize,j,X,ct*at,(Mt+w/D.locationSize*ut)*at,q)}else{if(G.isInstancedBufferAttribute){for(let et=0;et<D.locationSize;et++)g(D.location+et,G.meshPerAttribute);z.isInstancedMesh!==!0&&V._maxInstanceCount===void 0&&(V._maxInstanceCount=G.meshPerAttribute*G.count)}else for(let et=0;et<D.locationSize;et++)m(D.location+et);s.bindBuffer(s.ARRAY_BUFFER,Y);for(let et=0;et<D.locationSize;et++)L(D.location+et,w/D.locationSize,j,X,w*at,w/D.locationSize*et*at,q)}}else if(P!==void 0){let X=P[k];if(X!==void 0)switch(X.length){case 2:s.vertexAttrib2fv(D.location,X);break;case 3:s.vertexAttrib3fv(D.location,X);break;case 4:s.vertexAttrib4fv(D.location,X);break;default:s.vertexAttrib1fv(D.location,X)}}}}E()}function T(){R();for(let z in i){let W=i[z];for(let $ in W){let V=W[$];for(let _ in V){let C=V[_];for(let P in C)h(C[P].object),delete C[P];delete V[_]}}delete i[z]}}function M(z){if(i[z.id]===void 0)return;let W=i[z.id];for(let $ in W){let V=W[$];for(let _ in V){let C=V[_];for(let P in C)h(C[P].object),delete C[P];delete V[_]}}delete i[z.id]}function F(z){for(let W in i){let $=i[W];for(let V in $){let _=$[V];if(_[z.id]===void 0)continue;let C=_[z.id];for(let P in C)h(C[P].object),delete C[P];delete _[z.id]}}}function S(z){for(let W in i){let $=i[W],V=z.isInstancedMesh===!0?z.id:0,_=$[V];if(_!==void 0){for(let C in _){let P=_[C];for(let k in P)h(P[k].object),delete P[k];delete _[C]}delete $[V],Object.keys($).length===0&&delete i[W]}}}function R(){B(),a=!0,r!==n&&(r=n,c(r.object))}function B(){n.geometry=null,n.program=null,n.wireframe=!1}return{setup:o,reset:R,resetDefaultState:B,dispose:T,releaseStatesOfGeometry:M,releaseStatesOfObject:S,releaseStatesOfProgram:F,initAttributes:y,enableAttribute:m,disableUnusedAttributes:E}}function Yg(s,t,e){let i;function n(l){i=l}function r(l,c){s.drawArrays(i,l,c),e.update(c,i,1)}function a(l,c,h){h!==0&&(s.drawArraysInstanced(i,l,c,h),e.update(c,i,h))}function o(l,c,h){if(h===0)return;t.get("WEBGL_multi_draw").multiDrawArraysWEBGL(i,l,0,c,0,h);let u=0;for(let f=0;f<h;f++)u+=c[f];e.update(u,i,1)}this.setMode=n,this.render=r,this.renderInstances=a,this.renderMultiDraw=o}function Kg(s,t,e,i){let n;function r(){if(n!==void 0)return n;if(t.has("EXT_texture_filter_anisotropic")===!0){let F=t.get("EXT_texture_filter_anisotropic");n=s.getParameter(F.MAX_TEXTURE_MAX_ANISOTROPY_EXT)}else n=0;return n}function a(F){return!(F!==ke&&i.convert(F)!==s.getParameter(s.IMPLEMENTATION_COLOR_READ_FORMAT))}function o(F){let S=F===Si&&(t.has("EXT_color_buffer_half_float")||t.has("EXT_color_buffer_float"));return!(F!==Le&&F!==ii&&!S&&i.convert(F)!==s.getParameter(s.IMPLEMENTATION_COLOR_READ_TYPE))}function l(F){if(F==="highp"){if(s.getShaderPrecisionFormat(s.VERTEX_SHADER,s.HIGH_FLOAT).precision>0&&s.getShaderPrecisionFormat(s.FRAGMENT_SHADER,s.HIGH_FLOAT).precision>0)return"highp";F="mediump"}return F==="mediump"&&s.getShaderPrecisionFormat(s.VERTEX_SHADER,s.MEDIUM_FLOAT).precision>0&&s.getShaderPrecisionFormat(s.FRAGMENT_SHADER,s.MEDIUM_FLOAT).precision>0?"mediump":"lowp"}let c=e.precision!==void 0?e.precision:"highp",h=l(c);h!==c&&(Ft("WebGLRenderer:",c,"not supported, using",h,"instead."),c=h);let d=e.logarithmicDepthBuffer===!0,u=e.reversedDepthBuffer===!0&&t.has("EXT_clip_control");e.reversedDepthBuffer===!0&&u===!1&&Ft("WebGLRenderer: Unable to use reversed depth buffer due to missing EXT_clip_control extension. Fallback to default depth buffer.");let f=s.getParameter(s.MAX_TEXTURE_IMAGE_UNITS),p=s.getParameter(s.MAX_VERTEX_TEXTURE_IMAGE_UNITS),y=s.getParameter(s.MAX_TEXTURE_SIZE),m=s.getParameter(s.MAX_CUBE_MAP_TEXTURE_SIZE),g=s.getParameter(s.MAX_VERTEX_ATTRIBS),E=s.getParameter(s.MAX_VERTEX_UNIFORM_VECTORS),L=s.getParameter(s.MAX_VARYING_VECTORS),b=s.getParameter(s.MAX_FRAGMENT_UNIFORM_VECTORS),T=s.getParameter(s.MAX_SAMPLES),M=s.getParameter(s.SAMPLES);return{isWebGL2:!0,getMaxAnisotropy:r,getMaxPrecision:l,textureFormatReadable:a,textureTypeReadable:o,precision:c,logarithmicDepthBuffer:d,reversedDepthBuffer:u,maxTextures:f,maxVertexTextures:p,maxTextureSize:y,maxCubemapSize:m,maxAttributes:g,maxVertexUniforms:E,maxVaryings:L,maxFragmentUniforms:b,maxSamples:T,samples:M}}function Zg(s){let t=this,e=null,i=0,n=!1,r=!1,a=new xi,o=new Ot,l={value:null,needsUpdate:!1};this.uniform=l,this.numPlanes=0,this.numIntersection=0,this.init=function(d,u){let f=d.length!==0||u||i!==0||n;return n=u,i=d.length,f},this.beginShadows=function(){r=!0,h(null)},this.endShadows=function(){r=!1},this.setGlobalState=function(d,u){e=h(d,u,0)},this.setState=function(d,u,f){let p=d.clippingPlanes,y=d.clipIntersection,m=d.clipShadows,g=s.get(d);if(!n||p===null||p.length===0||r&&!m)r?h(null):c();else{let E=r?0:i,L=E*4,b=g.clippingState||null;l.value=b,b=h(p,u,L,f);for(let T=0;T!==L;++T)b[T]=e[T];g.clippingState=b,this.numIntersection=y?this.numPlanes:0,this.numPlanes+=E}};function c(){l.value!==e&&(l.value=e,l.needsUpdate=i>0),t.numPlanes=i,t.numIntersection=0}function h(d,u,f,p){let y=d!==null?d.length:0,m=null;if(y!==0){if(m=l.value,p!==!0||m===null){let g=f+y*4,E=u.matrixWorldInverse;o.getNormalMatrix(E),(m===null||m.length<g)&&(m=new Float32Array(g));for(let L=0,b=f;L!==y;++L,b+=4)a.copy(d[L]).applyMatrix4(E,o),a.normal.toArray(m,b),m[b+3]=a.constant}l.value=m,l.needsUpdate=!0}return t.numPlanes=y,t.numIntersection=0,m}}var Us=4,$g=6,Jg=20,jg=256,zr=new Er,Ld=new qt,Eh=null,Ah=0,Ch=0,Rh=!1,Qg=new Q,jn=new Q,Rl=class{constructor(t){this._renderer=t,this._pingPongRenderTarget=null,this._lodMax=0,this._cubeSize=0,this._sizeLods=[],this._lodMeshes=[],this._backgroundBox=null,this._cubemapMaterial=null,this._equirectMaterial=null,this._blurMaterial=null,this._ggxMaterial=null}fromScene(t,e=0,i=.1,n=100,r={}){let{size:a=256,position:o=Qg}=r;Eh=this._renderer.getRenderTarget(),Ah=this._renderer.getActiveCubeFace(),Ch=this._renderer.getActiveMipmapLevel(),Rh=this._renderer.xr.enabled,this._renderer.xr.enabled=!1,this._setSize(a);let l=this._allocateTargets();return l.depthBuffer=!0,this._sceneToCubeUV(t,i,n,l,o),e>0&&this._blur(l,0,0,e),this._applyPMREM(l),this._cleanup(l),l}fromEquirectangular(t,e=null){return this._fromTexture(t,e)}fromCubemap(t,e=null){return this._fromTexture(t,e)}compileCubemapShader(){this._cubemapMaterial===null&&(this._cubemapMaterial=Nd(),this._compileMaterial(this._cubemapMaterial))}compileEquirectangularShader(){this._equirectMaterial===null&&(this._equirectMaterial=Dd(),this._compileMaterial(this._equirectMaterial))}dispose(){this._dispose(),this._cubemapMaterial!==null&&this._cubemapMaterial.dispose(),this._equirectMaterial!==null&&this._equirectMaterial.dispose(),this._backgroundBox!==null&&(this._backgroundBox.geometry.dispose(),this._backgroundBox.material.dispose())}_setSize(t){this._lodMax=Math.floor(Math.log2(t)),this._cubeSize=Math.pow(2,this._lodMax)}_dispose(){this._blurMaterial!==null&&this._blurMaterial.dispose(),this._ggxMaterial!==null&&this._ggxMaterial.dispose(),this._pingPongRenderTarget!==null&&this._pingPongRenderTarget.dispose();for(let t=0;t<this._lodMeshes.length;t++)this._lodMeshes[t].geometry.dispose()}_cleanup(t){this._renderer.setRenderTarget(Eh,Ah,Ch),this._renderer.xr.enabled=Rh,t.scissorTest=!1,Ns(t,0,0,t.width,t.height)}_fromTexture(t,e){t.mapping===wn||t.mapping===$n?this._setSize(t.image.length===0?16:t.image[0].width||t.image[0].image.width):this._setSize(t.image.width/4),Eh=this._renderer.getRenderTarget(),Ah=this._renderer.getActiveCubeFace(),Ch=this._renderer.getActiveMipmapLevel(),Rh=this._renderer.xr.enabled,this._renderer.xr.enabled=!1;let i=e||this._allocateTargets();return this._textureToCubeUV(t,i),this._applyPMREM(i),this._cleanup(i),i}_allocateTargets(){let t=3*Math.max(this._cubeSize,112),e=4*this._cubeSize,i={magFilter:fe,minFilter:fe,generateMipmaps:!1,type:Si,format:ke,colorSpace:_i,depthBuffer:!1},n=Fd(t,e,i);if(this._pingPongRenderTarget===null||this._pingPongRenderTarget.width!==t||this._pingPongRenderTarget.height!==e){this._pingPongRenderTarget!==null&&this._dispose(),this._pingPongRenderTarget=Fd(t,e,i);let{_lodMax:r}=this;({lodMeshes:this._lodMeshes,sizeLods:this._sizeLods}=tx(r)),this._blurMaterial=ix(r,t,e),this._ggxMaterial=ex(r,t,e)}return n}_compileMaterial(t){let e=new Oe(new Xe,t);this._renderer.compile(e,zr)}_sceneToCubeUV(t,e,i,n,r){let l=new He(90,1,e,i),c=[1,-1,1,1,1,1],h=[1,1,1,-1,-1,-1],d=this._renderer,u=d.autoClear,f=d.toneMapping;d.getClearColor(Ld),d.toneMapping=ei,d.autoClear=!1,d.state.buffers.depth.getReversed()&&(d.setRenderTarget(n),d.clearDepth(),d.setRenderTarget(null)),this._backgroundBox===null&&(this._backgroundBox=new Oe(new Rs,new vr({name:"PMREM.Background",side:Pe,depthWrite:!1,depthTest:!1})));let y=this._backgroundBox,m=y.material,g=!1,E=t.background;E?E.isColor&&(m.color.copy(E),t.background=null,g=!0):(m.color.copy(Ld),g=!0);for(let L=0;L<6;L++){let b=L%3;b===0?(l.up.set(0,c[L],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x+h[L],r.y,r.z)):b===1?(l.up.set(0,0,c[L]),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y+h[L],r.z)):(l.up.set(0,c[L],0),l.position.set(r.x,r.y,r.z),l.lookAt(r.x,r.y,r.z+h[L]));let T=this._cubeSize;Ns(n,b*T,L>2?T:0,T,T),d.setRenderTarget(n),g&&d.render(y,l),d.render(t,l)}d.toneMapping=f,d.autoClear=u,t.background=E}_textureToCubeUV(t,e){let i=this._renderer,n=t.mapping===wn||t.mapping===$n;n?(this._cubemapMaterial===null&&(this._cubemapMaterial=Nd()),this._cubemapMaterial.uniforms.flipEnvMap.value=t.isRenderTargetTexture===!1?-1:1):this._equirectMaterial===null&&(this._equirectMaterial=Dd());let r=n?this._cubemapMaterial:this._equirectMaterial,a=this._lodMeshes[0];a.material=r;let o=r.uniforms;o.envMap.value=t;let l=this._cubeSize;Ns(e,0,0,3*l,2*l),i.setRenderTarget(e),i.render(a,zr)}_applyPMREM(t){let e=this._renderer,i=e.autoClear;e.autoClear=!1;let n=this._lodMeshes.length;for(let r=1;r<n;r++)this._applyGGXFilter(t,r-1,r);e.autoClear=i}_applyGGXFilter(t,e,i){let n=this._renderer,r=this._pingPongRenderTarget,a=this._ggxMaterial,o=this._lodMeshes[i];o.material=a;let l=a.uniforms,c=i/(this._lodMeshes.length-1),h=e/(this._lodMeshes.length-1),d=Math.sqrt(c*c-h*h),u=c*1.25,f=d*u,{_lodMax:p}=this,y=this._sizeLods[i],m=3*y*(i>p-Us?i-p+Us:0),g=4*(this._cubeSize-y);l.envMap.value=t.texture,l.roughness.value=f,l.mipInt.value=p-e,Ns(r,m,g,3*y,2*y),n.setRenderTarget(r),n.render(o,zr),l.envMap.value=r.texture,l.roughness.value=0,l.mipInt.value=p-i,Ns(t,m,g,3*y,2*y),n.setRenderTarget(t),n.render(o,zr)}_blur(t,e,i,n){let r=this._pingPongRenderTarget,a=Math.min(n,Math.PI)/Math.SQRT2;this._blurPass(t,r,e,i,a),this._blurPass(r,t,i,i,a)}_blurPass(t,e,i,n,r){let a=this._renderer,o=this._blurMaterial,l=this._lodMeshes[n];l.material=o;let c=o.uniforms;c.envMap.value=t.texture,c.sigma.value=r,c.mipInt.value=this._lodMax-i;let h=this._sizeLods[n],d=3*h*(n>this._lodMax-Us?n-this._lodMax+Us:0),u=4*(this._cubeSize-h);Ns(e,d,u,3*h,2*h),a.setRenderTarget(e),a.render(l,zr)}};function tx(s){let t=[],e=[],i=s,n=s-Us+1+$g;for(let r=0;r<n;r++){let a=Math.pow(2,i);t.push(a);let o=1/(a-2),l=-o,c=1+o,h=[l,l,c,l,c,c,l,l,c,c,l,c],d=6,u=6,f=3,p=new Float32Array(f*u*d),y=new Float32Array(f*u*d);for(let g=0;g<d;g++){let E=g%3*2/3-1,L=g>2?0:-1,b=[E,L,0,E+2/3,L,0,E+2/3,L+1,0,E,L,0,E+2/3,L+1,0,E,L+1,0];p.set(b,f*u*g);for(let T=0;T<u;T++){let M=h[T*2]*2-1,F=h[T*2+1]*2-1;g===0?jn.set(1,F,M):g===1?jn.set(-M,1,-F):g===2?jn.set(-M,F,1):g===3?jn.set(-1,F,-M):g===4?jn.set(-M,-1,F):jn.set(M,F,-1),jn.toArray(y,(g*u+T)*f)}}let m=new Xe;m.setAttribute("position",new Re(p,f)),m.setAttribute("outputDirection",new Re(y,f)),e.push(new Oe(m,null)),i>Us&&i--}return{lodMeshes:e,sizeLods:t}}function Fd(s,t,e){let i=new Ie(s,t,e);return i.texture.mapping=Lr,i.texture.name="PMREM.cubeUv",i.scissorTest=!0,i}function Ns(s,t,e,i,n){s.viewport.set(t,e,i,n),s.scissor.set(t,e,i,n)}function ex(s,t,e){return new Qe({name:"PMREMGGXConvolution",defines:{GGX_SAMPLES:jg,CUBEUV_TEXEL_WIDTH:1/t,CUBEUV_TEXEL_HEIGHT:1/e,CUBEUV_MAX_MIP:`${s}.0`},uniforms:{envMap:{value:null},roughness:{value:0},mipInt:{value:0}},vertexShader:Ll(),fragmentShader:`

			precision highp float;
			precision highp int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;
			uniform float roughness;
			uniform float mipInt;

			#define ENVMAP_TYPE_CUBE_UV
			#include <cube_uv_reflection_fragment>

			#define PI 3.14159265359

			// Van der Corput radical inverse
			float radicalInverse_VdC(uint bits) {
				bits = (bits << 16u) | (bits >> 16u);
				bits = ((bits & 0x55555555u) << 1u) | ((bits & 0xAAAAAAAAu) >> 1u);
				bits = ((bits & 0x33333333u) << 2u) | ((bits & 0xCCCCCCCCu) >> 2u);
				bits = ((bits & 0x0F0F0F0Fu) << 4u) | ((bits & 0xF0F0F0F0u) >> 4u);
				bits = ((bits & 0x00FF00FFu) << 8u) | ((bits & 0xFF00FF00u) >> 8u);
				return float(bits) * 2.3283064365386963e-10; // / 0x100000000
			}

			// Hammersley sequence
			vec2 hammersley(uint i, uint N) {
				return vec2(float(i) / float(N), radicalInverse_VdC(i));
			}

			// GGX VNDF importance sampling (Eric Heitz 2018)
			// "Sampling the GGX Distribution of Visible Normals"
			// https://jcgt.org/published/0007/04/01/
			vec3 importanceSampleGGX_VNDF(vec2 Xi, vec3 V, float roughness) {
				float alpha = roughness * roughness;

				// Section 4.1: Orthonormal basis
				vec3 T1 = vec3(1.0, 0.0, 0.0);
				vec3 T2 = cross(V, T1);

				// Section 4.2: Parameterization of projected area
				float r = sqrt(Xi.x);
				float phi = 2.0 * PI * Xi.y;
				float t1 = r * cos(phi);
				float t2 = r * sin(phi);
				float s = 0.5 * (1.0 + V.z);
				t2 = (1.0 - s) * sqrt(1.0 - t1 * t1) + s * t2;

				// Section 4.3: Reprojection onto hemisphere
				vec3 Nh = t1 * T1 + t2 * T2 + sqrt(max(0.0, 1.0 - t1 * t1 - t2 * t2)) * V;

				// Section 3.4: Transform back to ellipsoid configuration
				return normalize(vec3(alpha * Nh.x, alpha * Nh.y, max(0.0, Nh.z)));
			}

			void main() {
				vec3 N = normalize(vOutputDirection);
				vec3 V = N; // Assume view direction equals normal for pre-filtering

				vec3 prefilteredColor = vec3(0.0);
				float totalWeight = 0.0;

				// For very low roughness, just sample the environment directly
				if (roughness < 0.001) {
					gl_FragColor = vec4(bilinearCubeUV(envMap, N, mipInt), 1.0);
					return;
				}

				// Tangent space basis for VNDF sampling
				vec3 up = abs(N.z) < 0.999 ? vec3(0.0, 0.0, 1.0) : vec3(1.0, 0.0, 0.0);
				vec3 tangent = normalize(cross(up, N));
				vec3 bitangent = cross(N, tangent);

				for(uint i = 0u; i < uint(GGX_SAMPLES); i++) {
					vec2 Xi = hammersley(i, uint(GGX_SAMPLES));

					// For PMREM, V = N, so in tangent space V is always (0, 0, 1)
					vec3 H_tangent = importanceSampleGGX_VNDF(Xi, vec3(0.0, 0.0, 1.0), roughness);

					// Transform H back to world space
					vec3 H = normalize(tangent * H_tangent.x + bitangent * H_tangent.y + N * H_tangent.z);
					vec3 L = normalize(2.0 * dot(V, H) * H - V);

					float NdotL = max(dot(N, L), 0.0);

					if(NdotL > 0.0) {
						// Sample environment at fixed mip level
						// VNDF importance sampling handles the distribution filtering
						vec3 sampleColor = bilinearCubeUV(envMap, L, mipInt);

						// Weight by NdotL for the split-sum approximation
						// VNDF PDF naturally accounts for the visible microfacet distribution
						prefilteredColor += sampleColor * NdotL;
						totalWeight += NdotL;
					}
				}

				if (totalWeight > 0.0) {
					prefilteredColor = prefilteredColor / totalWeight;
				}

				gl_FragColor = vec4(prefilteredColor, 1.0);
			}
		`,blending:qe,depthTest:!1,depthWrite:!1})}function ix(s,t,e){return new Qe({name:"SphericalGaussianBlur",defines:{SAMPLES:Jg,CUBEUV_TEXEL_WIDTH:1/t,CUBEUV_TEXEL_HEIGHT:1/e,CUBEUV_MAX_MIP:`${s}.0`},uniforms:{envMap:{value:null},sigma:{value:0},mipInt:{value:0}},vertexShader:Ll(),fragmentShader:`

			precision highp float;
			precision highp int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;
			uniform float sigma;
			uniform float mipInt;

			#define ENVMAP_TYPE_CUBE_UV
			#include <cube_uv_reflection_fragment>

			#define PI 3.14159265359
			#define GOLDEN_ANGLE 2.39996322973

			void main() {

				if ( sigma == 0.0 ) {

					gl_FragColor = vec4( bilinearCubeUV( envMap, vOutputDirection, mipInt ), 1.0 );
					return;

				}

				vec3 outputDirection = normalize( vOutputDirection );

				vec3 up = abs( outputDirection.z ) < 0.999 ? vec3( 0.0, 0.0, 1.0 ) : vec3( 1.0, 0.0, 0.0 );
				vec3 tangent = normalize( cross( up, outputDirection ) );
				vec3 bitangent = cross( outputDirection, tangent );

				// Truncate the kernel at three standard deviations or at the antipode.
				float thetaMax = min( 3.0 * sigma, PI );
				float truncation = 1.0 - exp( - 0.5 * thetaMax * thetaMax / ( sigma * sigma ) );

				vec3 accumColor = vec3( 0.0 );
				float accumWeight = 0.0;

				for ( int i = 0; i < SAMPLES; i ++ ) {

					// Stratified inverse-CDF sampling of the Gaussian, placed on a golden-angle spiral.
					float stratum = ( float( i ) + 0.5 ) / float( SAMPLES );
					float theta = sigma * sqrt( - 2.0 * log( 1.0 - stratum * truncation ) );
					float phi = float( i ) * GOLDEN_ANGLE;

					vec3 offset = cos( phi ) * tangent + sin( phi ) * bitangent;
					vec3 sampleDirection = cos( theta ) * outputDirection + sin( theta ) * offset;

					// Correct the planar sample density to solid angle.
					float weight = sin( theta ) / theta;

					accumColor += weight * bilinearCubeUV( envMap, sampleDirection, mipInt );
					accumWeight += weight;

				}

				gl_FragColor = vec4( accumColor / accumWeight, 1.0 );

			}
		`,blending:qe,depthTest:!1,depthWrite:!1})}function Dd(){return new Qe({name:"EquirectangularToCubeUV",uniforms:{envMap:{value:null}},vertexShader:Ll(),fragmentShader:`

			precision mediump float;
			precision mediump int;

			varying vec3 vOutputDirection;

			uniform sampler2D envMap;

			#include <common>

			void main() {

				vec3 outputDirection = normalize( vOutputDirection );
				vec2 uv = equirectUv( outputDirection );

				gl_FragColor = vec4( texture2D ( envMap, uv ).rgb, 1.0 );

			}
		`,blending:qe,depthTest:!1,depthWrite:!1})}function Nd(){return new Qe({name:"CubemapToCubeUV",uniforms:{envMap:{value:null},flipEnvMap:{value:-1}},vertexShader:Ll(),fragmentShader:`

			precision mediump float;
			precision mediump int;

			uniform float flipEnvMap;

			varying vec3 vOutputDirection;

			uniform samplerCube envMap;

			void main() {

				gl_FragColor = textureCube( envMap, vec3( flipEnvMap * vOutputDirection.x, vOutputDirection.yz ) );

			}
		`,blending:qe,depthTest:!1,depthWrite:!1})}function Ll(){return`

		precision mediump float;
		precision mediump int;

		attribute vec3 outputDirection;

		varying vec3 vOutputDirection;

		void main() {

			vOutputDirection = outputDirection;
			gl_Position = vec4( position, 1.0 );

		}
	`}var Il=class extends Ie{constructor(t=1,e={}){super(t,t,e),this.isWebGLCubeRenderTarget=!0;let i={width:t,height:t,depth:1},n=[i,i,i,i,i,i];this.texture=new br(n),this._setTextureOptions(e),this.texture.isRenderTargetTexture=!0}fromEquirectangularTexture(t,e){this.texture.type=e.type,this.texture.colorSpace=e.colorSpace,this.texture.generateMipmaps=e.generateMipmaps,this.texture.minFilter=e.minFilter,this.texture.magFilter=e.magFilter;let i={uniforms:{tEquirect:{value:null}},vertexShader:`

				varying vec3 vWorldDirection;

				vec3 transformDirection( in vec3 dir, in mat4 matrix ) {

					return normalize( ( matrix * vec4( dir, 0.0 ) ).xyz );

				}

				void main() {

					vWorldDirection = transformDirection( position, modelMatrix );

					#include <begin_vertex>
					#include <project_vertex>

				}
			`,fragmentShader:`

				uniform sampler2D tEquirect;

				varying vec3 vWorldDirection;

				#include <common>

				void main() {

					vec3 direction = normalize( vWorldDirection );

					vec2 sampleUV = equirectUv( direction );

					gl_FragColor = texture2D( tEquirect, sampleUV );

				}
			`},n=new Rs(5,5,5),r=new Qe({name:"CubemapFromEquirect",uniforms:Jn(i.uniforms),vertexShader:i.vertexShader,fragmentShader:i.fragmentShader,side:Pe,blending:qe});r.uniforms.tEquirect.value=e;let a=new Oe(n,r),o=e.minFilter;return e.minFilter===Tn&&(e.minFilter=fe),new Io(1,10,this).update(t,a),e.minFilter=o,a.geometry.dispose(),a.material.dispose(),this}clear(t,e=!0,i=!0,n=!0){let r=t.getRenderTarget();for(let a=0;a<6;a++)t.setRenderTarget(this,a),t.clear(e,i,n);t.setRenderTarget(r)}};function nx(s){let t=new WeakMap,e=new WeakMap,i=null;function n(u,f=!1){return u==null?null:f?a(u):r(u)}function r(u){if(u&&u.isTexture){let f=u.mapping;if(f===Vo||f===zo)if(t.has(u)){let p=t.get(u).texture;return o(p,u.mapping)}else{let p=u.image;if(p&&p.height>0){let y=new Il(p.height);return y.fromEquirectangularTexture(s,u),t.set(u,y),u.addEventListener("dispose",c),o(y.texture,u.mapping)}else return null}}return u}function a(u){if(u&&u.isTexture){let f=u.mapping,p=f===Vo||f===zo,y=f===wn||f===$n;if(p||y){let m=e.get(u),g=m!==void 0?m.texture.pmremVersion:0;if(u.isRenderTargetTexture&&u.pmremVersion!==g)return i===null&&(i=new Rl(s)),m=p?i.fromEquirectangular(u,m):i.fromCubemap(u,m),m.texture.pmremVersion=u.pmremVersion,e.set(u,m),m.texture;if(m!==void 0)return m.texture;{let E=u.image;return p&&E&&E.height>0||y&&E&&l(E)?(i===null&&(i=new Rl(s)),m=p?i.fromEquirectangular(u):i.fromCubemap(u),m.texture.pmremVersion=u.pmremVersion,e.set(u,m),u.addEventListener("dispose",h),m.texture):null}}}return u}function o(u,f){return f===Vo?u.mapping=wn:f===zo&&(u.mapping=$n),u}function l(u){let f=0,p=6;for(let y=0;y<p;y++)u[y]!==void 0&&f++;return f===p}function c(u){let f=u.target;f.removeEventListener("dispose",c);let p=t.get(f);p!==void 0&&(t.delete(f),p.dispose())}function h(u){let f=u.target;f.removeEventListener("dispose",h);let p=e.get(f);p!==void 0&&(e.delete(f),p.dispose())}function d(){t=new WeakMap,e=new WeakMap,i!==null&&(i.dispose(),i=null)}return{get:n,dispose:d}}function sx(s){let t={};function e(i){if(t[i]!==void 0)return t[i];let n=s.getExtension(i);return t[i]=n,n}return{has:function(i){return e(i)!==null},init:function(){e("EXT_color_buffer_float"),e("WEBGL_clip_cull_distance"),e("OES_texture_float_linear"),e("EXT_color_buffer_half_float"),e("WEBGL_multisampled_render_to_texture"),e("WEBGL_render_shared_exponent")},get:function(i){let n=e(i);return n===null&&Xn("WebGLRenderer: "+i+" extension not supported."),n}}}function rx(s,t,e,i){let n={},r=new WeakMap;function a(d){let u=d.target;u.index!==null&&t.remove(u.index);for(let p in u.attributes)t.remove(u.attributes[p]);u.removeEventListener("dispose",a),delete n[u.id];let f=r.get(u);f&&(t.remove(f),r.delete(u)),i.releaseStatesOfGeometry(u),u.isInstancedBufferGeometry===!0&&delete u._maxInstanceCount,e.memory.geometries--}function o(d,u){return n[u.id]===!0||(u.addEventListener("dispose",a),n[u.id]=!0,e.memory.geometries++),u}function l(d){let u=d.attributes;for(let f in u)t.update(u[f],s.ARRAY_BUFFER)}function c(d){let u=[],f=d.index,p=d.attributes.position,y=0;if(p===void 0)return;if(f!==null){let E=f.array;y=f.version;for(let L=0,b=E.length;L<b;L+=3){let T=E[L+0],M=E[L+1],F=E[L+2];u.push(T,M,M,F,F,T)}}else{let E=p.array;y=p.version;for(let L=0,b=E.length/3-1;L<b;L+=3){let T=L+0,M=L+1,F=L+2;u.push(T,M,M,F,F,T)}}let m=new(p.count>=65535?yr:xr)(u,1);m.version=y;let g=r.get(d);g&&t.remove(g),r.set(d,m)}function h(d){let u=r.get(d);if(u){let f=d.index;f!==null&&u.version<f.version&&c(d)}else c(d);return r.get(d)}return{get:o,update:l,getWireframeAttribute:h}}function ax(s,t,e){let i;function n(d){i=d}let r,a;function o(d){r=d.type,a=d.bytesPerElement}function l(d,u){s.drawElements(i,u,r,d*a),e.update(u,i,1)}function c(d,u,f){f!==0&&(s.drawElementsInstanced(i,u,r,d*a,f),e.update(u,i,f))}function h(d,u,f){if(f===0)return;t.get("WEBGL_multi_draw").multiDrawElementsWEBGL(i,u,0,r,d,0,f);let y=0;for(let m=0;m<f;m++)y+=u[m];e.update(y,i,1)}this.setMode=n,this.setIndex=o,this.render=l,this.renderInstances=c,this.renderMultiDraw=h}function ox(s){let t={geometries:0,textures:0},e={frame:0,calls:0,triangles:0,points:0,lines:0};function i(r,a,o){switch(e.calls++,a){case s.TRIANGLES:e.triangles+=o*(r/3);break;case s.LINES:e.lines+=o*(r/2);break;case s.LINE_STRIP:e.lines+=o*(r-1);break;case s.LINE_LOOP:e.lines+=o*r;break;case s.POINTS:e.points+=o*r;break;default:Ut("WebGLInfo: Unknown draw mode:",a);break}}function n(){e.calls=0,e.triangles=0,e.points=0,e.lines=0}return{memory:t,render:e,programs:null,autoReset:!0,reset:n,update:i}}function lx(s,t,e){let i=new WeakMap,n=new he;function r(a,o,l){let c=a.morphTargetInfluences,h=o.morphAttributes.position||o.morphAttributes.normal||o.morphAttributes.color,d=h!==void 0?h.length:0,u=i.get(o);if(u===void 0||u.count!==d){let R=function(){F.dispose(),i.delete(o),o.removeEventListener("dispose",R)};u!==void 0&&u.texture.dispose();let f=o.morphAttributes.position!==void 0,p=o.morphAttributes.normal!==void 0,y=o.morphAttributes.color!==void 0,m=o.morphAttributes.position||[],g=o.morphAttributes.normal||[],E=o.morphAttributes.color||[],L=0;f===!0&&(L=1),p===!0&&(L=2),y===!0&&(L=3);let b=o.attributes.position.count*L,T=1;b>t.maxTextureSize&&(T=Math.ceil(b/t.maxTextureSize),b=t.maxTextureSize);let M=new Float32Array(b*T*4*d),F=new fn(M,b,T,d);F.type=ii,F.needsUpdate=!0;let S=L*4;for(let B=0;B<d;B++){let z=m[B],W=g[B],$=E[B],V=b*T*4*B;for(let _=0;_<z.count;_++){let C=_*S;f===!0&&(n.fromBufferAttribute(z,_),M[V+C+0]=n.x,M[V+C+1]=n.y,M[V+C+2]=n.z,M[V+C+3]=0),p===!0&&(n.fromBufferAttribute(W,_),M[V+C+4]=n.x,M[V+C+5]=n.y,M[V+C+6]=n.z,M[V+C+7]=0),y===!0&&(n.fromBufferAttribute($,_),M[V+C+8]=n.x,M[V+C+9]=n.y,M[V+C+10]=n.z,M[V+C+11]=$.itemSize===4?n.w:1)}}u={count:d,texture:F,size:new Wt(b,T)},i.set(o,u),o.addEventListener("dispose",R)}if(a.isInstancedMesh===!0&&a.morphTexture!==null)l.getUniforms().setValue(s,"morphTexture",a.morphTexture,e);else{let f=0;for(let y=0;y<c.length;y++)f+=c[y];let p=o.morphTargetsRelative?1:1-f;l.getUniforms().setValue(s,"morphTargetBaseInfluence",p),l.getUniforms().setValue(s,"morphTargetInfluences",c)}l.getUniforms().setValue(s,"morphTargetsTexture",u.texture,e),l.getUniforms().setValue(s,"morphTargetsTextureSize",u.size)}return{update:r}}function cx(s,t,e,i,n){let r=new WeakMap;function a(c){let h=n.render.frame,d=c.geometry,u=t.get(c,d);if(r.get(u)!==h&&(t.update(u),r.set(u,h)),c.isInstancedMesh&&(c.hasEventListener("dispose",l)===!1&&c.addEventListener("dispose",l),r.get(c)!==h&&(e.update(c.instanceMatrix,s.ARRAY_BUFFER),c.instanceColor!==null&&e.update(c.instanceColor,s.ARRAY_BUFFER),r.set(c,h))),c.isSkinnedMesh){let f=c.skeleton;r.get(f)!==h&&(f.update(),r.set(f,h))}return u}function o(){r=new WeakMap}function l(c){let h=c.target;h.removeEventListener("dispose",l),i.releaseStatesOfObject(h),e.remove(h.instanceMatrix),h.instanceColor!==null&&e.remove(h.instanceColor)}return{update:a,dispose:o}}var hx={[ah]:"LINEAR_TONE_MAPPING",[oh]:"REINHARD_TONE_MAPPING",[lh]:"CINEON_TONE_MAPPING",[ch]:"ACES_FILMIC_TONE_MAPPING",[uh]:"AGX_TONE_MAPPING",[dh]:"NEUTRAL_TONE_MAPPING",[hh]:"CUSTOM_TONE_MAPPING"};function ux(s,t,e,i,n,r){let a=new Ie(t,e,{type:s,depthBuffer:n,stencilBuffer:r,samples:i?4:0,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,resolveDepthBuffer:!1,resolveStencilBuffer:!1}),o=null,l=null,c=new Xe;c.setAttribute("position",new li([-1,3,0,-1,-1,0,3,-1,0],3)),c.setAttribute("uv",new li([0,2,0,0,2,0],2));let h=new Ji({uniforms:{tDiffuse:{value:null}},vertexShader:`
			precision highp float;

			uniform mat4 modelViewMatrix;
			uniform mat4 projectionMatrix;

			attribute vec3 position;
			attribute vec2 uv;

			varying vec2 vUv;

			void main() {
				vUv = uv;
				gl_Position = projectionMatrix * modelViewMatrix * vec4( position, 1.0 );
			}`,fragmentShader:`
			precision highp float;

			uniform sampler2D tDiffuse;

			varying vec2 vUv;

			#include <tonemapping_pars_fragment>
			#include <colorspace_pars_fragment>

			void main() {
				gl_FragColor = texture2D( tDiffuse, vUv );

				#ifdef LINEAR_TONE_MAPPING
					gl_FragColor.rgb = LinearToneMapping( gl_FragColor.rgb );
				#elif defined( REINHARD_TONE_MAPPING )
					gl_FragColor.rgb = ReinhardToneMapping( gl_FragColor.rgb );
				#elif defined( CINEON_TONE_MAPPING )
					gl_FragColor.rgb = CineonToneMapping( gl_FragColor.rgb );
				#elif defined( ACES_FILMIC_TONE_MAPPING )
					gl_FragColor.rgb = ACESFilmicToneMapping( gl_FragColor.rgb );
				#elif defined( AGX_TONE_MAPPING )
					gl_FragColor.rgb = AgXToneMapping( gl_FragColor.rgb );
				#elif defined( NEUTRAL_TONE_MAPPING )
					gl_FragColor.rgb = NeutralToneMapping( gl_FragColor.rgb );
				#elif defined( CUSTOM_TONE_MAPPING )
					gl_FragColor.rgb = CustomToneMapping( gl_FragColor.rgb );
				#endif

				#ifdef SRGB_TRANSFER
					gl_FragColor = sRGBTransferOETF( gl_FragColor );
				#endif
			}`,depthTest:!1,depthWrite:!1}),d=new Oe(c,h),u=new Er(-1,1,1,-1,0,1),f=null,p=null,y=!1,m,g=null,E=[],L=!1;this.setSize=function(b,T){a.setSize(b,T),o!==null&&o.setSize(b,T),l!==null&&l.setSize(b,T);for(let M=0;M<E.length;M++){let F=E[M];F.setSize&&F.setSize(b,T)}},this.setEffects=function(b){E=b,L=E.length>0&&E[0].isRenderPass===!0;let T=a.width,M=a.height;E.length>0&&o===null&&(o=new Ie(T,M,{type:Si,depthBuffer:!1,stencilBuffer:!1}),l=new Ie(T,M,{type:Si,depthBuffer:!1,stencilBuffer:!1}));for(let F=0;F<E.length;F++){let S=E[F];S.setSize&&S.setSize(T,M)}},this.begin=function(b,T){if(y||b.toneMapping===ei&&E.length===0)return!1;if(g=T,T!==null){let M=T.width,F=T.height;(a.width!==M||a.height!==F)&&this.setSize(M,F)}return L===!1&&b.setRenderTarget(a),m=b.toneMapping,b.toneMapping=ei,!0},this.hasRenderPass=function(){return L},this.end=function(b,T){b.toneMapping=m,y=!0;let M=a,F=o;for(let S=0;S<E.length;S++){let R=E[S];R.enabled!==!1&&(R.render(b,F,M,T),R.needsSwap!==!1&&(M=F,F=F===o?l:o))}if(f!==b.outputColorSpace||p!==b.toneMapping){f=b.outputColorSpace,p=b.toneMapping,h.defines={},Yt.getTransfer(f)===ee&&(h.defines.SRGB_TRANSFER="");let S=hx[p];S&&(h.defines[S]=""),h.needsUpdate=!0}h.uniforms.tDiffuse.value=M.texture,b.setRenderTarget(g),b.render(d,u),g=null,y=!1},this.isCompositing=function(){return y},this.dispose=function(){a.dispose(),o!==null&&o.dispose(),l!==null&&l.dispose(),c.dispose(),h.dispose()}}var ef=new We,Lh=new _n(1,1),nf=new fn,sf=new mo,rf=new br,Ud=[],Od=[],kd=new Float32Array(16),Bd=new Float32Array(9),Vd=new Float32Array(4);function ks(s,t,e){let i=s[0];if(i<=0||i>0)return s;let n=t*e,r=Ud[n];if(r===void 0&&(r=new Float32Array(n),Ud[n]=r),t!==0){i.toArray(r,0);for(let a=1,o=0;a!==t;++a)o+=e,s[a].toArray(r,o)}return r}function we(s,t){if(s.length!==t.length)return!1;for(let e=0,i=s.length;e<i;e++)if(s[e]!==t[e])return!1;return!0}function Te(s,t){for(let e=0,i=t.length;e<i;e++)s[e]=t[e]}function Fl(s,t){let e=Od[t];e===void 0&&(e=new Int32Array(t),Od[t]=e);for(let i=0;i!==t;++i)e[i]=s.allocateTextureUnit();return e}function dx(s,t){let e=this.cache;e[0]!==t&&(s.uniform1f(this.addr,t),e[0]=t)}function fx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y)&&(s.uniform2f(this.addr,t.x,t.y),e[0]=t.x,e[1]=t.y);else{if(we(e,t))return;s.uniform2fv(this.addr,t),Te(e,t)}}function px(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z)&&(s.uniform3f(this.addr,t.x,t.y,t.z),e[0]=t.x,e[1]=t.y,e[2]=t.z);else if(t.r!==void 0)(e[0]!==t.r||e[1]!==t.g||e[2]!==t.b)&&(s.uniform3f(this.addr,t.r,t.g,t.b),e[0]=t.r,e[1]=t.g,e[2]=t.b);else{if(we(e,t))return;s.uniform3fv(this.addr,t),Te(e,t)}}function mx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z||e[3]!==t.w)&&(s.uniform4f(this.addr,t.x,t.y,t.z,t.w),e[0]=t.x,e[1]=t.y,e[2]=t.z,e[3]=t.w);else{if(we(e,t))return;s.uniform4fv(this.addr,t),Te(e,t)}}function gx(s,t){let e=this.cache,i=t.elements;if(i===void 0){if(we(e,t))return;s.uniformMatrix2fv(this.addr,!1,t),Te(e,t)}else{if(we(e,i))return;Vd.set(i),s.uniformMatrix2fv(this.addr,!1,Vd),Te(e,i)}}function xx(s,t){let e=this.cache,i=t.elements;if(i===void 0){if(we(e,t))return;s.uniformMatrix3fv(this.addr,!1,t),Te(e,t)}else{if(we(e,i))return;Bd.set(i),s.uniformMatrix3fv(this.addr,!1,Bd),Te(e,i)}}function yx(s,t){let e=this.cache,i=t.elements;if(i===void 0){if(we(e,t))return;s.uniformMatrix4fv(this.addr,!1,t),Te(e,t)}else{if(we(e,i))return;kd.set(i),s.uniformMatrix4fv(this.addr,!1,kd),Te(e,i)}}function _x(s,t){let e=this.cache;e[0]!==t&&(s.uniform1i(this.addr,t),e[0]=t)}function vx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y)&&(s.uniform2i(this.addr,t.x,t.y),e[0]=t.x,e[1]=t.y);else{if(we(e,t))return;s.uniform2iv(this.addr,t),Te(e,t)}}function Sx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z)&&(s.uniform3i(this.addr,t.x,t.y,t.z),e[0]=t.x,e[1]=t.y,e[2]=t.z);else{if(we(e,t))return;s.uniform3iv(this.addr,t),Te(e,t)}}function bx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z||e[3]!==t.w)&&(s.uniform4i(this.addr,t.x,t.y,t.z,t.w),e[0]=t.x,e[1]=t.y,e[2]=t.z,e[3]=t.w);else{if(we(e,t))return;s.uniform4iv(this.addr,t),Te(e,t)}}function Mx(s,t){let e=this.cache;e[0]!==t&&(s.uniform1ui(this.addr,t),e[0]=t)}function wx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y)&&(s.uniform2ui(this.addr,t.x,t.y),e[0]=t.x,e[1]=t.y);else{if(we(e,t))return;s.uniform2uiv(this.addr,t),Te(e,t)}}function Tx(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z)&&(s.uniform3ui(this.addr,t.x,t.y,t.z),e[0]=t.x,e[1]=t.y,e[2]=t.z);else{if(we(e,t))return;s.uniform3uiv(this.addr,t),Te(e,t)}}function Ex(s,t){let e=this.cache;if(t.x!==void 0)(e[0]!==t.x||e[1]!==t.y||e[2]!==t.z||e[3]!==t.w)&&(s.uniform4ui(this.addr,t.x,t.y,t.z,t.w),e[0]=t.x,e[1]=t.y,e[2]=t.z,e[3]=t.w);else{if(we(e,t))return;s.uniform4uiv(this.addr,t),Te(e,t)}}function Ax(s,t,e){let i=this.cache,n=e.allocateTextureUnit();i[0]!==n&&(s.uniform1i(this.addr,n),i[0]=n);let r;this.type===s.SAMPLER_2D_SHADOW?(Lh.compareFunction=e.isReversedDepthBuffer()?El:Tl,r=Lh):r=ef,e.setTexture2D(t||r,n)}function Cx(s,t,e){let i=this.cache,n=e.allocateTextureUnit();i[0]!==n&&(s.uniform1i(this.addr,n),i[0]=n),e.setTexture3D(t||sf,n)}function Rx(s,t,e){let i=this.cache,n=e.allocateTextureUnit();i[0]!==n&&(s.uniform1i(this.addr,n),i[0]=n),e.setTextureCube(t||rf,n)}function Ix(s,t,e){let i=this.cache,n=e.allocateTextureUnit();i[0]!==n&&(s.uniform1i(this.addr,n),i[0]=n),e.setTexture2DArray(t||nf,n)}function Px(s){switch(s){case 5126:return dx;case 35664:return fx;case 35665:return px;case 35666:return mx;case 35674:return gx;case 35675:return xx;case 35676:return yx;case 5124:case 35670:return _x;case 35667:case 35671:return vx;case 35668:case 35672:return Sx;case 35669:case 35673:return bx;case 5125:return Mx;case 36294:return wx;case 36295:return Tx;case 36296:return Ex;case 35678:case 36198:case 36298:case 36306:case 35682:return Ax;case 35679:case 36299:case 36307:return Cx;case 35680:case 36300:case 36308:case 36293:return Rx;case 36289:case 36303:case 36311:case 36292:return Ix}}function Lx(s,t){s.uniform1fv(this.addr,t)}function Fx(s,t){let e=ks(t,this.size,2);s.uniform2fv(this.addr,e)}function Dx(s,t){let e=ks(t,this.size,3);s.uniform3fv(this.addr,e)}function Nx(s,t){let e=ks(t,this.size,4);s.uniform4fv(this.addr,e)}function Ux(s,t){let e=ks(t,this.size,4);s.uniformMatrix2fv(this.addr,!1,e)}function Ox(s,t){let e=ks(t,this.size,9);s.uniformMatrix3fv(this.addr,!1,e)}function kx(s,t){let e=ks(t,this.size,16);s.uniformMatrix4fv(this.addr,!1,e)}function Bx(s,t){s.uniform1iv(this.addr,t)}function Vx(s,t){s.uniform2iv(this.addr,t)}function zx(s,t){s.uniform3iv(this.addr,t)}function Gx(s,t){s.uniform4iv(this.addr,t)}function Hx(s,t){s.uniform1uiv(this.addr,t)}function Wx(s,t){s.uniform2uiv(this.addr,t)}function Xx(s,t){s.uniform3uiv(this.addr,t)}function qx(s,t){s.uniform4uiv(this.addr,t)}function Yx(s,t,e){let i=this.cache,n=t.length,r=Fl(e,n);we(i,r)||(s.uniform1iv(this.addr,r),Te(i,r));let a;this.type===s.SAMPLER_2D_SHADOW?a=Lh:a=ef;for(let o=0;o!==n;++o)e.setTexture2D(t[o]||a,r[o])}function Kx(s,t,e){let i=this.cache,n=t.length,r=Fl(e,n);we(i,r)||(s.uniform1iv(this.addr,r),Te(i,r));for(let a=0;a!==n;++a)e.setTexture3D(t[a]||sf,r[a])}function Zx(s,t,e){let i=this.cache,n=t.length,r=Fl(e,n);we(i,r)||(s.uniform1iv(this.addr,r),Te(i,r));for(let a=0;a!==n;++a)e.setTextureCube(t[a]||rf,r[a])}function $x(s,t,e){let i=this.cache,n=t.length,r=Fl(e,n);we(i,r)||(s.uniform1iv(this.addr,r),Te(i,r));for(let a=0;a!==n;++a)e.setTexture2DArray(t[a]||nf,r[a])}function Jx(s){switch(s){case 5126:return Lx;case 35664:return Fx;case 35665:return Dx;case 35666:return Nx;case 35674:return Ux;case 35675:return Ox;case 35676:return kx;case 5124:case 35670:return Bx;case 35667:case 35671:return Vx;case 35668:case 35672:return zx;case 35669:case 35673:return Gx;case 5125:return Hx;case 36294:return Wx;case 36295:return Xx;case 36296:return qx;case 35678:case 36198:case 36298:case 36306:case 35682:return Yx;case 35679:case 36299:case 36307:return Kx;case 35680:case 36300:case 36308:case 36293:return Zx;case 36289:case 36303:case 36311:case 36292:return $x}}var Fh=class{constructor(t,e,i){this.id=t,this.addr=i,this.cache=[],this.type=e.type,this.setValue=Px(e.type)}},Dh=class{constructor(t,e,i){this.id=t,this.addr=i,this.cache=[],this.type=e.type,this.size=e.size,this.setValue=Jx(e.type)}},Nh=class{constructor(t){this.id=t,this.seq=[],this.map={}}setValue(t,e,i){let n=this.seq;for(let r=0,a=n.length;r!==a;++r){let o=n[r];o.setValue(t,e[o.id],i)}}},Ih=/(\w+)(\])?(\[|\.)?/g;function zd(s,t){s.seq.push(t),s.map[t.id]=t}function jx(s,t,e){let i=s.name,n=i.length;for(Ih.lastIndex=0;;){let r=Ih.exec(i),a=Ih.lastIndex,o=r[1],l=r[2]==="]",c=r[3];if(l&&(o=o|0),c===void 0||c==="["&&a+2===n){zd(e,c===void 0?new Fh(o,s,t):new Dh(o,s,t));break}else{let d=e.map[o];d===void 0&&(d=new Nh(o),zd(e,d)),e=d}}}var Os=class{constructor(t,e){this.seq=[],this.map={};let i=t.getProgramParameter(e,t.ACTIVE_UNIFORMS);for(let a=0;a<i;++a){let o=t.getActiveUniform(e,a),l=t.getUniformLocation(e,o.name);jx(o,l,this)}let n=[],r=[];for(let a of this.seq)a.type===t.SAMPLER_2D_SHADOW||a.type===t.SAMPLER_CUBE_SHADOW||a.type===t.SAMPLER_2D_ARRAY_SHADOW?n.push(a):r.push(a);n.length>0&&(this.seq=n.concat(r))}setValue(t,e,i,n){let r=this.map[e];r!==void 0&&r.setValue(t,i,n)}setOptional(t,e,i){let n=e[i];n!==void 0&&this.setValue(t,i,n)}static upload(t,e,i,n){for(let r=0,a=e.length;r!==a;++r){let o=e[r],l=i[o.id];l.needsUpdate!==!1&&o.setValue(t,l.value,n)}}static seqWithValue(t,e){let i=[];for(let n=0,r=t.length;n!==r;++n){let a=t[n];a.id in e&&i.push(a)}return i}};function Gd(s,t,e){let i=s.createShader(t);return s.shaderSource(i,e),s.compileShader(i),i}var Qx=37297,ty=0;function ey(s,t){let e=s.split(`
`),i=[],n=Math.max(t-6,0),r=Math.min(t+6,e.length);for(let a=n;a<r;a++){let o=a+1;i.push(`${o===t?">":" "} ${o}: ${e[a]}`)}return i.join(`
`)}var Hd=new Ot;function iy(s){Yt._getMatrix(Hd,Yt.workingColorSpace,s);let t=`mat3( ${Hd.elements.map(e=>e.toFixed(4))} )`;switch(Yt.getTransfer(s)){case dr:return[t,"LinearTransferOETF"];case ee:return[t,"sRGBTransferOETF"];default:return Ft("WebGLProgram: Unsupported color space: ",s),[t,"LinearTransferOETF"]}}function Wd(s,t,e){let i=s.getShaderParameter(t,s.COMPILE_STATUS),r=(s.getShaderInfoLog(t)||"").trim();if(i&&r==="")return"";let a=/ERROR: 0:(\d+)/.exec(r);if(a){let o=parseInt(a[1]);return e.toUpperCase()+`

`+r+`

`+ey(s.getShaderSource(t),o)}else return r}function ny(s,t){let e=iy(t);return[`vec4 ${s}( vec4 value ) {`,`	return ${e[1]}( vec4( value.rgb * ${e[0]}, value.a ) );`,"}"].join(`
`)}var sy={[ah]:"Linear",[oh]:"Reinhard",[lh]:"Cineon",[ch]:"ACESFilmic",[uh]:"AgX",[dh]:"Neutral",[hh]:"Custom"};function ry(s,t){let e=sy[t];return e===void 0?(Ft("WebGLProgram: Unsupported toneMapping:",t),"vec3 "+s+"( vec3 color ) { return LinearToneMapping( color ); }"):"vec3 "+s+"( vec3 color ) { return "+e+"ToneMapping( color ); }"}var Cl=new Q;function ay(){Yt.getLuminanceCoefficients(Cl);let s=Cl.x.toFixed(4),t=Cl.y.toFixed(4),e=Cl.z.toFixed(4);return["float luminance( const in vec3 rgb ) {",`	const vec3 weights = vec3( ${s}, ${t}, ${e} );`,"	return dot( weights, rgb );","}"].join(`
`)}function oy(s){return[s.extensionClipCullDistance?"#extension GL_ANGLE_clip_cull_distance : require":"",s.extensionMultiDraw?"#extension GL_ANGLE_multi_draw : require":""].filter(Hr).join(`
`)}function ly(s){let t=[];for(let e in s){let i=s[e];i!==!1&&t.push("#define "+e+" "+i)}return t.join(`
`)}function cy(s,t){let e={},i=s.getProgramParameter(t,s.ACTIVE_ATTRIBUTES);for(let n=0;n<i;n++){let r=s.getActiveAttrib(t,n),a=r.name,o=1;r.type===s.FLOAT_MAT2&&(o=2),r.type===s.FLOAT_MAT3&&(o=3),r.type===s.FLOAT_MAT4&&(o=4),e[a]={type:r.type,location:s.getAttribLocation(t,a),locationSize:o}}return e}function Hr(s){return s!==""}function Xd(s,t){let e=t.numSpotLightShadows+t.numSpotLightMaps-t.numSpotLightShadowsWithMaps;return s.replace(/NUM_SUN_LIGHTS/g,t.numSunLights).replace(/NUM_DIR_LIGHTS/g,t.numDirLights).replace(/NUM_SPOT_LIGHTS/g,t.numSpotLights).replace(/NUM_SPOT_LIGHT_MAPS/g,t.numSpotLightMaps).replace(/NUM_SPOT_LIGHT_COORDS/g,e).replace(/NUM_RECT_AREA_LIGHTS/g,t.numRectAreaLights).replace(/NUM_POINT_LIGHTS/g,t.numPointLights).replace(/NUM_HEMI_LIGHTS/g,t.numHemiLights).replace(/NUM_SUN_LIGHT_SHADOWS/g,t.numSunLightShadows).replace(/NUM_DIR_LIGHT_SHADOWS/g,t.numDirLightShadows).replace(/NUM_SPOT_LIGHT_SHADOWS_WITH_MAPS/g,t.numSpotLightShadowsWithMaps).replace(/NUM_SPOT_LIGHT_SHADOWS/g,t.numSpotLightShadows).replace(/NUM_POINT_LIGHT_SHADOWS/g,t.numPointLightShadows)}function qd(s,t){return s.replace(/NUM_CLIPPING_PLANES/g,t.numClippingPlanes).replace(/UNION_CLIPPING_PLANES/g,t.numClippingPlanes-t.numClipIntersection)}var hy=/^[ \t]*#include +<([\w\d./]+)>/gm;function Uh(s){return s.replace(hy,dy)}var uy=new Map;function dy(s,t){let e=Ht[t];if(e===void 0){let i=uy.get(t);if(i!==void 0)e=Ht[i],Ft('WebGLRenderer: Shader chunk "%s" has been deprecated. Use "%s" instead.',t,i);else throw new Error("THREE.WebGLProgram: Can not resolve #include <"+t+">")}return Uh(e)}var fy=/#pragma unroll_loop_start\s+for\s*\(\s*int\s+i\s*=\s*(\d+)\s*;\s*i\s*<\s*(\d+)\s*;\s*i\s*\+\+\s*\)\s*{([\s\S]+?)}\s+#pragma unroll_loop_end/g;function Yd(s){return s.replace(fy,py)}function py(s,t,e,i){let n="";for(let r=parseInt(t);r<parseInt(e);r++)n+=i.replace(/\[\s*i\s*\]/g,"[ "+r+" ]").replace(/UNROLLED_LOOP_INDEX/g,r);return n}function Kd(s){let t=`precision ${s.precision} float;
	precision ${s.precision} int;
	precision ${s.precision} sampler2D;
	precision ${s.precision} samplerCube;
	precision ${s.precision} sampler3D;
	precision ${s.precision} sampler2DArray;
	precision ${s.precision} sampler2DShadow;
	precision ${s.precision} samplerCubeShadow;
	precision ${s.precision} sampler2DArrayShadow;
	precision ${s.precision} isampler2D;
	precision ${s.precision} isampler3D;
	precision ${s.precision} isamplerCube;
	precision ${s.precision} isampler2DArray;
	precision ${s.precision} usampler2D;
	precision ${s.precision} usampler3D;
	precision ${s.precision} usamplerCube;
	precision ${s.precision} usampler2DArray;
	`;return s.precision==="highp"?t+=`
#define HIGH_PRECISION`:s.precision==="mediump"?t+=`
#define MEDIUM_PRECISION`:s.precision==="lowp"&&(t+=`
#define LOW_PRECISION`),t}var my={[Ar]:"SHADOWMAP_TYPE_PCF",[Is]:"SHADOWMAP_TYPE_VSM"};function gy(s){return my[s.shadowMapType]||"SHADOWMAP_TYPE_BASIC"}var xy={[wn]:"ENVMAP_TYPE_CUBE",[$n]:"ENVMAP_TYPE_CUBE",[Lr]:"ENVMAP_TYPE_CUBE_UV"};function yy(s){return s.envMap===!1?"ENVMAP_TYPE_CUBE":xy[s.envMapMode]||"ENVMAP_TYPE_CUBE"}var _y={[$n]:"ENVMAP_MODE_REFRACTION"};function vy(s){return s.envMap===!1?"ENVMAP_MODE_REFLECTION":_y[s.envMapMode]||"ENVMAP_MODE_REFLECTION"}var Sy={[rh]:"ENVMAP_BLENDING_MULTIPLY",[dd]:"ENVMAP_BLENDING_MIX",[fd]:"ENVMAP_BLENDING_ADD"};function by(s){return s.envMap===!1?"ENVMAP_BLENDING_NONE":Sy[s.combine]||"ENVMAP_BLENDING_NONE"}function My(s){let t=s.envMapCubeUVHeight;if(t===null)return null;let e=Math.log2(t)-2,i=1/t;return{texelWidth:1/(3*Math.max(Math.pow(2,e),112)),texelHeight:i,maxMip:e}}function wy(s,t,e,i){let n=s.getContext(),r=e.defines,a=e.vertexShader,o=e.fragmentShader,l=gy(e),c=yy(e),h=vy(e),d=by(e),u=My(e),f=oy(e),p=ly(r),y=n.createProgram(),m,g,E=e.glslVersion?"#version "+e.glslVersion+`
`:"";e.isRawShaderMaterial?(m=["#define SHADER_TYPE "+e.shaderType,"#define SHADER_NAME "+e.shaderName,p].filter(Hr).join(`
`),m.length>0&&(m+=`
`),g=["#define SHADER_TYPE "+e.shaderType,"#define SHADER_NAME "+e.shaderName,p].filter(Hr).join(`
`),g.length>0&&(g+=`
`)):(m=[Kd(e),"#define SHADER_TYPE "+e.shaderType,"#define SHADER_NAME "+e.shaderName,p,e.extensionClipCullDistance?"#define USE_CLIP_DISTANCE":"",e.batching?"#define USE_BATCHING":"",e.batchingColor?"#define USE_BATCHING_COLOR":"",e.instancing?"#define USE_INSTANCING":"",e.instancingColor?"#define USE_INSTANCING_COLOR":"",e.instancingMorph?"#define USE_INSTANCING_MORPH":"",e.useFog&&e.fog?"#define USE_FOG":"",e.useFog&&e.fogExp2?"#define FOG_EXP2":"",e.map?"#define USE_MAP":"",e.envMap?"#define USE_ENVMAP":"",e.envMap?"#define "+h:"",e.lightMap?"#define USE_LIGHTMAP":"",e.aoMap?"#define USE_AOMAP":"",e.bumpMap?"#define USE_BUMPMAP":"",e.normalMap?"#define USE_NORMALMAP":"",e.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",e.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",e.displacementMap?"#define USE_DISPLACEMENTMAP":"",e.emissiveMap?"#define USE_EMISSIVEMAP":"",e.anisotropy?"#define USE_ANISOTROPY":"",e.anisotropyMap?"#define USE_ANISOTROPYMAP":"",e.clearcoatMap?"#define USE_CLEARCOATMAP":"",e.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",e.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",e.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",e.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",e.specularMap?"#define USE_SPECULARMAP":"",e.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",e.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",e.roughnessMap?"#define USE_ROUGHNESSMAP":"",e.metalnessMap?"#define USE_METALNESSMAP":"",e.alphaMap?"#define USE_ALPHAMAP":"",e.alphaHash?"#define USE_ALPHAHASH":"",e.transmission?"#define USE_TRANSMISSION":"",e.transmissionMap?"#define USE_TRANSMISSIONMAP":"",e.thicknessMap?"#define USE_THICKNESSMAP":"",e.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",e.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",e.mapUv?"#define MAP_UV "+e.mapUv:"",e.alphaMapUv?"#define ALPHAMAP_UV "+e.alphaMapUv:"",e.lightMapUv?"#define LIGHTMAP_UV "+e.lightMapUv:"",e.aoMapUv?"#define AOMAP_UV "+e.aoMapUv:"",e.emissiveMapUv?"#define EMISSIVEMAP_UV "+e.emissiveMapUv:"",e.bumpMapUv?"#define BUMPMAP_UV "+e.bumpMapUv:"",e.normalMapUv?"#define NORMALMAP_UV "+e.normalMapUv:"",e.displacementMapUv?"#define DISPLACEMENTMAP_UV "+e.displacementMapUv:"",e.metalnessMapUv?"#define METALNESSMAP_UV "+e.metalnessMapUv:"",e.roughnessMapUv?"#define ROUGHNESSMAP_UV "+e.roughnessMapUv:"",e.anisotropyMapUv?"#define ANISOTROPYMAP_UV "+e.anisotropyMapUv:"",e.clearcoatMapUv?"#define CLEARCOATMAP_UV "+e.clearcoatMapUv:"",e.clearcoatNormalMapUv?"#define CLEARCOAT_NORMALMAP_UV "+e.clearcoatNormalMapUv:"",e.clearcoatRoughnessMapUv?"#define CLEARCOAT_ROUGHNESSMAP_UV "+e.clearcoatRoughnessMapUv:"",e.iridescenceMapUv?"#define IRIDESCENCEMAP_UV "+e.iridescenceMapUv:"",e.iridescenceThicknessMapUv?"#define IRIDESCENCE_THICKNESSMAP_UV "+e.iridescenceThicknessMapUv:"",e.sheenColorMapUv?"#define SHEEN_COLORMAP_UV "+e.sheenColorMapUv:"",e.sheenRoughnessMapUv?"#define SHEEN_ROUGHNESSMAP_UV "+e.sheenRoughnessMapUv:"",e.specularMapUv?"#define SPECULARMAP_UV "+e.specularMapUv:"",e.specularColorMapUv?"#define SPECULAR_COLORMAP_UV "+e.specularColorMapUv:"",e.specularIntensityMapUv?"#define SPECULAR_INTENSITYMAP_UV "+e.specularIntensityMapUv:"",e.transmissionMapUv?"#define TRANSMISSIONMAP_UV "+e.transmissionMapUv:"",e.thicknessMapUv?"#define THICKNESSMAP_UV "+e.thicknessMapUv:"",e.vertexTangents&&e.flatShading===!1?"#define USE_TANGENT":"",e.vertexNormals?"#define HAS_NORMAL":"",e.vertexColors?"#define USE_COLOR":"",e.vertexAlphas?"#define USE_COLOR_ALPHA":"",e.vertexUv1s?"#define USE_UV1":"",e.vertexUv2s?"#define USE_UV2":"",e.vertexUv3s?"#define USE_UV3":"",e.pointsUvs?"#define USE_POINTS_UV":"",e.flatShading?"#define FLAT_SHADED":"",e.skinning?"#define USE_SKINNING":"",e.morphTargets?"#define USE_MORPHTARGETS":"",e.morphNormals&&e.flatShading===!1?"#define USE_MORPHNORMALS":"",e.morphColors?"#define USE_MORPHCOLORS":"",e.morphTargetsCount>0?"#define MORPHTARGETS_TEXTURE_STRIDE "+e.morphTextureStride:"",e.morphTargetsCount>0?"#define MORPHTARGETS_COUNT "+e.morphTargetsCount:"",e.doubleSided?"#define DOUBLE_SIDED":"",e.flipSided?"#define FLIP_SIDED":"",e.shadowMapEnabled?"#define USE_SHADOWMAP":"",e.shadowMapEnabled?"#define "+l:"",e.sizeAttenuation?"#define USE_SIZEATTENUATION":"",e.numLightProbes>0?"#define USE_LIGHT_PROBES":"",e.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",e.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 modelMatrix;","uniform mat4 modelViewMatrix;","uniform mat4 projectionMatrix;","uniform mat4 viewMatrix;","uniform mat3 normalMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;","#ifdef USE_INSTANCING","	attribute mat4 instanceMatrix;","#endif","#ifdef USE_INSTANCING_COLOR","	attribute vec3 instanceColor;","#endif","#ifdef USE_INSTANCING_MORPH","	uniform sampler2D morphTexture;","#endif","attribute vec3 position;","attribute vec3 normal;","attribute vec2 uv;","#ifdef USE_UV1","	attribute vec2 uv1;","#endif","#ifdef USE_UV2","	attribute vec2 uv2;","#endif","#ifdef USE_UV3","	attribute vec2 uv3;","#endif","#ifdef USE_TANGENT","	attribute vec4 tangent;","#endif","#if defined( USE_COLOR_ALPHA )","	attribute vec4 color;","#elif defined( USE_COLOR )","	attribute vec3 color;","#endif","#ifdef USE_SKINNING","	attribute vec4 skinIndex;","	attribute vec4 skinWeight;","#endif",`
`].filter(Hr).join(`
`),g=[Kd(e),"#define SHADER_TYPE "+e.shaderType,"#define SHADER_NAME "+e.shaderName,p,e.useFog&&e.fog?"#define USE_FOG":"",e.useFog&&e.fogExp2?"#define FOG_EXP2":"",e.alphaToCoverage?"#define ALPHA_TO_COVERAGE":"",e.map?"#define USE_MAP":"",e.matcap?"#define USE_MATCAP":"",e.envMap?"#define USE_ENVMAP":"",e.envMap?"#define "+c:"",e.envMap?"#define "+h:"",e.envMap?"#define "+d:"",u?"#define CUBEUV_TEXEL_WIDTH "+u.texelWidth:"",u?"#define CUBEUV_TEXEL_HEIGHT "+u.texelHeight:"",u?"#define CUBEUV_MAX_MIP "+u.maxMip+".0":"",e.lightMap?"#define USE_LIGHTMAP":"",e.aoMap?"#define USE_AOMAP":"",e.bumpMap?"#define USE_BUMPMAP":"",e.normalMap?"#define USE_NORMALMAP":"",e.normalMapObjectSpace?"#define USE_NORMALMAP_OBJECTSPACE":"",e.normalMapTangentSpace?"#define USE_NORMALMAP_TANGENTSPACE":"",e.packedNormalMap?"#define USE_PACKED_NORMALMAP":"",e.emissiveMap?"#define USE_EMISSIVEMAP":"",e.anisotropy?"#define USE_ANISOTROPY":"",e.anisotropyMap?"#define USE_ANISOTROPYMAP":"",e.clearcoat?"#define USE_CLEARCOAT":"",e.clearcoatMap?"#define USE_CLEARCOATMAP":"",e.clearcoatRoughnessMap?"#define USE_CLEARCOAT_ROUGHNESSMAP":"",e.clearcoatNormalMap?"#define USE_CLEARCOAT_NORMALMAP":"",e.dispersion?"#define USE_DISPERSION":"",e.retroreflection?"#define USE_RETROREFLECTION":"",e.iridescence?"#define USE_IRIDESCENCE":"",e.iridescenceMap?"#define USE_IRIDESCENCEMAP":"",e.iridescenceThicknessMap?"#define USE_IRIDESCENCE_THICKNESSMAP":"",e.specularMap?"#define USE_SPECULARMAP":"",e.specularColorMap?"#define USE_SPECULAR_COLORMAP":"",e.specularIntensityMap?"#define USE_SPECULAR_INTENSITYMAP":"",e.roughnessMap?"#define USE_ROUGHNESSMAP":"",e.metalnessMap?"#define USE_METALNESSMAP":"",e.alphaMap?"#define USE_ALPHAMAP":"",e.alphaTest?"#define USE_ALPHATEST":"",e.alphaHash?"#define USE_ALPHAHASH":"",e.sheen?"#define USE_SHEEN":"",e.sheenColorMap?"#define USE_SHEEN_COLORMAP":"",e.sheenRoughnessMap?"#define USE_SHEEN_ROUGHNESSMAP":"",e.transmission?"#define USE_TRANSMISSION":"",e.transmissionMap?"#define USE_TRANSMISSIONMAP":"",e.thicknessMap?"#define USE_THICKNESSMAP":"",e.vertexTangents&&e.flatShading===!1?"#define USE_TANGENT":"",e.vertexColors||e.instancingColor?"#define USE_COLOR":"",e.vertexAlphas||e.batchingColor?"#define USE_COLOR_ALPHA":"",e.vertexUv1s?"#define USE_UV1":"",e.vertexUv2s?"#define USE_UV2":"",e.vertexUv3s?"#define USE_UV3":"",e.pointsUvs?"#define USE_POINTS_UV":"",e.gradientMap?"#define USE_GRADIENTMAP":"",e.flatShading?"#define FLAT_SHADED":"",e.doubleSided?"#define DOUBLE_SIDED":"",e.flipSided?"#define FLIP_SIDED":"",e.shadowMapEnabled?"#define USE_SHADOWMAP":"",e.shadowMapEnabled?"#define "+l:"",e.premultipliedAlpha?"#define PREMULTIPLIED_ALPHA":"",e.numLightProbes>0?"#define USE_LIGHT_PROBES":"",e.numLightProbeGrids>0?"#define USE_LIGHT_PROBES_GRID":"",e.decodeVideoTexture?"#define DECODE_VIDEO_TEXTURE":"",e.decodeVideoTextureEmissive?"#define DECODE_VIDEO_TEXTURE_EMISSIVE":"",e.logarithmicDepthBuffer?"#define USE_LOGARITHMIC_DEPTH_BUFFER":"",e.reversedDepthBuffer?"#define USE_REVERSED_DEPTH_BUFFER":"","uniform mat4 viewMatrix;","uniform vec3 cameraPosition;","uniform bool isOrthographic;",e.toneMapping!==ei?"#define TONE_MAPPING":"",e.toneMapping!==ei?Ht.tonemapping_pars_fragment:"",e.toneMapping!==ei?ry("toneMapping",e.toneMapping):"",e.dithering?"#define DITHERING":"",e.opaque?"#define OPAQUE":"",Ht.colorspace_pars_fragment,ny("linearToOutputTexel",e.outputColorSpace),ay(),e.useDepthPacking?"#define DEPTH_PACKING "+e.depthPacking:"",`
`].filter(Hr).join(`
`)),a=Uh(a),a=Xd(a,e),a=qd(a,e),o=Uh(o),o=Xd(o,e),o=qd(o,e),a=Yd(a),o=Yd(o),e.isRawShaderMaterial!==!0&&(E=`#version 300 es
`,m=[f,"#define attribute in","#define varying out","#define texture2D texture"].join(`
`)+`
`+m,g=["#define varying in",e.glslVersion===Cn?"":"layout(location = 0) out highp vec4 pc_fragColor;",e.glslVersion===Cn?"":"#define gl_FragColor pc_fragColor","#define gl_FragDepthEXT gl_FragDepth","#define texture2D texture","#define textureCube texture","#define texture2DProj textureProj","#define texture2DLodEXT textureLod","#define texture2DProjLodEXT textureProjLod","#define textureCubeLodEXT textureLod","#define texture2DGradEXT textureGrad","#define texture2DProjGradEXT textureProjGrad","#define textureCubeGradEXT textureGrad"].join(`
`)+`
`+g);let L=E+m+a,b=E+g+o,T=Gd(n,n.VERTEX_SHADER,L),M=Gd(n,n.FRAGMENT_SHADER,b);n.attachShader(y,T),n.attachShader(y,M),e.index0AttributeName!==void 0?n.bindAttribLocation(y,0,e.index0AttributeName):e.hasPositionAttribute===!0&&n.bindAttribLocation(y,0,"position"),n.linkProgram(y);function F(z){if(s.debug.checkShaderErrors){let W=n.getProgramInfoLog(y)||"",$=n.getShaderInfoLog(T)||"",V=n.getShaderInfoLog(M)||"",_=W.trim(),C=$.trim(),P=V.trim(),k=!0,D=!0;if(n.getProgramParameter(y,n.LINK_STATUS)===!1)if(k=!1,typeof s.debug.onShaderError=="function")s.debug.onShaderError(n,y,T,M);else{let G=Wd(n,T,"vertex"),X=Wd(n,M,"fragment");Ut("WebGLProgram: Shader Error "+n.getError()+" - VALIDATE_STATUS "+n.getProgramParameter(y,n.VALIDATE_STATUS)+`

Material Name: `+z.name+`
Material Type: `+z.type+`

Program Info Log: `+_+`
`+G+`
`+X)}else _!==""?Ft("WebGLProgram: Program Info Log:",_):(C===""||P==="")&&(D=!1);D&&(z.diagnostics={runnable:k,programLog:_,vertexShader:{log:C,prefix:m},fragmentShader:{log:P,prefix:g}})}n.deleteShader(T),n.deleteShader(M),S=new Os(n,y),R=cy(n,y)}let S;this.getUniforms=function(){return S===void 0&&F(this),S};let R;this.getAttributes=function(){return R===void 0&&F(this),R};let B=e.rendererExtensionParallelShaderCompile===!1;return this.isReady=function(){return B===!1&&(B=n.getProgramParameter(y,Qx)),B},this.destroy=function(){i.releaseStatesOfProgram(this),n.deleteProgram(y),this.program=void 0},this.type=e.shaderType,this.name=e.shaderName,this.id=ty++,this.cacheKey=t,this.usedTimes=1,this.program=y,this.vertexShader=T,this.fragmentShader=M,this}var Ty=0,Oh=class{constructor(){this.shaderCache=new Map,this.materialCache=new Map}update(t,e,i){let n=this._getShaderCacheForMaterial(t);return n.has(e)===!1&&(n.add(e),e.usedTimes++),n.has(i)===!1&&(n.add(i),i.usedTimes++),this}remove(t){let e=this.materialCache.get(t);for(let i of e)i.usedTimes--,i.usedTimes===0&&this.shaderCache.delete(i.code);return this.materialCache.delete(t),this}getVertexShaderStage(t){return this._getShaderStage(t.vertexShader)}getFragmentShaderStage(t){return this._getShaderStage(t.fragmentShader)}dispose(){this.shaderCache.clear(),this.materialCache.clear()}_getShaderCacheForMaterial(t){let e=this.materialCache,i=e.get(t);return i===void 0&&(i=new Set,e.set(t,i)),i}_getShaderStage(t){let e=this.shaderCache,i=e.get(t);return i===void 0&&(i=new kh(t),e.set(t,i)),i}},kh=class{constructor(t){this.id=Ty++,this.code=t,this.usedTimes=0}};function Ey(s){return s===An||s===kr||s===Br}function Ay(s,t,e,i,n,r){let a=new gr,o=new Oh,l=new Set,c=[],h=new Map,d=i.logarithmicDepthBuffer,u=i.precision,f={MeshDepthMaterial:"depth",MeshDistanceMaterial:"distance",MeshNormalMaterial:"normal",MeshBasicMaterial:"basic",MeshLambertMaterial:"lambert",MeshPhongMaterial:"phong",MeshToonMaterial:"toon",MeshStandardMaterial:"physical",MeshPhysicalMaterial:"physical",MeshMatcapMaterial:"matcap",LineBasicMaterial:"basic",LineDashedMaterial:"dashed",PointsMaterial:"points",ShadowMaterial:"shadow",SpriteMaterial:"sprite"};function p(S){return l.add(S),S===0?"uv":`uv${S}`}function y(S,R,B,z,W,$){let V=z.fog,_=W.geometry,C=S.isMeshStandardMaterial||S.isMeshLambertMaterial||S.isMeshPhongMaterial?z.environment:null,P=S.isMeshStandardMaterial||S.isMeshLambertMaterial&&!S.envMap||S.isMeshPhongMaterial&&!S.envMap,k=t.get(S.envMap||C,P),D=k&&k.mapping===Lr?k.image.height:null,G=f[S.type];S.precision!==null&&(u=i.getMaxPrecision(S.precision),u!==S.precision&&Ft("WebGLProgram.getParameters:",S.precision,"not supported, using",u,"instead."));let X=_.morphAttributes.position||_.morphAttributes.normal||_.morphAttributes.color,w=X!==void 0?X.length:0,I=0;_.morphAttributes.position!==void 0&&(I=1),_.morphAttributes.normal!==void 0&&(I=2),_.morphAttributes.color!==void 0&&(I=3);let Y,j,at,q;if(G){let le=ki[G];Y=le.vertexShader,j=le.fragmentShader}else{Y=S.vertexShader,j=S.fragmentShader;let le=o.getVertexShaderStage(S),Qt=o.getFragmentShaderStage(S);o.update(S,le,Qt),at=le.id,q=Qt.id}let et=s.getRenderTarget(),ct=s.state.buffers.depth.getReversed(),Mt=W.isInstancedMesh===!0,ut=W.isBatchedMesh===!0,Lt=!!S.map,Vt=!!S.matcap,Dt=!!k,zt=!!S.aoMap,Bt=!!S.lightMap,Nt=!!S.bumpMap&&S.wireframe===!1,Zt=!!S.normalMap,Jt=!!S.displacementMap,xe=!!S.emissiveMap,ne=!!S.metalnessMap,pe=!!S.roughnessMap,U=S.anisotropy>0,Me=S.clearcoat>0,ie=S.dispersion>0,A=S.retroreflectivity>0,x=S.iridescence>0,H=S.sheen>0,J=S.transmission>0,it=U&&!!S.anisotropyMap,lt=Me&&!!S.clearcoatMap,ht=Me&&!!S.clearcoatNormalMap,nt=Me&&!!S.clearcoatRoughnessMap,rt=x&&!!S.iridescenceMap,dt=x&&!!S.iridescenceThicknessMap,Ct=H&&!!S.sheenColorMap,gt=H&&!!S.sheenRoughnessMap,ft=!!S.specularMap,Rt=!!S.specularColorMap,Pt=!!S.specularIntensityMap,kt=J&&!!S.transmissionMap,O=J&&!!S.thicknessMap,pt=!!S.gradientMap,st=!!S.alphaMap,mt=S.alphaTest>0,vt=!!S.alphaHash,ot=!!S.extensions,It=ei;S.toneMapped&&(et===null||et.isXRRenderTarget===!0)&&(It=s.toneMapping);let Et={shaderID:G,shaderType:S.type,shaderName:S.name,vertexShader:Y,fragmentShader:j,defines:S.defines,customVertexShaderID:at,customFragmentShaderID:q,isRawShaderMaterial:S.isRawShaderMaterial===!0,glslVersion:S.glslVersion,precision:u,batching:ut,batchingColor:ut&&W._colorsTexture!==null,instancing:Mt,instancingColor:Mt&&W.instanceColor!==null,instancingMorph:Mt&&W.morphTexture!==null,outputColorSpace:et===null?s.outputColorSpace:et.isXRRenderTarget===!0?et.texture.colorSpace:Yt.workingColorSpace,alphaToCoverage:!!S.alphaToCoverage,map:Lt,matcap:Vt,envMap:Dt,envMapMode:Dt&&k.mapping,envMapCubeUVHeight:D,aoMap:zt,lightMap:Bt,bumpMap:Nt,normalMap:Zt,displacementMap:Jt,emissiveMap:xe,normalMapObjectSpace:Zt&&S.normalMapType===gd,normalMapTangentSpace:Zt&&S.normalMapType===vh,packedNormalMap:Zt&&S.normalMapType===vh&&Ey(S.normalMap.format),metalnessMap:ne,roughnessMap:pe,anisotropy:U,anisotropyMap:it,clearcoat:Me,clearcoatMap:lt,clearcoatNormalMap:ht,clearcoatRoughnessMap:nt,dispersion:ie,retroreflection:A,iridescence:x,iridescenceMap:rt,iridescenceThicknessMap:dt,sheen:H,sheenColorMap:Ct,sheenRoughnessMap:gt,specularMap:ft,specularColorMap:Rt,specularIntensityMap:Pt,transmission:J,transmissionMap:kt,thicknessMap:O,gradientMap:pt,opaque:S.transparent===!1&&S.blending===Ps&&S.alphaToCoverage===!1,alphaMap:st,alphaTest:mt,alphaHash:vt,combine:S.combine,mapUv:Lt&&p(S.map.channel),aoMapUv:zt&&p(S.aoMap.channel),lightMapUv:Bt&&p(S.lightMap.channel),bumpMapUv:Nt&&p(S.bumpMap.channel),normalMapUv:Zt&&p(S.normalMap.channel),displacementMapUv:Jt&&p(S.displacementMap.channel),emissiveMapUv:xe&&p(S.emissiveMap.channel),metalnessMapUv:ne&&p(S.metalnessMap.channel),roughnessMapUv:pe&&p(S.roughnessMap.channel),anisotropyMapUv:it&&p(S.anisotropyMap.channel),clearcoatMapUv:lt&&p(S.clearcoatMap.channel),clearcoatNormalMapUv:ht&&p(S.clearcoatNormalMap.channel),clearcoatRoughnessMapUv:nt&&p(S.clearcoatRoughnessMap.channel),iridescenceMapUv:rt&&p(S.iridescenceMap.channel),iridescenceThicknessMapUv:dt&&p(S.iridescenceThicknessMap.channel),sheenColorMapUv:Ct&&p(S.sheenColorMap.channel),sheenRoughnessMapUv:gt&&p(S.sheenRoughnessMap.channel),specularMapUv:ft&&p(S.specularMap.channel),specularColorMapUv:Rt&&p(S.specularColorMap.channel),specularIntensityMapUv:Pt&&p(S.specularIntensityMap.channel),transmissionMapUv:kt&&p(S.transmissionMap.channel),thicknessMapUv:O&&p(S.thicknessMap.channel),alphaMapUv:st&&p(S.alphaMap.channel),vertexTangents:!!_.attributes.tangent&&(Zt||U),vertexNormals:!!_.attributes.normal,vertexColors:S.vertexColors,vertexAlphas:S.vertexColors===!0&&!!_.attributes.color&&_.attributes.color.itemSize===4,pointsUvs:W.isPoints===!0&&!!_.attributes.uv&&(Lt||st),fog:!!V,useFog:S.fog===!0,fogExp2:!!V&&V.isFogExp2,flatShading:S.wireframe===!1&&(S.flatShading===!0||_.attributes.normal===void 0&&Zt===!1&&(S.isMeshLambertMaterial||S.isMeshPhongMaterial||S.isMeshStandardMaterial||S.isMeshPhysicalMaterial)),sizeAttenuation:S.sizeAttenuation===!0,logarithmicDepthBuffer:d,reversedDepthBuffer:ct,skinning:W.isSkinnedMesh===!0,hasPositionAttribute:_.attributes.position!==void 0,morphTargets:_.morphAttributes.position!==void 0,morphNormals:_.morphAttributes.normal!==void 0,morphColors:_.morphAttributes.color!==void 0,morphTargetsCount:w,morphTextureStride:I,numSunLights:R.sun.length,numDirLights:R.directional.length,numPointLights:R.point.length,numSpotLights:R.spot.length,numSpotLightMaps:R.spotLightMap.length,numRectAreaLights:R.rectArea.length,numHemiLights:R.hemi.length,numSunLightShadows:R.sunShadowMap.length,numDirLightShadows:R.directionalShadowMap.length,numPointLightShadows:R.pointShadowMap.length,numSpotLightShadows:R.spotShadowMap.length,numSpotLightShadowsWithMaps:R.numSpotLightShadowsWithMaps,numLightProbes:R.numLightProbes,numLightProbeGrids:$.length,numClippingPlanes:r.numPlanes,numClipIntersection:r.numIntersection,dithering:S.dithering,shadowMapEnabled:s.shadowMap.enabled&&B.length>0,shadowMapType:s.shadowMap.type,toneMapping:It,decodeVideoTexture:Lt&&S.map.isVideoTexture===!0&&Yt.getTransfer(S.map.colorSpace)===ee,decodeVideoTextureEmissive:xe&&S.emissiveMap.isVideoTexture===!0&&Yt.getTransfer(S.emissiveMap.colorSpace)===ee,premultipliedAlpha:S.premultipliedAlpha,doubleSided:S.side===Ui,flipSided:S.side===Pe,useDepthPacking:S.depthPacking>=0,depthPacking:S.depthPacking||0,index0AttributeName:S.index0AttributeName,extensionClipCullDistance:ot&&S.extensions.clipCullDistance===!0&&e.has("WEBGL_clip_cull_distance"),extensionMultiDraw:(ot&&S.extensions.multiDraw===!0||ut)&&e.has("WEBGL_multi_draw"),rendererExtensionParallelShaderCompile:e.has("KHR_parallel_shader_compile"),customProgramCacheKey:S.customProgramCacheKey()};return Et.vertexUv1s=l.has(1),Et.vertexUv2s=l.has(2),Et.vertexUv3s=l.has(3),l.clear(),Et}function m(S){let R=[];if(S.shaderID?R.push(S.shaderID):(R.push(S.customVertexShaderID),R.push(S.customFragmentShaderID)),S.defines!==void 0)for(let B in S.defines)R.push(B),R.push(S.defines[B]);return S.isRawShaderMaterial===!1&&(g(R,S),E(R,S),R.push(s.outputColorSpace)),R.push(S.customProgramCacheKey),R.join()}function g(S,R){S.push(R.precision),S.push(R.outputColorSpace),S.push(R.envMapMode),S.push(R.envMapCubeUVHeight),S.push(R.mapUv),S.push(R.alphaMapUv),S.push(R.lightMapUv),S.push(R.aoMapUv),S.push(R.bumpMapUv),S.push(R.normalMapUv),S.push(R.displacementMapUv),S.push(R.emissiveMapUv),S.push(R.metalnessMapUv),S.push(R.roughnessMapUv),S.push(R.anisotropyMapUv),S.push(R.clearcoatMapUv),S.push(R.clearcoatNormalMapUv),S.push(R.clearcoatRoughnessMapUv),S.push(R.iridescenceMapUv),S.push(R.iridescenceThicknessMapUv),S.push(R.sheenColorMapUv),S.push(R.sheenRoughnessMapUv),S.push(R.specularMapUv),S.push(R.specularColorMapUv),S.push(R.specularIntensityMapUv),S.push(R.transmissionMapUv),S.push(R.thicknessMapUv),S.push(R.combine),S.push(R.fogExp2),S.push(R.sizeAttenuation),S.push(R.morphTargetsCount),S.push(R.morphAttributeCount),S.push(R.numSunLights),S.push(R.numDirLights),S.push(R.numPointLights),S.push(R.numSpotLights),S.push(R.numSpotLightMaps),S.push(R.numHemiLights),S.push(R.numRectAreaLights),S.push(R.numSunLightShadows),S.push(R.numDirLightShadows),S.push(R.numPointLightShadows),S.push(R.numSpotLightShadows),S.push(R.numSpotLightShadowsWithMaps),S.push(R.numLightProbes),S.push(R.shadowMapType),S.push(R.toneMapping),S.push(R.numClippingPlanes),S.push(R.numClipIntersection),S.push(R.depthPacking)}function E(S,R){a.disableAll(),R.instancing&&a.enable(0),R.instancingColor&&a.enable(1),R.instancingMorph&&a.enable(2),R.matcap&&a.enable(3),R.envMap&&a.enable(4),R.normalMapObjectSpace&&a.enable(5),R.normalMapTangentSpace&&a.enable(6),R.clearcoat&&a.enable(7),R.iridescence&&a.enable(8),R.alphaTest&&a.enable(9),R.vertexColors&&a.enable(10),R.vertexAlphas&&a.enable(11),R.vertexUv1s&&a.enable(12),R.vertexUv2s&&a.enable(13),R.vertexUv3s&&a.enable(14),R.vertexTangents&&a.enable(15),R.anisotropy&&a.enable(16),R.alphaHash&&a.enable(17),R.batching&&a.enable(18),R.dispersion&&a.enable(19),R.retroreflection&&a.enable(24),R.batchingColor&&a.enable(20),R.gradientMap&&a.enable(21),R.packedNormalMap&&a.enable(22),R.vertexNormals&&a.enable(23),S.push(a.mask),a.disableAll(),R.fog&&a.enable(0),R.useFog&&a.enable(1),R.flatShading&&a.enable(2),R.logarithmicDepthBuffer&&a.enable(3),R.reversedDepthBuffer&&a.enable(4),R.skinning&&a.enable(5),R.morphTargets&&a.enable(6),R.morphNormals&&a.enable(7),R.morphColors&&a.enable(8),R.premultipliedAlpha&&a.enable(9),R.shadowMapEnabled&&a.enable(10),R.doubleSided&&a.enable(11),R.flipSided&&a.enable(12),R.useDepthPacking&&a.enable(13),R.dithering&&a.enable(14),R.transmission&&a.enable(15),R.sheen&&a.enable(16),R.opaque&&a.enable(17),R.pointsUvs&&a.enable(18),R.decodeVideoTexture&&a.enable(19),R.decodeVideoTextureEmissive&&a.enable(20),R.alphaToCoverage&&a.enable(21),R.numLightProbeGrids>0&&a.enable(22),R.hasPositionAttribute&&a.enable(23),S.push(a.mask)}function L(S){let R=f[S.type],B;if(R){let z=ki[R];B=Rd.clone(z.uniforms)}else B=S.uniforms;return B}function b(S,R){let B=h.get(R);return B!==void 0?++B.usedTimes:(B=new wy(s,R,S,n),c.push(B),h.set(R,B)),B}function T(S){if(--S.usedTimes===0){let R=c.indexOf(S);c[R]=c[c.length-1],c.pop(),h.delete(S.cacheKey),S.destroy()}}function M(S){o.remove(S)}function F(){o.dispose()}return{getParameters:y,getProgramCacheKey:m,getUniforms:L,acquireProgram:b,releaseProgram:T,releaseShaderCache:M,programs:c,dispose:F}}function Cy(){let s=new WeakMap;function t(a){return s.has(a)}function e(a){let o=s.get(a);return o===void 0&&(o={},s.set(a,o)),o}function i(a){s.delete(a)}function n(a,o,l){s.get(a)[o]=l}function r(){s=new WeakMap}return{has:t,get:e,remove:i,update:n,dispose:r}}function Ry(s,t){return s.groupOrder!==t.groupOrder?s.groupOrder-t.groupOrder:s.renderOrder!==t.renderOrder?s.renderOrder-t.renderOrder:s.material.id!==t.material.id?s.material.id-t.material.id:s.materialVariant!==t.materialVariant?s.materialVariant-t.materialVariant:s.z!==t.z?s.z-t.z:s.id-t.id}function Zd(s,t){return s.groupOrder!==t.groupOrder?s.groupOrder-t.groupOrder:s.renderOrder!==t.renderOrder?s.renderOrder-t.renderOrder:s.z!==t.z?t.z-s.z:s.id-t.id}function $d(){let s=[],t=0,e=[],i=[],n=[];function r(){t=0,e.length=0,i.length=0,n.length=0}function a(u){let f=0;return u.isInstancedMesh&&(f+=2),u.isSkinnedMesh&&(f+=1),f}function o(u,f,p,y,m,g){let E=s[t];return E===void 0?(E={id:u.id,object:u,geometry:f,material:p,materialVariant:a(u),groupOrder:y,renderOrder:u.renderOrder,z:m,group:g},s[t]=E):(E.id=u.id,E.object=u,E.geometry=f,E.material=p,E.materialVariant=a(u),E.groupOrder=y,E.renderOrder=u.renderOrder,E.z=m,E.group=g),t++,E}function l(u,f,p,y,m,g,E){E.reversedDepth===!0&&(m=-m);let L=o(u,f,p,y,m,g);p.transmission>0?i.push(L):p.transparent===!0?n.push(L):e.push(L)}function c(u,f,p,y,m,g){let E=o(u,f,p,y,m,g);p.transmission>0?i.unshift(E):p.transparent===!0?n.unshift(E):e.unshift(E)}function h(u,f){e.length>1&&e.sort(u||Ry),i.length>1&&i.sort(f||Zd),n.length>1&&n.sort(f||Zd)}function d(){for(let u=t,f=s.length;u<f;u++){let p=s[u];if(p.id===null)break;p.id=null,p.object=null,p.geometry=null,p.material=null,p.group=null}}return{opaque:e,transmissive:i,transparent:n,init:r,push:l,unshift:c,finish:d,sort:h}}function Iy(){let s=new WeakMap;function t(i,n){let r=s.get(i),a;return r===void 0?(a=new $d,s.set(i,[a])):n>=r.length?(a=new $d,r.push(a)):a=r[n],a}function e(){s=new WeakMap}return{get:t,dispose:e}}function Py(){let s={};return{get:function(t){if(s[t.id]!==void 0)return s[t.id];let e;switch(t.type){case"SunLight":case"DirectionalLight":e={direction:new Q,color:new qt};break;case"SpotLight":e={position:new Q,direction:new Q,color:new qt,distance:0,coneCos:0,penumbraCos:0,decay:0};break;case"PointLight":e={position:new Q,color:new qt,distance:0,decay:0};break;case"HemisphereLight":e={direction:new Q,skyColor:new qt,groundColor:new qt};break;case"RectAreaLight":e={color:new qt,position:new Q,halfWidth:new Q,halfHeight:new Q};break}return s[t.id]=e,e}}}function Ly(){let s={};return{get:function(t){if(s[t.id]!==void 0)return s[t.id];let e;switch(t.type){case"SunLight":case"DirectionalLight":e={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Wt};break;case"SpotLight":e={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Wt};break;case"PointLight":e={shadowIntensity:1,shadowBias:0,shadowNormalBias:0,shadowRadius:1,shadowMapSize:new Wt,shadowCameraNear:1,shadowCameraFar:1e3};break}return s[t.id]=e,e}}}var Fy=0;function Dy(s,t){return(t.castShadow?2:0)-(s.castShadow?2:0)+(t.map?1:0)-(s.map?1:0)}function Ny(s){let t=new Py,e=Ly(),i={version:0,hash:{sunLength:-1,directionalLength:-1,pointLength:-1,spotLength:-1,rectAreaLength:-1,hemiLength:-1,numSunShadows:-1,numDirectionalShadows:-1,numPointShadows:-1,numSpotShadows:-1,numSpotMaps:-1,numLightProbes:-1},ambient:[0,0,0],probe:[],sun:[],sunShadow:[],sunShadowMap:[],sunShadowMatrix:[],sunShadowCascade:[],directional:[],directionalShadow:[],directionalShadowMap:[],directionalShadowMatrix:[],spot:[],spotLightMap:[],spotShadow:[],spotShadowMap:[],spotLightMatrix:[],rectArea:[],rectAreaLTC1:null,rectAreaLTC2:null,point:[],pointShadow:[],pointShadowMap:[],pointShadowMatrix:[],hemi:[],numSpotLightShadowsWithMaps:0,numLightProbes:0};for(let c=0;c<9;c++)i.probe.push(new Q);let n=new Q,r=new jt,a=new jt;function o(c){let h=0,d=0,u=0;for(let W=0;W<9;W++)i.probe[W].set(0,0,0);let f=0,p=0,y=0,m=0,g=0,E=0,L=0,b=0,T=0,M=0,F=0,S=0,R=0,B=0;c.sort(Dy);for(let W=0,$=c.length;W<$;W++){let V=c[W],_=V.color,C=V.intensity,P=V.distance,k=null;if(V.shadow&&V.shadow.map&&(V.shadow.map.texture.format===An?k=V.shadow.map.texture:k=V.shadow.map.depthTexture||V.shadow.map.texture),V.isAmbientLight)h+=_.r*C,d+=_.g*C,u+=_.b*C;else if(V.isLightProbe){for(let D=0;D<9;D++)i.probe[D].addScaledVector(V.sh.coefficients[D],C);B++}else if(V.isSunLight){let D=t.get(V);if(D.color.copy(V.color).multiplyScalar(V.intensity),V.castShadow){let G=V.shadow,X=e.get(V);X.shadowIntensity=G.intensity,X.shadowBias=G.bias,X.shadowNormalBias=G.normalBias,X.shadowRadius=G.radius,X.shadowMapSize.copy(G.mapSize).multiply(G.getFrameExtents()),i.sunShadow[p]=X,i.sunShadowMap[p]=k;let w=G.getViewportCount();for(let I=0;I<w;I++)i.sunShadowMatrix[y+I]=G.getMatrix(I),i.sunShadowCascade[y+I]=G._cascadeData[I];y+=w,p++}i.sun[f]=D,f++}else if(V.isDirectionalLight){let D=t.get(V);if(D.color.copy(V.color).multiplyScalar(V.intensity),V.castShadow){let G=V.shadow,X=e.get(V);X.shadowIntensity=G.intensity,X.shadowBias=G.bias,X.shadowNormalBias=G.normalBias,X.shadowRadius=G.radius,X.shadowMapSize=G.mapSize,i.directionalShadow[m]=X,i.directionalShadowMap[m]=k,i.directionalShadowMatrix[m]=V.shadow.matrix,T++}i.directional[m]=D,m++}else if(V.isSpotLight){let D=t.get(V);D.position.setFromMatrixPosition(V.matrixWorld),D.color.copy(_).multiplyScalar(C),D.distance=P,D.coneCos=Math.cos(V.angle),D.penumbraCos=Math.cos(V.angle*(1-V.penumbra)),D.decay=V.decay,i.spot[E]=D;let G=V.shadow;if(V.map&&(i.spotLightMap[S]=V.map,S++,G.updateMatrices(V),V.castShadow&&R++),i.spotLightMatrix[E]=G.matrix,V.castShadow){let X=e.get(V);X.shadowIntensity=G.intensity,X.shadowBias=G.bias,X.shadowNormalBias=G.normalBias,X.shadowRadius=G.radius,X.shadowMapSize=G.mapSize,i.spotShadow[E]=X,i.spotShadowMap[E]=k,F++}E++}else if(V.isRectAreaLight){let D=t.get(V);D.color.copy(_).multiplyScalar(C),D.halfWidth.set(V.width*.5,0,0),D.halfHeight.set(0,V.height*.5,0),i.rectArea[L]=D,L++}else if(V.isPointLight){let D=t.get(V);if(D.color.copy(V.color).multiplyScalar(V.intensity),D.distance=V.distance,D.decay=V.decay,V.castShadow){let G=V.shadow,X=e.get(V);X.shadowIntensity=G.intensity,X.shadowBias=G.bias,X.shadowNormalBias=G.normalBias,X.shadowRadius=G.radius,X.shadowMapSize=G.mapSize,X.shadowCameraNear=G.camera.near,X.shadowCameraFar=G.camera.far,i.pointShadow[g]=X,i.pointShadowMap[g]=k,i.pointShadowMatrix[g]=V.shadow.matrix,M++}i.point[g]=D,g++}else if(V.isHemisphereLight){let D=t.get(V);D.skyColor.copy(V.color).multiplyScalar(C),D.groundColor.copy(V.groundColor).multiplyScalar(C),i.hemi[b]=D,b++}}L>0&&(s.has("OES_texture_float_linear")===!0?(i.rectAreaLTC1=xt.LTC_FLOAT_1,i.rectAreaLTC2=xt.LTC_FLOAT_2):(i.rectAreaLTC1=xt.LTC_HALF_1,i.rectAreaLTC2=xt.LTC_HALF_2)),i.ambient[0]=h,i.ambient[1]=d,i.ambient[2]=u;let z=i.hash;(z.sunLength!==f||z.directionalLength!==m||z.pointLength!==g||z.spotLength!==E||z.rectAreaLength!==L||z.hemiLength!==b||z.numSunShadows!==p||z.numDirectionalShadows!==T||z.numPointShadows!==M||z.numSpotShadows!==F||z.numSpotMaps!==S||z.numLightProbes!==B)&&(i.sun.length=f,i.directional.length=m,i.spot.length=E,i.rectArea.length=L,i.point.length=g,i.hemi.length=b,i.sunShadow.length=p,i.sunShadowMap.length=p,i.sunShadowMatrix.length=y,i.sunShadowCascade.length=y,i.directionalShadow.length=T,i.directionalShadowMap.length=T,i.directionalShadowMatrix.length=T,i.pointShadow.length=M,i.pointShadowMap.length=M,i.pointShadowMatrix.length=M,i.spotShadow.length=F,i.spotShadowMap.length=F,i.spotLightMatrix.length=F+S-R,i.spotLightMap.length=S,i.numSpotLightShadowsWithMaps=R,i.numLightProbes=B,z.sunLength=f,z.directionalLength=m,z.pointLength=g,z.spotLength=E,z.rectAreaLength=L,z.hemiLength=b,z.numSunShadows=p,z.numDirectionalShadows=T,z.numPointShadows=M,z.numSpotShadows=F,z.numSpotMaps=S,z.numLightProbes=B,i.version=Fy++)}function l(c,h){let d=0,u=0,f=0,p=0,y=0,m=0,g=h.matrixWorldInverse;for(let E=0,L=c.length;E<L;E++){let b=c[E];if(b.isSunLight){let T=i.sun[d];T.direction.setFromMatrixPosition(b.matrixWorld),T.direction.transformDirection(g),d++}else if(b.isDirectionalLight){let T=i.directional[u];T.direction.setFromMatrixPosition(b.matrixWorld),n.setFromMatrixPosition(b.target.matrixWorld),T.direction.sub(n),T.direction.transformDirection(g),u++}else if(b.isSpotLight){let T=i.spot[p];T.position.setFromMatrixPosition(b.matrixWorld),T.position.applyMatrix4(g),T.direction.setFromMatrixPosition(b.matrixWorld),n.setFromMatrixPosition(b.target.matrixWorld),T.direction.sub(n),T.direction.transformDirection(g),p++}else if(b.isRectAreaLight){let T=i.rectArea[y];T.position.setFromMatrixPosition(b.matrixWorld),T.position.applyMatrix4(g),a.identity(),r.copy(b.matrixWorld),r.premultiply(g),a.extractRotation(r),T.halfWidth.set(b.width*.5,0,0),T.halfHeight.set(0,b.height*.5,0),T.halfWidth.applyMatrix4(a),T.halfHeight.applyMatrix4(a),y++}else if(b.isPointLight){let T=i.point[f];T.position.setFromMatrixPosition(b.matrixWorld),T.position.applyMatrix4(g),f++}else if(b.isHemisphereLight){let T=i.hemi[m];T.direction.setFromMatrixPosition(b.matrixWorld),T.direction.transformDirection(g),m++}}}return{setup:o,setupView:l,state:i}}function Jd(s){let t=new Ny(s),e=[],i=[],n=[];function r(u){d.camera=u,e.length=0,i.length=0,n.length=0}function a(u){e.push(u)}function o(u){i.push(u)}function l(u){n.push(u)}function c(){t.setup(e)}function h(u){t.setupView(e,u)}let d={lightsArray:e,shadowsArray:i,lightProbeGridArray:n,camera:null,lights:t,transmissionRenderTarget:{},textureUnits:0};return{init:r,state:d,setupLights:c,setupLightsView:h,pushLight:a,pushShadow:o,pushLightProbeGrid:l}}function Uy(s){let t=new WeakMap;function e(n,r=0){let a=t.get(n),o;return a===void 0?(o=new Jd(s),t.set(n,[o])):r>=a.length?(o=new Jd(s),a.push(o)):o=a[r],o}function i(){t=new WeakMap}return{get:e,dispose:i}}var Oy=`void main() {
	gl_Position = vec4( position, 1.0 );
}`,ky=`uniform sampler2D shadow_pass;
uniform vec2 resolution;
uniform float radius;
void main() {
	const float samples = float( VSM_SAMPLES );
	float mean = 0.0;
	float squared_mean = 0.0;
	float uvStride = samples <= 1.0 ? 0.0 : 2.0 / ( samples - 1.0 );
	float uvStart = samples <= 1.0 ? 0.0 : - 1.0;
	for ( float i = 0.0; i < samples; i ++ ) {
		float uvOffset = uvStart + i * uvStride;
		#ifdef HORIZONTAL_PASS
			vec2 distribution = texture2D( shadow_pass, ( gl_FragCoord.xy + vec2( uvOffset, 0.0 ) * radius ) / resolution ).rg;
			mean += distribution.x;
			squared_mean += distribution.y * distribution.y + distribution.x * distribution.x;
		#else
			float depth = texture2D( shadow_pass, ( gl_FragCoord.xy + vec2( 0.0, uvOffset ) * radius ) / resolution ).r;
			mean += depth;
			squared_mean += depth * depth;
		#endif
	}
	mean = mean / samples;
	squared_mean = squared_mean / samples;
	float std_dev = sqrt( max( 0.0, squared_mean - mean * mean ) );
	gl_FragColor = vec4( mean, std_dev, 0.0, 1.0 );
}`,By=[new Q(1,0,0),new Q(-1,0,0),new Q(0,1,0),new Q(0,-1,0),new Q(0,0,1),new Q(0,0,-1)],Vy=[new Q(0,-1,0),new Q(0,-1,0),new Q(0,0,1),new Q(0,0,-1),new Q(0,-1,0),new Q(0,-1,0)],jd=new jt,Gr=new Q,Ph=new Q;function zy(s,t,e){let i=new Sr,n=new Wt,r=new Wt,a=new he,o=new yo,l=new _o,c={},h=e.maxTextureSize,d={[Mn]:Pe,[Pe]:Mn,[Ui]:Ui},u=new Qe({defines:{VSM_SAMPLES:8},uniforms:{shadow_pass:{value:null},resolution:{value:new Wt},radius:{value:4}},vertexShader:Oy,fragmentShader:ky}),f=u.clone();f.defines.HORIZONTAL_PASS=1;let p=new Xe;p.setAttribute("position",new Re(new Float32Array([-1,-1,.5,3,-1,.5,-1,3,.5]),3));let y=new Oe(p,u),m=this;this.enabled=!1,this.autoUpdate=!0,this.needsUpdate=!1,this.type=Ar;let g=this.type;this.render=function(M,F,S){if(m.enabled===!1||m.autoUpdate===!1&&m.needsUpdate===!1||M.length===0)return;this.type===nd&&(Ft("WebGLShadowMap: PCFSoftShadowMap has been removed. Using PCFShadowMap instead."),this.type=Ar);let R=s.getRenderTarget(),B=s.getActiveCubeFace(),z=s.getActiveMipmapLevel(),W=s.state;W.setBlending(qe),W.buffers.depth.getReversed()===!0?W.buffers.color.setClear(0,0,0,0):W.buffers.color.setClear(1,1,1,1),W.buffers.depth.setTest(!0),W.setScissorTest(!1);let $=g!==this.type;$&&F.traverse(function(V){V.material&&(Array.isArray(V.material)?V.material.forEach(_=>_.needsUpdate=!0):V.material.needsUpdate=!0)});for(let V=0,_=M.length;V<_;V++){let C=M[V],P=C.shadow;if(P===void 0){Ft("WebGLShadowMap:",C,"has no shadow.");continue}if(P.autoUpdate===!1&&P.needsUpdate===!1)continue;n.copy(P.mapSize);let k=P.getFrameExtents();n.multiply(k),r.copy(P.mapSize),(n.x>h||n.y>h)&&(n.x>h&&(r.x=Math.floor(h/k.x),n.x=r.x*k.x,P.mapSize.x=r.x),n.y>h&&(r.y=Math.floor(h/k.y),n.y=r.y*k.y,P.mapSize.y=r.y));let D=s.state.buffers.depth.getReversed();if(P.camera._reversedDepth=D,P.map===null||$===!0){if(P.map!==null&&(P.map.depthTexture!==null&&(P.map.depthTexture.dispose(),P.map.depthTexture=null),P.map.dispose()),this.type===Is){if(C.isPointLight){Ft("WebGLShadowMap: VSM shadow maps are not supported for PointLights. Use PCF or BasicShadowMap instead.");continue}P.map=new Ie(n.x,n.y,{format:An,type:Si,minFilter:fe,magFilter:fe,generateMipmaps:!1}),P.map.texture.name=C.name+".shadowMap",P.map.depthTexture=new _n(n.x,n.y,ii),P.map.depthTexture.name=C.name+".shadowMapDepth",P.map.depthTexture.format=Fi,P.map.depthTexture.compareFunction=null,P.map.depthTexture.minFilter=oe,P.map.depthTexture.magFilter=oe}else C.isPointLight?(P.map=new Il(n.x),P.map.depthTexture=new xo(n.x,vi)):(P.map=new Ie(n.x,n.y),P.map.depthTexture=new _n(n.x,n.y,vi)),P.map.depthTexture.name=C.name+".shadowMap",P.map.depthTexture.format=Fi,this.type===Ar?(P.map.depthTexture.compareFunction=D?El:Tl,P.map.depthTexture.minFilter=fe,P.map.depthTexture.magFilter=fe):(P.map.depthTexture.compareFunction=null,P.map.depthTexture.minFilter=oe,P.map.depthTexture.magFilter=oe);P.camera.updateProjectionMatrix()}P.map.isWebGLCubeRenderTarget!==!0&&(P.map.width!==n.x||P.map.height!==n.y)&&P.map.setSize(n.x,n.y);let G=P.map.isWebGLCubeRenderTarget?6:P.getViewportCount();C.isPointLight!==!0&&P.updateMatrices(C,S);for(let X=0;X<G;X++){let w=P.getCamera(X);if(C.isPointLight){let I=P.camera,Y=P.matrix,j=C.distance||I.far;j!==I.far&&(I.far=j,I.updateProjectionMatrix()),Gr.setFromMatrixPosition(C.matrixWorld),I.position.copy(Gr),Ph.copy(I.position),Ph.add(By[X]),I.up.copy(Vy[X]),I.lookAt(Ph),I.updateMatrixWorld(),Y.makeTranslation(-Gr.x,-Gr.y,-Gr.z),jd.multiplyMatrices(I.projectionMatrix,I.matrixWorldInverse),P._frustum.setFromProjectionMatrix(jd,I.coordinateSystem,I.reversedDepth)}if(P.map.isWebGLCubeRenderTarget)s.setRenderTarget(P.map,X),s.clear();else{X===0&&(s.setRenderTarget(P.map),s.clear());let I=P.getViewport(X);a.set(r.x*I.x,r.y*I.y,r.x*I.z,r.y*I.w),W.viewport(a)}i=P.getFrustum(X),b(F,S,w,C,this.type)}P.isPointLightShadow!==!0&&this.type===Is&&E(P,S),P.needsUpdate=!1}g=this.type,m.needsUpdate=!1,s.setRenderTarget(R,B,z)};function E(M,F){let S=t.update(y);u.defines.VSM_SAMPLES!==M.blurSamples&&(u.defines.VSM_SAMPLES=M.blurSamples,f.defines.VSM_SAMPLES=M.blurSamples,u.needsUpdate=!0,f.needsUpdate=!0),M.mapPass===null?M.mapPass=new Ie(n.x,n.y,{format:An,type:Si}):(M.mapPass.width!==M.map.width||M.mapPass.height!==M.map.height)&&M.mapPass.setSize(M.map.width,M.map.height),u.uniforms.shadow_pass.value=M.map.depthTexture,u.uniforms.resolution.value.set(M.map.width,M.map.height),u.uniforms.radius.value=M.radius,s.setRenderTarget(M.mapPass),s.clear(),s.renderBufferDirect(F,null,S,u,y,null),f.uniforms.shadow_pass.value=M.mapPass.texture,f.uniforms.resolution.value.set(M.map.width,M.map.height),f.uniforms.radius.value=M.radius,s.setRenderTarget(M.map),s.clear(),s.renderBufferDirect(F,null,S,f,y,null)}function L(M,F,S,R){let B=null,z=S.isPointLight===!0?M.customDistanceMaterial:M.customDepthMaterial;if(z!==void 0)B=z;else if(B=S.isPointLight===!0?l:o,s.localClippingEnabled&&F.clipShadows===!0&&Array.isArray(F.clippingPlanes)&&F.clippingPlanes.length!==0||F.displacementMap&&F.displacementScale!==0||F.alphaMap&&F.alphaTest>0||F.map&&F.alphaTest>0||F.alphaToCoverage===!0){let W=B.uuid,$=F.uuid,V=c[W];V===void 0&&(V={},c[W]=V);let _=V[$];_===void 0&&(_=B.clone(),V[$]=_,F.addEventListener("dispose",T)),B=_}if(B.visible=F.visible,B.wireframe=F.wireframe,R===Is?B.side=F.shadowSide!==null?F.shadowSide:F.side:B.side=F.shadowSide!==null?F.shadowSide:d[F.side],B.alphaMap=F.alphaMap,B.alphaTest=F.alphaToCoverage===!0?.5:F.alphaTest,B.map=F.map,B.clipShadows=F.clipShadows,B.clippingPlanes=F.clippingPlanes,B.clipIntersection=F.clipIntersection,B.displacementMap=F.displacementMap,B.displacementScale=F.displacementScale,B.displacementBias=F.displacementBias,B.wireframeLinewidth=F.wireframeLinewidth,B.linewidth=F.linewidth,S.isPointLight===!0&&B.isMeshDistanceMaterial===!0){let W=s.properties.get(B);W.light=S}return B}function b(M,F,S,R,B){if(M.visible===!1)return;if(M.layers.test(F.layers)&&(M.isMesh||M.isLine||M.isPoints)&&(M.castShadow||M.receiveShadow&&B===Is)&&(!M.frustumCulled||M.intersectsFrustum(i))){M.modelViewMatrix.multiplyMatrices(S.matrixWorldInverse,M.matrixWorld);let $=t.update(M),V=M.material;if(Array.isArray(V)){let _=$.groups;for(let C=0,P=_.length;C<P;C++){let k=_[C],D=V[k.materialIndex];if(D&&D.visible){let G=L(M,D,R,B);M.onBeforeShadow(s,M,F,S,$,G,k),s.renderBufferDirect(S,null,$,G,M,k),M.onAfterShadow(s,M,F,S,$,G,k)}}}else if(V.visible){let _=L(M,V,R,B);M.onBeforeShadow(s,M,F,S,$,_,null),s.renderBufferDirect(S,null,$,_,M,null),M.onAfterShadow(s,M,F,S,$,_,null)}}let W=M.children;for(let $=0,V=W.length;$<V;$++)b(W[$],F,S,R,B)}function T(M){M.target.removeEventListener("dispose",T);for(let S in c){let R=c[S],B=M.target.uuid;B in R&&(R[B].dispose(),delete R[B])}}}function Gy(s,t){function e(){let O=!1,pt=new he,st=null,mt=new he(0,0,0,0);return{setMask:function(vt){st!==vt&&!O&&(s.colorMask(vt,vt,vt,vt),st=vt)},setLocked:function(vt){O=vt},setClear:function(vt,ot,It,Et,le){le===!0&&(vt*=Et,ot*=Et,It*=Et),pt.set(vt,ot,It,Et),mt.equals(pt)===!1&&(s.clearColor(vt,ot,It,Et),mt.copy(pt))},reset:function(){O=!1,st=null,mt.set(-1,0,0,0)}}}function i(){let O=!1,pt=!1,st=null,mt=null,vt=null;return{setReversed:function(ot){if(pt!==ot){let It=t.get("EXT_clip_control");ot?It.clipControlEXT(It.LOWER_LEFT_EXT,It.ZERO_TO_ONE_EXT):It.clipControlEXT(It.LOWER_LEFT_EXT,It.NEGATIVE_ONE_TO_ONE_EXT),pt=ot;let Et=vt;vt=null,this.setClear(Et)}},getReversed:function(){return pt},setTest:function(ot){ot?et(s.DEPTH_TEST):ct(s.DEPTH_TEST)},setMask:function(ot){st!==ot&&!O&&(s.depthMask(ot),st=ot)},setFunc:function(ot){if(pt&&(ot=Ad[ot]),mt!==ot){switch(ot){case io:s.depthFunc(s.NEVER);break;case no:s.depthFunc(s.ALWAYS);break;case so:s.depthFunc(s.LESS);break;case Ts:s.depthFunc(s.LEQUAL);break;case ro:s.depthFunc(s.EQUAL);break;case ao:s.depthFunc(s.GEQUAL);break;case oo:s.depthFunc(s.GREATER);break;case lo:s.depthFunc(s.NOTEQUAL);break;default:s.depthFunc(s.LEQUAL)}mt=ot}},setLocked:function(ot){O=ot},setClear:function(ot){vt!==ot&&(vt=ot,pt&&(ot=1-ot),s.clearDepth(ot))},reset:function(){O=!1,st=null,mt=null,vt=null,pt=!1}}}function n(){let O=!1,pt=null,st=null,mt=null,vt=null,ot=null,It=null,Et=null,le=null;return{setTest:function(Qt){O||(Qt?et(s.STENCIL_TEST):ct(s.STENCIL_TEST))},setMask:function(Qt){pt!==Qt&&!O&&(s.stencilMask(Qt),pt=Qt)},setFunc:function(Qt,di,Ai){(st!==Qt||mt!==di||vt!==Ai)&&(s.stencilFunc(Qt,di,Ai),st=Qt,mt=di,vt=Ai)},setOp:function(Qt,di,Ai){(ot!==Qt||It!==di||Et!==Ai)&&(s.stencilOp(Qt,di,Ai),ot=Qt,It=di,Et=Ai)},setLocked:function(Qt){O=Qt},setClear:function(Qt){le!==Qt&&(s.clearStencil(Qt),le=Qt)},reset:function(){O=!1,pt=null,st=null,mt=null,vt=null,ot=null,It=null,Et=null,le=null}}}let r=new e,a=new i,o=new n,l=new WeakMap,c=new WeakMap,h={},d={},u={},f=new WeakMap,p=[],y=null,m=!1,g=null,E=null,L=null,b=null,T=null,M=null,F=null,S=new qt(0,0,0),R=0,B=!1,z=null,W=null,$=null,V=null,_=null,C=s.getParameter(s.MAX_COMBINED_TEXTURE_IMAGE_UNITS),P=!1,k=0,D=s.getParameter(s.VERSION);D.indexOf("WebGL")!==-1?(k=parseFloat(/^WebGL (\d)/.exec(D)[1]),P=k>=1):D.indexOf("OpenGL ES")!==-1&&(k=parseFloat(/^OpenGL ES (\d)/.exec(D)[1]),P=k>=2);let G=null,X={},w=s.getParameter(s.SCISSOR_BOX),I=s.getParameter(s.VIEWPORT),Y=new he().fromArray(w),j=new he().fromArray(I);function at(O,pt,st,mt){let vt=new Uint8Array(4),ot=s.createTexture();s.bindTexture(O,ot),s.texParameteri(O,s.TEXTURE_MIN_FILTER,s.NEAREST),s.texParameteri(O,s.TEXTURE_MAG_FILTER,s.NEAREST);for(let It=0;It<st;It++)O===s.TEXTURE_3D||O===s.TEXTURE_2D_ARRAY?s.texImage3D(pt,0,s.RGBA,1,1,mt,0,s.RGBA,s.UNSIGNED_BYTE,vt):s.texImage2D(pt+It,0,s.RGBA,1,1,0,s.RGBA,s.UNSIGNED_BYTE,vt);return ot}let q={};q[s.TEXTURE_2D]=at(s.TEXTURE_2D,s.TEXTURE_2D,1),q[s.TEXTURE_CUBE_MAP]=at(s.TEXTURE_CUBE_MAP,s.TEXTURE_CUBE_MAP_POSITIVE_X,6),q[s.TEXTURE_2D_ARRAY]=at(s.TEXTURE_2D_ARRAY,s.TEXTURE_2D_ARRAY,1,1),q[s.TEXTURE_3D]=at(s.TEXTURE_3D,s.TEXTURE_3D,1,1),r.setClear(0,0,0,1),a.setClear(1),o.setClear(0),et(s.DEPTH_TEST),a.setFunc(Ts),Nt(!1),Zt(eh),et(s.CULL_FACE),zt(qe);function et(O){h[O]!==!0&&(s.enable(O),h[O]=!0)}function ct(O){h[O]!==!1&&(s.disable(O),h[O]=!1)}function Mt(O,pt){return u[O]!==pt?(s.bindFramebuffer(O,pt),u[O]=pt,O===s.DRAW_FRAMEBUFFER&&(u[s.FRAMEBUFFER]=pt),O===s.FRAMEBUFFER&&(u[s.DRAW_FRAMEBUFFER]=pt),!0):!1}function ut(O,pt){let st=p,mt=!1;if(O){st=f.get(pt),st===void 0&&(st=[],f.set(pt,st));let vt=O.textures;if(st.length!==vt.length||st[0]!==s.COLOR_ATTACHMENT0){for(let ot=0,It=vt.length;ot<It;ot++)st[ot]=s.COLOR_ATTACHMENT0+ot;st.length=vt.length,mt=!0}}else st[0]!==s.BACK&&(st[0]=s.BACK,mt=!0);mt&&s.drawBuffers(st)}function Lt(O){return y!==O?(s.useProgram(O),y=O,!0):!1}let Vt={[ji]:s.FUNC_ADD,[sd]:s.FUNC_SUBTRACT,[rd]:s.FUNC_REVERSE_SUBTRACT};Vt[ad]=s.MIN,Vt[od]=s.MAX;let Dt={[Cr]:s.ZERO,[Rr]:s.ONE,[Fo]:s.SRC_COLOR,[Ir]:s.SRC_ALPHA,[Bo]:s.SRC_ALPHA_SATURATE,[Oo]:s.DST_COLOR,[No]:s.DST_ALPHA,[Do]:s.ONE_MINUS_SRC_COLOR,[Pr]:s.ONE_MINUS_SRC_ALPHA,[ko]:s.ONE_MINUS_DST_COLOR,[Uo]:s.ONE_MINUS_DST_ALPHA,[ld]:s.CONSTANT_COLOR,[cd]:s.ONE_MINUS_CONSTANT_COLOR,[hd]:s.CONSTANT_ALPHA,[ud]:s.ONE_MINUS_CONSTANT_ALPHA};function zt(O,pt,st,mt,vt,ot,It,Et,le,Qt){if(O===qe){m===!0&&(ct(s.BLEND),m=!1);return}if(m===!1&&(et(s.BLEND),m=!0),O!==Lo){if(O!==g||Qt!==B){if((E!==ji||T!==ji)&&(s.blendEquation(s.FUNC_ADD),E=ji,T=ji),Qt)switch(O){case Ps:s.blendFuncSeparate(s.ONE,s.ONE_MINUS_SRC_ALPHA,s.ONE,s.ONE_MINUS_SRC_ALPHA);break;case ih:s.blendFunc(s.ONE,s.ONE);break;case nh:s.blendFuncSeparate(s.ZERO,s.ONE_MINUS_SRC_COLOR,s.ZERO,s.ONE);break;case sh:s.blendFuncSeparate(s.DST_COLOR,s.ONE_MINUS_SRC_ALPHA,s.ZERO,s.ONE);break;default:Ut("WebGLState: Invalid blending: ",O);break}else switch(O){case Ps:s.blendFuncSeparate(s.SRC_ALPHA,s.ONE_MINUS_SRC_ALPHA,s.ONE,s.ONE_MINUS_SRC_ALPHA);break;case ih:s.blendFuncSeparate(s.SRC_ALPHA,s.ONE,s.ONE,s.ONE);break;case nh:Ut("WebGLState: SubtractiveBlending requires material.premultipliedAlpha = true");break;case sh:Ut("WebGLState: MultiplyBlending requires material.premultipliedAlpha = true");break;default:Ut("WebGLState: Invalid blending: ",O);break}L=null,b=null,M=null,F=null,S.set(0,0,0),R=0,g=O,B=Qt}return}vt=vt||pt,ot=ot||st,It=It||mt,(pt!==E||vt!==T)&&(s.blendEquationSeparate(Vt[pt],Vt[vt]),E=pt,T=vt),(st!==L||mt!==b||ot!==M||It!==F)&&(s.blendFuncSeparate(Dt[st],Dt[mt],Dt[ot],Dt[It]),L=st,b=mt,M=ot,F=It),(Et.equals(S)===!1||le!==R)&&(s.blendColor(Et.r,Et.g,Et.b,le),S.copy(Et),R=le),g=O,B=!1}function Bt(O,pt){O.side===Ui?ct(s.CULL_FACE):et(s.CULL_FACE);let st=O.side===Pe;pt&&(st=!st),Nt(st),O.blending===Ps&&O.transparent===!1?zt(qe):zt(O.blending,O.blendEquation,O.blendSrc,O.blendDst,O.blendEquationAlpha,O.blendSrcAlpha,O.blendDstAlpha,O.blendColor,O.blendAlpha,O.premultipliedAlpha),a.setFunc(O.depthFunc),a.setTest(O.depthTest),a.setMask(O.depthWrite),r.setMask(O.colorWrite);let mt=O.stencilWrite;o.setTest(mt),mt&&(o.setMask(O.stencilWriteMask),o.setFunc(O.stencilFunc,O.stencilRef,O.stencilFuncMask),o.setOp(O.stencilFail,O.stencilZFail,O.stencilZPass)),xe(O.polygonOffset,O.polygonOffsetFactor,O.polygonOffsetUnits),O.alphaToCoverage===!0?et(s.SAMPLE_ALPHA_TO_COVERAGE):ct(s.SAMPLE_ALPHA_TO_COVERAGE)}function Nt(O){z!==O&&(O?s.frontFace(s.CW):s.frontFace(s.CCW),z=O)}function Zt(O){O!==ed?(et(s.CULL_FACE),O!==W&&(O===eh?s.cullFace(s.BACK):O===id?s.cullFace(s.FRONT):s.cullFace(s.FRONT_AND_BACK))):ct(s.CULL_FACE),W=O}function Jt(O){O!==$&&(P&&s.lineWidth(O),$=O)}function xe(O,pt,st){O?(et(s.POLYGON_OFFSET_FILL),(V!==pt||_!==st)&&(V=pt,_=st,a.getReversed()&&(pt=-pt),s.polygonOffset(pt,st))):ct(s.POLYGON_OFFSET_FILL)}function ne(O){O?et(s.SCISSOR_TEST):ct(s.SCISSOR_TEST)}function pe(O){O===void 0&&(O=s.TEXTURE0+C-1),G!==O&&(s.activeTexture(O),G=O)}function U(O,pt,st){st===void 0&&(G===null?st=s.TEXTURE0+C-1:st=G);let mt=X[st];mt===void 0&&(mt={type:void 0,texture:void 0},X[st]=mt),(mt.type!==O||mt.texture!==pt)&&(G!==st&&(s.activeTexture(st),G=st),s.bindTexture(O,pt||q[O]),mt.type=O,mt.texture=pt)}function Me(){let O=X[G];O!==void 0&&O.type!==void 0&&(s.bindTexture(O.type,null),O.type=void 0,O.texture=void 0)}function ie(){try{s.compressedTexImage2D(...arguments)}catch(O){Ut("WebGLState:",O)}}function A(){try{s.compressedTexImage3D(...arguments)}catch(O){Ut("WebGLState:",O)}}function x(){try{s.texSubImage2D(...arguments)}catch(O){Ut("WebGLState:",O)}}function H(){try{s.texSubImage3D(...arguments)}catch(O){Ut("WebGLState:",O)}}function J(){try{s.compressedTexSubImage2D(...arguments)}catch(O){Ut("WebGLState:",O)}}function it(){try{s.compressedTexSubImage3D(...arguments)}catch(O){Ut("WebGLState:",O)}}function lt(){try{s.texStorage2D(...arguments)}catch(O){Ut("WebGLState:",O)}}function ht(){try{s.texStorage3D(...arguments)}catch(O){Ut("WebGLState:",O)}}function nt(){try{s.texImage2D(...arguments)}catch(O){Ut("WebGLState:",O)}}function rt(){try{s.texImage3D(...arguments)}catch(O){Ut("WebGLState:",O)}}function dt(O){return d[O]!==void 0?d[O]:s.getParameter(O)}function Ct(O,pt){d[O]!==pt&&(s.pixelStorei(O,pt),d[O]=pt)}function gt(O){Y.equals(O)===!1&&(s.scissor(O.x,O.y,O.z,O.w),Y.copy(O))}function ft(O){j.equals(O)===!1&&(s.viewport(O.x,O.y,O.z,O.w),j.copy(O))}function Rt(O,pt){let st=c.get(pt);st===void 0&&(st=new WeakMap,c.set(pt,st));let mt=st.get(O);mt===void 0&&(mt=s.getUniformBlockIndex(pt,O.name),st.set(O,mt))}function Pt(O,pt){let mt=c.get(pt).get(O);l.get(pt)!==mt&&(s.uniformBlockBinding(pt,mt,O.__bindingPointIndex),l.set(pt,mt))}function kt(){s.disable(s.BLEND),s.disable(s.CULL_FACE),s.disable(s.DEPTH_TEST),s.disable(s.POLYGON_OFFSET_FILL),s.disable(s.SCISSOR_TEST),s.disable(s.STENCIL_TEST),s.disable(s.SAMPLE_ALPHA_TO_COVERAGE),s.blendEquation(s.FUNC_ADD),s.blendFunc(s.ONE,s.ZERO),s.blendFuncSeparate(s.ONE,s.ZERO,s.ONE,s.ZERO),s.blendColor(0,0,0,0),s.colorMask(!0,!0,!0,!0),s.clearColor(0,0,0,0),s.depthMask(!0),s.depthFunc(s.LESS),a.setReversed(!1),s.clearDepth(1),s.stencilMask(4294967295),s.stencilFunc(s.ALWAYS,0,4294967295),s.stencilOp(s.KEEP,s.KEEP,s.KEEP),s.clearStencil(0),s.cullFace(s.BACK),s.frontFace(s.CCW),s.polygonOffset(0,0),s.activeTexture(s.TEXTURE0),s.bindFramebuffer(s.FRAMEBUFFER,null),s.bindFramebuffer(s.DRAW_FRAMEBUFFER,null),s.bindFramebuffer(s.READ_FRAMEBUFFER,null),s.useProgram(null),s.lineWidth(1),s.scissor(0,0,s.canvas.width,s.canvas.height),s.viewport(0,0,s.canvas.width,s.canvas.height),s.pixelStorei(s.PACK_ALIGNMENT,4),s.pixelStorei(s.UNPACK_ALIGNMENT,4),s.pixelStorei(s.UNPACK_FLIP_Y_WEBGL,!1),s.pixelStorei(s.UNPACK_PREMULTIPLY_ALPHA_WEBGL,!1),s.pixelStorei(s.UNPACK_COLORSPACE_CONVERSION_WEBGL,s.BROWSER_DEFAULT_WEBGL),s.pixelStorei(s.PACK_ROW_LENGTH,0),s.pixelStorei(s.PACK_SKIP_PIXELS,0),s.pixelStorei(s.PACK_SKIP_ROWS,0),s.pixelStorei(s.UNPACK_ROW_LENGTH,0),s.pixelStorei(s.UNPACK_IMAGE_HEIGHT,0),s.pixelStorei(s.UNPACK_SKIP_PIXELS,0),s.pixelStorei(s.UNPACK_SKIP_ROWS,0),s.pixelStorei(s.UNPACK_SKIP_IMAGES,0),h={},d={},G=null,X={},u={},f=new WeakMap,p=[],y=null,m=!1,g=null,E=null,L=null,b=null,T=null,M=null,F=null,S=new qt(0,0,0),R=0,B=!1,z=null,W=null,$=null,V=null,_=null,Y.set(0,0,s.canvas.width,s.canvas.height),j.set(0,0,s.canvas.width,s.canvas.height),r.reset(),a.reset(),o.reset()}return{buffers:{color:r,depth:a,stencil:o},enable:et,disable:ct,bindFramebuffer:Mt,drawBuffers:ut,useProgram:Lt,setBlending:zt,setMaterial:Bt,setFlipSided:Nt,setCullFace:Zt,setLineWidth:Jt,setPolygonOffset:xe,setScissorTest:ne,activeTexture:pe,bindTexture:U,unbindTexture:Me,compressedTexImage2D:ie,compressedTexImage3D:A,texImage2D:nt,texImage3D:rt,pixelStorei:Ct,getParameter:dt,updateUBOMapping:Rt,uniformBlockBinding:Pt,texStorage2D:lt,texStorage3D:ht,texSubImage2D:x,texSubImage3D:H,compressedTexSubImage2D:J,compressedTexSubImage3D:it,scissor:gt,viewport:ft,reset:kt}}function Hy(s,t,e,i,n,r,a){let o=t.has("WEBGL_multisampled_render_to_texture")?t.get("WEBGL_multisampled_render_to_texture"):null,l=typeof navigator>"u"?!1:/OculusBrowser/g.test(navigator.userAgent),c=new Wt,h=new WeakMap,d=new Set,u,f=new WeakMap,p=!1;try{p=typeof OffscreenCanvas<"u"&&new OffscreenCanvas(1,1).getContext("2d")!==null}catch{}function y(A,x){return p?new OffscreenCanvas(A,x):pr("canvas")}function m(A,x,H){let J=1,it=ie(A);if((it.width>H||it.height>H)&&(J=H/Math.max(it.width,it.height)),J<1)if(typeof HTMLImageElement<"u"&&A instanceof HTMLImageElement||typeof HTMLCanvasElement<"u"&&A instanceof HTMLCanvasElement||typeof ImageBitmap<"u"&&A instanceof ImageBitmap||typeof VideoFrame<"u"&&A instanceof VideoFrame){let lt=Math.floor(J*it.width),ht=Math.floor(J*it.height);u===void 0&&(u=y(lt,ht));let nt=x?y(lt,ht):u;return nt.width=lt,nt.height=ht,nt.getContext("2d").drawImage(A,0,0,lt,ht),Ft("WebGLRenderer: Texture has been resized from ("+it.width+"x"+it.height+") to ("+lt+"x"+ht+")."),nt}else return"data"in A&&Ft("WebGLRenderer: Image in DataTexture is too big ("+it.width+"x"+it.height+")."),A;return A}function g(A){return A.generateMipmaps}function E(A){s.generateMipmap(A)}function L(A){return A.isWebGLCubeRenderTarget?s.TEXTURE_CUBE_MAP:A.isWebGL3DRenderTarget?s.TEXTURE_3D:A.isWebGLArrayRenderTarget||A.isCompressedArrayTexture?s.TEXTURE_2D_ARRAY:s.TEXTURE_2D}function b(A,x,H,J,it,lt=!1){if(A!==null){if(s[A]!==void 0)return s[A];Ft("WebGLRenderer: Attempt to use non-existing WebGL internal format '"+A+"'")}let ht;J&&(ht=t.get("EXT_texture_norm16"),ht||Ft("WebGLRenderer: Unable to use normalized textures without EXT_texture_norm16 extension"));let nt=x;if(x===s.RED&&(H===s.FLOAT&&(nt=s.R32F),H===s.HALF_FLOAT&&(nt=s.R16F),H===s.UNSIGNED_BYTE&&(nt=s.R8),H===s.UNSIGNED_SHORT&&ht&&(nt=ht.R16_EXT),H===s.SHORT&&ht&&(nt=ht.R16_SNORM_EXT)),x===s.RED_INTEGER&&(H===s.UNSIGNED_BYTE&&(nt=s.R8UI),H===s.UNSIGNED_SHORT&&(nt=s.R16UI),H===s.UNSIGNED_INT&&(nt=s.R32UI),H===s.BYTE&&(nt=s.R8I),H===s.SHORT&&(nt=s.R16I),H===s.INT&&(nt=s.R32I)),x===s.RG&&(H===s.FLOAT&&(nt=s.RG32F),H===s.HALF_FLOAT&&(nt=s.RG16F),H===s.UNSIGNED_BYTE&&(nt=s.RG8),H===s.UNSIGNED_SHORT&&ht&&(nt=ht.RG16_EXT),H===s.SHORT&&ht&&(nt=ht.RG16_SNORM_EXT)),x===s.RG_INTEGER&&(H===s.UNSIGNED_BYTE&&(nt=s.RG8UI),H===s.UNSIGNED_SHORT&&(nt=s.RG16UI),H===s.UNSIGNED_INT&&(nt=s.RG32UI),H===s.BYTE&&(nt=s.RG8I),H===s.SHORT&&(nt=s.RG16I),H===s.INT&&(nt=s.RG32I)),x===s.RGB_INTEGER&&(H===s.UNSIGNED_BYTE&&(nt=s.RGB8UI),H===s.UNSIGNED_SHORT&&(nt=s.RGB16UI),H===s.UNSIGNED_INT&&(nt=s.RGB32UI),H===s.BYTE&&(nt=s.RGB8I),H===s.SHORT&&(nt=s.RGB16I),H===s.INT&&(nt=s.RGB32I)),x===s.RGBA_INTEGER&&(H===s.UNSIGNED_BYTE&&(nt=s.RGBA8UI),H===s.UNSIGNED_SHORT&&(nt=s.RGBA16UI),H===s.UNSIGNED_INT&&(nt=s.RGBA32UI),H===s.BYTE&&(nt=s.RGBA8I),H===s.SHORT&&(nt=s.RGBA16I),H===s.INT&&(nt=s.RGBA32I)),x===s.RGB&&(H===s.UNSIGNED_SHORT&&ht&&(nt=ht.RGB16_EXT),H===s.SHORT&&ht&&(nt=ht.RGB16_SNORM_EXT),H===s.UNSIGNED_INT_5_9_9_9_REV&&(nt=s.RGB9_E5),H===s.UNSIGNED_INT_10F_11F_11F_REV&&(nt=s.R11F_G11F_B10F)),x===s.RGBA){let rt=lt?dr:Yt.getTransfer(it);H===s.FLOAT&&(nt=s.RGBA32F),H===s.HALF_FLOAT&&(nt=s.RGBA16F),H===s.UNSIGNED_BYTE&&(nt=rt===ee?s.SRGB8_ALPHA8:s.RGBA8),H===s.UNSIGNED_SHORT&&ht&&(nt=ht.RGBA16_EXT),H===s.SHORT&&ht&&(nt=ht.RGBA16_SNORM_EXT),H===s.UNSIGNED_SHORT_4_4_4_4&&(nt=s.RGBA4),H===s.UNSIGNED_SHORT_5_5_5_1&&(nt=s.RGB5_A1)}return(nt===s.R16F||nt===s.R32F||nt===s.RG16F||nt===s.RG32F||nt===s.RGBA16F||nt===s.RGBA32F)&&t.get("EXT_color_buffer_float"),nt}function T(A,x){let H;return A?x===null||x===vi||x===Fs?H=s.DEPTH24_STENCIL8:x===ii?H=s.DEPTH32F_STENCIL8:x===Ls&&(H=s.DEPTH24_STENCIL8,Ft("DepthTexture: 16 bit depth attachment is not supported with stencil. Using 24-bit attachment.")):x===null||x===vi||x===Fs?H=s.DEPTH_COMPONENT24:x===ii?H=s.DEPTH_COMPONENT32F:x===Ls&&(H=s.DEPTH_COMPONENT16),H}function M(A,x){return g(A)===!0||A.isFramebufferTexture&&A.minFilter!==oe&&A.minFilter!==fe?Math.log2(Math.max(x.width,x.height))+1:A.mipmaps!==void 0&&A.mipmaps.length>0?A.mipmaps.length:A.isCompressedTexture&&Array.isArray(A.image)?x.mipmaps.length:1}function F(A){let x=A.target;x.removeEventListener("dispose",F),R(x),x.isVideoTexture&&h.delete(x),x.isHTMLTexture&&d.delete(x)}function S(A){let x=A.target;x.removeEventListener("dispose",S),z(x)}function R(A){let x=i.get(A);if(x.__webglInit===void 0)return;let H=A.source,J=f.get(H);if(J){let it=J[x.__cacheKey];it.usedTimes--,it.usedTimes===0&&B(A),Object.keys(J).length===0&&f.delete(H)}i.remove(A)}function B(A){let x=i.get(A);s.deleteTexture(x.__webglTexture);let H=A.source,J=f.get(H);delete J[x.__cacheKey],a.memory.textures--}function z(A){let x=i.get(A);if(A.depthTexture&&(A.depthTexture.dispose(),i.remove(A.depthTexture)),A.isWebGLCubeRenderTarget)for(let J=0;J<6;J++){if(Array.isArray(x.__webglFramebuffer[J]))for(let it=0;it<x.__webglFramebuffer[J].length;it++)s.deleteFramebuffer(x.__webglFramebuffer[J][it]);else s.deleteFramebuffer(x.__webglFramebuffer[J]);x.__webglDepthbuffer&&s.deleteRenderbuffer(x.__webglDepthbuffer[J])}else{if(Array.isArray(x.__webglFramebuffer))for(let J=0;J<x.__webglFramebuffer.length;J++)s.deleteFramebuffer(x.__webglFramebuffer[J]);else s.deleteFramebuffer(x.__webglFramebuffer);if(x.__webglDepthbuffer&&s.deleteRenderbuffer(x.__webglDepthbuffer),x.__webglMultisampledFramebuffer&&s.deleteFramebuffer(x.__webglMultisampledFramebuffer),x.__webglColorRenderbuffer)for(let J=0;J<x.__webglColorRenderbuffer.length;J++)x.__webglColorRenderbuffer[J]&&s.deleteRenderbuffer(x.__webglColorRenderbuffer[J]);x.__webglDepthRenderbuffer&&s.deleteRenderbuffer(x.__webglDepthRenderbuffer)}let H=A.textures;for(let J=0,it=H.length;J<it;J++){let lt=i.get(H[J]);lt.__webglTexture&&(s.deleteTexture(lt.__webglTexture),a.memory.textures--),i.remove(H[J])}i.remove(A)}let W=0;function $(){W=0}function V(){return W}function _(A){W=A}function C(){let A=W;return A>=n.maxTextures&&Ft("WebGLTextures: Trying to use "+(A+1)+" texture units while this GPU supports only "+n.maxTextures),W+=1,A}function P(A){let x=[];return x.push(A.wrapS),x.push(A.wrapT),x.push(A.wrapR||0),x.push(A.magFilter),x.push(A.minFilter),x.push(A.anisotropy),x.push(A.internalFormat),x.push(A.format),x.push(A.type),x.push(A.generateMipmaps),x.push(A.premultiplyAlpha),x.push(A.flipY),x.push(A.unpackAlignment),x.push(A.colorSpace),x.join()}function k(A,x){let H=i.get(A);if(A.isVideoTexture&&U(A),A.isRenderTargetTexture===!1&&A.isExternalTexture!==!0&&A.version>0&&H.__version!==A.version){let J=A.image;if(J===null)Ft("WebGLRenderer: Texture marked for update but no image data found.");else if(J.complete===!1)Ft("WebGLRenderer: Texture marked for update but image is incomplete");else{ct(H,A,x);return}}else A.isExternalTexture&&(H.__webglTexture=A.sourceTexture?A.sourceTexture:null);e.bindTexture(s.TEXTURE_2D,H.__webglTexture,s.TEXTURE0+x)}function D(A,x){let H=i.get(A);if(A.isRenderTargetTexture===!1&&A.version>0&&H.__version!==A.version){ct(H,A,x);return}else A.isExternalTexture&&(H.__webglTexture=A.sourceTexture?A.sourceTexture:null);e.bindTexture(s.TEXTURE_2D_ARRAY,H.__webglTexture,s.TEXTURE0+x)}function G(A,x){let H=i.get(A);if(A.isRenderTargetTexture===!1&&A.version>0&&H.__version!==A.version){ct(H,A,x);return}e.bindTexture(s.TEXTURE_3D,H.__webglTexture,s.TEXTURE0+x)}function X(A,x){let H=i.get(A);if(A.isCubeDepthTexture!==!0&&A.version>0&&H.__version!==A.version){Mt(H,A,x);return}e.bindTexture(s.TEXTURE_CUBE_MAP,H.__webglTexture,s.TEXTURE0+x)}let w={[qn]:s.REPEAT,[Li]:s.CLAMP_TO_EDGE,[co]:s.MIRRORED_REPEAT},I={[oe]:s.NEAREST,[pd]:s.NEAREST_MIPMAP_NEAREST,[Fr]:s.NEAREST_MIPMAP_LINEAR,[fe]:s.LINEAR,[Go]:s.LINEAR_MIPMAP_NEAREST,[Tn]:s.LINEAR_MIPMAP_LINEAR},Y={[yd]:s.NEVER,[Md]:s.ALWAYS,[_d]:s.LESS,[Tl]:s.LEQUAL,[vd]:s.EQUAL,[El]:s.GEQUAL,[Sd]:s.GREATER,[bd]:s.NOTEQUAL};function j(A,x){if(x.type===ii&&t.has("OES_texture_float_linear")===!1&&(x.magFilter===fe||x.magFilter===Go||x.magFilter===Fr||x.magFilter===Tn||x.minFilter===fe||x.minFilter===Go||x.minFilter===Fr||x.minFilter===Tn)&&Ft("WebGLRenderer: Unable to use linear filtering with floating point textures. OES_texture_float_linear not supported on this device."),s.texParameteri(A,s.TEXTURE_WRAP_S,w[x.wrapS]),s.texParameteri(A,s.TEXTURE_WRAP_T,w[x.wrapT]),(A===s.TEXTURE_3D||A===s.TEXTURE_2D_ARRAY)&&s.texParameteri(A,s.TEXTURE_WRAP_R,w[x.wrapR]),s.texParameteri(A,s.TEXTURE_MAG_FILTER,I[x.magFilter]),s.texParameteri(A,s.TEXTURE_MIN_FILTER,I[x.minFilter]),x.compareFunction&&(s.texParameteri(A,s.TEXTURE_COMPARE_MODE,s.COMPARE_REF_TO_TEXTURE),s.texParameteri(A,s.TEXTURE_COMPARE_FUNC,Y[x.compareFunction])),t.has("EXT_texture_filter_anisotropic")===!0){if(x.magFilter===oe||x.minFilter!==Fr&&x.minFilter!==Tn||x.type===ii&&t.has("OES_texture_float_linear")===!1)return;if(x.anisotropy>1||i.get(x).__currentAnisotropy){let H=t.get("EXT_texture_filter_anisotropic");s.texParameterf(A,H.TEXTURE_MAX_ANISOTROPY_EXT,Math.min(x.anisotropy,n.getMaxAnisotropy())),i.get(x).__currentAnisotropy=x.anisotropy}}}function at(A,x){let H=!1;A.__webglInit===void 0&&(A.__webglInit=!0,x.addEventListener("dispose",F));let J=x.source,it=f.get(J);it===void 0&&(it={},f.set(J,it));let lt=P(x);if(lt!==A.__cacheKey){it[lt]===void 0&&(it[lt]={texture:s.createTexture(),usedTimes:0},a.memory.textures++,H=!0),it[lt].usedTimes++;let ht=it[A.__cacheKey];ht!==void 0&&(it[A.__cacheKey].usedTimes--,ht.usedTimes===0&&B(x)),A.__cacheKey=lt,A.__webglTexture=it[lt].texture}return H}function q(A,x,H){return Math.floor(Math.floor(A/H)/x)}function et(A,x,H,J){let lt=A.updateRanges;if(lt.length===0)e.texSubImage2D(s.TEXTURE_2D,0,0,0,x.width,x.height,H,J,x.data);else{lt.sort((Ct,gt)=>Ct.start-gt.start);let ht=0;for(let Ct=1;Ct<lt.length;Ct++){let gt=lt[ht],ft=lt[Ct],Rt=gt.start+gt.count,Pt=q(ft.start,x.width,4),kt=q(gt.start,x.width,4);ft.start<=Rt+1&&Pt===kt&&q(ft.start+ft.count-1,x.width,4)===Pt?gt.count=Math.max(gt.count,ft.start+ft.count-gt.start):(++ht,lt[ht]=ft)}lt.length=ht+1;let nt=e.getParameter(s.UNPACK_ROW_LENGTH),rt=e.getParameter(s.UNPACK_SKIP_PIXELS),dt=e.getParameter(s.UNPACK_SKIP_ROWS);e.pixelStorei(s.UNPACK_ROW_LENGTH,x.width);for(let Ct=0,gt=lt.length;Ct<gt;Ct++){let ft=lt[Ct],Rt=Math.floor(ft.start/4),Pt=Math.ceil(ft.count/4),kt=Rt%x.width,O=Math.floor(Rt/x.width),pt=Pt,st=1;e.pixelStorei(s.UNPACK_SKIP_PIXELS,kt),e.pixelStorei(s.UNPACK_SKIP_ROWS,O),e.texSubImage2D(s.TEXTURE_2D,0,kt,O,pt,st,H,J,x.data)}A.clearUpdateRanges(),e.pixelStorei(s.UNPACK_ROW_LENGTH,nt),e.pixelStorei(s.UNPACK_SKIP_PIXELS,rt),e.pixelStorei(s.UNPACK_SKIP_ROWS,dt)}}function ct(A,x,H){let J=s.TEXTURE_2D;(x.isDataArrayTexture||x.isCompressedArrayTexture)&&(J=s.TEXTURE_2D_ARRAY),x.isData3DTexture&&(J=s.TEXTURE_3D);let it=at(A,x),lt=x.source;e.bindTexture(J,A.__webglTexture,s.TEXTURE0+H);let ht=i.get(lt);if(lt.version!==ht.__version||it===!0){if(e.activeTexture(s.TEXTURE0+H),(typeof ImageBitmap<"u"&&x.image instanceof ImageBitmap)===!1){let st=Yt.getPrimaries(Yt.workingColorSpace),mt=x.colorSpace===hi?null:Yt.getPrimaries(x.colorSpace),vt=x.colorSpace===hi||st===mt?s.NONE:s.BROWSER_DEFAULT_WEBGL;e.pixelStorei(s.UNPACK_FLIP_Y_WEBGL,x.flipY),e.pixelStorei(s.UNPACK_PREMULTIPLY_ALPHA_WEBGL,x.premultiplyAlpha),e.pixelStorei(s.UNPACK_COLORSPACE_CONVERSION_WEBGL,vt)}e.pixelStorei(s.UNPACK_ALIGNMENT,x.unpackAlignment);let rt=m(x.image,!1,n.maxTextureSize);rt=Me(x,rt);let dt=r.convert(x.format,x.colorSpace),Ct=r.convert(x.type),gt=b(x.internalFormat,dt,Ct,x.normalized,x.colorSpace,x.isVideoTexture);j(J,x);let ft,Rt=x.mipmaps,Pt=x.isVideoTexture!==!0,kt=ht.__version===void 0||it===!0,O=lt.dataReady,pt=M(x,rt);if(x.isDepthTexture)gt=T(x.format===En,x.type),kt&&(Pt?e.texStorage2D(s.TEXTURE_2D,1,gt,rt.width,rt.height):e.texImage2D(s.TEXTURE_2D,0,gt,rt.width,rt.height,0,dt,Ct,null));else if(x.isDataTexture)if(Rt.length>0){Pt&&kt&&e.texStorage2D(s.TEXTURE_2D,pt,gt,Rt[0].width,Rt[0].height);for(let st=0,mt=Rt.length;st<mt;st++)ft=Rt[st],Pt?O&&e.texSubImage2D(s.TEXTURE_2D,st,0,0,ft.width,ft.height,dt,Ct,ft.data):e.texImage2D(s.TEXTURE_2D,st,gt,ft.width,ft.height,0,dt,Ct,ft.data);x.generateMipmaps=!1}else Pt?(kt&&e.texStorage2D(s.TEXTURE_2D,pt,gt,rt.width,rt.height),O&&et(x,rt,dt,Ct)):e.texImage2D(s.TEXTURE_2D,0,gt,rt.width,rt.height,0,dt,Ct,rt.data);else if(x.isCompressedTexture)if(x.isCompressedArrayTexture){Pt&&kt&&e.texStorage3D(s.TEXTURE_2D_ARRAY,pt,gt,Rt[0].width,Rt[0].height,rt.depth);for(let st=0,mt=Rt.length;st<mt;st++)if(ft=Rt[st],x.format!==ke)if(dt!==null)if(Pt){if(O)if(x.layerUpdates.size>0){let vt=Th(ft.width,ft.height,x.format,x.type);for(let ot of x.layerUpdates){let It=ft.data.subarray(ot*vt/ft.data.BYTES_PER_ELEMENT,(ot+1)*vt/ft.data.BYTES_PER_ELEMENT);e.compressedTexSubImage3D(s.TEXTURE_2D_ARRAY,st,0,0,ot,ft.width,ft.height,1,dt,It)}}else e.compressedTexSubImage3D(s.TEXTURE_2D_ARRAY,st,0,0,0,ft.width,ft.height,rt.depth,dt,ft.data)}else e.compressedTexImage3D(s.TEXTURE_2D_ARRAY,st,gt,ft.width,ft.height,rt.depth,0,ft.data,0,0);else Ft("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()");else Pt?O&&e.texSubImage3D(s.TEXTURE_2D_ARRAY,st,0,0,0,ft.width,ft.height,rt.depth,dt,Ct,ft.data):e.texImage3D(s.TEXTURE_2D_ARRAY,st,gt,ft.width,ft.height,rt.depth,0,dt,Ct,ft.data);x.layerUpdates.size>0&&x.clearLayerUpdates()}else{Pt&&kt&&e.texStorage2D(s.TEXTURE_2D,pt,gt,Rt[0].width,Rt[0].height);for(let st=0,mt=Rt.length;st<mt;st++)ft=Rt[st],x.format!==ke?dt!==null?Pt?O&&e.compressedTexSubImage2D(s.TEXTURE_2D,st,0,0,ft.width,ft.height,dt,ft.data):e.compressedTexImage2D(s.TEXTURE_2D,st,gt,ft.width,ft.height,0,ft.data):Ft("WebGLRenderer: Attempt to load unsupported compressed texture format in .uploadTexture()"):Pt?O&&e.texSubImage2D(s.TEXTURE_2D,st,0,0,ft.width,ft.height,dt,Ct,ft.data):e.texImage2D(s.TEXTURE_2D,st,gt,ft.width,ft.height,0,dt,Ct,ft.data)}else if(x.isDataArrayTexture)if(Pt){if(kt&&e.texStorage3D(s.TEXTURE_2D_ARRAY,pt,gt,rt.width,rt.height,rt.depth),O)if(x.layerUpdates.size>0){let st=Th(rt.width,rt.height,x.format,x.type);for(let mt of x.layerUpdates){let vt=rt.data.subarray(mt*st/rt.data.BYTES_PER_ELEMENT,(mt+1)*st/rt.data.BYTES_PER_ELEMENT);e.texSubImage3D(s.TEXTURE_2D_ARRAY,0,0,0,mt,rt.width,rt.height,1,dt,Ct,vt)}x.clearLayerUpdates()}else e.texSubImage3D(s.TEXTURE_2D_ARRAY,0,0,0,0,rt.width,rt.height,rt.depth,dt,Ct,rt.data)}else e.texImage3D(s.TEXTURE_2D_ARRAY,0,gt,rt.width,rt.height,rt.depth,0,dt,Ct,rt.data);else if(x.isData3DTexture)Pt?(kt&&e.texStorage3D(s.TEXTURE_3D,pt,gt,rt.width,rt.height,rt.depth),O&&e.texSubImage3D(s.TEXTURE_3D,0,0,0,0,rt.width,rt.height,rt.depth,dt,Ct,rt.data)):e.texImage3D(s.TEXTURE_3D,0,gt,rt.width,rt.height,rt.depth,0,dt,Ct,rt.data);else if(x.isFramebufferTexture){if(kt)if(Pt)e.texStorage2D(s.TEXTURE_2D,pt,gt,rt.width,rt.height);else{let st=rt.width,mt=rt.height;for(let vt=0;vt<pt;vt++)e.texImage2D(s.TEXTURE_2D,vt,gt,st,mt,0,dt,Ct,null),st>>=1,mt>>=1}}else if(x.isHTMLTexture){if("texElementImage2D"in s){let st=s.canvas;if(st.hasAttribute("layoutsubtree")||st.setAttribute("layoutsubtree","true"),rt.parentNode!==st){st.appendChild(rt),d.add(x),st.onpaint=mt=>{let vt=mt.changedElements;for(let ot of d)vt.includes(ot.image)&&(ot.needsUpdate=!0)},st.requestPaint();return}if(s.texElementImage2D.length===3)s.texElementImage2D(s.TEXTURE_2D,s.RGBA8,rt);else{let vt=s.RGBA,ot=s.RGBA,It=s.UNSIGNED_BYTE;s.texElementImage2D(s.TEXTURE_2D,0,vt,ot,It,rt)}s.texParameteri(s.TEXTURE_2D,s.TEXTURE_MIN_FILTER,s.LINEAR),s.texParameteri(s.TEXTURE_2D,s.TEXTURE_WRAP_S,s.CLAMP_TO_EDGE),s.texParameteri(s.TEXTURE_2D,s.TEXTURE_WRAP_T,s.CLAMP_TO_EDGE)}}else if(Rt.length>0){if(Pt&&kt){let st=ie(Rt[0]);e.texStorage2D(s.TEXTURE_2D,pt,gt,st.width,st.height)}for(let st=0,mt=Rt.length;st<mt;st++)ft=Rt[st],Pt?O&&e.texSubImage2D(s.TEXTURE_2D,st,0,0,dt,Ct,ft):e.texImage2D(s.TEXTURE_2D,st,gt,dt,Ct,ft);x.generateMipmaps=!1}else if(Pt){if(kt){let st=ie(rt);e.texStorage2D(s.TEXTURE_2D,pt,gt,st.width,st.height)}O&&e.texSubImage2D(s.TEXTURE_2D,0,0,0,dt,Ct,rt)}else e.texImage2D(s.TEXTURE_2D,0,gt,dt,Ct,rt);g(x)&&E(J),ht.__version=lt.version,x.onUpdate&&x.onUpdate(x)}A.__version=x.version}function Mt(A,x,H){if(x.image.length!==6)return;let J=at(A,x),it=x.source;e.bindTexture(s.TEXTURE_CUBE_MAP,A.__webglTexture,s.TEXTURE0+H);let lt=i.get(it);if(it.version!==lt.__version||J===!0){e.activeTexture(s.TEXTURE0+H);let ht=Yt.getPrimaries(Yt.workingColorSpace),nt=x.colorSpace===hi?null:Yt.getPrimaries(x.colorSpace),rt=x.colorSpace===hi||ht===nt?s.NONE:s.BROWSER_DEFAULT_WEBGL;e.pixelStorei(s.UNPACK_FLIP_Y_WEBGL,x.flipY),e.pixelStorei(s.UNPACK_PREMULTIPLY_ALPHA_WEBGL,x.premultiplyAlpha),e.pixelStorei(s.UNPACK_ALIGNMENT,x.unpackAlignment),e.pixelStorei(s.UNPACK_COLORSPACE_CONVERSION_WEBGL,rt);let dt=x.isCompressedTexture||x.image[0].isCompressedTexture,Ct=x.image[0]&&x.image[0].isDataTexture,gt=[];for(let ot=0;ot<6;ot++)!dt&&!Ct?gt[ot]=m(x.image[ot],!0,n.maxCubemapSize):gt[ot]=Ct?x.image[ot].image:x.image[ot],gt[ot]=Me(x,gt[ot]);let ft=gt[0],Rt=r.convert(x.format,x.colorSpace),Pt=r.convert(x.type),kt=b(x.internalFormat,Rt,Pt,x.normalized,x.colorSpace),O=x.isVideoTexture!==!0,pt=lt.__version===void 0||J===!0,st=it.dataReady,mt=M(x,ft);j(s.TEXTURE_CUBE_MAP,x);let vt;if(dt){O&&pt&&e.texStorage2D(s.TEXTURE_CUBE_MAP,mt,kt,ft.width,ft.height);for(let ot=0;ot<6;ot++){vt=gt[ot].mipmaps;for(let It=0;It<vt.length;It++){let Et=vt[It];x.format!==ke?Rt!==null?O?st&&e.compressedTexSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It,0,0,Et.width,Et.height,Rt,Et.data):e.compressedTexImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It,kt,Et.width,Et.height,0,Et.data):Ft("WebGLRenderer: Attempt to load unsupported compressed texture format in .setTextureCube()"):O?st&&e.texSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It,0,0,Et.width,Et.height,Rt,Pt,Et.data):e.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It,kt,Et.width,Et.height,0,Rt,Pt,Et.data)}}}else{if(vt=x.mipmaps,O&&pt){vt.length>0&&mt++;let ot=ie(gt[0]);e.texStorage2D(s.TEXTURE_CUBE_MAP,mt,kt,ot.width,ot.height)}for(let ot=0;ot<6;ot++)if(Ct){O?st&&e.texSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,0,0,0,gt[ot].width,gt[ot].height,Rt,Pt,gt[ot].data):e.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,0,kt,gt[ot].width,gt[ot].height,0,Rt,Pt,gt[ot].data);for(let It=0;It<vt.length;It++){let le=vt[It].image[ot].image;O?st&&e.texSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It+1,0,0,le.width,le.height,Rt,Pt,le.data):e.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It+1,kt,le.width,le.height,0,Rt,Pt,le.data)}}else{O?st&&e.texSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,0,0,0,Rt,Pt,gt[ot]):e.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,0,kt,Rt,Pt,gt[ot]);for(let It=0;It<vt.length;It++){let Et=vt[It];O?st&&e.texSubImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It+1,0,0,Rt,Pt,Et.image[ot]):e.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ot,It+1,kt,Rt,Pt,Et.image[ot])}}}g(x)&&E(s.TEXTURE_CUBE_MAP),lt.__version=it.version,x.onUpdate&&x.onUpdate(x)}A.__version=x.version}function ut(A,x,H,J,it,lt){let ht=r.convert(H.format,H.colorSpace),nt=r.convert(H.type),rt=b(H.internalFormat,ht,nt,H.normalized,H.colorSpace),dt=i.get(x),Ct=i.get(H);if(Ct.__renderTarget=x,!dt.__hasExternalTextures){let gt=Math.max(1,x.width>>lt),ft=Math.max(1,x.height>>lt);it===s.TEXTURE_3D||it===s.TEXTURE_2D_ARRAY?e.texImage3D(it,lt,rt,gt,ft,x.depth,0,ht,nt,null):e.texImage2D(it,lt,rt,gt,ft,0,ht,nt,null)}e.bindFramebuffer(s.FRAMEBUFFER,A),pe(x)?o.framebufferTexture2DMultisampleEXT(s.FRAMEBUFFER,J,it,Ct.__webglTexture,0,ne(x)):(it===s.TEXTURE_2D||it>=s.TEXTURE_CUBE_MAP_POSITIVE_X&&it<=s.TEXTURE_CUBE_MAP_NEGATIVE_Z)&&s.framebufferTexture2D(s.FRAMEBUFFER,J,it,Ct.__webglTexture,lt),e.bindFramebuffer(s.FRAMEBUFFER,null)}function Lt(A,x,H){if(s.bindRenderbuffer(s.RENDERBUFFER,A),x.depthBuffer){let J=x.depthTexture,it=J&&J.isDepthTexture?J.type:null,lt=T(x.stencilBuffer,it),ht=x.stencilBuffer?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT;pe(x)?o.renderbufferStorageMultisampleEXT(s.RENDERBUFFER,ne(x),lt,x.width,x.height):H?s.renderbufferStorageMultisample(s.RENDERBUFFER,ne(x),lt,x.width,x.height):s.renderbufferStorage(s.RENDERBUFFER,lt,x.width,x.height),s.framebufferRenderbuffer(s.FRAMEBUFFER,ht,s.RENDERBUFFER,A)}else{let J=x.textures;for(let it=0;it<J.length;it++){let lt=J[it],ht=r.convert(lt.format,lt.colorSpace),nt=r.convert(lt.type),rt=b(lt.internalFormat,ht,nt,lt.normalized,lt.colorSpace);pe(x)?o.renderbufferStorageMultisampleEXT(s.RENDERBUFFER,ne(x),rt,x.width,x.height):H?s.renderbufferStorageMultisample(s.RENDERBUFFER,ne(x),rt,x.width,x.height):s.renderbufferStorage(s.RENDERBUFFER,rt,x.width,x.height)}}s.bindRenderbuffer(s.RENDERBUFFER,null)}function Vt(A,x,H){let J=x.isWebGLCubeRenderTarget===!0;if(e.bindFramebuffer(s.FRAMEBUFFER,A),!(x.depthTexture&&x.depthTexture.isDepthTexture))throw new Error("THREE.WebGLTextures: renderTarget.depthTexture must be an instance of THREE.DepthTexture.");let it=i.get(x.depthTexture);if(it.__renderTarget=x,(!it.__webglTexture||x.depthTexture.image.width!==x.width||x.depthTexture.image.height!==x.height)&&(x.depthTexture.image.width=x.width,x.depthTexture.image.height=x.height,x.depthTexture.needsUpdate=!0),J){if(it.__webglInit===void 0&&(it.__webglInit=!0,x.depthTexture.addEventListener("dispose",F)),it.__webglTexture===void 0){it.__webglTexture=s.createTexture(),e.bindTexture(s.TEXTURE_CUBE_MAP,it.__webglTexture),j(s.TEXTURE_CUBE_MAP,x.depthTexture);let dt=r.convert(x.depthTexture.format),Ct=r.convert(x.depthTexture.type),gt;x.depthTexture.format===Fi?gt=s.DEPTH_COMPONENT24:x.depthTexture.format===En&&(gt=s.DEPTH24_STENCIL8);for(let ft=0;ft<6;ft++)s.texImage2D(s.TEXTURE_CUBE_MAP_POSITIVE_X+ft,0,gt,x.width,x.height,0,dt,Ct,null)}}else k(x.depthTexture,0);let lt=it.__webglTexture,ht=ne(x),nt=J?s.TEXTURE_CUBE_MAP_POSITIVE_X+H:s.TEXTURE_2D,rt=x.depthTexture.format===En?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT;if(x.depthTexture.format===Fi)pe(x)?o.framebufferTexture2DMultisampleEXT(s.FRAMEBUFFER,rt,nt,lt,0,ht):s.framebufferTexture2D(s.FRAMEBUFFER,rt,nt,lt,0);else if(x.depthTexture.format===En)pe(x)?o.framebufferTexture2DMultisampleEXT(s.FRAMEBUFFER,rt,nt,lt,0,ht):s.framebufferTexture2D(s.FRAMEBUFFER,rt,nt,lt,0);else throw new Error("THREE.WebGLTextures: Unknown depthTexture format.")}function Dt(A){let x=i.get(A),H=A.isWebGLCubeRenderTarget===!0;if(x.__boundDepthTexture!==A.depthTexture){let J=A.depthTexture;if(x.__depthDisposeCallback&&x.__depthDisposeCallback(),J){let it=()=>{delete x.__boundDepthTexture,delete x.__depthDisposeCallback,J.removeEventListener("dispose",it)};J.addEventListener("dispose",it),x.__depthDisposeCallback=it}x.__boundDepthTexture=J}if(A.depthTexture&&!x.__autoAllocateDepthBuffer)if(H)for(let J=0;J<6;J++)Vt(x.__webglFramebuffer[J],A,J);else{let J=A.texture.mipmaps;J&&J.length>0?Vt(x.__webglFramebuffer[0],A,0):Vt(x.__webglFramebuffer,A,0)}else if(H){x.__webglDepthbuffer=[];for(let J=0;J<6;J++)if(e.bindFramebuffer(s.FRAMEBUFFER,x.__webglFramebuffer[J]),x.__webglDepthbuffer[J]===void 0)x.__webglDepthbuffer[J]=s.createRenderbuffer(),Lt(x.__webglDepthbuffer[J],A,!1);else{let it=A.stencilBuffer?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT,lt=x.__webglDepthbuffer[J];s.bindRenderbuffer(s.RENDERBUFFER,lt),s.framebufferRenderbuffer(s.FRAMEBUFFER,it,s.RENDERBUFFER,lt)}}else{let J=A.texture.mipmaps;if(J&&J.length>0?e.bindFramebuffer(s.FRAMEBUFFER,x.__webglFramebuffer[0]):e.bindFramebuffer(s.FRAMEBUFFER,x.__webglFramebuffer),x.__webglDepthbuffer===void 0)x.__webglDepthbuffer=s.createRenderbuffer(),Lt(x.__webglDepthbuffer,A,!1);else{let it=A.stencilBuffer?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT,lt=x.__webglDepthbuffer;s.bindRenderbuffer(s.RENDERBUFFER,lt),s.framebufferRenderbuffer(s.FRAMEBUFFER,it,s.RENDERBUFFER,lt)}}e.bindFramebuffer(s.FRAMEBUFFER,null)}function zt(A,x,H){let J=i.get(A);x!==void 0&&ut(J.__webglFramebuffer,A,A.texture,s.COLOR_ATTACHMENT0,s.TEXTURE_2D,0),H!==void 0&&Dt(A)}function Bt(A){let x=A.texture,H=i.get(A),J=i.get(x);A.addEventListener("dispose",S);let it=A.textures,lt=A.isWebGLCubeRenderTarget===!0,ht=it.length>1;if(ht||(J.__webglTexture===void 0&&(J.__webglTexture=s.createTexture()),J.__version=x.version,a.memory.textures++),lt){H.__webglFramebuffer=[];for(let nt=0;nt<6;nt++)if(x.mipmaps&&x.mipmaps.length>0){H.__webglFramebuffer[nt]=[];for(let rt=0;rt<x.mipmaps.length;rt++)H.__webglFramebuffer[nt][rt]=s.createFramebuffer()}else H.__webglFramebuffer[nt]=s.createFramebuffer()}else{if(x.mipmaps&&x.mipmaps.length>0){H.__webglFramebuffer=[];for(let nt=0;nt<x.mipmaps.length;nt++)H.__webglFramebuffer[nt]=s.createFramebuffer()}else H.__webglFramebuffer=s.createFramebuffer();if(ht)for(let nt=0,rt=it.length;nt<rt;nt++){let dt=i.get(it[nt]);dt.__webglTexture===void 0&&(dt.__webglTexture=s.createTexture(),a.memory.textures++)}if(A.samples>0&&pe(A)===!1){H.__webglMultisampledFramebuffer=s.createFramebuffer(),H.__webglColorRenderbuffer=[],e.bindFramebuffer(s.FRAMEBUFFER,H.__webglMultisampledFramebuffer);for(let nt=0;nt<it.length;nt++){let rt=it[nt];H.__webglColorRenderbuffer[nt]=s.createRenderbuffer(),s.bindRenderbuffer(s.RENDERBUFFER,H.__webglColorRenderbuffer[nt]);let dt=r.convert(rt.format,rt.colorSpace),Ct=r.convert(rt.type),gt=b(rt.internalFormat,dt,Ct,rt.normalized,rt.colorSpace,A.isXRRenderTarget===!0),ft=ne(A);s.renderbufferStorageMultisample(s.RENDERBUFFER,ft,gt,A.width,A.height),s.framebufferRenderbuffer(s.FRAMEBUFFER,s.COLOR_ATTACHMENT0+nt,s.RENDERBUFFER,H.__webglColorRenderbuffer[nt])}s.bindRenderbuffer(s.RENDERBUFFER,null),A.depthBuffer&&(H.__webglDepthRenderbuffer=s.createRenderbuffer(),Lt(H.__webglDepthRenderbuffer,A,!0)),e.bindFramebuffer(s.FRAMEBUFFER,null)}}if(lt){e.bindTexture(s.TEXTURE_CUBE_MAP,J.__webglTexture),j(s.TEXTURE_CUBE_MAP,x);for(let nt=0;nt<6;nt++)if(x.mipmaps&&x.mipmaps.length>0)for(let rt=0;rt<x.mipmaps.length;rt++)ut(H.__webglFramebuffer[nt][rt],A,x,s.COLOR_ATTACHMENT0,s.TEXTURE_CUBE_MAP_POSITIVE_X+nt,rt);else ut(H.__webglFramebuffer[nt],A,x,s.COLOR_ATTACHMENT0,s.TEXTURE_CUBE_MAP_POSITIVE_X+nt,0);g(x)&&E(s.TEXTURE_CUBE_MAP),e.unbindTexture()}else if(ht){for(let nt=0,rt=it.length;nt<rt;nt++){let dt=it[nt],Ct=i.get(dt),gt=s.TEXTURE_2D;(A.isWebGL3DRenderTarget||A.isWebGLArrayRenderTarget)&&(gt=A.isWebGL3DRenderTarget?s.TEXTURE_3D:s.TEXTURE_2D_ARRAY),e.bindTexture(gt,Ct.__webglTexture),j(gt,dt),ut(H.__webglFramebuffer,A,dt,s.COLOR_ATTACHMENT0+nt,gt,0),g(dt)&&E(gt)}e.unbindTexture()}else{let nt=s.TEXTURE_2D;if((A.isWebGL3DRenderTarget||A.isWebGLArrayRenderTarget)&&(nt=A.isWebGL3DRenderTarget?s.TEXTURE_3D:s.TEXTURE_2D_ARRAY),e.bindTexture(nt,J.__webglTexture),j(nt,x),x.mipmaps&&x.mipmaps.length>0)for(let rt=0;rt<x.mipmaps.length;rt++)ut(H.__webglFramebuffer[rt],A,x,s.COLOR_ATTACHMENT0,nt,rt);else ut(H.__webglFramebuffer,A,x,s.COLOR_ATTACHMENT0,nt,0);g(x)&&E(nt),e.unbindTexture()}A.depthBuffer&&Dt(A)}function Nt(A){let x=A.textures;for(let H=0,J=x.length;H<J;H++){let it=x[H];if(g(it)){let lt=L(A),ht=i.get(it).__webglTexture;e.bindTexture(lt,ht),E(lt),e.unbindTexture()}}}let Zt=[],Jt=[];function xe(A){if(A.samples>0){if(pe(A)===!1){let x=A.textures,H=A.width,J=A.height,it=s.COLOR_BUFFER_BIT,lt=A.stencilBuffer?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT,ht=i.get(A),nt=x.length>1;if(nt)for(let dt=0;dt<x.length;dt++)e.bindFramebuffer(s.FRAMEBUFFER,ht.__webglMultisampledFramebuffer),s.framebufferRenderbuffer(s.FRAMEBUFFER,s.COLOR_ATTACHMENT0+dt,s.RENDERBUFFER,null),e.bindFramebuffer(s.FRAMEBUFFER,ht.__webglFramebuffer),s.framebufferTexture2D(s.DRAW_FRAMEBUFFER,s.COLOR_ATTACHMENT0+dt,s.TEXTURE_2D,null,0);e.bindFramebuffer(s.READ_FRAMEBUFFER,ht.__webglMultisampledFramebuffer);let rt=A.texture.mipmaps;rt&&rt.length>0?e.bindFramebuffer(s.DRAW_FRAMEBUFFER,ht.__webglFramebuffer[0]):e.bindFramebuffer(s.DRAW_FRAMEBUFFER,ht.__webglFramebuffer);for(let dt=0;dt<x.length;dt++){if(A.resolveDepthBuffer&&(A.depthBuffer&&(it|=s.DEPTH_BUFFER_BIT),A.stencilBuffer&&A.resolveStencilBuffer&&(it|=s.STENCIL_BUFFER_BIT)),nt){s.framebufferRenderbuffer(s.READ_FRAMEBUFFER,s.COLOR_ATTACHMENT0,s.RENDERBUFFER,ht.__webglColorRenderbuffer[dt]);let Ct=i.get(x[dt]).__webglTexture;s.framebufferTexture2D(s.DRAW_FRAMEBUFFER,s.COLOR_ATTACHMENT0,s.TEXTURE_2D,Ct,0)}s.blitFramebuffer(0,0,H,J,0,0,H,J,it,s.NEAREST),l===!0&&(Zt.length=0,Jt.length=0,Zt.push(s.COLOR_ATTACHMENT0+dt),A.depthBuffer&&A.storeMultisampledDepthBuffer===!1&&(Zt.push(lt),Jt.push(lt),s.invalidateFramebuffer(s.DRAW_FRAMEBUFFER,Jt)),s.invalidateFramebuffer(s.READ_FRAMEBUFFER,Zt))}if(e.bindFramebuffer(s.READ_FRAMEBUFFER,null),e.bindFramebuffer(s.DRAW_FRAMEBUFFER,null),nt)for(let dt=0;dt<x.length;dt++){e.bindFramebuffer(s.FRAMEBUFFER,ht.__webglMultisampledFramebuffer),s.framebufferRenderbuffer(s.FRAMEBUFFER,s.COLOR_ATTACHMENT0+dt,s.RENDERBUFFER,ht.__webglColorRenderbuffer[dt]);let Ct=i.get(x[dt]).__webglTexture;e.bindFramebuffer(s.FRAMEBUFFER,ht.__webglFramebuffer),s.framebufferTexture2D(s.DRAW_FRAMEBUFFER,s.COLOR_ATTACHMENT0+dt,s.TEXTURE_2D,Ct,0)}e.bindFramebuffer(s.DRAW_FRAMEBUFFER,ht.__webglMultisampledFramebuffer)}else if(A.depthBuffer&&A.storeMultisampledDepthBuffer===!1&&l){let x=A.stencilBuffer?s.DEPTH_STENCIL_ATTACHMENT:s.DEPTH_ATTACHMENT;s.invalidateFramebuffer(s.DRAW_FRAMEBUFFER,[x])}}}function ne(A){return Math.min(n.maxSamples,A.samples)}function pe(A){let x=i.get(A);return A.samples>0&&t.has("WEBGL_multisampled_render_to_texture")===!0&&x.__useRenderToTexture!==!1}function U(A){let x=a.render.frame;h.get(A)!==x&&(h.set(A,x),A.update())}function Me(A,x){let H=A.colorSpace,J=A.format,it=A.type;return A.isCompressedTexture===!0||A.isVideoTexture===!0||H!==_i&&H!==hi&&(Yt.getTransfer(H)===ee?(J!==ke||it!==Le)&&Ft("WebGLTextures: sRGB encoded textures have to use RGBAFormat and UnsignedByteType."):Ut("WebGLTextures: Unsupported texture color space:",H)),x}function ie(A){return typeof HTMLImageElement<"u"&&A instanceof HTMLImageElement?(c.width=A.naturalWidth||A.width,c.height=A.naturalHeight||A.height):typeof VideoFrame<"u"&&A instanceof VideoFrame?(c.width=A.displayWidth,c.height=A.displayHeight):(c.width=A.width,c.height=A.height),c}this.allocateTextureUnit=C,this.resetTextureUnits=$,this.getTextureUnits=V,this.setTextureUnits=_,this.setTexture2D=k,this.setTexture2DArray=D,this.setTexture3D=G,this.setTextureCube=X,this.rebindTextures=zt,this.setupRenderTarget=Bt,this.updateRenderTargetMipmap=Nt,this.updateMultisampleRenderTarget=xe,this.setupDepthRenderbuffer=Dt,this.setupFrameBufferTexture=ut,this.useMultisampledRTT=pe,this.isReversedDepthBuffer=function(){return e.buffers.depth.getReversed()}}function Wy(s,t){function e(i,n=hi){let r,a=Yt.getTransfer(n);if(i===Le)return s.UNSIGNED_BYTE;if(i===Wo)return s.UNSIGNED_SHORT_4_4_4_4;if(i===Xo)return s.UNSIGNED_SHORT_5_5_5_1;if(i===gh)return s.UNSIGNED_INT_5_9_9_9_REV;if(i===xh)return s.UNSIGNED_INT_10F_11F_11F_REV;if(i===ph)return s.BYTE;if(i===mh)return s.SHORT;if(i===Ls)return s.UNSIGNED_SHORT;if(i===Ho)return s.INT;if(i===vi)return s.UNSIGNED_INT;if(i===ii)return s.FLOAT;if(i===Si)return s.HALF_FLOAT;if(i===yh)return s.ALPHA;if(i===_h)return s.RGB;if(i===ke)return s.RGBA;if(i===Fi)return s.DEPTH_COMPONENT;if(i===En)return s.DEPTH_STENCIL;if(i===Ds)return s.RED;if(i===qo)return s.RED_INTEGER;if(i===An)return s.RG;if(i===Yo)return s.RG_INTEGER;if(i===Ko)return s.RGBA_INTEGER;if(i===Dr||i===Nr||i===Ur||i===Or)if(a===ee)if(r=t.get("WEBGL_compressed_texture_s3tc_srgb"),r!==null){if(i===Dr)return r.COMPRESSED_SRGB_S3TC_DXT1_EXT;if(i===Nr)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;if(i===Ur)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;if(i===Or)return r.COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT}else return null;else if(r=t.get("WEBGL_compressed_texture_s3tc"),r!==null){if(i===Dr)return r.COMPRESSED_RGB_S3TC_DXT1_EXT;if(i===Nr)return r.COMPRESSED_RGBA_S3TC_DXT1_EXT;if(i===Ur)return r.COMPRESSED_RGBA_S3TC_DXT3_EXT;if(i===Or)return r.COMPRESSED_RGBA_S3TC_DXT5_EXT}else return null;if(i===Zo||i===$o||i===Jo||i===jo)if(r=t.get("WEBGL_compressed_texture_pvrtc"),r!==null){if(i===Zo)return r.COMPRESSED_RGB_PVRTC_4BPPV1_IMG;if(i===$o)return r.COMPRESSED_RGB_PVRTC_2BPPV1_IMG;if(i===Jo)return r.COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;if(i===jo)return r.COMPRESSED_RGBA_PVRTC_2BPPV1_IMG}else return null;if(i===Qo||i===tl||i===el||i===il||i===nl||i===kr||i===sl)if(r=t.get("WEBGL_compressed_texture_etc"),r!==null){if(i===Qo||i===tl)return a===ee?r.COMPRESSED_SRGB8_ETC2:r.COMPRESSED_RGB8_ETC2;if(i===el)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ETC2_EAC:r.COMPRESSED_RGBA8_ETC2_EAC;if(i===il)return r.COMPRESSED_R11_EAC;if(i===nl)return r.COMPRESSED_SIGNED_R11_EAC;if(i===kr)return r.COMPRESSED_RG11_EAC;if(i===sl)return r.COMPRESSED_SIGNED_RG11_EAC}else return null;if(i===rl||i===al||i===ol||i===ll||i===cl||i===hl||i===ul||i===dl||i===fl||i===pl||i===ml||i===gl||i===xl||i===yl)if(r=t.get("WEBGL_compressed_texture_astc"),r!==null){if(i===rl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR:r.COMPRESSED_RGBA_ASTC_4x4_KHR;if(i===al)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR:r.COMPRESSED_RGBA_ASTC_5x4_KHR;if(i===ol)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR:r.COMPRESSED_RGBA_ASTC_5x5_KHR;if(i===ll)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR:r.COMPRESSED_RGBA_ASTC_6x5_KHR;if(i===cl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR:r.COMPRESSED_RGBA_ASTC_6x6_KHR;if(i===hl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR:r.COMPRESSED_RGBA_ASTC_8x5_KHR;if(i===ul)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR:r.COMPRESSED_RGBA_ASTC_8x6_KHR;if(i===dl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR:r.COMPRESSED_RGBA_ASTC_8x8_KHR;if(i===fl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR:r.COMPRESSED_RGBA_ASTC_10x5_KHR;if(i===pl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR:r.COMPRESSED_RGBA_ASTC_10x6_KHR;if(i===ml)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR:r.COMPRESSED_RGBA_ASTC_10x8_KHR;if(i===gl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR:r.COMPRESSED_RGBA_ASTC_10x10_KHR;if(i===xl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR:r.COMPRESSED_RGBA_ASTC_12x10_KHR;if(i===yl)return a===ee?r.COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR:r.COMPRESSED_RGBA_ASTC_12x12_KHR}else return null;if(i===_l||i===vl||i===Sl)if(r=t.get("EXT_texture_compression_bptc"),r!==null){if(i===_l)return a===ee?r.COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT:r.COMPRESSED_RGBA_BPTC_UNORM_EXT;if(i===vl)return r.COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;if(i===Sl)return r.COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT}else return null;if(i===bl||i===Ml||i===Br||i===wl)if(r=t.get("EXT_texture_compression_rgtc"),r!==null){if(i===bl)return r.COMPRESSED_RED_RGTC1_EXT;if(i===Ml)return r.COMPRESSED_SIGNED_RED_RGTC1_EXT;if(i===Br)return r.COMPRESSED_RED_GREEN_RGTC2_EXT;if(i===wl)return r.COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT}else return null;return i===Fs?s.UNSIGNED_INT_24_8:s[i]!==void 0?s[i]:null}return{convert:e}}var Xy=`
void main() {

	gl_Position = vec4( position, 1.0 );

}`,qy=`
uniform sampler2DArray depthColor;
uniform float depthWidth;
uniform float depthHeight;

void main() {

	vec2 coord = vec2( gl_FragCoord.x / depthWidth, gl_FragCoord.y / depthHeight );

	if ( coord.x >= 1.0 ) {

		gl_FragDepth = texture( depthColor, vec3( coord.x - 1.0, coord.y, 1 ) ).r;

	} else {

		gl_FragDepth = texture( depthColor, vec3( coord.x, coord.y, 0 ) ).r;

	}

}`,Bh=class{constructor(){this.texture=null,this.mesh=null,this.depthNear=0,this.depthFar=0}init(t,e){if(this.texture===null){let i=new Mr(t.texture);(t.depthNear!==e.depthNear||t.depthFar!==e.depthFar)&&(this.depthNear=t.depthNear,this.depthFar=t.depthFar),this.texture=i}}getMesh(t){if(this.texture!==null&&this.mesh===null){let e=t.cameras[0].viewport,i=new Qe({vertexShader:Xy,fragmentShader:qy,uniforms:{depthColor:{value:this.texture},depthWidth:{value:e.z},depthHeight:{value:e.w}}});this.mesh=new Oe(new wr(20,20),i)}return this.mesh}reset(){this.texture=null,this.mesh=null}getDepthTexture(){return this.texture}},Vh=class extends Di{constructor(t,e){super();let i=this,n=null,r=1,a=null,o="local-floor",l=1,c=null,h=null,d=null,u=null,f=null,p=null,y=typeof XRWebGLBinding<"u",m=new Bh,g={},E=e.getContextAttributes(),L=null,b=null,T=[],M=[],F=new Wt,S=null,R=null,B=new He;B.viewport=new he;let z=new He;z.viewport=new he;let W=[B,z],$=new Po,V=null,_=null;this.cameraAutoUpdate=!0,this.enabled=!1,this.isPresenting=!1,this.getController=function(q){let et=T[q];return et===void 0&&(et=new Cs,T[q]=et),et.getTargetRaySpace()},this.getControllerGrip=function(q){let et=T[q];return et===void 0&&(et=new Cs,T[q]=et),et.getGripSpace()},this.getHand=function(q){let et=T[q];return et===void 0&&(et=new Cs,T[q]=et),et.getHandSpace()};function C(q){let et=M.indexOf(q.inputSource);if(et===-1)return;let ct=T[et];ct!==void 0&&(ct.update(q.inputSource,q.frame,c||a),ct.dispatchEvent({type:q.type,data:q.inputSource}))}function P(){n.removeEventListener("select",C),n.removeEventListener("selectstart",C),n.removeEventListener("selectend",C),n.removeEventListener("squeeze",C),n.removeEventListener("squeezestart",C),n.removeEventListener("squeezeend",C),n.removeEventListener("end",P),n.removeEventListener("inputsourceschange",k);for(let q=0;q<T.length;q++){let et=M[q];et!==null&&(M[q]=null,T[q].disconnect(et))}V=null,_=null,m.reset();for(let q in g)delete g[q];if(t.setRenderTarget(L),f=null,u=null,d=null,n=null,b=null,at.stop(),i.isPresenting=!1,t.setPixelRatio(S),t.setSize(F.width,F.height,!1),R!==null){let q=R.camera;q.fov=R.fov,q.zoom=R.zoom,q.updateProjectionMatrix(),R=null}i.dispatchEvent({type:"sessionend"})}this.setFramebufferScaleFactor=function(q){r=q,i.isPresenting===!0&&Ft("WebXRManager: Cannot change framebuffer scale while presenting.")},this.setReferenceSpaceType=function(q){o=q,i.isPresenting===!0&&Ft("WebXRManager: Cannot change reference space type while presenting.")},this.getReferenceSpace=function(){return c||a},this.setReferenceSpace=function(q){c=q},this.getBaseLayer=function(){return u!==null?u:f},this.getBinding=function(){return d===null&&y&&(d=new XRWebGLBinding(n,e)),d},this.getFrame=function(){return p},this.getSession=function(){return n},this.setSession=async function(q){if(n=q,n!==null){if(L=t.getRenderTarget(),n.addEventListener("select",C),n.addEventListener("selectstart",C),n.addEventListener("selectend",C),n.addEventListener("squeeze",C),n.addEventListener("squeezestart",C),n.addEventListener("squeezeend",C),n.addEventListener("end",P),n.addEventListener("inputsourceschange",k),E.xrCompatible!==!0&&await e.makeXRCompatible(),S=t.getPixelRatio(),t.getSize(F),y&&"createProjectionLayer"in XRWebGLBinding.prototype){let ct=null,Mt=null,ut=null;E.depth&&(ut=E.stencil?e.DEPTH24_STENCIL8:e.DEPTH_COMPONENT24,ct=E.stencil?En:Fi,Mt=E.stencil?Fs:vi);let Lt={colorFormat:e.RGBA8,depthFormat:ut,scaleFactor:r};d=this.getBinding(),u=d.createProjectionLayer(Lt),n.updateRenderState({layers:[u]}),t.setPixelRatio(1),t.setSize(u.textureWidth,u.textureHeight,!1),b=new Ie(u.textureWidth,u.textureHeight,{format:ke,type:Le,depthTexture:new _n(u.textureWidth,u.textureHeight,Mt,void 0,void 0,void 0,void 0,void 0,void 0,ct),stencilBuffer:E.stencil,colorSpace:t.outputColorSpace,samples:E.antialias?4:0,resolveDepthBuffer:u.ignoreDepthValues===!1,resolveStencilBuffer:u.ignoreDepthValues===!1,storeMultisampledDepthBuffer:u.ignoreDepthValues===!1,storeMultisampledStencilBuffer:u.ignoreDepthValues===!1})}else{let ct={antialias:E.antialias,alpha:!0,depth:E.depth,stencil:E.stencil,framebufferScaleFactor:r};f=new XRWebGLLayer(n,e,ct),n.updateRenderState({baseLayer:f}),t.setPixelRatio(1),t.setSize(f.framebufferWidth,f.framebufferHeight,!1),b=new Ie(f.framebufferWidth,f.framebufferHeight,{format:ke,type:Le,colorSpace:t.outputColorSpace,stencilBuffer:E.stencil,resolveDepthBuffer:f.ignoreDepthValues===!1,resolveStencilBuffer:f.ignoreDepthValues===!1,storeMultisampledDepthBuffer:f.ignoreDepthValues===!1,storeMultisampledStencilBuffer:f.ignoreDepthValues===!1})}b.isXRRenderTarget=!0,this.setFoveation(l),c=null,a=await n.requestReferenceSpace(o),at.setContext(n),at.start(),i.isPresenting=!0,i.dispatchEvent({type:"sessionstart"})}},this.getEnvironmentBlendMode=function(){if(n!==null)return n.environmentBlendMode},this.getDepthTexture=function(){return m.getDepthTexture()};function k(q){for(let et=0;et<q.removed.length;et++){let ct=q.removed[et],Mt=M.indexOf(ct);Mt>=0&&(M[Mt]=null,T[Mt].disconnect(ct))}for(let et=0;et<q.added.length;et++){let ct=q.added[et],Mt=M.indexOf(ct);if(Mt===-1){for(let Lt=0;Lt<T.length;Lt++)if(Lt>=M.length){M.push(ct),Mt=Lt;break}else if(M[Lt]===null){M[Lt]=ct,Mt=Lt;break}if(Mt===-1)break}let ut=T[Mt];ut&&ut.connect(ct)}}let D=new Q,G=new Q;function X(q,et,ct){D.setFromMatrixPosition(et.matrixWorld),G.setFromMatrixPosition(ct.matrixWorld);let Mt=D.distanceTo(G),ut=et.projectionMatrix.elements,Lt=ct.projectionMatrix.elements,Vt=ut[14]/(ut[10]-1),Dt=ut[14]/(ut[10]+1),zt=(ut[9]+1)/ut[5],Bt=(ut[9]-1)/ut[5],Nt=(ut[8]-1)/ut[0],Zt=(Lt[8]+1)/Lt[0],Jt=Vt*Nt,xe=Vt*Zt,ne=Mt/(-Nt+Zt),pe=ne*-Nt;if(et.matrixWorld.decompose(q.position,q.quaternion,q.scale),q.translateX(pe),q.translateZ(ne),q.matrixWorld.compose(q.position,q.quaternion,q.scale),q.matrixWorldInverse.copy(q.matrixWorld).invert(),ut[10]===-1)q.projectionMatrix.copy(et.projectionMatrix),q.projectionMatrixInverse.copy(et.projectionMatrixInverse);else{let U=Vt+ne,Me=Dt+ne,ie=Jt-pe,A=xe+(Mt-pe),x=zt*Dt/Me*U,H=Bt*Dt/Me*U;q.projectionMatrix.makePerspective(ie,A,x,H,U,Me),q.projectionMatrixInverse.copy(q.projectionMatrix).invert()}}function w(q,et){et===null?q.matrixWorld.copy(q.matrix):q.matrixWorld.multiplyMatrices(et.matrixWorld,q.matrix),q.matrixWorldInverse.copy(q.matrixWorld).invert()}this.updateCamera=function(q){if(n===null)return;let et=q.near,ct=q.far;m.texture!==null&&(m.depthNear>0&&(et=m.depthNear),m.depthFar>0&&(ct=m.depthFar)),$.near=z.near=B.near=et,$.far=z.far=B.far=ct,(V!==$.near||_!==$.far)&&(n.updateRenderState({depthNear:$.near,depthFar:$.far}),V=$.near,_=$.far),$.layers.mask=q.layers.mask|6,B.layers.mask=$.layers.mask&-5,z.layers.mask=$.layers.mask&-3;let Mt=q.parent,ut=$.cameras;w($,Mt);for(let Lt=0;Lt<ut.length;Lt++)w(ut[Lt],Mt);ut.length===2?X($,B,z):$.projectionMatrix.copy(B.projectionMatrix),R===null&&q.isPerspectiveCamera&&(R={camera:q,fov:q.fov,zoom:q.zoom}),I(q,$,Mt)};function I(q,et,ct){ct===null?q.matrix.copy(et.matrixWorld):(q.matrix.copy(ct.matrixWorld),q.matrix.invert(),q.matrix.multiply(et.matrixWorld)),q.matrix.decompose(q.position,q.quaternion,q.scale),q.updateMatrixWorld(!0),q.projectionMatrix.copy(et.projectionMatrix),q.projectionMatrixInverse.copy(et.projectionMatrixInverse),q.isPerspectiveCamera&&(q.fov=uo*2*Math.atan(1/q.projectionMatrix.elements[5]),q.zoom=1)}this.getCamera=function(){return $},this.getFoveation=function(){if(!(u===null&&f===null))return l},this.setFoveation=function(q){l=q,u!==null&&(u.fixedFoveation=q),f!==null&&f.fixedFoveation!==void 0&&(f.fixedFoveation=q)},this.hasDepthSensing=function(){return m.texture!==null},this.getDepthSensingMesh=function(){return m.getMesh($)},this.getCameraTexture=function(q){return g[q]};let Y=null;function j(q,et){if(h=et.getViewerPose(c||a),p=et,h!==null){let ct=h.views;f!==null&&(t.setRenderTargetFramebuffer(b,f.framebuffer),t.setRenderTarget(b));let Mt=!1;ct.length!==$.cameras.length&&($.cameras.length=0,Mt=!0);for(let Dt=0;Dt<ct.length;Dt++){let zt=ct[Dt],Bt=null;if(f!==null)Bt=f.getViewport(zt);else{let Zt=d.getViewSubImage(u,zt);Bt=Zt.viewport,Dt===0&&(t.setRenderTargetTextures(b,Zt.colorTexture,Zt.depthStencilTexture),t.setRenderTarget(b))}let Nt=W[Dt];Nt===void 0&&(Nt=new He,Nt.layers.enable(Dt),Nt.viewport=new he,W[Dt]=Nt),Nt.matrix.fromArray(zt.transform.matrix),Nt.matrix.decompose(Nt.position,Nt.quaternion,Nt.scale),Nt.projectionMatrix.fromArray(zt.projectionMatrix),Nt.projectionMatrixInverse.copy(Nt.projectionMatrix).invert(),Nt.viewport.set(Bt.x,Bt.y,Bt.width,Bt.height),Dt===0&&($.matrix.copy(Nt.matrix),$.matrix.decompose($.position,$.quaternion,$.scale)),Mt===!0&&$.cameras.push(Nt)}let ut=n.enabledFeatures;if(ut&&ut.includes("depth-sensing")&&n.depthUsage=="gpu-optimized"&&y){d=i.getBinding();let Dt=d.getDepthInformation(ct[0]);Dt&&Dt.isValid&&Dt.texture&&m.init(Dt,n.renderState)}if(ut&&ut.includes("camera-access")&&y){t.state.unbindTexture(),d=i.getBinding();for(let Dt=0;Dt<ct.length;Dt++){let zt=ct[Dt].camera;if(zt){let Bt=g[zt];Bt||(Bt=new Mr,g[zt]=Bt);let Nt=d.getCameraImage(zt);Bt.sourceTexture=Nt}}}}for(let ct=0;ct<T.length;ct++){let Mt=M[ct],ut=T[ct];Mt!==null&&ut!==void 0&&ut.update(Mt,et,c||a)}Y&&Y(q,et),et.detectedPlanes&&i.dispatchEvent({type:"planesdetected",data:et}),p=null}let at=new Qd;at.setAnimationLoop(j),this.setAnimationLoop=function(q){Y=q},this.dispose=function(){}}},Yy=new jt,af=new Ot;af.set(-1,0,0,0,1,0,0,0,1);function Ky(s,t){function e(m,g){m.matrixAutoUpdate===!0&&m.updateMatrix(),g.value.copy(m.matrix)}function i(m,g){g.color.getRGB(m.fogColor.value,bh(s)),g.isFog?(m.fogNear.value=g.near,m.fogFar.value=g.far):g.isFogExp2&&(m.fogDensity.value=g.density)}function n(m,g,E,L,b){g.isNodeMaterial?g.uniformsNeedUpdate=!1:g.isMeshBasicMaterial?r(m,g):g.isMeshLambertMaterial?(r(m,g),g.envMap&&(m.envMapIntensity.value=g.envMapIntensity)):g.isMeshToonMaterial?(r(m,g),d(m,g)):g.isMeshPhongMaterial?(r(m,g),h(m,g),g.envMap&&(m.envMapIntensity.value=g.envMapIntensity)):g.isMeshStandardMaterial?(r(m,g),u(m,g),g.isMeshPhysicalMaterial&&f(m,g,b)):g.isMeshMatcapMaterial?(r(m,g),p(m,g)):g.isMeshDepthMaterial?r(m,g):g.isMeshDistanceMaterial?(r(m,g),y(m,g)):g.isMeshNormalMaterial?r(m,g):g.isLineBasicMaterial?(a(m,g),g.isLineDashedMaterial&&o(m,g)):g.isPointsMaterial?l(m,g,E,L):g.isSpriteMaterial?c(m,g):g.isShadowMaterial?(m.color.value.copy(g.color),m.opacity.value=g.opacity):g.isShaderMaterial&&(g.uniformsNeedUpdate=!1)}function r(m,g){m.opacity.value=g.opacity,g.color&&m.diffuse.value.copy(g.color),g.emissive&&m.emissive.value.copy(g.emissive).multiplyScalar(g.emissiveIntensity),g.map&&(m.map.value=g.map,e(g.map,m.mapTransform)),g.alphaMap&&(m.alphaMap.value=g.alphaMap,e(g.alphaMap,m.alphaMapTransform)),g.bumpMap&&(m.bumpMap.value=g.bumpMap,e(g.bumpMap,m.bumpMapTransform),m.bumpScale.value=g.bumpScale,g.side===Pe&&(m.bumpScale.value*=-1)),g.normalMap&&(m.normalMap.value=g.normalMap,e(g.normalMap,m.normalMapTransform),m.normalScale.value.copy(g.normalScale),g.side===Pe&&m.normalScale.value.negate()),g.displacementMap&&(m.displacementMap.value=g.displacementMap,e(g.displacementMap,m.displacementMapTransform),m.displacementScale.value=g.displacementScale,m.displacementBias.value=g.displacementBias),g.emissiveMap&&(m.emissiveMap.value=g.emissiveMap,e(g.emissiveMap,m.emissiveMapTransform)),g.specularMap&&(m.specularMap.value=g.specularMap,e(g.specularMap,m.specularMapTransform)),g.alphaTest>0&&(m.alphaTest.value=g.alphaTest);let E=t.get(g),L=E.envMap,b=E.envMapRotation;L&&(m.envMap.value=L,m.envMapRotation.value.setFromMatrix4(Yy.makeRotationFromEuler(b)).transpose(),L.isCubeTexture&&L.isRenderTargetTexture===!1&&m.envMapRotation.value.premultiply(af),m.reflectivity.value=g.reflectivity,m.ior.value=g.ior,m.refractionRatio.value=g.refractionRatio),g.lightMap&&(m.lightMap.value=g.lightMap,m.lightMapIntensity.value=g.lightMapIntensity,e(g.lightMap,m.lightMapTransform)),g.aoMap&&(m.aoMap.value=g.aoMap,m.aoMapIntensity.value=g.aoMapIntensity,e(g.aoMap,m.aoMapTransform))}function a(m,g){m.diffuse.value.copy(g.color),m.opacity.value=g.opacity,g.map&&(m.map.value=g.map,e(g.map,m.mapTransform))}function o(m,g){m.dashSize.value=g.dashSize,m.totalSize.value=g.dashSize+g.gapSize,m.scale.value=g.scale}function l(m,g,E,L){m.diffuse.value.copy(g.color),m.opacity.value=g.opacity,m.size.value=g.size*E,m.scale.value=L*.5,g.map&&(m.map.value=g.map,e(g.map,m.uvTransform)),g.alphaMap&&(m.alphaMap.value=g.alphaMap,e(g.alphaMap,m.alphaMapTransform)),g.alphaTest>0&&(m.alphaTest.value=g.alphaTest)}function c(m,g){m.diffuse.value.copy(g.color),m.opacity.value=g.opacity,m.rotation.value=g.rotation,g.map&&(m.map.value=g.map,e(g.map,m.mapTransform)),g.alphaMap&&(m.alphaMap.value=g.alphaMap,e(g.alphaMap,m.alphaMapTransform)),g.alphaTest>0&&(m.alphaTest.value=g.alphaTest)}function h(m,g){m.specular.value.copy(g.specular),m.shininess.value=Math.max(g.shininess,1e-4)}function d(m,g){g.gradientMap&&(m.gradientMap.value=g.gradientMap)}function u(m,g){m.metalness.value=g.metalness,g.metalnessMap&&(m.metalnessMap.value=g.metalnessMap,e(g.metalnessMap,m.metalnessMapTransform)),m.roughness.value=g.roughness,g.roughnessMap&&(m.roughnessMap.value=g.roughnessMap,e(g.roughnessMap,m.roughnessMapTransform)),g.envMap&&(m.envMapIntensity.value=g.envMapIntensity)}function f(m,g,E){m.ior.value=g.ior,g.sheen>0&&(m.sheenColor.value.copy(g.sheenColor).multiplyScalar(g.sheen),m.sheenRoughness.value=g.sheenRoughness,g.sheenColorMap&&(m.sheenColorMap.value=g.sheenColorMap,e(g.sheenColorMap,m.sheenColorMapTransform)),g.sheenRoughnessMap&&(m.sheenRoughnessMap.value=g.sheenRoughnessMap,e(g.sheenRoughnessMap,m.sheenRoughnessMapTransform))),g.clearcoat>0&&(m.clearcoat.value=g.clearcoat,m.clearcoatRoughness.value=g.clearcoatRoughness,g.clearcoatMap&&(m.clearcoatMap.value=g.clearcoatMap,e(g.clearcoatMap,m.clearcoatMapTransform)),g.clearcoatRoughnessMap&&(m.clearcoatRoughnessMap.value=g.clearcoatRoughnessMap,e(g.clearcoatRoughnessMap,m.clearcoatRoughnessMapTransform)),g.clearcoatNormalMap&&(m.clearcoatNormalMap.value=g.clearcoatNormalMap,e(g.clearcoatNormalMap,m.clearcoatNormalMapTransform),m.clearcoatNormalScale.value.copy(g.clearcoatNormalScale),g.side===Pe&&m.clearcoatNormalScale.value.negate())),g.dispersion>0&&(m.dispersion.value=g.dispersion),g.retroreflectivity>0&&(m.retroreflectivity.value=g.retroreflectivity),g.iridescence>0&&(m.iridescence.value=g.iridescence,m.iridescenceIOR.value=g.iridescenceIOR,m.iridescenceThicknessMinimum.value=g.iridescenceThicknessRange[0],m.iridescenceThicknessMaximum.value=g.iridescenceThicknessRange[1],g.iridescenceMap&&(m.iridescenceMap.value=g.iridescenceMap,e(g.iridescenceMap,m.iridescenceMapTransform)),g.iridescenceThicknessMap&&(m.iridescenceThicknessMap.value=g.iridescenceThicknessMap,e(g.iridescenceThicknessMap,m.iridescenceThicknessMapTransform))),g.transmission>0&&(m.transmission.value=g.transmission,m.transmissionSamplerMap.value=E.texture,m.transmissionSamplerSize.value.set(E.width,E.height),g.transmissionMap&&(m.transmissionMap.value=g.transmissionMap,e(g.transmissionMap,m.transmissionMapTransform)),m.thickness.value=g.thickness,g.thicknessMap&&(m.thicknessMap.value=g.thicknessMap,e(g.thicknessMap,m.thicknessMapTransform)),m.attenuationDistance.value=g.attenuationDistance,m.attenuationColor.value.copy(g.attenuationColor)),g.anisotropy>0&&(m.anisotropyVector.value.set(g.anisotropy*Math.cos(g.anisotropyRotation),g.anisotropy*Math.sin(g.anisotropyRotation)),g.anisotropyMap&&(m.anisotropyMap.value=g.anisotropyMap,e(g.anisotropyMap,m.anisotropyMapTransform))),m.specularIntensity.value=g.specularIntensity,m.specularColor.value.copy(g.specularColor),g.specularColorMap&&(m.specularColorMap.value=g.specularColorMap,e(g.specularColorMap,m.specularColorMapTransform)),g.specularIntensityMap&&(m.specularIntensityMap.value=g.specularIntensityMap,e(g.specularIntensityMap,m.specularIntensityMapTransform))}function p(m,g){g.matcap&&(m.matcap.value=g.matcap)}function y(m,g){let E=t.get(g).light;m.referencePosition.value.setFromMatrixPosition(E.matrixWorld),m.nearDistance.value=E.shadow.camera.near,m.farDistance.value=E.shadow.camera.far}return{refreshFogUniforms:i,refreshMaterialUniforms:n}}function Zy(s,t,e,i){let n={},r={},a=[],o=s.getParameter(s.MAX_UNIFORM_BUFFER_BINDINGS);function l(b,T){let M=T.program;i.uniformBlockBinding(b,M)}function c(b,T){let M=n[b.id];M===void 0&&(m(b),M=h(b),n[b.id]=M,b.addEventListener("dispose",E));let F=T.program;i.updateUBOMapping(b,F);let S=t.render.frame;r[b.id]!==S&&(u(b),r[b.id]=S)}function h(b){let T=d();b.__bindingPointIndex=T;let M=s.createBuffer(),F=b.__size,S=b.usage;return s.bindBuffer(s.UNIFORM_BUFFER,M),s.bufferData(s.UNIFORM_BUFFER,F,S),s.bindBuffer(s.UNIFORM_BUFFER,null),s.bindBufferBase(s.UNIFORM_BUFFER,T,M),M}function d(){for(let b=0;b<o;b++)if(a.indexOf(b)===-1)return a.push(b),b;return Ut("WebGLRenderer: Maximum number of simultaneously usable uniforms groups reached."),0}function u(b){let T=n[b.id],M=b.uniforms,F=b.__cache;s.bindBuffer(s.UNIFORM_BUFFER,T);for(let S=0,R=M.length;S<R;S++){let B=M[S];if(Array.isArray(B))for(let z=0,W=B.length;z<W;z++)f(B[z],S,z,F);else f(B,S,0,F)}s.bindBuffer(s.UNIFORM_BUFFER,null)}function f(b,T,M,F){if(y(b,T,M,F)===!0){let S=b.__offset,R=b.value;if(Array.isArray(R)){let B=0;for(let z=0;z<R.length;z++){let W=R[z],$=g(W);p(W,b.__data,B),typeof W!="number"&&typeof W!="boolean"&&!W.isMatrix3&&!ArrayBuffer.isView(W)&&(B+=$.storage/Float32Array.BYTES_PER_ELEMENT)}}else p(R,b.__data,0);s.bufferSubData(s.UNIFORM_BUFFER,S,b.__data)}}function p(b,T,M){typeof b=="number"||typeof b=="boolean"?T[0]=b:b.isMatrix3?(T[0]=b.elements[0],T[1]=b.elements[1],T[2]=b.elements[2],T[3]=0,T[4]=b.elements[3],T[5]=b.elements[4],T[6]=b.elements[5],T[7]=0,T[8]=b.elements[6],T[9]=b.elements[7],T[10]=b.elements[8],T[11]=0):ArrayBuffer.isView(b)?T.set(new b.constructor(b.buffer,b.byteOffset,T.length)):b.toArray(T,M)}function y(b,T,M,F){let S=b.value,R=T+"_"+M;if(F[R]===void 0)return typeof S=="number"||typeof S=="boolean"?F[R]=S:ArrayBuffer.isView(S)?F[R]=S.slice():F[R]=S.clone(),!0;{let B=F[R];if(typeof S=="number"||typeof S=="boolean"){if(B!==S)return F[R]=S,!0}else{if(ArrayBuffer.isView(S))return!0;if(B.equals(S)===!1)return B.copy(S),!0}}return!1}function m(b){let T=b.uniforms,M=0,F=16;for(let R=0,B=T.length;R<B;R++){let z=Array.isArray(T[R])?T[R]:[T[R]];for(let W=0,$=z.length;W<$;W++){let V=z[W],_=Array.isArray(V.value)?V.value:[V.value];for(let C=0,P=_.length;C<P;C++){let k=_[C],D=g(k),G=M%F,X=G%D.boundary,w=G+X;M+=X,w!==0&&F-w<D.storage&&(M+=F-w),V.__data=new Float32Array(D.storage/Float32Array.BYTES_PER_ELEMENT),V.__offset=M,M+=D.storage}}}let S=M%F;return S>0&&(M+=F-S),b.__size=M,b.__cache={},this}function g(b){let T={boundary:0,storage:0};return typeof b=="number"||typeof b=="boolean"?(T.boundary=4,T.storage=4):b.isVector2?(T.boundary=8,T.storage=8):b.isVector3||b.isColor?(T.boundary=16,T.storage=12):b.isVector4?(T.boundary=16,T.storage=16):b.isMatrix3?(T.boundary=48,T.storage=48):b.isMatrix4?(T.boundary=64,T.storage=64):b.isTexture?Ft("WebGLRenderer: Texture samplers can not be part of an uniforms group."):ArrayBuffer.isView(b)?(T.boundary=16,T.storage=b.byteLength):Ft("WebGLRenderer: Unsupported uniform value type.",b),T}function E(b){let T=b.target;T.removeEventListener("dispose",E);let M=a.indexOf(T.__bindingPointIndex);a.splice(M,1),s.deleteBuffer(n[T.id]),delete n[T.id],delete r[T.id]}function L(){for(let b in n)s.deleteBuffer(n[b]);a=[],n={},r={}}return{bind:l,update:c,dispose:L}}var $y=new Uint16Array([12469,15057,12620,14925,13266,14620,13807,14376,14323,13990,14545,13625,14713,13328,14840,12882,14931,12528,14996,12233,15039,11829,15066,11525,15080,11295,15085,10976,15082,10705,15073,10495,13880,14564,13898,14542,13977,14430,14158,14124,14393,13732,14556,13410,14702,12996,14814,12596,14891,12291,14937,11834,14957,11489,14958,11194,14943,10803,14921,10506,14893,10278,14858,9960,14484,14039,14487,14025,14499,13941,14524,13740,14574,13468,14654,13106,14743,12678,14818,12344,14867,11893,14889,11509,14893,11180,14881,10751,14852,10428,14812,10128,14765,9754,14712,9466,14764,13480,14764,13475,14766,13440,14766,13347,14769,13070,14786,12713,14816,12387,14844,11957,14860,11549,14868,11215,14855,10751,14825,10403,14782,10044,14729,9651,14666,9352,14599,9029,14967,12835,14966,12831,14963,12804,14954,12723,14936,12564,14917,12347,14900,11958,14886,11569,14878,11247,14859,10765,14828,10401,14784,10011,14727,9600,14660,9289,14586,8893,14508,8533,15111,12234,15110,12234,15104,12216,15092,12156,15067,12010,15028,11776,14981,11500,14942,11205,14902,10752,14861,10393,14812,9991,14752,9570,14682,9252,14603,8808,14519,8445,14431,8145,15209,11449,15208,11451,15202,11451,15190,11438,15163,11384,15117,11274,15055,10979,14994,10648,14932,10343,14871,9936,14803,9532,14729,9218,14645,8742,14556,8381,14461,8020,14365,7603,15273,10603,15272,10607,15267,10619,15256,10631,15231,10614,15182,10535,15118,10389,15042,10167,14963,9787,14883,9447,14800,9115,14710,8665,14615,8318,14514,7911,14411,7507,14279,7198,15314,9675,15313,9683,15309,9712,15298,9759,15277,9797,15229,9773,15166,9668,15084,9487,14995,9274,14898,8910,14800,8539,14697,8234,14590,7790,14479,7409,14367,7067,14178,6621,15337,8619,15337,8631,15333,8677,15325,8769,15305,8871,15264,8940,15202,8909,15119,8775,15022,8565,14916,8328,14804,8009,14688,7614,14569,7287,14448,6888,14321,6483,14088,6171,15350,7402,15350,7419,15347,7480,15340,7613,15322,7804,15287,7973,15229,8057,15148,8012,15046,7846,14933,7611,14810,7357,14682,7069,14552,6656,14421,6316,14251,5948,14007,5528,15356,5942,15356,5977,15353,6119,15348,6294,15332,6551,15302,6824,15249,7044,15171,7122,15070,7050,14949,6861,14818,6611,14679,6349,14538,6067,14398,5651,14189,5311,13935,4958,15359,4123,15359,4153,15356,4296,15353,4646,15338,5160,15311,5508,15263,5829,15188,6042,15088,6094,14966,6001,14826,5796,14678,5543,14527,5287,14377,4985,14133,4586,13869,4257,15360,1563,15360,1642,15358,2076,15354,2636,15341,3350,15317,4019,15273,4429,15203,4732,15105,4911,14981,4932,14836,4818,14679,4621,14517,4386,14359,4156,14083,3795,13808,3437,15360,122,15360,137,15358,285,15355,636,15344,1274,15322,2177,15281,2765,15215,3223,15120,3451,14995,3569,14846,3567,14681,3466,14511,3305,14344,3121,14037,2800,13753,2467,15360,0,15360,1,15359,21,15355,89,15346,253,15325,479,15287,796,15225,1148,15133,1492,15008,1749,14856,1882,14685,1886,14506,1783,14324,1608,13996,1398,13702,1183]),Oi=null;function Jy(){return Oi===null&&(Oi=new yn($y,16,16,An,Si),Oi.name="DFG_LUT",Oi.minFilter=fe,Oi.magFilter=fe,Oi.wrapS=Li,Oi.wrapT=Li,Oi.generateMipmaps=!1,Oi.needsUpdate=!0),Oi}var Pl=class{constructor(t={}){let{canvas:e=wd(),context:i=null,depth:n=!0,stencil:r=!1,alpha:a=!1,antialias:o=!1,premultipliedAlpha:l=!0,preserveDrawingBuffer:c=!1,powerPreference:h="default",failIfMajorPerformanceCaveat:d=!1,reversedDepthBuffer:u=!1,outputBufferType:f=Le}=t;this.isWebGLRenderer=!0;let p;if(i!==null){if(typeof WebGLRenderingContext<"u"&&i instanceof WebGLRenderingContext)throw new Error("THREE.WebGLRenderer: WebGL 1 is not supported since r163.");p=i.getContextAttributes().alpha}else p=a;let y=f,m=new Set([Ko,Yo,qo]),g=new Set([Le,vi,Ls,Fs,Wo,Xo]),E=new Uint32Array(4),L=new Int32Array(4),b=new Q,T=null,M=null,F=[],S=[],R=null;this.domElement=e,this.debug={checkShaderErrors:!0,diagnostics:{keywords:!1},onShaderError:null},this.autoClear=!0,this.autoClearColor=!0,this.autoClearDepth=!0,this.autoClearStencil=!0,this.sortObjects=!0,this.clippingPlanes=[],this.localClippingEnabled=!1,this.toneMapping=ei,this.toneMappingExposure=1,this.transmissionResolutionScale=1;let B=this,z=!1,W=null,$=null,V=null,_=null;this._outputColorSpace=je;let C=0,P=0,k=null,D=-1,G=null,X=new he,w=new he,I=null,Y=new qt(0),j=0,at=e.width,q=e.height,et=1,ct=null,Mt=null,ut=new he(0,0,at,q),Lt=new he(0,0,at,q),Vt=!1,Dt=new Sr,zt=!1,Bt=!1,Nt=new jt,Zt=new Q,Jt=new he,xe={background:null,fog:null,environment:null,overrideMaterial:null,isScene:!0},ne=!1;function pe(){return k===null?et:1}let U=i;function Me(v,N){return e.getContext(v,N)}let ie,A,x,H,J,it,lt,ht,nt,rt,dt,Ct,gt,ft,Rt,Pt,kt,O,pt,st,mt,vt,ot;try{let v={alpha:!0,depth:n,stencil:r,antialias:o,premultipliedAlpha:l,preserveDrawingBuffer:c,powerPreference:h,failIfMajorPerformanceCaveat:d};if("setAttribute"in e&&e.setAttribute("data-engine",`three.js r${"186"}`),e.addEventListener("webglcontextlost",le,!1),e.addEventListener("webglcontextrestored",Qt,!1),e.addEventListener("webglcontextcreationerror",di,!1),U===null){let N="webgl2";if(U=Me(N,v),U===null)throw Me(N)?new Error("THREE.WebGLRenderer: Error creating WebGL context with your selected attributes."):new Error("THREE.WebGLRenderer: Error creating WebGL context.")}It()}catch(v){throw e.removeEventListener("webglcontextlost",le,!1),e.removeEventListener("webglcontextrestored",Qt,!1),e.removeEventListener("webglcontextcreationerror",di,!1),Ut("WebGLRenderer: "+v.message),v}function It(){ie=new sx(U),ie.init(),mt=new Wy(U,ie),A=new Kg(U,ie,t,mt),x=new Gy(U,ie),A.reversedDepthBuffer&&u&&x.buffers.depth.setReversed(!0),$=U.createFramebuffer(),V=U.createFramebuffer(),_=U.createFramebuffer(),H=new ox(U),J=new Cy,it=new Hy(U,ie,x,J,A,mt,H),lt=new nx(B),ht=new cm(U),vt=new qg(U,ht),nt=new rx(U,ht,H,vt),rt=new cx(U,nt,ht,vt,H),O=new lx(U,A,it),Rt=new Zg(J),dt=new Ay(B,lt,ie,A,vt,Rt),Ct=new Ky(B,J),gt=new Iy,ft=new Uy(ie),kt=new Xg(B,lt,x,rt,p,l),Pt=new zy(B,rt,A),ot=new Zy(U,H,A,x),pt=new Yg(U,ie,H),st=new ax(U,ie,H),H.programs=dt.programs,B.capabilities=A,B.extensions=ie,B.properties=J,B.renderLists=gt,B.shadowMap=Pt,B.state=x,B.info=H}y!==Le&&(R=new ux(y,e.width,e.height,o,n,r));let Et=new Vh(B,U);this.xr=Et,this.getContext=function(){return U},this.getContextAttributes=function(){return U.getContextAttributes()},this.forceContextLoss=function(){let v=ie.get("WEBGL_lose_context");v&&v.loseContext()},this.forceContextRestore=function(){let v=ie.get("WEBGL_lose_context");v&&v.restoreContext()},this.getPixelRatio=function(){return et},this.setPixelRatio=function(v){v!==void 0&&(et=v,this.setSize(at,q,!1))},this.getSize=function(v){return v.set(at,q)},this.setSize=function(v,N,tt=!0){if(Et.isPresenting){Ft("WebGLRenderer: Can't change size while VR device is presenting.");return}at=v,q=N,e.width=Math.floor(v*et),e.height=Math.floor(N*et),tt===!0&&(e.style.width=v+"px",e.style.height=N+"px"),R!==null&&R.setSize(e.width,e.height),this.setViewport(0,0,v,N)},this.getDrawingBufferSize=function(v){return v.set(at*et,q*et).floor()},this.setDrawingBufferSize=function(v,N,tt){at=v,q=N,et=tt,e.width=Math.floor(v*tt),e.height=Math.floor(N*tt),this.setViewport(0,0,v,N)},this.setEffects=function(v){if(y===Le){Ut("WebGLRenderer: setEffects() requires outputBufferType set to HalfFloatType or FloatType.");return}if(v){for(let N=0;N<v.length;N++)if(v[N].isOutputPass===!0){Ft("WebGLRenderer: OutputPass is not needed in setEffects(). Tone mapping and color space conversion are applied automatically.");break}}R.setEffects(v||[])},this.getCurrentViewport=function(v){return v.copy(X)},this.getViewport=function(v){return v.copy(ut)},this.setViewport=function(v,N,tt,K){v.isVector4?ut.set(v.x,v.y,v.z,v.w):ut.set(v,N,tt,K),x.viewport(X.copy(ut).multiplyScalar(et).round())},this.getScissor=function(v){return v.copy(Lt)},this.setScissor=function(v,N,tt,K){v.isVector4?Lt.set(v.x,v.y,v.z,v.w):Lt.set(v,N,tt,K),x.scissor(w.copy(Lt).multiplyScalar(et).round())},this.getScissorTest=function(){return Vt},this.setScissorTest=function(v){x.setScissorTest(Vt=v)},this.setOpaqueSort=function(v){ct=v},this.setTransparentSort=function(v){Mt=v},this.getClearColor=function(v){return v.copy(kt.getClearColor())},this.setClearColor=function(){kt.setClearColor(...arguments)},this.getClearAlpha=function(){return kt.getClearAlpha()},this.setClearAlpha=function(){kt.setClearAlpha(...arguments)},this.clear=function(v=!0,N=!0,tt=!0){let K=0;if(v){let Z=!1;if(k!==null){let _t=k.texture.format;Z=m.has(_t)}if(Z){let _t=k.texture.type,bt=g.has(_t),yt=kt.getClearColor(),wt=kt.getClearAlpha(),At=yt.r,Gt=yt.g,Xt=yt.b;bt?(E[0]=At,E[1]=Gt,E[2]=Xt,E[3]=wt,U.clearBufferuiv(U.COLOR,0,E)):(L[0]=At,L[1]=Gt,L[2]=Xt,L[3]=wt,U.clearBufferiv(U.COLOR,0,L))}else K|=U.COLOR_BUFFER_BIT}N&&(K|=U.DEPTH_BUFFER_BIT,this.state.buffers.depth.setMask(!0)),tt&&(K|=U.STENCIL_BUFFER_BIT,this.state.buffers.stencil.setMask(4294967295)),K!==0&&U.clear(K)},this.clearColor=function(){this.clear(!0,!1,!1)},this.clearDepth=function(){this.clear(!1,!0,!1)},this.clearStencil=function(){this.clear(!1,!1,!0)},this.setNodesHandler=function(v){v.setRenderer(this),W=v},this.dispose=function(){e.removeEventListener("webglcontextlost",le,!1),e.removeEventListener("webglcontextrestored",Qt,!1),e.removeEventListener("webglcontextcreationerror",di,!1),kt.dispose(),gt.dispose(),ft.dispose(),J.dispose(),lt.dispose(),rt.dispose(),vt.dispose(),ot.dispose(),dt.dispose(),Et.dispose(),Et.removeEventListener("sessionstart",Mu),Et.removeEventListener("sessionend",wu),kn.stop()};function le(v){v.preventDefault(),mr("WebGLRenderer: Context Lost."),z=!0}function Qt(){mr("WebGLRenderer: Context Restored."),z=!1;let v=H.autoReset,N=Pt.enabled,tt=Pt.autoUpdate,K=Pt.needsUpdate,Z=Pt.type;It(),H.autoReset=v,Pt.enabled=N,Pt.autoUpdate=tt,Pt.needsUpdate=K,Pt.type=Z}function di(v){Ut("WebGLRenderer: A WebGL context could not be created. Reason: ",v.statusMessage)}function Ai(v){let N=v.target;N.removeEventListener("dispose",Ai),dp(N)}function dp(v){fp(v),J.remove(v)}function fp(v){let N=J.get(v).programs;N!==void 0&&(N.forEach(function(tt){dt.releaseProgram(tt)}),v.isShaderMaterial&&dt.releaseShaderCache(v))}this.renderBufferDirect=function(v,N,tt,K,Z,_t){N===null&&(N=xe);let bt=Z.isMesh&&Z.matrixWorld.determinantAffine()<0,yt=gp(v,N,tt,K,Z);x.setMaterial(K,bt);let wt=tt.index,At=1;if(K.wireframe===!0){if(wt=nt.getWireframeAttribute(tt),wt===void 0)return;At=2}let Gt=tt.drawRange,Xt=tt.attributes.position,Tt=Gt.start*At,te=(Gt.start+Gt.count)*At;_t!==null&&(Tt=Math.max(Tt,_t.start*At),te=Math.min(te,(_t.start+_t.count)*At)),wt!==null?(Tt=Math.max(Tt,0),te=Math.min(te,wt.count)):Xt!=null&&(Tt=Math.max(Tt,0),te=Math.min(te,Xt.count));let ve=te-Tt;if(ve<0||ve===1/0)return;vt.setup(Z,K,yt,tt,wt);let ue,ae=pt;if(wt!==null&&(ue=ht.get(wt),ae=st,ae.setIndex(ue)),Z.isMesh)K.wireframe===!0?(x.setLineWidth(K.wireframeLinewidth*pe()),ae.setMode(U.LINES)):ae.setMode(U.TRIANGLES);else if(Z.isLine){let De=K.linewidth;De===void 0&&(De=1),x.setLineWidth(De*pe()),Z.isLineSegments?ae.setMode(U.LINES):Z.isLineLoop?ae.setMode(U.LINE_LOOP):ae.setMode(U.LINE_STRIP)}else Z.isPoints?ae.setMode(U.POINTS):Z.isSprite&&ae.setMode(U.TRIANGLES);if(Z.isBatchedMesh)if(ie.get("WEBGL_multi_draw"))ae.renderMultiDraw(Z._multiDrawStarts,Z._multiDrawCounts,Z._multiDrawCount);else{let De=Z._multiDrawStarts,St=Z._multiDrawCounts,ze=Z._multiDrawCount,$t=wt?ht.get(wt).bytesPerElement:1,ri=J.get(K).currentProgram.getUniforms();for(let Ci=0;Ci<ze;Ci++)ri.setValue(U,"_gl_DrawID",Ci),ae.render(De[Ci]/$t,St[Ci])}else if(Z.isInstancedMesh)ae.renderInstances(Tt,ve,Z.count);else if(tt.isInstancedBufferGeometry){let De=tt._maxInstanceCount!==void 0?tt._maxInstanceCount:1/0,St=Math.min(tt.instanceCount,De);ae.renderInstances(Tt,ve,St)}else ae.render(Tt,ve)};function bu(v,N,tt,K){W!==null&&v.isNodeMaterial&&W.setObject(K,v),zt===!0&&Rt.setState(v,tt,!1),v.transparent===!0&&v.side===Ui&&v.forceSinglePass===!1?(v.side=Pe,v.needsUpdate=!0,wa(v,N,K),v.side=Mn,v.needsUpdate=!0,wa(v,N,K),v.side=Ui):wa(v,N,K)}this.compile=function(v,N,tt=null){tt===null&&(tt=v),W!==null&&W.renderStart(v,N,tt),M=ft.get(tt),M.init(N),S.push(M),tt.traverseVisible(function(Z){Z.isLight&&Z.layers.test(N.layers)&&(M.pushLight(Z),Z.castShadow&&M.pushShadow(Z))}),v!==tt&&v.traverseVisible(function(Z){Z.isLight&&Z.layers.test(N.layers)&&(M.pushLight(Z),Z.castShadow&&M.pushShadow(Z))}),M.setupLights(),W!==null&&W.updateLights(M.state.lightsArray),Bt=this.localClippingEnabled,zt=Rt.init(this.clippingPlanes,Bt),zt===!0&&Rt.setGlobalState(this.clippingPlanes,N),W!==null&&Pt.render(M.state.shadowsArray,tt,N);let K=new Set;return v.traverse(function(Z){if(!(Z.isMesh||Z.isPoints||Z.isLine||Z.isSprite))return;let _t=Z.material;if(_t)if(Array.isArray(_t))for(let bt=0;bt<_t.length;bt++){let yt=_t[bt];bu(yt,tt,N,Z),K.add(yt)}else bu(_t,tt,N,Z),K.add(_t)}),M=S.pop(),W!==null&&W.renderEnd(),K},this.compileAsync=function(v,N,tt=null){let K=this.compile(v,N,tt);return new Promise(Z=>{function _t(){if(K.forEach(function(bt){let wt=J.get(bt).currentProgram;(wt===void 0||wt.isReady())&&K.delete(bt)}),K.size===0){Z(v);return}setTimeout(_t,10)}ie.get("KHR_parallel_shader_compile")!==null?_t():setTimeout(_t,10)})};let bc=null;function pp(v){bc&&bc(v)}function Mu(){kn.stop()}function wu(){kn.start()}let kn=new Qd;kn.setAnimationLoop(pp),typeof self<"u"&&kn.setContext(self),this.setAnimationLoop=function(v){bc=v,Et.setAnimationLoop(v),v===null?kn.stop():kn.start()},Et.addEventListener("sessionstart",Mu),Et.addEventListener("sessionend",wu),this.render=function(v,N){if(N!==void 0&&N.isCamera!==!0){Ut("WebGLRenderer.render: camera is not an instance of THREE.Camera.");return}if(z===!0)return;W!==null&&W.renderStart(v,N);let tt=Et.enabled===!0&&Et.isPresenting===!0,K=R!==null&&(k===null||tt)&&R.begin(B,k);if(v.matrixWorldAutoUpdate===!0&&v.updateMatrixWorld(),N.parent===null&&N.matrixWorldAutoUpdate===!0&&N.updateMatrixWorld(),Et.enabled===!0&&Et.isPresenting===!0&&(R===null||R.isCompositing()===!1)&&(Et.cameraAutoUpdate===!0&&Et.updateCamera(N),N=Et.getCamera()),v.isScene===!0&&v.onBeforeRender(B,v,N,k),M=ft.get(v,S.length),M.init(N),M.state.textureUnits=it.getTextureUnits(),S.push(M),Nt.multiplyMatrices(N.projectionMatrix,N.matrixWorldInverse),Dt.setFromProjectionMatrix(Nt,yi,N.reversedDepth),Bt=this.localClippingEnabled,zt=Rt.init(this.clippingPlanes,Bt),T=gt.get(v,F.length),T.init(),F.push(T),Et.enabled===!0&&Et.isPresenting===!0){let bt=B.xr.getDepthSensingMesh();bt!==null&&Mc(bt,N,-1/0,B.sortObjects)}Mc(v,N,0,B.sortObjects),T.finish(),W!==null&&W.updateLights(M.state.lightsArray),B.sortObjects===!0&&T.sort(ct,Mt),ne=Et.enabled===!1||Et.isPresenting===!1||Et.hasDepthSensing()===!1,ne&&kt.addToRenderList(T,v),this.info.render.frame++,this.info.autoReset===!0&&this.info.reset(),zt===!0&&Rt.beginShadows();let Z=M.state.shadowsArray;if(Pt.render(Z,v,N),zt===!0&&Rt.endShadows(),(K&&R.hasRenderPass())===!1){let bt=T.opaque,yt=T.transmissive;if(M.setupLights(),N.isArrayCamera){let wt=N.cameras;if(yt.length>0)for(let At=0,Gt=wt.length;At<Gt;At++){let Xt=wt[At];Eu(bt,yt,v,Xt)}ne&&kt.render(v);for(let At=0,Gt=wt.length;At<Gt;At++){let Xt=wt[At];Tu(T,v,Xt,Xt.viewport)}}else yt.length>0&&Eu(bt,yt,v,N),ne&&kt.render(v),Tu(T,v,N)}k!==null&&P===0&&(it.updateMultisampleRenderTarget(k),it.updateRenderTargetMipmap(k)),K&&R.end(B),v.isScene===!0&&v.onAfterRender(B,v,N),vt.resetDefaultState(),D=-1,G=null,S.pop(),S.length>0?(M=S[S.length-1],it.setTextureUnits(M.state.textureUnits),zt===!0&&Rt.setGlobalState(B.clippingPlanes,M.state.camera)):M=null,F.pop(),F.length>0?T=F[F.length-1]:T=null,W!==null&&W.renderEnd()};function Mc(v,N,tt,K){if(v.visible===!1)return;if(v.layers.test(N.layers)){if(v.isGroup)tt=v.renderOrder;else if(v.isLOD)v.autoUpdate===!0&&v.update(N);else if(v.isLightProbeGrid)M.pushLightProbeGrid(v);else if(v.isLight)M.pushLight(v),v.castShadow&&M.pushShadow(v);else if(v.isSprite){if(!v.frustumCulled||v.intersectsFrustum(Dt)){K&&Jt.setFromMatrixPosition(v.matrixWorld).applyMatrix4(Nt);let bt=rt.update(v),yt=v.material;yt.visible&&T.push(v,bt,yt,tt,Jt.z,null,N)}}else if((v.isMesh||v.isLine||v.isPoints)&&(!v.frustumCulled||v.intersectsFrustum(Dt))){let bt=rt.update(v),yt=v.material;if(K&&(v.boundingSphere!==void 0?(v.boundingSphere===null&&v.computeBoundingSphere(),Jt.copy(v.boundingSphere.center)):(bt.boundingSphere===null&&bt.computeBoundingSphere(),Jt.copy(bt.boundingSphere.center)),Jt.applyMatrix4(v.matrixWorld).applyMatrix4(Nt)),Array.isArray(yt)){let wt=bt.groups;for(let At=0,Gt=wt.length;At<Gt;At++){let Xt=wt[At],Tt=yt[Xt.materialIndex];Tt&&Tt.visible&&T.push(v,bt,Tt,tt,Jt.z,Xt,N)}}else yt.visible&&T.push(v,bt,yt,tt,Jt.z,null,N)}}let _t=v.children;for(let bt=0,yt=_t.length;bt<yt;bt++)Mc(_t[bt],N,tt,K)}function Tu(v,N,tt,K){let{opaque:Z,transmissive:_t,transparent:bt}=v;M.setupLightsView(tt),zt===!0&&Rt.setGlobalState(B.clippingPlanes,tt),K&&x.viewport(X.copy(K)),Z.length>0&&Ma(Z,N,tt),_t.length>0&&Ma(_t,N,tt),bt.length>0&&Ma(bt,N,tt),x.buffers.depth.setTest(!0),x.buffers.depth.setMask(!0),x.buffers.color.setMask(!0),x.setPolygonOffset(!1)}function Eu(v,N,tt,K){if((tt.isScene===!0?tt.overrideMaterial:null)!==null)return;if(M.state.transmissionRenderTarget[K.id]===void 0){let Tt=ie.has("EXT_color_buffer_half_float")||ie.has("EXT_color_buffer_float");M.state.transmissionRenderTarget[K.id]=new Ie(1,1,{generateMipmaps:!0,type:Tt?Si:Le,minFilter:Tn,samples:Math.max(4,A.samples),stencilBuffer:r,resolveDepthBuffer:!1,resolveStencilBuffer:!1,storeMultisampledDepthBuffer:!1,storeMultisampledStencilBuffer:!1,colorSpace:Yt.workingColorSpace})}let _t=M.state.transmissionRenderTarget[K.id],bt=K.viewport||X;_t.setSize(bt.z*B.transmissionResolutionScale,bt.w*B.transmissionResolutionScale);let yt=B.getRenderTarget(),wt=B.getActiveCubeFace(),At=B.getActiveMipmapLevel();B.setRenderTarget(_t),B.getClearColor(Y),j=B.getClearAlpha(),j<1&&B.setClearColor(16777215,.5),B.clear(),ne&&kt.render(tt);let Gt=B.toneMapping;B.toneMapping=ei;let Xt=K.viewport;if(K.viewport!==void 0&&(K.viewport=void 0),M.setupLightsView(K),zt===!0&&Rt.setGlobalState(B.clippingPlanes,K),Ma(v,tt,K),it.updateMultisampleRenderTarget(_t),it.updateRenderTargetMipmap(_t),ie.has("WEBGL_multisampled_render_to_texture")===!1){let Tt=!1;for(let te=0,ve=N.length;te<ve;te++){let ue=N[te],{object:ae,geometry:De,material:St,group:ze}=ue;if(St.side===Ui&&ae.layers.test(K.layers)){let $t=St.side;St.side=Pe,St.needsUpdate=!0,Au(ae,tt,K,De,St,ze),St.side=$t,St.needsUpdate=!0,Tt=!0}}Tt===!0&&(it.updateMultisampleRenderTarget(_t),it.updateRenderTargetMipmap(_t))}B.setRenderTarget(yt,wt,At),B.setClearColor(Y,j),Xt!==void 0&&(K.viewport=Xt),B.toneMapping=Gt}function Ma(v,N,tt){let K=N.isScene===!0?N.overrideMaterial:null;for(let Z=0,_t=v.length;Z<_t;Z++){let bt=v[Z],{object:yt,geometry:wt,group:At}=bt,Gt=bt.material;Gt.allowOverride===!0&&K!==null&&(Gt=K),yt.layers.test(tt.layers)&&Au(yt,N,tt,wt,Gt,At)}}function Au(v,N,tt,K,Z,_t){W!==null&&Z.isNodeMaterial&&W.setObject(v,Z),v.onBeforeRender(B,N,tt,K,Z,_t),v.modelViewMatrix.multiplyMatrices(tt.matrixWorldInverse,v.matrixWorld),v.normalMatrix.getNormalMatrix(v.modelViewMatrix),Z.onBeforeRender(B,N,tt,K,v,_t),Z.transparent===!0&&Z.side===Ui&&Z.forceSinglePass===!1?(Z.side=Pe,Z.needsUpdate=!0,B.renderBufferDirect(tt,N,K,Z,v,_t),Z.side=Mn,Z.needsUpdate=!0,B.renderBufferDirect(tt,N,K,Z,v,_t),Z.side=Ui):B.renderBufferDirect(tt,N,K,Z,v,_t),v.onAfterRender(B,N,tt,K,Z,_t)}function wa(v,N,tt){N.isScene!==!0&&(N=xe);let K=J.get(v),Z=M.state.lights,_t=M.state.shadowsArray,bt=Z.state.version,yt=dt.getParameters(v,Z.state,_t,N,tt,M.state.lightProbeGridArray),wt=dt.getProgramCacheKey(yt),At=K.programs;K.environment=v.isMeshStandardMaterial||v.isMeshLambertMaterial||v.isMeshPhongMaterial?N.environment:null,K.fog=N.fog;let Gt=v.isMeshStandardMaterial||v.isMeshLambertMaterial&&!v.envMap||v.isMeshPhongMaterial&&!v.envMap;K.envMap=lt.get(v.envMap||K.environment,Gt),K.envMapRotation=K.environment!==null&&v.envMap===null?N.environmentRotation:v.envMapRotation,At===void 0&&(v.addEventListener("dispose",Ai),At=new Map,K.programs=At);let Xt=At.get(wt);if(Xt!==void 0){if(K.currentProgram===Xt&&K.lightsStateVersion===bt)return Ru(v,yt),Xt}else yt.uniforms=dt.getUniforms(v),W!==null&&v.isNodeMaterial&&W.build(v,tt,yt),v.onBeforeCompile(yt,B),Xt=dt.acquireProgram(yt,wt),At.set(wt,Xt),K.uniforms=yt.uniforms;let Tt=K.uniforms;return(!v.isShaderMaterial&&!v.isRawShaderMaterial||v.clipping===!0)&&(Tt.clippingPlanes=Rt.uniform),Ru(v,yt),K.needsLights=yp(v),K.lightsStateVersion=bt,K.needsLights&&(Tt.ambientLightColor.value=Z.state.ambient,Tt.lightProbe.value=Z.state.probe,Tt.sunLights.value=Z.state.sun,Tt.sunLightShadows.value=Z.state.sunShadow,Tt.directionalLights.value=Z.state.directional,Tt.directionalLightShadows.value=Z.state.directionalShadow,Tt.spotLights.value=Z.state.spot,Tt.spotLightShadows.value=Z.state.spotShadow,Tt.rectAreaLights.value=Z.state.rectArea,Tt.ltc_1.value=Z.state.rectAreaLTC1,Tt.ltc_2.value=Z.state.rectAreaLTC2,Tt.pointLights.value=Z.state.point,Tt.pointLightShadows.value=Z.state.pointShadow,Tt.hemisphereLights.value=Z.state.hemi,Tt.sunShadowMatrix.value=Z.state.sunShadowMatrix,Tt.sunShadowCascade.value=Z.state.sunShadowCascade,Tt.directionalShadowMatrix.value=Z.state.directionalShadowMatrix,Tt.spotLightMatrix.value=Z.state.spotLightMatrix,Tt.spotLightMap.value=Z.state.spotLightMap,Tt.pointShadowMatrix.value=Z.state.pointShadowMatrix),K.lightProbeGrid=M.state.lightProbeGridArray.length>0,K.currentProgram=Xt,K.uniformsList=null,Xt}function Cu(v){if(v.uniformsList===null){let N=v.currentProgram.getUniforms();v.uniformsList=Os.seqWithValue(N.seq,v.uniforms)}return v.uniformsList}function Ru(v,N){let tt=J.get(v);tt.outputColorSpace=N.outputColorSpace,tt.batching=N.batching,tt.batchingColor=N.batchingColor,tt.instancing=N.instancing,tt.instancingColor=N.instancingColor,tt.instancingMorph=N.instancingMorph,tt.skinning=N.skinning,tt.morphTargets=N.morphTargets,tt.morphNormals=N.morphNormals,tt.morphColors=N.morphColors,tt.morphTargetsCount=N.morphTargetsCount,tt.numClippingPlanes=N.numClippingPlanes,tt.numIntersection=N.numClipIntersection,tt.vertexAlphas=N.vertexAlphas,tt.vertexTangents=N.vertexTangents,tt.toneMapping=N.toneMapping}function mp(v,N){if(v.length===0)return null;if(v.length===1)return v[0].texture!==null?v[0]:null;b.setFromMatrixPosition(N.matrixWorld);for(let tt=0,K=v.length;tt<K;tt++){let Z=v[tt];if(Z.texture!==null&&Z.boundingBox.containsPoint(b))return Z}return null}function gp(v,N,tt,K,Z){N.isScene!==!0&&(N=xe),it.resetTextureUnits();let _t=N.fog,bt=K.isMeshStandardMaterial||K.isMeshLambertMaterial||K.isMeshPhongMaterial?N.environment:null,yt=k===null?B.outputColorSpace:k.isXRRenderTarget===!0?k.texture.colorSpace:Yt.workingColorSpace,wt=K.isMeshStandardMaterial||K.isMeshLambertMaterial&&!K.envMap||K.isMeshPhongMaterial&&!K.envMap,At=lt.get(K.envMap||bt,wt),Gt=K.vertexColors===!0&&!!tt.attributes.color&&tt.attributes.color.itemSize===4,Xt=!!tt.attributes.tangent&&(!!K.normalMap||K.anisotropy>0),Tt=!!tt.morphAttributes.position,te=!!tt.morphAttributes.normal,ve=!!tt.morphAttributes.color,ue=ei;K.toneMapped&&(k===null||k.isXRRenderTarget===!0)&&(ue=B.toneMapping);let ae=tt.morphAttributes.position||tt.morphAttributes.normal||tt.morphAttributes.color,De=ae!==void 0?ae.length:0,St=J.get(K),ze=M.state.lights;if(zt===!0&&(Bt===!0||v!==G)){let ce=v===G&&K.id===D;Rt.setState(K,v,ce)}let $t=!1;K.version===St.__version?(St.needsLights&&St.lightsStateVersion!==ze.state.version||St.outputColorSpace!==yt||Z.isBatchedMesh&&St.batching===!1||!Z.isBatchedMesh&&St.batching===!0||Z.isBatchedMesh&&St.batchingColor===!0&&Z._colorsTexture===null||Z.isBatchedMesh&&St.batchingColor===!1&&Z._colorsTexture!==null||Z.isInstancedMesh&&St.instancing===!1||!Z.isInstancedMesh&&St.instancing===!0||Z.isSkinnedMesh&&St.skinning===!1||!Z.isSkinnedMesh&&St.skinning===!0||Z.isInstancedMesh&&St.instancingColor===!0&&Z.instanceColor===null||Z.isInstancedMesh&&St.instancingColor===!1&&Z.instanceColor!==null||Z.isInstancedMesh&&St.instancingMorph===!0&&Z.morphTexture===null||Z.isInstancedMesh&&St.instancingMorph===!1&&Z.morphTexture!==null||St.envMap!==At||K.fog===!0&&St.fog!==_t||St.numClippingPlanes!==void 0&&(St.numClippingPlanes!==Rt.numPlanes||St.numIntersection!==Rt.numIntersection)||St.vertexAlphas!==Gt||St.vertexTangents!==Xt||St.morphTargets!==Tt||St.morphNormals!==te||St.morphColors!==ve||St.toneMapping!==ue||St.morphTargetsCount!==De||!!St.lightProbeGrid!=M.state.lightProbeGridArray.length>0)&&($t=!0):($t=!0,St.__version=K.version);let ri=St.currentProgram;$t===!0&&(ri=wa(K,N,Z),W&&K.isNodeMaterial&&W.onUpdateProgram(K,ri,St));let Ci=!1,nn=!1,cs=!1,se=ri.getUniforms(),ye=St.uniforms;if(x.useProgram(ri.program)&&(Ci=!0,nn=!0,cs=!0),K.id!==D&&(D=K.id,nn=!0),St.needsLights){let ce=mp(M.state.lightProbeGridArray,Z);St.lightProbeGrid!==ce&&(St.lightProbeGrid=ce,nn=!0)}if(Ci||G!==v){x.buffers.depth.getReversed()&&v.reversedDepth!==!0&&(v._reversedDepth=!0,v.updateProjectionMatrix()),se.setValue(U,"projectionMatrix",v.projectionMatrix),se.setValue(U,"viewMatrix",v.matrixWorldInverse);let rn=se.map.cameraPosition;rn!==void 0&&rn.setValue(U,Zt.setFromMatrixPosition(v.matrixWorld)),A.logarithmicDepthBuffer&&se.setValue(U,"logDepthBufFC",2/(Math.log(v.far+1)/Math.LN2)),(K.isMeshPhongMaterial||K.isMeshToonMaterial||K.isMeshLambertMaterial||K.isMeshBasicMaterial||K.isMeshStandardMaterial||K.isShaderMaterial)&&se.setValue(U,"isOrthographic",v.isOrthographicCamera===!0),G!==v&&(G=v,nn=!0,cs=!0)}if(St.needsLights&&(ze.state.sunShadowMap.length>0&&se.setValue(U,"sunShadowMap",ze.state.sunShadowMap,it),ze.state.directionalShadowMap.length>0&&se.setValue(U,"directionalShadowMap",ze.state.directionalShadowMap,it),ze.state.spotShadowMap.length>0&&se.setValue(U,"spotShadowMap",ze.state.spotShadowMap,it),ze.state.pointShadowMap.length>0&&se.setValue(U,"pointShadowMap",ze.state.pointShadowMap,it)),Z.isSkinnedMesh){se.setOptional(U,Z,"bindMatrix"),se.setOptional(U,Z,"bindMatrixInverse");let ce=Z.skeleton;ce&&(ce.boneTexture===null&&ce.computeBoneTexture(),se.setValue(U,"boneTexture",ce.boneTexture,it))}Z.isBatchedMesh&&(se.setOptional(U,Z,"batchingTexture"),se.setValue(U,"batchingTexture",Z._matricesTexture,it),se.setOptional(U,Z,"batchingIdTexture"),se.setValue(U,"batchingIdTexture",Z._indirectTexture,it),se.setOptional(U,Z,"batchingColorTexture"),Z._colorsTexture!==null&&se.setValue(U,"batchingColorTexture",Z._colorsTexture,it));let sn=tt.morphAttributes;if((sn.position!==void 0||sn.normal!==void 0||sn.color!==void 0)&&O.update(Z,tt,ri),(nn||St.receiveShadow!==Z.receiveShadow)&&(St.receiveShadow=Z.receiveShadow,se.setValue(U,"receiveShadow",Z.receiveShadow)),(K.isMeshStandardMaterial||K.isMeshLambertMaterial||K.isMeshPhongMaterial)&&K.envMap===null&&N.environment!==null&&(ye.envMapIntensity.value=N.environmentIntensity),ye.dfgLUT!==void 0&&(ye.dfgLUT.value=Jy()),nn){if(se.setValue(U,"toneMappingExposure",B.toneMappingExposure),St.needsLights&&xp(ye,cs),_t&&K.fog===!0&&Ct.refreshFogUniforms(ye,_t),Ct.refreshMaterialUniforms(ye,K,et,q,M.state.transmissionRenderTarget[v.id]),St.needsLights&&St.lightProbeGrid){let ce=St.lightProbeGrid;ye.probesSH.value=ce.texture,ye.probesMin.value.copy(ce.boundingBox.min),ye.probesMax.value.copy(ce.boundingBox.max),ye.probesResolution.value.copy(ce.resolution)}Os.upload(U,Cu(St),ye,it)}if(K.isShaderMaterial&&K.uniformsNeedUpdate===!0&&(Os.upload(U,Cu(St),ye,it),K.uniformsNeedUpdate=!1),K.isSpriteMaterial&&se.setValue(U,"center",Z.center),se.setValue(U,"modelViewMatrix",Z.modelViewMatrix),se.setValue(U,"normalMatrix",Z.normalMatrix),se.setValue(U,"modelMatrix",Z.matrixWorld),K.uniformsGroups!==void 0){let ce=K.uniformsGroups;for(let rn=0,hs=ce.length;rn<hs;rn++){let Pu=ce[rn];ot.update(Pu,ri),ot.bind(Pu,ri)}}return ri}function xp(v,N){v.ambientLightColor.needsUpdate=N,v.lightProbe.needsUpdate=N,v.sunLights.needsUpdate=N,v.sunLightShadows.needsUpdate=N,v.directionalLights.needsUpdate=N,v.directionalLightShadows.needsUpdate=N,v.pointLights.needsUpdate=N,v.pointLightShadows.needsUpdate=N,v.spotLights.needsUpdate=N,v.spotLightShadows.needsUpdate=N,v.rectAreaLights.needsUpdate=N,v.hemisphereLights.needsUpdate=N}function yp(v){return v.isMeshLambertMaterial||v.isMeshToonMaterial||v.isMeshPhongMaterial||v.isMeshStandardMaterial||v.isShadowMaterial||v.isShaderMaterial&&v.lights===!0}this.getActiveCubeFace=function(){return C},this.getActiveMipmapLevel=function(){return P},this.getRenderTarget=function(){return k},this.setRenderTargetTextures=function(v,N,tt){let K=J.get(v);K.__autoAllocateDepthBuffer=v.resolveDepthBuffer===!1,K.__autoAllocateDepthBuffer===!1&&(K.__useRenderToTexture=!1),J.get(v.texture).__webglTexture=N,J.get(v.depthTexture).__webglTexture=K.__autoAllocateDepthBuffer?void 0:tt,K.__hasExternalTextures=!0},this.setRenderTargetFramebuffer=function(v,N){let tt=J.get(v);tt.__webglFramebuffer=N,tt.__useDefaultFramebuffer=N===void 0},this.setRenderTarget=function(v,N=0,tt=0){k=v,C=N,P=tt;let K=null,Z=!1,_t=!1;if(v){let yt=J.get(v);if(yt.__useDefaultFramebuffer!==void 0){x.bindFramebuffer(U.FRAMEBUFFER,yt.__webglFramebuffer),X.copy(v.viewport),w.copy(v.scissor),I=v.scissorTest,x.viewport(X),x.scissor(w),x.setScissorTest(I),D=-1;return}else if(yt.__webglFramebuffer===void 0)it.setupRenderTarget(v);else if(yt.__hasExternalTextures)it.rebindTextures(v,J.get(v.texture).__webglTexture,J.get(v.depthTexture).__webglTexture);else if(v.depthBuffer){let Gt=v.depthTexture;if(yt.__boundDepthTexture!==Gt){if(Gt!==null&&J.has(Gt)&&(v.width!==Gt.image.width||v.height!==Gt.image.height))throw new Error("THREE.WebGLRenderer: Attached DepthTexture is initialized to the incorrect size.");it.setupDepthRenderbuffer(v)}}let wt=v.texture;(wt.isData3DTexture||wt.isDataArrayTexture||wt.isCompressedArrayTexture)&&(_t=!0);let At=J.get(v).__webglFramebuffer;v.isWebGLCubeRenderTarget?(Array.isArray(At[N])?K=At[N][tt]:K=At[N],Z=!0):v.samples>0&&it.useMultisampledRTT(v)===!1?K=J.get(v).__webglMultisampledFramebuffer:Array.isArray(At)?K=At[tt]:K=At,X.copy(v.viewport),w.copy(v.scissor),I=v.scissorTest}else X.copy(ut).multiplyScalar(et).floor(),w.copy(Lt).multiplyScalar(et).floor(),I=Vt;if(tt!==0&&(K=$),x.bindFramebuffer(U.FRAMEBUFFER,K)&&x.drawBuffers(v,K),x.viewport(X),x.scissor(w),x.setScissorTest(I),Z){let yt=J.get(v.texture);U.framebufferTexture2D(U.FRAMEBUFFER,U.COLOR_ATTACHMENT0,U.TEXTURE_CUBE_MAP_POSITIVE_X+N,yt.__webglTexture,tt)}else if(_t){let yt=N;for(let wt=0;wt<v.textures.length;wt++){let At=J.get(v.textures[wt]);U.framebufferTextureLayer(U.FRAMEBUFFER,U.COLOR_ATTACHMENT0+wt,At.__webglTexture,tt,yt)}}else if(v!==null&&tt!==0){let yt=J.get(v.texture);U.framebufferTexture2D(U.FRAMEBUFFER,U.COLOR_ATTACHMENT0,U.TEXTURE_2D,yt.__webglTexture,tt)}D=-1};function Iu(v){let N=J.get(v);return(N.__readFormat!==v.format||N.__readType!==v.type)&&(N.__readFormat=v.format,N.__readType=v.type,N.__formatReadable=A.textureFormatReadable(v.format),N.__typeReadable=A.textureTypeReadable(v.type)),N}this.readRenderTargetPixels=function(v,N,tt,K,Z,_t,bt,yt=0){if(!(v&&v.isWebGLRenderTarget)){Ut("WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");return}let wt=J.get(v).__webglFramebuffer;if(v.isWebGLCubeRenderTarget&&bt!==void 0&&(wt=wt[bt]),wt){x.bindFramebuffer(U.FRAMEBUFFER,wt);try{let At=v.textures[yt],Gt=At.format,Xt=At.type;v.textures.length>1&&U.readBuffer(U.COLOR_ATTACHMENT0+yt);let Tt=Iu(At);if(Tt.__formatReadable===!1){Ut("WebGLRenderer.readRenderTargetPixels: renderTarget is not in RGBA or implementation defined format.");return}if(Tt.__typeReadable===!1){Ut("WebGLRenderer.readRenderTargetPixels: renderTarget is not in UnsignedByteType or implementation defined type.");return}N>=0&&N<=v.width-K&&tt>=0&&tt<=v.height-Z&&U.readPixels(N,tt,K,Z,mt.convert(Gt),mt.convert(Xt),_t)}finally{let At=k!==null?J.get(k).__webglFramebuffer:null;x.bindFramebuffer(U.FRAMEBUFFER,At)}}},this.readRenderTargetPixelsAsync=async function(v,N,tt,K,Z,_t,bt,yt=0){if(!(v&&v.isWebGLRenderTarget))throw new Error("THREE.WebGLRenderer.readRenderTargetPixels: renderTarget is not THREE.WebGLRenderTarget.");let wt=J.get(v).__webglFramebuffer;if(v.isWebGLCubeRenderTarget&&bt!==void 0&&(wt=wt[bt]),wt)if(N>=0&&N<=v.width-K&&tt>=0&&tt<=v.height-Z){x.bindFramebuffer(U.FRAMEBUFFER,wt);let At=v.textures[yt],Gt=At.format,Xt=At.type;v.textures.length>1&&U.readBuffer(U.COLOR_ATTACHMENT0+yt);let Tt=Iu(At);if(Tt.__formatReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in RGBA or implementation defined format.");if(Tt.__typeReadable===!1)throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: renderTarget is not in UnsignedByteType or implementation defined type.");let te=U.createBuffer();U.bindBuffer(U.PIXEL_PACK_BUFFER,te),U.bufferData(U.PIXEL_PACK_BUFFER,_t.byteLength,U.STREAM_READ),U.readPixels(N,tt,K,Z,mt.convert(Gt),mt.convert(Xt),0),U.bindBuffer(U.PIXEL_PACK_BUFFER,null);let ve=k!==null?J.get(k).__webglFramebuffer:null;x.bindFramebuffer(U.FRAMEBUFFER,ve);let ue=U.fenceSync(U.SYNC_GPU_COMMANDS_COMPLETE,0);return U.flush(),await Ed(U,ue,4),U.bindBuffer(U.PIXEL_PACK_BUFFER,te),U.getBufferSubData(U.PIXEL_PACK_BUFFER,0,_t),U.bindBuffer(U.PIXEL_PACK_BUFFER,null),U.deleteBuffer(te),U.deleteSync(ue),_t}else throw new Error("THREE.WebGLRenderer.readRenderTargetPixelsAsync: requested read bounds are out of range.")},this.copyFramebufferToTexture=function(v,N=null,tt=0){let K=Math.pow(2,-tt),Z=Math.floor(v.image.width*K),_t=Math.floor(v.image.height*K),bt=N!==null?N.x:0,yt=N!==null?N.y:0;it.setTexture2D(v,0),U.copyTexSubImage2D(U.TEXTURE_2D,tt,0,0,bt,yt,Z,_t),x.unbindTexture()},this.copyTextureToTexture=function(v,N,tt=null,K=null,Z=0,_t=0){let bt,yt,wt,At,Gt,Xt,Tt,te,ve,ue=v.isCompressedTexture?v.mipmaps[_t]:v.image;if(tt!==null)bt=tt.max.x-tt.min.x,yt=tt.max.y-tt.min.y,wt=tt.isBox3?tt.max.z-tt.min.z:1,At=tt.min.x,Gt=tt.min.y,Xt=tt.isBox3?tt.min.z:0;else{let ye=Math.pow(2,-Z);bt=Math.floor(ue.width*ye),yt=Math.floor(ue.height*ye),v.isDataArrayTexture?wt=ue.depth:v.isData3DTexture?wt=Math.floor(ue.depth*ye):wt=1,At=0,Gt=0,Xt=0}K!==null?(Tt=K.x,te=K.y,ve=K.z):(Tt=0,te=0,ve=0);let ae=mt.convert(N.format),De=mt.convert(N.type),St;N.isData3DTexture?(it.setTexture3D(N,0),St=U.TEXTURE_3D):N.isDataArrayTexture||N.isCompressedArrayTexture?(it.setTexture2DArray(N,0),St=U.TEXTURE_2D_ARRAY):(it.setTexture2D(N,0),St=U.TEXTURE_2D),x.activeTexture(U.TEXTURE0),x.pixelStorei(U.UNPACK_FLIP_Y_WEBGL,N.flipY),x.pixelStorei(U.UNPACK_PREMULTIPLY_ALPHA_WEBGL,N.premultiplyAlpha),x.pixelStorei(U.UNPACK_ALIGNMENT,N.unpackAlignment);let ze=x.getParameter(U.UNPACK_ROW_LENGTH),$t=x.getParameter(U.UNPACK_IMAGE_HEIGHT),ri=x.getParameter(U.UNPACK_SKIP_PIXELS),Ci=x.getParameter(U.UNPACK_SKIP_ROWS),nn=x.getParameter(U.UNPACK_SKIP_IMAGES);x.pixelStorei(U.UNPACK_ROW_LENGTH,ue.width),x.pixelStorei(U.UNPACK_IMAGE_HEIGHT,ue.height),x.pixelStorei(U.UNPACK_SKIP_PIXELS,At),x.pixelStorei(U.UNPACK_SKIP_ROWS,Gt),x.pixelStorei(U.UNPACK_SKIP_IMAGES,Xt);let cs=v.isDataArrayTexture||v.isData3DTexture,se=N.isDataArrayTexture||N.isData3DTexture;if(v.isDepthTexture){let ye=J.get(v),sn=J.get(N),ce=J.get(ye.__renderTarget),rn=J.get(sn.__renderTarget);x.bindFramebuffer(U.READ_FRAMEBUFFER,ce.__webglFramebuffer),x.bindFramebuffer(U.DRAW_FRAMEBUFFER,rn.__webglFramebuffer);for(let hs=0;hs<wt;hs++)cs&&(U.framebufferTextureLayer(U.READ_FRAMEBUFFER,U.COLOR_ATTACHMENT0,J.get(v).__webglTexture,Z,Xt+hs),U.framebufferTextureLayer(U.DRAW_FRAMEBUFFER,U.COLOR_ATTACHMENT0,J.get(N).__webglTexture,_t,ve+hs)),U.blitFramebuffer(At,Gt,bt,yt,Tt,te,bt,yt,U.DEPTH_BUFFER_BIT,U.NEAREST);x.bindFramebuffer(U.READ_FRAMEBUFFER,null),x.bindFramebuffer(U.DRAW_FRAMEBUFFER,null)}else if(Z!==0||v.isRenderTargetTexture||J.has(v)){let ye=J.get(v),sn=J.get(N);x.bindFramebuffer(U.READ_FRAMEBUFFER,V),x.bindFramebuffer(U.DRAW_FRAMEBUFFER,_);for(let ce=0;ce<wt;ce++)cs?U.framebufferTextureLayer(U.READ_FRAMEBUFFER,U.COLOR_ATTACHMENT0,ye.__webglTexture,Z,Xt+ce):U.framebufferTexture2D(U.READ_FRAMEBUFFER,U.COLOR_ATTACHMENT0,U.TEXTURE_2D,ye.__webglTexture,Z),se?U.framebufferTextureLayer(U.DRAW_FRAMEBUFFER,U.COLOR_ATTACHMENT0,sn.__webglTexture,_t,ve+ce):U.framebufferTexture2D(U.DRAW_FRAMEBUFFER,U.COLOR_ATTACHMENT0,U.TEXTURE_2D,sn.__webglTexture,_t),Z!==0?U.blitFramebuffer(At,Gt,bt,yt,Tt,te,bt,yt,U.COLOR_BUFFER_BIT,U.NEAREST):se?U.copyTexSubImage3D(St,_t,Tt,te,ve+ce,At,Gt,bt,yt):U.copyTexSubImage2D(St,_t,Tt,te,At,Gt,bt,yt);x.bindFramebuffer(U.READ_FRAMEBUFFER,null),x.bindFramebuffer(U.DRAW_FRAMEBUFFER,null)}else se?v.isDataTexture||v.isData3DTexture?U.texSubImage3D(St,_t,Tt,te,ve,bt,yt,wt,ae,De,ue.data):N.isCompressedArrayTexture?U.compressedTexSubImage3D(St,_t,Tt,te,ve,bt,yt,wt,ae,ue.data):U.texSubImage3D(St,_t,Tt,te,ve,bt,yt,wt,ae,De,ue):v.isDataTexture?U.texSubImage2D(U.TEXTURE_2D,_t,Tt,te,bt,yt,ae,De,ue.data):v.isCompressedTexture?U.compressedTexSubImage2D(U.TEXTURE_2D,_t,Tt,te,ue.width,ue.height,ae,ue.data):U.texSubImage2D(U.TEXTURE_2D,_t,Tt,te,bt,yt,ae,De,ue);x.pixelStorei(U.UNPACK_ROW_LENGTH,ze),x.pixelStorei(U.UNPACK_IMAGE_HEIGHT,$t),x.pixelStorei(U.UNPACK_SKIP_PIXELS,ri),x.pixelStorei(U.UNPACK_SKIP_ROWS,Ci),x.pixelStorei(U.UNPACK_SKIP_IMAGES,nn),_t===0&&N.generateMipmaps&&U.generateMipmap(St),x.unbindTexture()},this.initRenderTarget=function(v){J.get(v).__webglFramebuffer===void 0&&it.setupRenderTarget(v)},this.initTexture=function(v){v.isCubeTexture?it.setTextureCube(v,0):v.isData3DTexture?it.setTexture3D(v,0):v.isDataArrayTexture||v.isCompressedArrayTexture?it.setTexture2DArray(v,0):it.setTexture2D(v,0),x.unbindTexture()},this.resetState=function(){C=0,P=0,k=null,x.reset(),vt.reset()},typeof __THREE_DEVTOOLS__<"u"&&__THREE_DEVTOOLS__.dispatchEvent(new CustomEvent("observe",{detail:this}))}get coordinateSystem(){return yi}get outputColorSpace(){return this._outputColorSpace}set outputColorSpace(t){this._outputColorSpace=t;let e=this.getContext();e.drawingBufferColorSpace=Yt._getDrawingBufferColorSpace(t),e.unpackColorSpace=Yt._getUnpackColorSpace()}};var of="a2racer4.settings",Qy={resolution:"auto",renderScale:100,volume:100,showFps:!1,fullscreen:!0,touch:"auto",deadzone:.18};function Qn(s){let t=s.get("touch");return t==="on"?!0:t==="off"?!1:typeof matchMedia=="function"&&matchMedia("(pointer: coarse)").matches&&navigator.maxTouchPoints>0}function Wr(){return document.fullscreenElement||document.webkitFullscreenElement||null}function lf(s){return s===0?{width:320,height:200}:s===1?{width:640,height:480}:null}function Nl(s,t,e){return e>=4/3?{width:Math.round(s*.75*e),height:t}:{width:s,height:Math.round(t*(4/3)/e)}}var Dl=class{constructor(){this.values={...Qy};try{Object.assign(this.values,JSON.parse(localStorage.getItem(of)||"{}"))}catch{}this.listeners=new Set}get(t){return this.values[t]}set(t,e){this.values[t]=e;try{localStorage.setItem(of,JSON.stringify(this.values))}catch{}for(let i of this.listeners)i(t,e)}renderSize(t,e,i,n=1/0,r=null){let a=this.values.resolution,o,l;a==="auto"&&r?(o=r.width,l=r.height):a==="auto"?(o=t*i,l=e*i):(l=Number(a),o=l*t/e);let c=this.values.renderScale/100,h=Math.min(c,n/o,n/l);return{width:Math.max(16,Math.round(o*h)),height:Math.max(16,Math.round(l*h)),limited:h<c}}};var Hh=12e4,t_=24e4,Ul=Hh+t_,e_=512,zh=6e5,Vs=1024,mf=2e5,cf=65535,i_=6,Gh=900,n_=1e3/60,hf=[7295120,7316120],uf=[7094792,7115792],df=[7115880,7126760],s_=5/6/Math.tan(33.75*Math.PI/180),r_=3.75/6/Math.tan(33.75*Math.PI/180),me={ZENABLE:7,ZWRITEENABLE:14,SRCBLEND:19,DESTBLEND:20,TEXTUREMAPBLEND:21,ALPHABLENDENABLE:27,FOGENABLE:28,FOGCOLOR:34,COLORKEYENABLE:41,ZBIAS:47,TEXTUREMAG:17,TEXTUREMIN:18},ff={1:Cr,2:Rr,3:Fo,4:Do,5:Ir,6:Pr,7:No,8:Uo,9:Oo,10:ko,11:Bo},gf=`
precision highp float;
precision highp int;
in uvec4 aPos;
in uvec2 aColor;
in uvec2 aUV;
in uint aInfo;
uniform highp sampler2D uMatrices;
uniform mat4 uViewProj;
uniform mat4 uClipMap;
uniform mat4 uScreenMap;
out vec4 vColor;
out float vFog;
out vec2 vUV;
flat out uint vTex;
flat out uint vLayer;
const float BYTE = 1.0 / 255.0;
void main() {
  uint matrix = aInfo & 0x3FFu;
  bool screen = (aInfo & 0x400u) != 0u;
  uint tex = aInfo >> 16;
  vTex = tex == 0xFFFFu ? 7u : tex >> 12;
  vLayer = tex & 0xFFFu;
  vec4 p = vec4(uintBitsToFloat(aPos.x), uintBitsToFloat(aPos.y), uintBitsToFloat(aPos.z), 1.0);
  if (screen) {
    // D3DTLVERTEX: x and y in pixels of the game's 640x480 mode.
    gl_Position = uScreenMap * p;
  } else {
    int row = int(matrix);
    mat4 world = mat4(
      texelFetch(uMatrices, ivec2(0, row), 0), texelFetch(uMatrices, ivec2(1, row), 0),
      texelFetch(uMatrices, ivec2(2, row), 0), texelFetch(uMatrices, ivec2(3, row), 0));
    gl_Position = uClipMap * uViewProj * world * p;
  }
  uint c = aColor.x;
  vColor = vec4(float((c >> 16) & 255u), float((c >> 8) & 255u), float(c & 255u), float(c >> 24)) * BYTE;
  vFog = float(aColor.y >> 24) * BYTE;
  vUV = vec2(uintBitsToFloat(aUV.x), uintBitsToFloat(aUV.y));
}`,a_=`
precision highp float;
precision highp int;
precision highp sampler2DArray;
uniform sampler2DArray uTex0;
uniform sampler2DArray uTex1;
uniform sampler2DArray uTex2;
uniform sampler2DArray uTex3;
uniform sampler2DArray uTex4;
uniform sampler2DArray uTex5;
uniform int uMapBlend;
uniform int uFog;
uniform int uNearest;
uniform vec3 uFogColor;
in vec4 vColor;
in float vFog;
in vec2 vUV;
flat in uint vTex;
flat in uint vLayer;
out vec4 outColor;
// Filter is draw state in the game, not texture state: FUN_004bc200. The arrays stay linear and
// a draw with the filter off reads its texel directly, wrapping as the sampler would.
vec4 sampleTex(sampler2DArray s) {
  if (uNearest == 0) return texture(s, vec3(vUV, float(vLayer)));
  ivec2 size = textureSize(s, 0).xy;
  return texelFetch(s, ivec3(min(ivec2(fract(vUV) * vec2(size)), size - 1), int(vLayer)), 0);
}
void main() {
  vec4 c = vColor;
  if (vTex != 7u) {
    vec4 t;
    if (vTex == 0u) t = sampleTex(uTex0);
    else if (vTex == 1u) t = sampleTex(uTex1);
    else if (vTex == 2u) t = sampleTex(uTex2);
    else if (vTex == 3u) t = sampleTex(uTex3);
    else if (vTex == 4u) t = sampleTex(uTex4);
    else t = sampleTex(uTex5);
    // Colour-keyed texels are black with alpha 0, so dividing by the filtered alpha
    // recovers the real colour without dark edges.
    if (t.a < 0.5) discard;
    t.rgb /= t.a;
    if (uMapBlend == 2) c = vec4(t.rgb * vColor.rgb, vColor.a);
    else if (uMapBlend == 4) c = vec4(t.rgb * vColor.rgb, t.a * vColor.a);
    else c = vec4(t.rgb, 1.0);
  }
  if (uFog != 0) c.rgb = mix(uFogColor, c.rgb, vFog);
  outColor = c;
}`,o_=254,l_=gf.replace("out vec4 vColor;",`out vec4 vColor;
flat out float vFlatAlpha;`).replace("  vFog = ",`  vFlatAlpha = float(c >> 24);
  vFog = `),c_=`
precision highp float;
precision highp int;
uniform highp sampler2D uPage;
uniform highp sampler2D uColors;
uniform int uDirect;
uniform vec4 uStipple;    // mode pixels per target pixel, and where the mode's first pixel lies
uniform float uTargetHeight;
in vec4 vColor;
flat in float vFlatAlpha;
in vec2 vUV;
flat in uint vTex;
out vec4 outColor;
// Measured on the Ramp device, not in its documents: docs/research/render-8bit.md.
const int STIPPLE[16] = int[16](0, 12, 3, 15, 8, 4, 11, 7, 2, 14, 1, 13, 10, 6, 9, 5);
void main() {
  float index;
  if (vTex != 7u) {
    ivec2 size = textureSize(uPage, 0);
    index = floor(texelFetch(uPage, min(ivec2(fract(vUV) * vec2(size)), size - 1), 0).r * 255.0 + 0.5);
    if (index == ${o_}.0) discard;
  } else {
    // No texture, state 1 = 0. The blue byte picks a step of the material's ramp, 16 palette entries
    // from the top down, which the driver took while they were free. The game's palette then
    // replaced their colours. Vertex alpha screens the triangle, by its first vertex.
    index = 255.0 - floor(vColor.b * 15.0 + 0.001);
    ivec2 p = ivec2(floor(gl_FragCoord.x * uStipple.x), floor((uTargetHeight - gl_FragCoord.y) * uStipple.y)) - ivec2(uStipple.zw);
    if (float(STIPPLE[(p.y & 3) * 4 + (p.x & 3)]) * 16.0 >= vFlatAlpha) discard;
  }
  if (uDirect != 0) outColor = vec4(texelFetch(uColors, ivec2(int(index), 0), 0).rgb, 1.0);
  else outColor = vec4(index / 255.0, 0.0, 0.0, 1.0);
}`,pf="in vec3 position; out vec2 vNdc; void main() { vNdc = position.xy; gl_Position = vec4(position.xy, 0.0, 1.0); }",h_=`
precision highp float;
precision highp int;
uniform highp sampler2D uSky;
uniform vec2 uReach;      // xr, yr
uniform vec2 uMode;       // W, H
uniform float uClipY;
uniform float uStart;
uniform float uRows;
uniform float uSourceWidth;
in vec2 vNdc;
out vec4 outColor;
void main() {
  float x = floor((vNdc.x * uReach.x + 1.0) * uMode.x * 0.5);
  float y = floor((uClipY - vNdc.y * uReach.y) / (2.0 * uClipY) * uMode.y);
  if (y >= uRows) discard;
  float row = y < 0.0 ? mod(-y - 1.0, uRows) : y;
  outColor = vec4(texelFetch(uSky, ivec2(int(mod(x + uStart, uSourceWidth)), int(row)), 0).r, 0.0, 0.0, 1.0);
}`,u_=`
precision highp float;
precision highp int;
uniform highp sampler2D uIndex;
uniform highp sampler2D uColors;
out vec4 outColor;
void main() {
  int index = int(texelFetch(uIndex, ivec2(gl_FragCoord.xy), 0).r * 255.0 + 0.5);
  outColor = vec4(texelFetch(uColors, ivec2(index, 0), 0).rgb, 1.0);
}`,d_=`
precision highp float;
uniform sampler2D uWorld;
uniform sampler2D uHud;
uniform vec2 uWorldSize;
uniform vec2 uHudSize;
uniform vec2 uOutSize;
in vec2 vUV;
out vec4 c;
vec2 sharp(vec2 size) {
  vec2 texel = vUV * size;
  vec2 scale = max(uOutSize / size, vec2(1.0));
  vec2 range = 0.5 - 0.5 / scale;
  vec2 d = fract(texel) - 0.5;
  return (floor(texel) + (d - clamp(d, -range, range)) * scale + 0.5) / size;
}
void main() {
  vec4 hud = texture(uHud, sharp(uHudSize));
  c = vec4(hud.rgb + texture(uWorld, sharp(uWorldSize)).rgb * (1.0 - hud.a), 1.0);
}`,Bs=(s,t)=>-(s[12]*s[t]+s[13]*s[t+1]+s[14]*s[t+2]),Xr=class{constructor(){this.matrices=new Float32Array(Vs*16),this.matrices.set([1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1],0),this.matKeys=new Map,this.prevRow=new Int32Array(Vs),this.dynFloats=new Float32Array(mf),this.dynamic=new Map,this.view=new Float32Array(16),this.proj=new Float32Array(16),this.reset()}reset(){this.vertCount=0,this.indexCount=0,this.batches=[],this.matrixCount=1,this.lastKey=-1,this.lastBatch=null,this.matKeys.clear(),this.dynamic.clear(),this.dynUsed=0,this.hasView=!1,this.full=!1,this.sky=null}},Ol=class{constructor(t,e={}){this.canvas=t,this.useStatic=e.staticTrack!==!1,this.three=new Pl({canvas:t,antialias:e.antialias===!0,alpha:!1,depth:!0,stencil:!1,powerPreference:"high-performance",preserveDrawingBuffer:e.preserve===!0}),this.three.autoClear=!1,this.three.sortObjects=!1,this.three.setPixelRatio(1),this.three.outputColorSpace=_i,this.three.toneMapping=ei,this.camera=new Zn,this.sceneWorld=new mn,this.sceneWorld.matrixWorldAutoUpdate=!1,this.sceneHud=new mn,this.sceneHud.matrixWorldAutoUpdate=!1,this.m=null,this.state=new Int32Array(64),this.lightState=new Float64Array(16),this.materials=new Map,this.meshesWorld=[],this.meshesHud=[],this.stats={verts:0,indices:0,batches:0,matrices:0,ticksCaptured:0},this.view=new Float32Array(16),this.proj=new Float32Array(16),this.viewProjSceneA=new jt,this.sceneVP=new jt,this.clipMap=new jt,this.screenMap=new jt,this.hudClipMap=new jt,this.hudScreenMap=new jt,this.tmpV=new jt,this.tmpP=new jt,this.hud=!1,this.noBlend=!1,this.screenFill=null,this.captureLevel=2,this.drawsThisFrame=0,this.viewW=640,this.viewH=480,this.area={x:0,y:0,w:640,h:480},this.xr=1,this.yr=.75,this.effective={width:640,height:480},this.renderTarget=null,this.setupGeometry(),this.setupTextures(),this.frameB=new Xr,this.frameA=new Xr,this.capturing=new Xr,this.stateCapture(),this.blitSetup(),this.occ=new Map,this.staticMap=new Map,this.staticTop=Ul,this.staticDirty=[],this.indexed=!1,this.clipY=.75,this.modeW=640,this.modeH=480,this.grid=null,this.colorQueue=[],this.colorVersion=0,this.colorVersionSeen=0,this.colorsShown=!1}stateCapture(){let t=this.state;t[me.ZENABLE]=1,t[me.ZWRITEENABLE]=1,t[me.SRCBLEND]=2,t[me.DESTBLEND]=1,t[me.TEXTUREMAPBLEND]=1,t[me.ALPHABLENDENABLE]=0,t[me.COLORKEYENABLE]=1,t[me.FOGENABLE]=0,t[me.ZBIAS]=0,t[me.FOGCOLOR]=16777215}resetForRace(){this.frameA.reset(),this.frameB.reset(),this.capturing.reset(),this.havePresented=!1,this.pendingUpload=!1;for(let t of this.arrays)t.next=0,t.free.length=0;this.state.fill(0),this.stateCapture(),this.worldDirty=!0,this.viewProjDirty=!0,this.hud=!1,this.noBlend=!1,this.screenFill=null,this.captureLevel=2,this.lastFull=null,this.staticMap.clear(),this.staticTop=Ul,this.staticDirty.length=0,this.indexed=!1,this.vp=null,this.pageSurface=null,this.pageGeneration=-1,this.skySurface=null,this.colorQueue.length=0,this.colorVersionSeen=this.colorVersion,this.colorsShown=!1}attach(t,e){this.m=t,this.host=e,this.u32=t.u32,this.u16=t.u16,this.f32=t.f32,this.occ.clear();let i=t.thunkId("hook!guard_0045dce0"),n=t.thunks[i];t.thunks[i]=(r,a,o,l)=>{this.noBlend=!0;try{return n(r,a,o,l)}finally{this.noBlend=!1}}}setupGeometry(){let t=new Uint32Array(Ul*8),e=new Uint32Array(Ul),i=new Uint32Array(zh);this.vertArray=t,this.vertFloats=new Float32Array(t.buffer),this.infoArray=e,this.indexArray=i,this.vertBuffer=new _r(t,8),this.vertBuffer.setUsage(Vr),this.infoAttr=new Re(e,1),this.infoAttr.setUsage(Vr),this.indexAttr=new Re(i,1),this.indexAttr.setUsage(Vr),this.attrPos=new Yn(this.vertBuffer,4,0),this.attrColor=new Yn(this.vertBuffer,2,4),this.attrUV=new Yn(this.vertBuffer,2,6),this.boundingSphere=new xn(new Q,1/0),this.palette=new Float32Array(Vs*16),this.matrixTexture=new yn(this.palette,4,Vs,ke,ii),this.matrixTexture.minFilter=oe,this.matrixTexture.magFilter=oe,this.matrixTexture.generateMipmaps=!1}makeGeometry(){let t=new Xe;return t.setAttribute("aPos",this.attrPos),t.setAttribute("aColor",this.attrColor),t.setAttribute("aUV",this.attrUV),t.setAttribute("aInfo",this.infoAttr),t.setIndex(this.indexAttr),t.boundingSphere=this.boundingSphere,t}get maxTextureSize(){return this.three.capabilities.maxTextureSize}setupTextures(){this.arrays=[];let t=new fn(new Uint8Array(4),1,1,1);t.needsUpdate=!0,this.uniformsShared={uMatrices:{value:this.matrixTexture},uTex0:{value:t},uTex1:{value:t},uTex2:{value:t},uTex3:{value:t},uTex4:{value:t},uTex5:{value:t}}}arrayFor(t,e){let i=this.arrays.find(o=>o.w===t&&o.h===e);if(i)return i;if(this.arrays.length>=i_)return this.arrays.reduce((o,l)=>Math.abs(l.w*l.h-t*e)<Math.abs(o.w*o.h-t*e)?l:o);let n=Math.max(8,Math.min(128,Math.ceil((16<<20)/(t*e*2)))),r=new Uint8Array(t*e*4*n),a=new fn(r,t,e,n);return a.format=ke,a.type=Le,a.wrapS=qn,a.wrapT=qn,a.magFilter=fe,a.minFilter=fe,a.generateMipmaps=!1,a.needsUpdate=!0,i={w:t,h:e,tex:a,data:r,layers:n,next:0,free:[],index:this.arrays.length},this.arrays.push(i),this.uniformsShared["uTex"+i.index].value=a,i}freeTexture(t){if(t.ownsLayer&&t.textureId>=0){let e=this.arrays[t.textureId>>12];e&&e.free.push(t.textureId&4095)}t.ownsLayer=!1,t.textureId=-1}loadTexture(t,e){if(!e.ownsLayer||e.uploadedGeneration!==e.generation){let i=this.arrayFor(e.width,e.height);if(!e.ownsLayer){let n=i.free.length?i.free.pop():i.next<i.layers?i.next++:-1;n<0&&(n=i.layers-1),e.textureId=i.index<<12|n,e.ownsLayer=!0}this.uploadPixels(i,e.textureId&4095,e),e.uploadedGeneration=e.generation}t.textureId=e.textureId}uploadPixels(t,e,i){let n=this.m,r=i.memory(),a=t.data,o=i.colorKey===-1?0:i.colorKey&65535,l=!0,c=e*t.w*t.h*4,h=Math.min(i.width,t.w),d=Math.min(i.height,t.h),u=i.format.a===61440,f=n.u16;for(let p=0;p<d;p++){let y=r+p*i.pitch>>1,m=c+p*t.w*4;for(let g=0;g<h;g++,y++,m+=4){let E=f[y];u?(a[m]=(E>>8&15)*17,a[m+1]=(E>>4&15)*17,a[m+2]=(E&15)*17,a[m+3]=(E>>12&15)*17):l&&E===o?(a[m]=0,a[m+1]=0,a[m+2]=0,a[m+3]=0):(a[m]=(E>>11)*527+23>>6,a[m+1]=(E>>5&63)*259+33>>6,a[m+2]=(E&31)*527+23>>6,a[m+3]=255)}}t.tex.addLayerUpdate(e),t.tex.needsUpdate=!0}setRenderState(t,e){this.state[t]=e,t===1&&this.indexed&&e&&(this.pageSurface=this.host.renderState.texture)}setLightState(t,e){this.lightState[t]=e}setBackground(){}setViewport(t){this.vp=t,this.updateClipMap()}setTransform(t,e){let i=this.f32;t===1?(this.worldPtr=e,this.worldDirty=!0):t===2?(this.view.set(i.subarray(e>>2,(e>>2)+16)),this.viewProjDirty=!0):t===3&&(this.proj.set(i.subarray(e>>2,(e>>2)+16)),this.viewProjDirty=!0)}blends(t){return!this.hud&&!this.noBlend&&!(t>=hf[0]&&t<hf[1])&&!(t>=uf[0]&&t<uf[1])}scaleFlag(t,e){let i=Math.max(1,this.xr/s_,this.yr/r_);for(let n=0;n<8;n++)t[e+n]*=i}worldIndex(t){let e=this.capturing;if(this.worldDirty){this.worldDirty=!1;let i=e.matrixCount;i>=Vs?i=Vs-1:e.matrixCount=i+1;let n=this.worldPtr>>2;if(e.matrices.set(this.f32.subarray(n,n+16),i*16),this.currentWorld=i,t>=df[0]&&t<df[1]&&this.scaleFlag(e.matrices,i*16),this.blends(t)){let r=this.occ.get(t)||0;this.occ.set(t,r+1),e.matKeys.set(t*64+r,i)}}return this.currentWorld}noteView(){let t=this.capturing;!this.hud&&!t.hasView&&(t.hasView=!0,t.view.set(this.view),t.proj.set(this.proj))}pipelineKey(t){let e=this.state,i=e[me.ALPHABLENDENABLE]?1:0,n=i;i&&(n|=e[me.SRCBLEND]<<1|e[me.DESTBLEND]<<5),n|=(e[me.ZENABLE]?1:0)<<9,n|=(e[me.ZWRITEENABLE]?1:0)<<10,n|=(e[me.ZBIAS]&3)<<11,n|=(e[me.FOGENABLE]?1:0)<<13,n|=(t?e[me.TEXTUREMAPBLEND]&7:0)<<14,n|=(this.hud?1:0)<<17;let r=e[me.TEXTUREMAG];return n|=(t&&(r===1||r===3)?1:0)<<18,n|=(this.indexed?1:0)<<19,n}batch(t){let e=this.capturing,i=this.pipelineKey(t),n=this.hud;n&&this.viewProjDirty&&(this.viewProjDirty=!1,this.tmpP.fromArray(this.proj),this.tmpV.fromArray(this.view),this.hudVP=new jt().multiplyMatrices(this.tmpP,this.tmpV)),n||(this.viewProjDirty=!1);let r=e.lastBatch,a=n?this.hudVP:null;if(r&&e.lastKey===i&&r.vp===a&&r.fogColor===this.state[me.FOGCOLOR])return r;let o={key:i,start:e.indexCount,count:0,vp:a,fogColor:this.state[me.FOGCOLOR],hud:n};return e.batches.push(o),e.lastBatch=o,e.lastKey=i,o}texInfo(t){return this.indexed?t?0:cf:t&&t.textureId>=0?t.textureId:cf}noteMoving(t,e){let i=this.capturing,n=this.occ.get(-t)||0;if(this.occ.set(-t,n+1),i.dynUsed+e*3<=mf){let r=t>>2,a=i.dynFloats,o=this.f32,l=i.dynUsed;for(let c=0,h=r;c<e;c++,h+=8,l+=3)a[l]=o[h],a[l+1]=o[h+1],a[l+2]=o[h+2];i.dynamic.set(t*64+n,{offset:i.dynUsed,count:e,base:i.vertCount}),i.dynUsed=l}}drawPrimitive(t,e,i,n){if(n<=0||(this.drawsThisFrame++,this.captureLevel===0))return;let r=this.capturing,a=e===3?0:this.worldIndex(i);if(this.noteView(),e!==3&&this.blends(i)&&this.noteMoving(i,n),this.captureLevel===1)return;let o=this.host.renderState.texture,l=this.copyVerts(e,i,n,a,o);if(l<0)return;let c=this.indexArray,h=this.batch(o),d=r.indexCount;if(!(d+n*3>=zh)){if(t===4)for(let u=0;u<n;u++)c[d++]=l+u;else if(t===5&&this.indexed)for(let u=2;u<n;u++){let f=u&1;c[d++]=l+u-f,c[d++]=l+u-1+f,c[d++]=l+u-2}else if(t===6&&this.indexed)for(let u=2;u<n;u++)c[d++]=l+u-1,c[d++]=l+u,c[d++]=l;else if(t===5)for(let u=2;u<n;u++){let f=u&1;c[d++]=l+u-2+f,c[d++]=l+u-1-f,c[d++]=l+u}else if(t===6)for(let u=2;u<n;u++)c[d++]=l,c[d++]=l+u-1,c[d++]=l+u;else return;h.count+=d-r.indexCount,r.indexCount=d}}drawIndexed(t,e,i,n,r,a){if(a<=0||t!==4||(this.drawsThisFrame++,this.captureLevel===0))return;let o=this.worldIndex(i);if(this.noteView(),n===4&&this.state[me.ZBIAS]&&this.blends(i)&&this.noteMoving(i,4),this.captureLevel===1)return;let l=this.capturing,c=this.host.renderState.texture,h=-1;if(this.useStatic&&e===2&&n>=e_&&!this.hud&&(h=this.staticVerts(i,n,c,o)),h<0&&(h=this.copyVerts(e,i,n,o,c)),h<0)return;let d=this.batch(c),u=this.indexArray,f=this.u16,p=l.indexCount;if(p+a>=zh)return;let y=r>>1;for(let m=0;m<a;m++)u[p++]=h+f[y+m];d.count+=a,l.indexCount=p}staticVerts(t,e,i,n){let a=this.capturing.matrices,o=n*16;if(a[o]!==1||a[o+5]!==1||a[o+10]!==1||a[o+15]!==1||a[o+1]!==0||a[o+2]!==0||a[o+12]!==0||a[o+13]!==0||a[o+14]!==0)return-1;let l=this.texInfo(i)<<16,c=t*65536+(l>>>16),h=this.staticMap.get(c);if(h!==void 0)return h;if(this.staticTop-e<Hh)return-1;this.staticTop-=e,h=this.staticTop;let d=t>>2;return this.vertArray.set(this.u32.subarray(d,d+e*8),h*8),this.infoArray.fill(l,h,h+e),this.staticMap.set(c,h),this.staticDirty.push(h,e),h}copyVerts(t,e,i,n,r){let a=this.capturing,o=a.vertCount;if(o+i>Hh)return-1;let l=this.texInfo(r)<<16|n|(t===3?1024:0),c=this.u32,h=e>>2;if(t===1){let d=this.vertArray;for(let u=0,f=h,p=o*8;u<i;u++,f+=8,p+=8)d[p]=c[f],d[p+1]=c[f+1],d[p+2]=c[f+2],d[p+3]=0,d[p+4]=4294967295,d[p+5]=4278190080,d[p+6]=c[f+6],d[p+7]=c[f+7]}else this.vertArray.set(c.subarray(h,h+i*8),o*8);return this.infoArray.fill(l,o,o+i),a.vertCount=o+i,o}beginScene(){}endScene(){}clear(){}fillScreen(t,e,i){if(!i)return;let n=(i>>11&31)*527+23>>6,r=(i>>5&63)*259+33>>6,a=(i&31)*527+23>>6,o=new qt().setRGB(n/255,r/255,a/255,_i);this.screenFill={color:o,flips:0,shownAt:0}}blitToScreen(t,e,i,n){!this.indexed||i.isPrimary||i.backBuffer||i===this.host.bufferScreen||e.l===0&&(this.capturing.sky={surface:i,start:n.l,rows:e.b})}setPalette(t){this.colors||this.setupIndexed(),this.colorsNext.set(t),this.colorVersion++}endFrame(){if(this.screenFill&&this.screenFill.flips++,this.colorVersion!==this.colorVersionSeen&&(this.colorVersionSeen=this.colorVersion,this.colorQueue.push(this.colorsNext.slice())),!this.drawsThisFrame)return;this.drawsThisFrame=0;let t=this.capturing;if(t.full=this.captureLevel===2,this.stats.ticksCaptured++,this.captureLevel>=1){let e=this.frameB,i=t.prevRow;i.fill(-1,0,t.matrixCount);for(let[r,a]of t.matKeys){let o=e.matKeys.get(r);o!==void 0&&(i[a]=o)}let n=this.frameA;this.frameA=this.frameB,this.frameB=t,this.capturing=n}t.full&&(this.lastFull=t,this.pendingUpload=!0,this.vertCountFull=t.vertCount,this.indexCountFull=t.indexCount,this.batchesFull=t.batches),this.capturing.reset(),this.occ.clear(),this.worldDirty=!0}materialFor(t){let e=this.materials.get(t);if(e)return e;let i=t&1,n=t>>17&1;if(t>>19&1)return e=this.indexedMaterial(t,n),this.materials.set(t,e),e;e=new Ji({glslVersion:Cn,vertexShader:gf,fragmentShader:a_,uniforms:{uMatrices:this.uniformsShared.uMatrices,uViewProj:{value:this.sceneVP},uClipMap:{value:n?this.hudClipMap:this.clipMap},uScreenMap:{value:n?this.hudScreenMap:this.screenMap},uFogColor:{value:new qt},uFog:{value:t>>13&1},uMapBlend:{value:t>>14&7},uNearest:{value:t>>18&1},uTex0:this.uniformsShared.uTex0,uTex1:this.uniformsShared.uTex1,uTex2:this.uniformsShared.uTex2,uTex3:this.uniformsShared.uTex3,uTex4:this.uniformsShared.uTex4,uTex5:this.uniformsShared.uTex5},side:Pe,depthTest:(t>>9&1)===1,depthWrite:(t>>10&1)===1,toneMapped:!1}),i?(e.blending=Lo,e.blendEquation=ji,e.blendSrc=ff[t>>1&15]||Rr,e.blendDst=ff[t>>5&15]||Cr):e.blending=qe;let r=t>>11&3;return r&&(e.polygonOffset=!0,e.polygonOffsetFactor=-r,e.polygonOffsetUnits=-r*2),this.materials.set(t,e),e}updateClipMap(){let t=this.area.w/this.area.h,e=this.vp?this.vp.clipY:.75,i=this.vp?this.vp.width:640,n=this.vp?this.vp.height:480,r=t>=4/3?.75*t:1,a=t>=4/3?e:e*(4/3)/t;this.xr=r,this.yr=a,this.clipY=e,this.modeW=i,this.modeH=n;let o=this.indexed?this.modeGrid():null,l=o?1/o.width:0,c=o?-1/o.height:0,h=(d,u)=>{d.set(1/r,0,0,l,0,1/a,0,c,0,0,2,-1,0,0,0,1),u.set(2/i/r,0,0,-1/r,0,-2*e/n/a,0,e/a,0,0,2,-1,0,0,0,1)};h(this.clipMap,this.screenMap),h(this.hudClipMap,this.hudScreenMap)}setRenderSize(t,e,i=null,n=null){if(this.viewW=t,this.viewH=e,this.area=i||{x:0,y:0,w:t,h:e},this.effective=n||{width:this.area.w,height:this.area.h},this.three.setSize(t,e,!1),this.indexed){this.updateClipMap(),this.indexedTargets();return}this.effective.width===this.area.w&&this.effective.height===this.area.h?this.renderTarget&&(this.renderTarget.dispose(),this.renderTarget=null):(!this.renderTarget||this.renderTarget.width!==this.effective.width||this.renderTarget.height!==this.effective.height)&&(this.renderTarget&&this.renderTarget.dispose(),this.renderTarget=new Ie(this.effective.width,this.effective.height,{minFilter:fe,magFilter:fe,depthBuffer:!0,stencilBuffer:!1,colorSpace:_i}),this.blitQuad.material.uniforms.map.value=this.renderTarget.texture),this.updateClipMap()}blitSetup(){let t=new Xe;t.setAttribute("position",new Re(new Float32Array([-1,-1,0,3,-1,0,-1,3,0]),3));let e=new Ji({glslVersion:Cn,uniforms:{map:{value:null}},vertexShader:"in vec3 position; out vec2 vUV; void main() { vUV = position.xy * 0.5 + 0.5; gl_Position = vec4(position.xy, 0.0, 1.0); }",fragmentShader:"precision highp float; uniform sampler2D map; in vec2 vUV; out vec4 c; void main() { c = texture(map, vUV); }",depthTest:!1,depthWrite:!1});this.blitQuad=new Oe(t,e),this.blitQuad.frustumCulled=!1,this.blitScene=new mn,this.blitScene.add(this.blitQuad)}setIndexed(t){this.indexed=t,t&&!this.colors&&this.setupIndexed(),t||this.releaseIndexed()}releaseIndexed(){for(let t of[this.worldIndex8,this.worldColor8,this.hud8])t&&t.dispose();if(this.worldIndex8=null,this.worldColor8=null,this.hud8=null,this.pageTexture&&this.pageTexture.image.width>1){this.pageTexture.dispose(),this.pageTexture=this.redTexture(1,1);for(let t of this.materials.values())t.uniforms.uPage&&(t.uniforms.uPage.value=this.pageTexture)}}modeGrid(t=this.area){return Nl(this.modeW,this.modeH,t.w/t.h)}setupIndexed(){let t=(r,a)=>{let o=new yn(new Uint8Array(r*a),r,a,Ds,Le);return o.internalFormat="R8",o.minFilter=oe,o.magFilter=oe,o.generateMipmaps=!1,o.unpackAlignment=1,o.colorSpace=hi,o};this.redTexture=t,this.colorsNext=new Uint8Array(1024),this.colors=new yn(new Uint8Array(1024),256,1,ke,Le),this.colors.minFilter=oe,this.colors.magFilter=oe,this.colors.generateMipmaps=!1,this.colors.colorSpace=hi,this.pageTexture=t(1,1),this.skyTexture=t(1,1),this.stippleWorld=new he(1,1,0,0),this.stippleHud=new he(1,1,0,0),this.worldHeight={value:480},this.hudHeight={value:480};let e=new Xe;e.setAttribute("position",new Re(new Float32Array([-1,-1,0,3,-1,0,-1,3,0]),3));let i=(r,a,o)=>{let l=new Oe(e,new Ji({glslVersion:Cn,uniforms:r,vertexShader:a,fragmentShader:o,depthTest:!1,depthWrite:!1,blending:qe}));l.frustumCulled=!1;let c=new mn;return c.add(l),{scene:c,uniforms:r}};this.skyPass=i({uSky:{value:this.skyTexture},uReach:{value:new Wt},uMode:{value:new Wt},uClipY:{value:.75},uStart:{value:0},uRows:{value:0},uSourceWidth:{value:1}},pf,h_),this.colorPass=i({uIndex:{value:null},uColors:{value:this.colors}},pf,u_);let n="in vec3 position; out vec2 vUV; void main() { vUV = position.xy * 0.5 + 0.5; gl_Position = vec4(position.xy, 0.0, 1.0); }";this.screenPass=i({uWorld:{value:null},uHud:{value:null},uWorldSize:{value:new Wt},uHudSize:{value:new Wt},uOutSize:{value:new Wt}},n,d_)}indexedMaterial(t,e){let i=new Ji({glslVersion:Cn,vertexShader:l_,fragmentShader:c_,uniforms:{uMatrices:this.uniformsShared.uMatrices,uViewProj:{value:this.sceneVP},uClipMap:{value:e?this.hudClipMap:this.clipMap},uScreenMap:{value:e?this.hudScreenMap:this.screenMap},uFogColor:{value:new qt},uPage:{value:this.pageTexture},uColors:{value:this.colors},uDirect:{value:e},uStipple:{value:e?this.stippleHud:this.stippleWorld},uTargetHeight:e?this.hudHeight:this.worldHeight},side:Pe,depthTest:(t>>9&1)===1,depthWrite:(t>>10&1)===1,blending:qe,toneMapped:!1}),n=t>>11&3;return n&&(i.polygonOffset=!0,i.polygonOffsetFactor=-n,i.polygonOffsetUnits=-n*2),i}indexedTargets(){this.renderTarget&&(this.renderTarget.dispose(),this.renderTarget=null);let{width:t,height:e}=this.effective;this.grid=this.modeGrid();let i=(l,c,h)=>new Ie(l,c,{minFilter:fe,magFilter:fe,depthBuffer:h,stencilBuffer:!1,colorSpace:_i}),n=(l,c,h)=>l&&l.width===c&&l.height===h;n(this.worldIndex8,t,e)||(this.worldIndex8&&this.worldIndex8.dispose(),this.worldColor8&&this.worldColor8.dispose(),this.worldIndex8=new Ie(t,e,{format:Ds,type:Le,internalFormat:"R8",minFilter:oe,magFilter:oe,depthBuffer:!0,stencilBuffer:!1}),this.worldColor8=i(t,e,!1),this.worldIndex8Fresh=!0),n(this.hud8,this.grid.width,this.grid.height)||(this.hud8&&this.hud8.dispose(),this.hud8=i(this.grid.width,this.grid.height,!0));let r=(this.grid.width-this.modeW)/2,a=(this.grid.height-this.modeH)/2;this.stippleWorld.set(this.grid.width/t,this.grid.height/e,r,a),this.stippleHud.set(1,1,r,a),this.worldHeight.value=e,this.hudHeight.value=this.grid.height;let o=this.screenPass.uniforms;o.uWorld.value=this.worldColor8.texture,o.uHud.value=this.hud8.texture,o.uWorldSize.value.set(t,e),o.uHudSize.value.set(this.grid.width,this.grid.height),o.uOutSize.value.set(this.area.w,this.area.h),this.colorPass.uniforms.uIndex.value=this.worldIndex8.texture}syncSurface(t,e,i){if(t.syncedTexture===e&&t.syncedGeneration===t.generation)return e;let n=t.memory(),r=this.m.u8.subarray(n,n+t.pitch*t.height),a=e;return(a.image.width!==t.pitch||a.image.height!==t.height)&&(a.dispose(),a=this.redTexture(t.pitch,t.height),i(a)),a.image.data.set(r),a.needsUpdate=!0,t.syncedTexture=a,t.syncedGeneration=t.generation,a}nextColors(){if(!this.colorQueue.length)return;let t=this.colorsShown?this.colorQueue.shift():this.colorQueue[this.colorQueue.length-1];this.colorsShown||(this.colorQueue.length=0),this.colorsShown=!0,this.colors.image.data.set(t),this.colors.needsUpdate=!0}presentIndexed(t){let{three:e,area:i}=this;if(this.worldIndex8||this.indexedTargets(),this.nextColors(),this.pageSurface&&(this.pageTexture=this.syncSurface(this.pageSurface,this.pageTexture,n=>{for(let r of this.materials.values())r.uniforms.uPage&&(r.uniforms.uPage.value=n)})),e.setRenderTarget(this.worldIndex8),this.worldIndex8Fresh?(this.worldIndex8Fresh=!1,e.setClearColor(0,1),e.clear(!0,!0,!1)):e.clear(!1,!0,!1),t.sky){let n=this.skyPass.uniforms;this.skyTexture=this.syncSurface(t.sky.surface,this.skyTexture,r=>{n.uSky.value=r}),n.uReach.value.set(this.xr,this.yr),n.uMode.value.set(this.modeW,this.modeH),n.uClipY.value=this.clipY,n.uStart.value=t.sky.start,n.uRows.value=t.sky.rows,n.uSourceWidth.value=t.sky.surface.width,e.render(this.skyPass.scene,this.camera)}e.render(this.sceneWorld,this.camera),e.setRenderTarget(this.worldColor8),e.render(this.colorPass.scene,this.camera),e.setRenderTarget(this.hud8),e.setClearColor(0,0),e.clear(!0,!0,!1),e.render(this.sceneHud,this.camera),e.setRenderTarget(null),e.setViewport(0,0,this.viewW,this.viewH),e.setScissorTest(!1),e.setClearColor(0,1),e.clear(!0,!0,!1),e.setViewport(i.x,this.viewH-i.y-i.h,i.w,i.h),e.render(this.screenPass.scene,this.camera)}blendPalette(t){let e=this.frameB,i=this.frameA,n=this.palette,r=e.matrices,a=i.matrices,o=e.prevRow,l=e.matrixCount;for(let c=0;c<l;c++){let h=o[c],d=c*16;if(h<0||t>=1){for(let m=0;m<16;m++)n[d+m]=r[d+m];continue}let u=h*16,f=r[d+12]-a[u+12],p=r[d+13]-a[u+13],y=r[d+14]-a[u+14];if(f*f+p*p+y*y>Gh){for(let m=0;m<16;m++)n[d+m]=r[d+m];continue}for(let m=0;m<16;m++)n[d+m]=a[u+m]+(r[d+m]-a[u+m])*t}if(this.matrixTexture.needsUpdate=!0,e.dynamic.size&&i.dynamic.size){let c=this.vertFloats,h=e.dynFloats,d=i.dynFloats;for(let[u,f]of e.dynamic){let p=i.dynamic.get(u);if(!p||p.count!==f.count)continue;let y=f.offset,m=p.offset,g=f.base*8,E=h[y]-d[m],L=h[y+1]-d[m+1],b=h[y+2]-d[m+2];if(!(E*E+L*L+b*b>Gh))for(let T=0;T<f.count;T++,y+=3,m+=3,g+=8)c[g]=d[m]+(h[y]-d[m])*t,c[g+1]=d[m+1]+(h[y+1]-d[m+1])*t,c[g+2]=d[m+2]+(h[y+2]-d[m+2])*t}this.dynamicDirty=!0}if(e.hasView&&i.hasView&&t<1){let c=i.view,h=e.view,d=this.tmpV.elements;for(let y=0;y<16;y++)d[y]=c[y]+(h[y]-c[y])*t;let u=Bs(c,0)-Bs(h,0),f=Bs(c,4)-Bs(h,4),p=Bs(c,8)-Bs(h,8);u*u+f*f+p*p>Gh&&this.tmpV.fromArray(h)}else e.hasView&&this.tmpV.fromArray(e.view);this.tmpP.fromArray(e.proj),this.sceneVP.multiplyMatrices(this.tmpP,this.tmpV)}uploadStreams(){let t=this.vertBuffer;t.clearUpdateRanges(),t.addUpdateRange(0,this.vertCountFull*8);let e=this.infoAttr;e.clearUpdateRanges(),e.addUpdateRange(0,this.vertCountFull);let i=this.staticDirty;for(let r=0;r<i.length;r+=2)t.addUpdateRange(i[r]*8,i[r+1]*8),e.addUpdateRange(i[r],i[r+1]);i.length=0,t.needsUpdate=!0,e.needsUpdate=!0;let n=this.indexAttr;n.clearUpdateRanges(),n.addUpdateRange(0,this.indexCountFull),n.needsUpdate=!0}syncMeshes(t,e,i){for(;e.length<i.length;){let n=new Oe(this.makeGeometry());n.frustumCulled=!1,n.matrixAutoUpdate=!1,e.push(n),t.add(n)}for(let n=0;n<e.length;n++){let r=e[n];if(n>=i.length){r.visible=!1;continue}let a=i[n];r.visible=!0;let o=this.materialFor(a.key);a.vp&&(o.uniforms.uViewProj.value=a.vp);let l=a.fogColor;o.uniforms.uFogColor.value.setRGB((l>>16&255)/255,(l>>8&255)/255,(l&255)/255,_i),r.material=o,r.geometry.setDrawRange(a.start,a.count)}}drawScreenFill(){let t=this.screenFill,e=performance.now();if(t.shownAt&&(t.flips>1||e-t.shownAt>=n_)){this.screenFill=null;return}t.shownAt||(t.shownAt=e);let{three:i,area:n}=this;i.setScissor(n.x,this.viewH-n.y-n.h,n.w,n.h),i.setScissorTest(!0),i.setClearColor(t.color,1),i.clear(!0,!1,!1),i.setScissorTest(!1)}present(t=1){if(!this.lastFull)return;let e=this.three,i=this.lastFull;if(this.blendPalette(t),this.pendingUpload)this.pendingUpload=!1,this.uploadStreams();else if(this.dynamicDirty){let o=this.vertBuffer;o.clearUpdateRanges(),o.addUpdateRange(0,this.vertCountFull*8),o.needsUpdate=!0}this.dynamicDirty=!1;let n=[],r=[];for(let o of i.batches)(o.hud?r:n).push(o);if(this.syncMeshes(this.sceneWorld,this.meshesWorld,n),this.syncMeshes(this.sceneHud,this.meshesHud,r),this.indexed){this.presentIndexed(i),this.stats.verts=i.vertCount,this.stats.indices=i.indexCount,this.stats.batches=i.batches.length,this.stats.matrices=i.matrixCount,this.stats.calls=e.info.render.calls;return}let a=this.area;e.setClearColor(0,1),this.renderTarget?(e.setRenderTarget(this.renderTarget),e.clear(!0,!0,!1),e.render(this.sceneWorld,this.camera),e.setRenderTarget(null),e.setViewport(0,0,this.viewW,this.viewH),e.setScissorTest(!1),e.clear(!0,!0,!1),e.setViewport(a.x,this.viewH-a.y-a.h,a.w,a.h),e.render(this.blitScene,this.camera)):(e.setViewport(0,0,this.viewW,this.viewH),e.setScissorTest(!1),e.clear(!0,!0,!1),e.setViewport(a.x,this.viewH-a.y-a.h,a.w,a.h),e.render(this.sceneWorld,this.camera)),e.setViewport(a.x,this.viewH-a.y-a.h,a.w,a.h),e.clearDepth(),e.render(this.sceneHud,this.camera),this.screenFill&&this.drawScreenFill(),this.stats.verts=i.vertCount,this.stats.indices=i.indexCount,this.stats.batches=i.batches.length,this.stats.matrices=i.matrixCount,this.stats.calls=e.info.render.calls}};var f_=-.92265625,p_=480,m_=1.35,xf=4096,kl=class{constructor(t){this.m=t,this.found=!1,this.groups={right:[],left:[],rank:[],stats:[],topCentre:[],plates:[],bottomCentre:[],panels:[],text:[],players:[],finish:[]},this.dx=0,this.dy=0,this.saved=[],this.scale=1,this.tilt={rotation:0,y:1,z:1},this.insets={left:0,right:0,top:0,bottom:0},this.tall=!1,this.leftShift=0}nameOf(t){let e=this.m,i=e.u32[t+56>>2];if(i<4194304||i>=e.u8.length-64)return"";let n="";for(let r=0;r<40;r++){let a=e.u8[i+r];if(!a)return n;if(a<32||a>126)return"";n+=String.fromCharCode(a)}return""}children(t){let e=this.m,i=e.u8.length-16,n=e.u32[t+120>>2];if(n<4194304||n>=i||n&3)return[];let r=e.u32[n+4>>2],a=e.u32[n+8>>2];if(r<4194304||a>=i||a<r||a-r>4096||r&3||a-r&3)return[];let o=[];for(let l=r;l<a;l+=4){let c=e.u32[l>>2];c>=4194304&&c<i&&!(c&3)&&o.push(c)}return o}scan(){let t=this.m,e=t.u32[1853883];if(!e)return!1;let i=this.groups,n=new Set,r=(o,l)=>{if(!o||n.has(o)||l>8)return;n.add(o);let h=this.nameOf(o).toUpperCase();h==="SPEEDOMETER"?(i.right.push(o),i.panels.push(o)):h==="COMMUNICATOR"?(this.communicator=o,i.left.push(o),i.panels.push(o)):h.startsWith("OVL_PORTRAITS_")?i.left.push(o):h==="PORTRAITS"?i.rank.push(o):h.startsWith("PLAYER_")?i.players.push(o):/^STRING_FINISH_POS_\d$/.test(h)?i.finish.push(o):h==="STRING_RACE_TIME_VALUE"||h==="STRING_CUR_LAP"||h==="STRING_CUR_POS"||h==="STRING_RACE_TIME"||h==="STRING_LAP"||h==="STRING_POS"?i.stats.push(o):h==="OVL_TURNAROUND_FRAME"||h.startsWith("OVL_DIRECTION_")?i.plates.push(o):h==="STRING_COUNTDOWN_TIMER"||h==="STRING_GAME_TEXT"?i.topCentre.push(o):(h==="STRING_FINISH_TEXT"||h==="OVL_PROGRESS_BAR")&&i.bottomCentre.push(o);for(let d of this.children(o))r(d,l+1)};r(e,0);let a=t.u32[1853887];if(a){let o=t.u32[a+4>>2],l=t.u32[a+8>>2];for(let c=o;c&&c<l;c+=4)r(t.u32[c>>2],7)}i.text.push(...i.stats);for(let o of i.panels)for(let l of this.children(o))this.nameOf(l).toUpperCase().startsWith("STRING_")&&i.text.push(l);return this.found=!0,this.names=[...n].map(o=>this.nameOf(o)),!0}setShape(t,e=this.insets,i=this.cssSize,n=.75){this.aspect=t,this.insets=e,this.cssSize=i;let r=4/3;this.xr=t>=r?.75*t:1,this.yr=t>=r?n:n*r/t,this.dx=this.xr-1,this.dy=this.yr-n,this.scale=t<1&&i?Math.min(Math.max(1,p_/i.w),m_):1;let a=this.dy-e.top*2*this.yr,o=Math.round(Math.atan(a)*xf/(2*Math.PI)),l=o*2*Math.PI/xf;this.tilt={rotation:o,y:1/(Math.cos(l)+(.5+a)*Math.sin(l)),z:1/Math.cos(l)}}apply(){let t=this.m;this.found||this.scan();let{dx:e,scale:i,saved:n,tilt:r}=this,a=this.dy/.75,o=this.insets,l=o.left*2*this.xr,c=o.right*2*this.xr,h=o.top*2*this.yr/.75,d=o.bottom*2*this.yr/.75;n.length=0;let u=t.f32,f=(L,b)=>{let T=L>>2;n.push(T,u[T]),u[T]=b},p=(L,b)=>f(L,u[L>>2]*b),y=(L,b,T)=>{if(!(!b&&!T))for(let M of L)f(M+4,u[M+4>>2]+b),f(M+8,u[M+8>>2]+T)},m=this.groups,g=t.u32[1853919],E=this.communicator?Math.max(0,Math.min(1,(u[this.communicator+4>>2]+1)/1.011)):1;if(i!==1){let L=(b,T,M)=>{for(let F of b)f(F+4,u[F+4>>2]*i+T*(1-i)),f(F+8,u[F+8>>2]*i+M*(1-i)),p(F+16,i),p(F+20,i)};L(m.right,1,-1),L(m.left,-1,-1),L(m.stats,1,1);for(let b of m.panels)p(b+124,i),p(b+128,i);for(let b of m.text)p(b+124,i)}if(y(m.right,e-c,-a+d),y(m.left,-e+Math.max(l,this.leftShift*E),-a+d),y(m.stats,e-c,a-h),y(m.topCentre,0,a-h),y(m.plates,0,a-h),r.rotation)for(let L of m.plates)f(L+28,r.rotation),p(L+20,r.y),p(L+24,r.z);if(y(m.bottomCentre,0,-a+d),g!==5)y(m.rank,-e+l,a-h);else{let L=this.xr-1;for(let b of m.finish){let T=u[b+4>>2];L&&T>.1&&f(b+4,T+(T-.1)/(1-.1)*L)}for(let b of m.players){let T=(-.4-u[b+4>>2])/(-.4-f_),M=Math.max(0,Math.min(1,T));y([b],(-e+l)*M,(a-h)*M)}}}restore(){let t=this.m.f32,e=this.saved;for(let i=e.length-2;i>=0;i-=2)t[e[i]]=e[i+1];e.length=0}};var Bl=class{constructor(t=null,e=null){this.ctx=t,this.output=e,this.master=null,this.musicGainValue=1,this.sfxGainValue=1,this.muted=!1,this.m=null,this.clock=null,this.voices=new Set}attach(t,e=null){this.m=t,this.clock=e}ensureContext(){if(!this.ctx){let t=globalThis.AudioContext||globalThis.webkitAudioContext;if(!t)return null;this.ctx=new t}return this.master||(this.master=this.ctx.createGain(),this.applyMaster(),this.master.connect(this.output||this.ctx.destination)),this.ctx}resume(){let t=this.ensureContext();t&&t.state==="suspended"&&t.resume()}suspend(){this.ctx&&this.ctx.state==="running"&&this.ctx.suspend()}setMasterGain(t){this.sfxGainValue=t,this.applyMaster()}applyMaster(){this.master&&(this.master.gain.value=this.muted?0:this.sfxGainValue)}now(){return this.clock?this.clock.seconds:performance.now()/1e3}bufferFilled(t){if(t.audioBuffer)return;let e=this.ensureContext();e&&(t.audioBuffer=g_(e,this.m,t))}duplicate(t,e){t.audioBuffer=e.audioBuffer,t.voice=null,t.position=0,t.split=t.left=t.right=t.merge=null}chain(t){let e=this.ctx;t.left||(t.split=e.createChannelSplitter(2),t.left=e.createGain(),t.right=e.createGain(),t.merge=e.createChannelMerger(2),t.left.connect(t.merge,0,0),t.right.connect(t.merge,0,1),t.merge.connect(this.master),this.applyGains(t))}applyGains(t){if(!t.left)return;let e=Math.pow(10,Math.min(0,t.volume||0)/2e3),i=t.pan||0;t.left.gain.value=e*(i>0?Math.pow(10,-i/2e3):1),t.right.gain.value=e*(i<0?Math.pow(10,i/2e3):1)}play(t,e){let i=this.ensureContext();if(!i||!t.audioBuffer)return;t.voice&&this.stopVoice(t),this.chain(t);let n=i.createBufferSource();n.buffer=t.audioBuffer,n.loop=e,n.playbackRate.value=(t.frequency||t.baseFrequency)/t.baseFrequency,t.audioBuffer.numberOfChannels===1?(n.connect(t.left),n.connect(t.right)):(n.connect(t.split),t.split.connect(t.left,0),t.split.connect(t.right,1));let r=t.position||0;n.start(0,r),t.voice={source:n,loop:e,started:this.now(),offset:r,rate:n.playbackRate.value},t.position=0,this.voices.add(t)}stopVoice(t){let e=t.voice;if(e){try{e.source.stop(),e.source.disconnect()}catch{}t.position=this.positionOf(t,e),t.voice=null,this.voices.delete(t)}}positionOf(t,e){let i=(this.now()-e.started)*e.rate+e.offset,n=t.audioBuffer.duration;return e.loop?i%n:Math.min(i,n)}stop(t){this.stopVoice(t)}setPosition(t,e){let i=(t.bits>>3)*t.channels;t.position=e/i/t.baseFrequency}isPlaying(t){let e=t.voice;return e?e.loop?!0:(this.now()-e.started)*e.rate+e.offset>=t.audioBuffer.duration?(this.stopVoice(t),t.position=0,!1):!0:!1}setVolume(t){this.applyGains(t)}setPan(t){this.applyGains(t)}setFrequency(t,e){let i=t.voice;if(!i)return;let n=e/t.baseFrequency;n!==i.rate&&(i.offset=(this.now()-i.started)*i.rate+i.offset,i.started=this.now(),i.rate=n,i.source.playbackRate.value=n)}releaseBuffer(t){t.voice&&this.stopVoice(t),t.merge&&t.merge.disconnect(),t.audioBuffer=null}pauseAll(){this.muted=!0,this.applyMaster()}resumeAll(){this.muted=!1,this.applyMaster()}stopAll(){for(let t of[...this.voices])this.stopVoice(t)}};function g_(s,t,e){let i=Math.floor(e.size/((e.bits>>3)*e.channels));if(!i||!e.ptr)return null;let n=Math.max(8e3,Math.min(96e3,e.baseFrequency)),r=s.createBuffer(e.channels,i,n);for(let a=0;a<e.channels;a++){let o=r.getChannelData(a);if(e.bits===8){let l=t.u8,c=e.ptr+a;for(let h=0;h<i;h++,c+=e.channels)o[h]=(l[c]-128)/128}else{let l=t.view,c=e.ptr+a*2;for(let h=0;h<i;h++,c+=2*e.channels)o[h]=l.getInt16(c,!0)/32768}}return r}var Wh={Escape:1,Digit1:2,Digit2:3,Digit3:4,Digit4:5,Digit5:6,Digit6:7,Digit7:8,Digit8:9,Digit9:10,Digit0:11,Minus:12,Equal:13,Backspace:14,Tab:15,KeyQ:16,KeyW:17,KeyE:18,KeyR:19,KeyT:20,KeyY:21,KeyU:22,KeyI:23,KeyO:24,KeyP:25,BracketLeft:26,BracketRight:27,Enter:28,ControlLeft:29,KeyA:30,KeyS:31,KeyD:32,KeyF:33,KeyG:34,KeyH:35,KeyJ:36,KeyK:37,KeyL:38,Semicolon:39,Quote:40,Backquote:41,ShiftLeft:42,Backslash:43,KeyZ:44,KeyX:45,KeyC:46,KeyV:47,KeyB:48,KeyN:49,KeyM:50,Comma:51,Period:52,Slash:53,ShiftRight:54,NumpadMultiply:55,AltLeft:56,Space:57,CapsLock:58,F1:59,F2:60,F3:61,F4:62,F5:63,F6:64,F7:65,F8:66,F9:67,F10:68,NumLock:69,ScrollLock:70,Numpad7:71,Numpad8:72,Numpad9:73,NumpadSubtract:74,Numpad4:75,Numpad5:76,Numpad6:77,NumpadAdd:78,Numpad1:79,Numpad2:80,Numpad3:81,Numpad0:82,NumpadDecimal:83,F11:87,F12:88,NumpadEnter:156,ControlRight:157,NumpadDivide:181,PrintScreen:183,AltRight:184,Home:199,ArrowUp:200,PageUp:201,ArrowLeft:203,ArrowRight:205,End:207,ArrowDown:208,PageDown:209,Insert:210,Delete:211,MetaLeft:219,MetaRight:220,ContextMenu:221};function qr(s){if(s.startsWith("Key"))return s.charCodeAt(3);if(s.startsWith("Digit"))return s.charCodeAt(5);if(s.startsWith("Numpad")&&s.length===7)return 96+Number(s[6]);let t=/^F(\d+)$/.exec(s);return t?111+Number(t[1]):{Escape:27,Enter:13,NumpadEnter:13,Space:32,Tab:9,Backspace:8,ShiftLeft:16,ShiftRight:16,ControlLeft:17,ControlRight:17,AltLeft:18,AltRight:18,ArrowLeft:37,ArrowUp:38,ArrowRight:39,ArrowDown:40,PageUp:33,PageDown:34,End:35,Home:36,Insert:45,Delete:46,NumpadMultiply:106,NumpadAdd:107,NumpadSubtract:109,NumpadDecimal:110,NumpadDivide:111,Minus:189,Equal:187,Comma:188,Period:190,Slash:191,Semicolon:186,Quote:222,BracketLeft:219,BracketRight:221,Backslash:220,Backquote:192,CapsLock:20,NumLock:144,ScrollLock:145,PrintScreen:44,MetaLeft:91,MetaRight:92,ContextMenu:93}[s]||0}var x_={49:2,50:3,51:4,52:5,53:6,54:7,55:8,56:9,57:10,48:11,80:25,27:1,13:28,74:36,78:49,68:32,84:20},y_=new Set(["F11","F10","F9"]);function __(s){return s.code==="F5"||s.code==="F11"||s.code==="F12"||s.metaKey||s.ctrlKey&&(s.code==="KeyR"||s.shiftKey)}var v_={37:100,39:102,38:104,40:98},S_=27,Vl=class{constructor(t){this.m=t,this.vk=new Uint8Array(256),this.dik=new Uint8Array(256),this.mouseX=0,this.mouseY=0,this.steer=0,this.joyY=0,this.buttons=0,this.spinCount=new Uint16Array(256),this.latched=[],this.touch={steer:0,gas:!1,brake:!1,buttons:0},this.pad={active:!1,steer:0,y:0,gas:!1,brake:!1,turbo:!1,horn:!1,handbrake:!1},this.device=1,this.keys={left:37,right:39,up:38,down:40,extra1:17,extra2:18,extra3:32},this.rampLeft=0,this.rampRight=0,this.pulses=[],this.ignoreCode=null,this.onClear=null}pressHost(t,e=0){this.vk[t]=1,e&&(this.dik[e]=128)}releaseHost(t,e=0){this.latchedHost=this.latchedHost||[],this.latchedHost.push([t,e])}pulseVk(t){this.vk[t]=1;let e=x_[t];e&&(this.dik[e]=128),this.pulses.push({vk:t,dik:e,ticks:2})}nextCameraKey(){let t=this.m.i32[1468192];return t===0?52:t===3?49:50}updateJoystick(t){let{vk:e,keys:i}=this,n=this.touch,r=this.pad,a=u=>e[u]!==0||e[v_[u]]===1,o=2*t;this.rampLeft=Math.max(0,Math.min(1,this.rampLeft+(a(i.left)?o:-o))),this.rampRight=Math.max(0,Math.min(1,this.rampRight+(a(i.right)?o:-o)));let l=this.rampRight-this.rampLeft;Math.abs(n.steer)>Math.abs(l)&&(l=n.steer),r.active&&Math.abs(r.steer)>Math.abs(l)&&(l=r.steer),this.steer=l;let c=n.gas||a(i.up),h=n.brake||a(i.down),d=n.buttons;if((r.turbo||a(i.extra1))&&(d|=1),(r.horn||a(i.extra3))&&(d|=2),this.device===2)(r.handbrake||a(i.extra2))&&(d|=8),(c||r.gas)&&(d|=4),this.joyY=h||r.brake?-1:0;else{(r.handbrake||a(i.extra2)||n.buttons&8)&&(d|=4),d&=-9;let u=(c?1:0)-(h?1:0);this.joyY=u!==0||!r.active?u:r.y}this.buttons=d}keyEvent(t,e){if(y_.has(t))return;let i=Wh[t],n=qr(t);if(e){let r=this.latched.indexOf(t);r>=0&&this.latched.splice(r,1),n&&(this.vk[n]=1),i&&(this.dik[i]=128)}else this.latched.push(t)}repeatEvent(t){let e=Wh[t],i=qr(t);(i&&!this.vk[i]||e&&!this.dik[e])&&this.keyEvent(t,!0)}endTick(){this.spinCount.fill(0);for(let t=this.pulses.length-1;t>=0;t--){let e=this.pulses[t];--e.ticks<=0&&(this.vk[e.vk]=0,e.dik&&(this.dik[e.dik]=0),this.pulses.splice(t,1))}if(this.latchedHost&&this.latchedHost.length){for(let[t,e]of this.latchedHost)this.vk[t]=0,e&&(this.dik[e]=0);this.latchedHost.length=0}if(this.latched.length){for(let t of this.latched){let e=Wh[t],i=qr(t);i&&(this.vk[i]=0),e&&(this.dik[e]=0)}this.latched.length=0}}clear(){this.onClear&&this.onClear(),this.vk.fill(0),this.dik.fill(0),this.latched.length=0,this.pulses.length=0,this.latchedHost&&(this.latchedHost.length=0),this.steer=0,this.joyY=0,this.buttons=0,this.rampLeft=0,this.rampRight=0,this.ignoreCode=null,this.touch.steer=0,this.touch.gas=!1,this.touch.brake=!1,this.touch.buttons=0}keyDown(t){return this.vk[t]?t===16?!0:++this.spinCount[t]<=8:!1}fillDeviceState(t,e,i){let n=this.m;if(t==="keyboard"){n.u8.fill(0,e,e+i);for(let r=0,a=0;r<i&&a<S_;r++)this.dik[r]&&(n.u8[e+r]=this.dik[r],a++)}else if(t==="joystick"){n.u8.fill(0,e,e+i),n.i32[e>>2]=Math.round((this.steer+1)*32767),n.i32[e+4>>2]=Math.round((1-this.joyY)*32767);for(let r=0;r<32;r++)this.buttons&1<<r&&(n.u8[e+48+r]=128)}else n.u8.fill(0,e,e+i)}};function yf(s,t){let e=n=>{let r=t();if(r){if(__(n)||n.preventDefault(),n.code===r.ignoreCode){n.type==="keyup"&&(r.ignoreCode=null);return}n.repeat?r.repeatEvent(n.code):r.keyEvent(n.code,n.type==="keydown")}};s.addEventListener("keydown",e),s.addEventListener("keyup",e);let i=()=>{let n=t();n&&n.clear()};s.addEventListener("blur",i),s.addEventListener("pagehide",i),document.addEventListener("visibilitychange",()=>{document.hidden&&i()})}function zs(s,t=.18){if(!Number.isFinite(s))return 0;let e=Math.min(1,Math.abs(s)),i=Math.min(.99,Math.max(0,t));return e<=i?0:Math.sign(s)*(e-i)/(1-i)}function b_(s,t,{left:e,top:i,width:n,height:r}){if(!(n>0&&r>0))return{steer:0,throttle:0,brake:0};let a=(c,h)=>Math.max(-1,Math.min(1,zs(c,.1)/(1-h))),o=a((s-e)/n*2-1,.2),l=a(1-(t-i)/r*2,.65);return{steer:o,throttle:Math.max(0,l),brake:Math.max(0,-l)}}function Gl(s,t){let e=0,i=n=>{n.timeStamp-e<400||(e=n.timeStamp,t(n))};s.addEventListener("click",i),s.addEventListener("pointerup",n=>{if(n.pointerType!=="touch"||n.isPrimary)return;let r=s.getBoundingClientRect();n.clientX>=r.left&&n.clientX<=r.right&&n.clientY>=r.top&&n.clientY<=r.bottom&&(n.preventDefault(),i(n))})}var zl=class{constructor(t,e){this.root=t,this.getInput=e,this.state={steer:0,throttle:0,brake:0},this.buttons=0,this.releases=new Map,this.pressed=new Map,this.wheel=t.querySelector("#touch-wheel"),this.bindWheel(this.wheel);for(let n of t.querySelectorAll("button[data-button]"))this.bindHold(n,Number(n.dataset.button));for(let n of t.querySelectorAll("button[data-vk]"))this.bindKey(n,Number(n.dataset.vk),n.dataset.dik?Number(n.dataset.dik):0);let i=t.querySelector("#touch-camera");this.bindPress(i,n=>{let r=this.getInput();n&&r&&r.pulseVk(r.nextCameraKey())}),this.more=t.querySelector("#touch-more"),this.bindPress(this.more,n=>{n&&this.showMore(!t.classList.contains("more"))}),this.wheel.addEventListener("contextmenu",n=>n.preventDefault())}bindPress(t,e){let i=new Map;this.pressed.set(t,i),t.addEventListener("pointerdown",r=>{if(r.pointerType==="mouse"&&r.button!==0)return;r.preventDefault();let a=r.pointerId;if(i.has(a))return;let o=this.releases.get(a);o&&o();let l=()=>{i.delete(a)&&(this.releases.delete(a),t.classList.toggle("held",i.size>0),i.size||e(!1),t.hasPointerCapture(a)&&t.releasePointerCapture(a))};i.set(a,l),this.releases.set(a,l),t.setPointerCapture(a),t.classList.add("held"),i.size===1&&e(!0)});let n=r=>{let a=i.get(r.pointerId);a&&a()};for(let r of["pointerup","pointercancel","lostpointercapture"])t.addEventListener(r,n);t.addEventListener("contextmenu",r=>r.preventDefault())}bindWheel(t){let e=null,i=null,n=({steer:a=0,throttle:o=0,brake:l=0}={})=>{t.dataset.steer=String(a),t.dataset.drive=o?"forward":l?"reverse":"neutral",t.style.setProperty("--steer-angle",`${a*90}deg`),t.classList.toggle("held",e!==null)},r=a=>{let o=b_(a.clientX,a.clientY,t.getBoundingClientRect());this.state=o,n(o),this.push()};t.addEventListener("pointerdown",a=>{if(a.pointerType==="mouse"&&a.button!==0||(a.preventDefault(),e!==null))return;let o=this.releases.get(a.pointerId);o&&o(),e=a.pointerId;let l=e;i=()=>{e===l&&(e=null,i=null,this.releases.delete(l),this.state={steer:0,throttle:0,brake:0},n(),this.push(),t.hasPointerCapture(l)&&t.releasePointerCapture(l))},this.releases.set(l,i),t.setPointerCapture(l),r(a)}),t.addEventListener("pointermove",a=>{a.pointerId===e&&(a.preventDefault(),r(a))});for(let a of["pointerup","pointercancel","lostpointercapture"])t.addEventListener(a,o=>{o.pointerId===e&&i&&i()});n()}bindHold(t,e){this.bindPress(t,i=>{i?this.buttons|=1<<e:this.buttons&=~(1<<e),this.push()})}bindKey(t,e,i){this.bindPress(t,n=>{let r=this.getInput();r&&(n?r.pressHost(e,i):r.releaseHost(e,i))})}push(){let t=this.getInput();t&&(t.touch.steer=this.state.steer,t.touch.gas=this.state.throttle>0,t.touch.brake=this.state.brake>0,t.touch.buttons=this.buttons)}releaseAll(){for(let t of[...this.releases.values()])t();this.buttons=0,this.state={steer:0,throttle:0,brake:0},this.push()}releaseControl(t){let e=this.pressed.get(t);if(e)for(let i of[...e.values()])i()}relayout(){let t=this.wheel.getBoundingClientRect(),e=this.wheelRect;this.wheelRect=t,e&&(Math.abs(e.left-t.left)>1||Math.abs(e.top-t.top)>1||Math.abs(e.width-t.width)>1)&&this.releaseAll()}showMore(t){this.root.classList.toggle("more",t),this.more.setAttribute("aria-expanded",String(t))}setVisible(t){this.root.hidden=!t,t||(this.releaseAll(),this.showMore(!1))}};var _f={a:0,b:1,lb:4,back:8,start:9,reset:10,taunt:12},Gs=class{constructor(t=()=>.18){this.last=new Map,this.deadzone=t,this.quiet=new Set,this.padIndex=null,this.lookingBack=!1,this.onFound=null}pad(){let t;try{t=navigator.getGamepads?navigator.getGamepads():[]}catch{return null}for(let e of t)if(e&&e.connected&&e.mapping==="standard")return e;for(let e of t)if(e&&e.connected)return e;return null}connected(){return this.pad()!==null}edge(t,e){let i=this.last.get(t)||!1;return this.last.set(t,e),e&&!i}menuKeys(t){let e=a=>(t.buttons[a]?t.buttons[a].value:0)>.5,i=this.deadzone(),n=zs(t.axes[1]||0,i),r=zs(t.axes[0]||0,i);return{ArrowUp:e(12)||n<-.5,ArrowDown:e(13)||n>.5,ArrowLeft:e(14)||r<-.5,ArrowRight:e(15)||r>.5,Enter:e(0),Escape:e(1),Tab:e(5)}}pollMenu(t){let e=this.pad();if(e)for(let[i,n]of Object.entries(this.menuKeys(e))){let r=this.last.get("menu"+i)||!1;if(n!==r){if(this.last.set("menu"+i,n),!n&&this.quiet.delete(i))continue;t(i,n)}}}resync(){this.last.clear(),this.quiet.clear(),this.padIndex=null,this.lookingBack=!1;let t=this.pad();if(t){for(let[e,i]of Object.entries(this.menuKeys(t)))this.last.set("menu"+e,i),i&&this.quiet.add(e);for(let[e,i]of Object.entries(_f))this.last.set(e,(t.buttons[i]?t.buttons[i].value:0)>.5)}}lost(t,e,i){Object.assign(t.pad,{active:!1,steer:0,y:0,gas:!1,brake:!1,turbo:!1,horn:!1,handbrake:!1}),this.lookingBack&&t.releaseHost(51,4),this.lookingBack=!1,this.last.clear(),this.padIndex=null,!e&&!i&&t.pulseVk(80)}pollRace(t,e,i){let n=this.pad(),r=t.pad;if(this.padIndex!==null&&(!n||n.index!==this.padIndex)&&this.lost(t,e,i),!n)return;this.padIndex===null&&(this.padIndex=n.index,this.onFound&&this.onFound()),r.active=!0;let a=f=>n.buttons[f]?n.buttons[f].value:0,o=f=>a(f)>.5,l=this.deadzone(),c=-zs(n.axes[1]||0,l);r.steer=zs(n.axes[0]||0,l);let h=n.mapping==="standard";if(h){o(14)&&(r.steer=-1),o(15)&&(r.steer=1);let f=Math.max(a(7),o(0)?1:0)-Math.max(a(6),o(1)||o(13)?1:0);r.y=Math.abs(c)>Math.abs(f)?c:f,r.gas=a(7)>.2||o(0),r.brake=a(6)>.2||o(1)||o(13)||c<-.5,r.turbo=o(2),r.horn=o(3),r.handbrake=o(5)}else{let f=t.device===2;r.y=c,r.gas=f&&o(2),r.brake=c<-.5,r.turbo=o(0),r.horn=o(1),r.handbrake=o(f?3:2)}let d={};for(let[f,p]of Object.entries(_f))d[f]=this.edge(f,o(p));let u=h&&!e&&o(11);if(u!==this.lookingBack&&(this.lookingBack=u,u?t.pressHost(51,4):t.releaseHost(51,4)),e){d.a&&t.pulseVk(e===2?74:1),d.b&&t.pulseVk(e===2?78:1),d.start&&t.pulseVk(1);return}i&&d.a&&t.pulseVk(32),h&&(d.start&&t.pulseVk(80),d.back&&t.pulseVk(27),d.lb&&t.pulseVk(t.nextCameraKey()),d.reset&&t.pulseVk(13),d.taunt&&t.pulseVk(84))}};var Rn={UP:200,DOWN:208,LEFT:203,RIGHT:205},vf=7429816,M_=4893728,Hl=class{constructor(t,e){this.m=t.m,this.input=e,this.stuck=0,this.reversing=0,this.attempts=0,this.state=null}carState(){let{m:t}=this,e=t.view,i=t.i32[1830550],n=t.u32[1857428]+i*240,r=t.u32[1895476]+e.getInt32(n+36,!0)*169,a=o=>e.getFloat32(r+o,!0);return{index:i,chunk:e.getInt32(n+52,!0),side:e.getInt32(n+80,!0),pos:[a(80),a(84),a(88)],right:[a(16),a(20),a(24)],forward:[a(48),a(52),a(56)],speed:e.getFloat32(n+196,!0)}}nextWaypoint(t){let{m:e}=this,i=e.u32[vf>>2]+t*80;for(let n of[20,24,28]){let r=e.i32[i+n>>2];if(r>=0)return r}return-1}waypointPos(t){let e=this.m.view,i=this.m.u32[vf>>2]+t*80+8;return[e.getFloat32(i,!0),e.getFloat32(i+4,!0),e.getFloat32(i+8,!0)]}angleTo(t,e){let i=e[0]-t.pos[0],n=e[2]-t.pos[2];return Math.atan2(i*t.right[0]+n*t.right[2],i*t.forward[0]+n*t.forward[2])*180/Math.PI}tick(){let t=this.carState();this.state=t;let{dik:e}=this.input,i=this.m.call(M_,[t.index,t.side===0||t.side===1?t.side:-1]);i<0&&(i=this.lastWaypoint??-1),this.lastWaypoint=i;let n=0,r=0;if(i>=0){let l=i;for(let c=0;c<2&&l>=0;c++)l=this.nextWaypoint(l);l>=0&&(n=this.angleTo(t,this.waypointPos(l)));for(let c=0;c<4&&l>=0;c++)l=this.nextWaypoint(l);l>=0&&(r=this.angleTo(t,this.waypointPos(l)))}if(Math.abs(t.speed)>3&&(this.moved=!0),Math.abs(t.speed)<1.5&&this.moved?this.stuck++:this.reversing||(this.stuck=0),this.reversing>0){this.reversing--,e[Rn.UP]=0,e[Rn.DOWN]=128,e[Rn.LEFT]=n>0?128:0,e[Rn.RIGHT]=n>0?0:128,this.reversing||(this.stuck=0);return}if(this.stuck>120){this.attempts++,this.attempts%3===0?(this.input.pulseVk(13),this.stuck=0):this.reversing=70;return}let a=Math.max(8,32-Math.abs(r)*.55),o=t.speed-a;e[Rn.UP]=o<0?128:0,e[Rn.DOWN]=o>2?128:0,e[Rn.LEFT]=n<-3?128:0,e[Rn.RIGHT]=n>3?128:0}};var Hs=[["auto","Automatisch (scherm)"],["360","360p"],["480","480p"],["600","600p"],["720","720p"],["900","900p"],["1080","1080p"],["1440","1440p"]],w_=[["auto","Automatisch"],["on","Aan"],["off","Uit"]],Wl=class{constructor(t,e,{onOpenChange:i}){this.root=t,this.settings=e,this.onOpenChange=i;let n=o=>o.map(([l,c])=>`<option value="${l}">${c}</option>`).join("");t.innerHTML=`
      <h2>Instellingen</h2>
      <label>3D-resolutie <select id="set-res">${n(Hs)}</select></label>
      <label>Renderschaal <input id="set-scale" type="range" min="25" max="200" step="5"><output id="set-scale-out"></output></label>
      <p id="set-effective"></p>
      <label>Volume <input id="set-volume" type="range" min="0" max="100" step="1"><output id="set-volume-out"></output></label>
      <label>Aanraakbediening <select id="set-touch">${n(w_)}</select></label>
      <label>Deadzone gamepad <input id="set-dead" type="range" min="0" max="50" step="1"><output id="set-dead-out"></output></label>
      <label class="check"><input id="set-fps" type="checkbox"> Beeldjes per seconde tonen</label>
      <label class="check"><input id="set-full" type="checkbox"> Volledig scherm</label>
      <button id="set-close">Sluiten</button>`;let r=o=>t.querySelector("#"+o);this.$=r,r("set-res").addEventListener("change",o=>this.apply("resolution",o.target.value)),r("set-scale").addEventListener("input",o=>this.apply("renderScale",Number(o.target.value))),r("set-volume").addEventListener("input",o=>this.apply("volume",Number(o.target.value))),r("set-touch").addEventListener("change",o=>this.apply("touch",o.target.value)),r("set-dead").addEventListener("input",o=>this.apply("deadzone",Number(o.target.value)/100)),r("set-fps").addEventListener("change",o=>this.apply("showFps",o.target.checked)),r("set-full").addEventListener("change",o=>this.apply("fullscreen",o.target.checked));let a=document.documentElement;!a.requestFullscreen&&!a.webkitRequestFullscreen&&(r("set-full").closest("label").hidden=!0),Gl(r("set-close"),()=>this.close());for(let o of["keydown","keyup"])t.addEventListener(o,l=>{t.hidden||(l.stopPropagation(),o==="keydown"&&(l.code==="Escape"||l.code==="F9")&&(l.preventDefault(),l.repeat||this.close(l.code)))})}apply(t,e){this.settings.set(t,e),this.refresh()}refresh(t=this.effective){let e=this.settings,i=this.$;i("set-res").value=String(e.get("resolution")),i("set-scale").value=e.get("renderScale"),i("set-scale-out").textContent=e.get("renderScale")+"%",i("set-volume").value=e.get("volume"),i("set-volume-out").textContent=e.get("volume")+"%",i("set-touch").value=e.get("touch"),i("set-dead").value=Math.round(e.get("deadzone")*100),i("set-dead-out").textContent=Math.round(e.get("deadzone")*100)+"%",i("set-fps").checked=e.get("showFps"),i("set-full").checked=e.get("fullscreen"),this.effective=t,t&&(i("set-effective").textContent=`3D-beeld: ${t.width} \xD7 ${t.height} pixels${t.limited?" \xB7 GPU-limiet":""}`)}get isOpen(){return!this.root.hidden}open(t){this.refresh(t),this.root.hidden=!1,this.$("set-res").focus({preventScroll:!0}),this.onOpenChange&&this.onOpenChange(!0)}close(t=null){this.root.hidden||(this.root.hidden=!0,this.onOpenChange&&this.onOpenChange(!1,t))}};var Yr=null;function Xl(){if(typeof document>"u")return{top:0,right:0,bottom:0,left:0};Yr||(Yr=document.createElement("div"),Yr.style.cssText="position:fixed;left:0;top:0;width:0;height:0;visibility:hidden;pointer-events:none;padding:env(safe-area-inset-top,0) env(safe-area-inset-right,0) env(safe-area-inset-bottom,0) env(safe-area-inset-left,0)",document.body.append(Yr));let s=getComputedStyle(Yr);return{top:parseFloat(s.paddingTop)||0,right:parseFloat(s.paddingRight)||0,bottom:parseFloat(s.paddingBottom)||0,left:parseFloat(s.paddingLeft)||0}}var ts=1/60,T_=6,E_=2500,A_=new Set([5,6,7,12]),C_=2e3,R_=5e3,Sf=1e4,bf=11,ql=class{constructor(t){this.app=t,this.renderer=null,this.race=null,this.input=null,this.running=!1,this.lastFrame=0,this.acc=0,this.paused=!1,this.bound=!1,this.wasmModule=null,this.meta=null,this.pauseKind=0,this.resultScreen=!1}async loadCode(){if(this.meta||(this.meta=await(await fetch("game/spel.meta.json")).json()),!this.wasmModule)try{this.wasmModule=await WebAssembly.compileStreaming(fetch("game/spel.wasm"))}catch{this.wasmModule=await WebAssembly.compile(await(await fetch("game/spel.wasm")).arrayBuffer())}}layout(){if(!this.renderer)return;let t=window.devicePixelRatio||1,e=this.app,i=document.documentElement,n=Math.max(1,Math.round(window.innerWidth*t)),r=Math.max(1,Math.round(window.innerHeight*t)),a=r>n*1.15;i.classList.toggle("race-portrait",a);let o={x:0,y:0,w:n,h:r};if(a){let p=this.useTouch?Math.min(Math.round(r*.62),Math.round(n*1.2)):Math.min(r,Math.round(n*1.5));o={x:0,y:0,w:n,h:p}}let l=o.w/t,c=o.h/t,h=this.renderer.indexed?this.renderer.modeGrid(o):null,d=e.settings.renderSize(l,c,t,this.renderer.maxTextureSize,h);this.renderer.setRenderSize(n,r,o,d),this.effectiveSize=d,this.panel&&this.panel.isOpen&&this.panel.refresh(d);let u=.99*Math.min(l/640,c/480);if(i.style.setProperty("--panel-top",`${c}px`),this.host&&this.host.hudLayout){let f=this.host.hudLayout,p=Xl();f.setShape(o.w/o.h,{left:p.left*t/o.w,right:p.right*t/o.w,top:p.top*t/o.h,bottom:o.h===r?p.bottom*t/o.h:0},{w:l,h:c},this.renderer.clipY),u*=f.scale||1,f.leftShift=0;let y=!1;if(this.useTouch&&!a){let m=document.getElementById("touch-wheel").getBoundingClientRect();if(m.width>0){f.leftShift=(m.right+8)/window.innerWidth*2*f.xr;let g=m.right+8+207.2*u,E=window.innerWidth-p.right-205*u,L=document.querySelector(".touch-actions").getBoundingClientRect();y=g+8+L.width+8>E}}i.classList.toggle("actions-lifted",y)}i.style.setProperty("--hud-unit",`${u}px`),this.touch&&this.touch.relayout()}async run(){let t=this.app;t.say(""),this.endWaitStart=0;let e;try{e=await this.load()}catch(i){console.error("Race not started:",i),i instanceof Ri||t.say("De race kon niet starten: "+i.message,Sf),t.vfs.iniSet("game.ini","PLAYER","finished","0"),this.cleanup();return}this.bot=null,t.params.has("bot")&&(this.bot=new Hl(e,this.input),window.__bot=this.bot),this.speed=Number(t.params.get("speed"))||1,window.__race=e,window.__renderer=this.renderer,this.acc=0,this.lastFrame=performance.now(),await new Promise(i=>{this.finish=i,requestAnimationFrame(n=>this.frame(n))}),this.cleanup()}async load(){let t=this.app,e=t.vfs.parsedIni("game.ini"),i=Number(e.get("ETAPPE","ETAPPE")||0),n=Number(e.get("PLAYER","CAR")||0),r=parseInt(t.vfs.parsedIni("raser.ini").get("PROGRAM","RESOLUTION"),10),a=r===0||r===1,o=document.getElementById("loading-art");o.src=`assets/loading/e${String(i).padStart(2,"0")}${a?r===0?"-lo":"-8":""}.png`,document.getElementById("loading-stage").classList.toggle("pixels",a),document.getElementById("loading-bar").removeAttribute("src"),document.getElementById("loading").hidden=!1,this.barFrames=this.barFrames||{},this.barFrames[a]=this.barFrames[a]||Array.from({length:bf},(d,u)=>{let f=new Image;return f.onload=()=>this.showBar(this.barPercent),f.src=`assets/loading/bar${a?"8":""}-${String(u).padStart(2,"0")}.png`,f}),this.barSet=this.barFrames[a],this.showBar(0),await this.loadCode(),await t.files.prepareRace(i,n,(d,u)=>this.showBar(d/u*90)),this.renderer||(this.renderer=new Ol(t.canvasRace,{staticTrack:!t.params.has("nostatic")})),this.renderer.resetForRace();let l=new Bl(t.getAudioContext(),t.getMasterOutput());this.audio=l;let c={vfs:t.vfs,render:this.renderer,audio:l,input:null,screen:{width:640,height:480},joystickPresent:!1,onFlip:()=>this.renderer.endFrame(),onMessageBox:(d,u)=>{console.error("Game message",d,u),t.say(`${d}: ${u}`)},onStdout:()=>{},onPauseChange:d=>{this.pauseKind=d,d||(this.dialogByPointer=!1),this.updateDialogKeys(),d?l.pauseAll():l.resumeAll()}};this.repeatable=t.params.has("bench"),this.repeatable&&(c.fixedDate=971434016e3,c.clockStart=1),this.host=c;let h=new Da(this.meta,c);return await h.instantiate(this.wasmModule),this.race=h,this.renderer.attach(h.m,c),l.attach(h.m,h.clock),c.hudLayout=new kl(h.m),this.input=new Vl(h.m),c.input=this.input,this.bind(),this.input.onClear=()=>this.touch.releaseAll(),this.gamepad.resync(),this.chooseDevice(),document.getElementById("race-settings").hidden=!1,document.getElementById("fps").hidden=!t.settings.get("showFps"),this.updateStop(),t.canvasRace.classList.add("no-pointer"),this.layout(),this.showBar(95),await new Promise(d=>requestAnimationFrame(()=>setTimeout(d,0))),h.boot(),this.renderer.indexed&&this.layout(),document.getElementById("loading").hidden=!0,h}showBar(t){this.barPercent=t;let e=this.barSet[Math.min(bf-1,Math.floor(11*t*.01))];e.complete&&e.naturalWidth&&(document.getElementById("loading-bar").src=e.src)}bind(){if(this.bound)return;this.bound=!0;let t=this.app;yf(window,()=>this.panelOpen?null:this.input),this.touch=new zl(document.getElementById("touch-controls"),()=>this.input),this.gamepad=new Gs(()=>t.settings.get("deadzone")),this.gamepad.onFound=()=>{this.input&&this.input.device===1&&!t.params.has("bot")&&t.say("Gamepad werkt vanaf de volgende race",4e3)},this.panel=new Wl(document.getElementById("settings-panel"),t.settings,{onOpenChange:(n,r)=>{this.panelOpen=n,this.input?this.input.clear():this.touch&&this.touch.releaseAll(),n?this.audio&&this.audio.suspend():(this.input&&r&&(this.input.ignoreCode=r),this.lastFrame=performance.now(),this.acc=0,this.audio&&!this.holdsSound()&&this.audio.resume())}});let e=()=>{this.panel.isOpen?this.panel.close():this.panel.open(this.effectiveSize)};Gl(document.getElementById("race-settings"),e),window.addEventListener("keydown",n=>{this.race&&(n.code==="F9"?(n.preventDefault(),n.repeat||e()):n.code==="Escape"&&this.panelOpen&&(n.preventDefault(),n.repeat||this.panel.close(n.code)))});for(let n of document.querySelectorAll("#dialog-keys button, #race-stop"))this.touch.bindKey(n,Number(n.dataset.vk),Number(n.dataset.dik)||0);document.getElementById("race-stop").addEventListener("pointerdown",()=>{this.dialogByPointer=!0});let i=t.canvasRace;i.addEventListener("pointerdown",n=>this.canvasPress(n)),i.addEventListener("contextmenu",n=>n.preventDefault());for(let n of["pointerup","pointercancel"])window.addEventListener(n,()=>this.canvasRelease());window.addEventListener("pointermove",n=>{n.pointerType==="mouse"&&this.race&&this.showPointer()}),t.settings.listeners.add(n=>this.settingChanged(n)),document.addEventListener("visibilitychange",()=>this.visibility()),window.addEventListener("blur",()=>this.setFocus(!1)),window.addEventListener("focus",()=>this.setFocus(!0))}cleanup(){let t=document.documentElement;this.audio&&this.audio.stopAll(),this.touch&&this.touch.setVisible(!1),this.panel&&this.panel.close();for(let i of["loading","dialog-keys","race-settings","race-stop","fps"])document.getElementById(i).hidden=!0;t.classList.remove("race-portrait","race-touch","race-results","actions-lifted"),this.app.canvasRace.classList.remove("no-pointer"),clearTimeout(this.pointerTimer),this.race=null,this.input=null,this.pauseKind=0,this.resultScreen=!1,this.dialogByPointer=!1,this.suspended=!1;let e=this.app.audioContext;e&&e.state==="suspended"&&!document.hidden&&e.resume()}chooseDevice(){let t=this.app,e=t.vfs.parsedIni("game.ini"),i=Number(e.get("INPUT","DEVICE")||1);this.useTouch=Qn(t.settings);let n=this.gamepad&&this.gamepad.connected();(this.useTouch||n)&&i===1&&!t.params.has("bot")&&(i=2),i!==1&&(this.host.joystickPresent=!0,this.host.joystickCaps={devType:i===2?1540:516,axes:2,buttons:4}),this.input.device=i;let{keys:r}=this.input;for(let[l,c]of[["left","LEFT"],["right","RIGHT"],["up","UP"],["down","DOWN"],["extra1","EXTRA1"],["extra2","EXTRA2"],["extra3","EXTRA3"]])r[l]=Number(e.get("INPUT",c))||r[l];let a=t.vfs,o=a.onWrite;a.onWrite=null,a.iniSet("game.ini","INPUT","DEVICE",String(i)),a.onWrite=o,document.documentElement.classList.toggle("race-touch",this.useTouch),this.touch&&this.touch.setVisible(this.useTouch)}frame(t){let e=this.race;if(!e)return;if(e.ended){this.endWait(t);return}requestAnimationFrame(o=>this.frame(o));let i=window.__bench&&window.__bench.recording?window.__bench:null,n=this.speed||1,r=Math.min(.25,Math.max(0,(t-this.lastFrame)/1e3))*n;if(this.lastFrame=t,this.countFps(t),this.updateResults(),!this.suspended&&!this.panelOpen){this.acc+=r;let o=Math.min(T_*n,Math.floor(this.acc/ts));this.gamepad&&this.gamepad.pollRace(this.input,e.pause?e.pause.kind:0,this.resultScreen);let l=this.input.vk[80]||this.input.vk[27];for(let c=0;c<o;c++){this.renderer.captureLevel=l||c===o-1?2:c===o-2?1:0,this.acc-=ts,this.bot&&this.bot.tick(),this.input.device!==1&&!e.pause&&this.input.updateJoystick(ts);let h=i?performance.now():0,d;try{d=e.tick(ts)}catch(u){console.error("Race stopped:",u),this.app.say("Race gestopt door een fout: "+u.message,Sf),e.ended=!0,d=!1}if(!d){this.acc=0;break}this.repeatable&&this.traceTick(e),i&&i.tick.push(performance.now()-h),this.input.endTick()}this.acc>ts&&(this.acc=this.acc%ts)}let a=i?performance.now():0;this.renderer.present(e.pause||e.ended?1:Math.min(1,this.acc/ts)),i&&i.present.push(performance.now()-a)}endWait(t){let{input:e}=this;if(e.endTick(),this.endWaitStart=this.endWaitStart||t,(e.vk[27]||e.vk[13]||e.vk[32])&&t-this.endWaitStart<R_){requestAnimationFrame(i=>this.frame(i)),this.renderer.present(1);return}this.finish()}updateResults(){let t=A_.has(this.race.overlayState);t!==this.resultScreen&&(this.resultScreen=t,document.documentElement.classList.toggle("race-results",t),t&&this.touch&&this.touch.releaseAll(),this.updateDialogKeys())}updateDialogKeys(){let t=this.pauseKind,e=this.resultScreen&&!t,i=document.getElementById("dialog-keys");if(i.hidden=!(t||e)||!(this.useTouch||this.dialogByPointer),i.hidden)for(let n of i.querySelectorAll("button"))this.touch.releaseControl(n);document.getElementById("dlg-yes").hidden=t!==2,document.getElementById("dlg-no").hidden=t!==2,document.getElementById("dlg-go").hidden=t!==1,document.getElementById("dlg-results").hidden=!e}canvasPress(t){let{race:e}=this;!e||!e.pause||e.pause.kind!==1||this.panelOpen||(this.canvasVk=[1,4,2,5,6][t.button]||1,this.input.pressHost(this.canvasVk))}canvasRelease(){this.canvasVk&&this.input&&this.input.releaseHost(this.canvasVk),this.canvasVk=0}showPointer(){let t=this.app.canvasRace;t.classList.remove("no-pointer"),clearTimeout(this.pointerTimer),this.pointerTimer=setTimeout(()=>t.classList.add("no-pointer"),C_)}settingChanged(t){this.race&&(t==="resolution"||t==="renderScale"?this.layout():t==="touch"?this.touchSettingChanged():t==="showFps"&&(document.getElementById("fps").hidden=!this.app.settings.get("showFps")),this.panel.isOpen&&this.panel.refresh(this.effectiveSize))}touchSettingChanged(){let t=Qn(this.app.settings);if(t&&this.input.device===1){this.app.say("Aanraakbediening werkt vanaf de volgende race",4e3);return}this.useTouch=t,document.documentElement.classList.toggle("race-touch",t),this.touch.setVisible(t),this.updateDialogKeys(),this.updateStop(),this.layout()}updateStop(){document.getElementById("race-stop").hidden=!(this.race&&!this.useTouch&&Wr())}leftFullscreen(){let{race:t}=this;!t||t.ended||t.pause||this.resultScreen||this.panelOpen||this.suspended||document.hidden||this.input.pulseVk(27)}traceTick(t){if(this.tickCount=(this.tickCount||0)+1,this.tickCount%60)return;let{m:e}=t,i=e.view,n=e.u32[1857428],r=e.u32[1895476],a=2166136261,o=0;for(let h=0;h<E_;h++){let d=n+h*240;if(!i.getUint32(d+16,!0))continue;o++;for(let f=d>>2,p=f+60;f<p;f++)a=Math.imul(a^e.u32[f],16777619);let u=r+i.getInt32(d+36,!0)*169;for(let f=u+16;f<u+96;f+=4)a=Math.imul(a^i.getUint32(f,!0),16777619)}let l=this.bot?this.bot.carState():null;(window.__trace||(window.__trace=[])).push({tick:this.tickCount,cars:(a>>>0).toString(16),bodies:o,chunk:l&&l.chunk,pos:l&&l.pos,speed:l&&l.speed})}countFps(t){if(this.fpsFrames=(this.fpsFrames||0)+1,t-(this.fpsStart||0)>=500){let e=this.fpsFrames*1e3/(t-(this.fpsStart||t-500));if(this.fpsFrames=0,this.fpsStart=t,this.app.settings.get("showFps")){let i=this.renderer.stats,n=this.effectiveSize;document.getElementById("fps").textContent=`${e.toFixed(0)} FPS  ${n.width}\xD7${n.height}  ${i.batches} batches`}}}visibility(){this.setFocus(!document.hidden)}holdsSound(){return!!(this.race&&(this.panelOpen||this.suspended))}setFocus(t){this.race&&(t?(this.suspended=!1,this.lastFrame=performance.now(),this.acc=0,this.audio&&!this.holdsSound()&&this.audio.resume()):(this.suspended=!0,this.touch&&this.touch.releaseAll(),this.input&&this.input.clear(),this.audio&&this.audio.suspend()))}};var Kr="assets/game/";function I_(s,t,e){let i=new XMLHttpRequest;if(i.open("GET",s,!1),i.overrideMimeType("text/plain; charset=x-user-defined"),i.setRequestHeader("Range",`bytes=${t}-${t+e-1}`),i.send(),i.status>=400)throw new Error(`${s}: HTTP ${i.status}`);let n=i.responseText,r=i.status===206?0:t,a=new Uint8Array(Math.max(0,Math.min(e,n.length-r)));for(let o=0;o<a.length;o++)a[o]=n.charCodeAt(r+o)&255;return a}async function Mf(s,t,e){let i=await fetch(s,{headers:{Range:`bytes=${t}-${t+e-1}`}});return i.status===206?new Uint8Array(await i.arrayBuffer()):new Uint8Array(await i.arrayBuffer()).subarray(t,t+e)}function P_(s,t){let e=new DataView(t.buffer,t.byteOffset,t.byteLength),[i,n]=/^rcs/i.test(s)?[24,20]:[4,0],r=[];for(let a=0,o=e.getUint16(0,!0);a<o;a++)r.push(e.getUint32(2+a*i+n,!0));return r}var Xh=class{constructor(t,e,i){this.url=t,this.size=e,this.starts=i,this.spans=[],this.misses=0}has(t,e){return this.spans.some(i=>i.start<=t&&i.end>=e)}addSpan(t,e){this.spans.push({start:t,end:t+e.length,bytes:e}),this.spans.sort((i,n)=>i.start-n.start)}memberEnd(t){let e=0,i=this.starts.length;for(;e<i;){let n=e+i>>1;this.starts[n]<=t?e=n+1:i=n}return e<this.starts.length?this.starts[e]:this.size}gaps(t,e){let i=[],n=t;for(let r of this.spans)if(!(r.end<=n)){if(r.start>=e)break;r.start>n&&i.push([n,r.start]),n=r.end}return n<e&&i.push([n,e]),i}read(t,e,i,n){let r=t+e,a=e>4096?r:Math.min(r,this.memberEnd(t));for(let[o,l]of this.gaps(t,a))this.misses++,this.addSpan(o,I_(this.url,o,this.memberEnd(l-1)-o));i.fill(0,n,n+e);for(let o of this.spans){if(o.end<=t)continue;if(o.start>=r)break;let l=Math.max(t,o.start),c=Math.min(r,o.end);i.set(o.bytes.subarray(l-o.start,c-o.start),n+l-t)}}},wf=1<<20,Yl=class{constructor(t){this.vfs=t,this.list=[],this.lists=null,this.sparse=new Map}async loadBase(t){this.list=await(await fetch(Kr+"files.json")).json();let e=this.list.filter(r=>!/^etappe\d\./i.test(r.name)&&!/^(rcs|rc)\.img$/i.test(r.name)),i=0,n=[...e];await Promise.all(Array.from({length:12},async()=>{for(;n.length;){let r=n.shift(),a=await fetch(Kr+encodeURIComponent(r.name));this.vfs.add(r.name,new Uint8Array(await a.arrayBuffer())),t(++i,e.length)}}));for(let r of this.list)if(/^(rcs|rc)\.img$/i.test(r.name)){let a=this.vfs.read(r.name.replace(/img$/i,"ind")),o=new Xh(Kr+encodeURIComponent(r.name),r.size,P_(r.name,a));this.sparse.set(r.name.toLowerCase(),o),this.vfs.files.set(r.name.toLowerCase(),{name:r.name,data:null,size:r.size,rangeRead:(l,c,h,d)=>o.read(l,c,h,d)})}try{this.lists=await(await fetch(Kr+"race-files.json")).json()}catch{this.lists=null}}raceMusic(){let t=this.vfs.parsedIni("raser.ini"),e=n=>parseInt(t.get("MUSIC",n),10)||0,i=e("LAST")+1;return t.get("MUSIC",String(i>=0&&i<e("COUNT")?i:0))}async prepareRace(t,e,i){let n=this.list.filter(f=>new RegExp(`^etappe${t}\\.`,"i").test(f.name)&&!this.vfs.stat(f.name)?.data),r=n.length,a=0,o=()=>i&&i(++a,r),l=n.map(async f=>{let p=await fetch(Kr+encodeURIComponent(f.name));this.vfs.add(f.name,new Uint8Array(await p.arrayBuffer())),o()}),c=[];if(this.lists){let f=(m,g)=>{for(let[E,L]of g||[])c.push({file:m,start:E,len:L})},p=String(parseInt(this.vfs.parsedIni("raser.ini").get("PROGRAM","RESOLUTION"),10)),y=this.lists.soft&&this.lists.soft[p];for(let[m,g]of Object.entries(this.lists.files)){let E=y?y[m]:g;f(m,E.common),f(m,E.etappe[t]),f(m,g.car[e]),f(m,g.pair[`${t}/${e}`])}f("rcs.img",this.lists.music?.[this.raceMusic()])}else for(let[f,p]of this.sparse)c.push({file:f,start:0,len:p.size});let h=c.filter(f=>!this.sparse.get(f.file).has(f.start,f.start+f.len));r+=h.length;let d=[...h],u=Array.from({length:8},async()=>{for(;d.length;){let f=d.shift(),p=this.sparse.get(f.file);p.addSpan(f.start,await Mf(p.url,f.start,f.len)),o()}});return await Promise.all([...l,...u]),this.fetchLate(),{misses:0}}async fetchLate(){if(!(!this.lists||this.lateStarted)){this.lateStarted=!0;for(let[t,e]of Object.entries(this.lists.late||{})){let i=this.sparse.get(t),n=[];for(let[r,a]of e)for(let o=r;o<r+a;o+=wf){let l=Math.min(wf,r+a-o);i.has(o,o+l)||n.push([o,l])}await Promise.all(Array.from({length:2},async()=>{for(;n.length;){let[r,a]=n.shift();try{i.addSpan(r,await Mf(i.url,r,a))}catch{return}}}))}}}};function Tf(s,{etappe:t=0,car:e=0,laps:i=2,resolution:n=null,chunks:r=null}={}){let a=(o,l,c)=>s.iniSet("game.ini",o,l,String(c));n!==null&&s.iniSet("raser.ini","PROGRAM","RESOLUTION",String(n)),r!==null&&s.iniSet("game.ini","OPTIONS","VISIBLECHUNKS",String(r)),a("ETAPPE","ETAPPE",t),a("ETAPPE","BRITISH",t===9?1:0),a("OPTIONS","NRLAPS",i),a("PLAYER","CAR",e),a("PLAYER","MONEY",0);for(let o of["MOTOR","BANDEN","ABS","VERSNELLINGSBAK"])a("PLAYER",o,0)}var In=800,es=600,Kl=0,Ef=1,qh=2,Af=3,Cf=4,Zl=class{constructor(t="assets/menu/"){this.base=t,this.images=new Map,this.regions=new Map,this.index=null}async init(){this.index=await(await fetch(this.base+"index.json")).json()}has(t){return Object.prototype.hasOwnProperty.call(this.index,t.toLowerCase())}image(t){let e=t.toLowerCase(),i=this.images.get(e);if(i)return i;let n=this.index[e];return n?(i=new Promise(r=>{let a=new Image;a.onload=()=>r(a),a.onerror=()=>r(null),a.src=this.base+n}),this.images.set(e,i),i):Promise.resolve(null)}async region(t){let e=t.toLowerCase();if(this.regions.has(e))return this.regions.get(e);let i=await this.image(e),n=null;if(i){let r=document.createElement("canvas");r.width=i.width,r.height=i.height;let a=r.getContext("2d",{willReadFrequently:!0});a.drawImage(i,0,0);let o=a.getImageData(0,0,i.width,i.height).data,l=i.width,c=i.height,h=(c-1)*l*4,d=o[h]<<16|o[h+1]<<8|o[h+2],u=new Uint8Array(l*c);for(let f=0;f<l*c;f++)u[f]=(o[f*4]<<16|o[f*4+1]<<8|o[f*4+2])!==d?1:0;n={w:l,h:c,mask:u}}return this.regions.set(e,n),n}},$l=class s{static async load(t,e,i={}){let n=new s;n.stem=e,n.factor=i.factor??255,n.onState=i.onState||null;let r=[["up",Kl],["do",Ef],["hi",Af],["di",Cf],["fo",qh]],a=await Promise.all(r.map(([l])=>t.image(`${e}_${l}.tga`)));n.images=[];let o=null;return r.forEach(([,l],c)=>{a[c]&&(o=a[c]),n.images[l]=o}),n.width=a[0]?a[0].width:0,n.height=a[0]?a[0].height:0,n.region=await t.region(`${e}_re.bmp`),n}},Fe=class{constructor(t=0,e=0,i=0,n=0){this.x=t,this.y=e,this.w=i,this.h=n,this.visible=!0,this.enabled=!0,this.parent=null,this.tabStop=!1,this.tabOrder=1e3,this.hint=""}hit(t,e){return t>=this.x&&e>=this.y&&t<this.x+this.w&&e<this.y+this.h}invalidate(){this.parent&&this.parent.invalidate()}draw(){}pointerDown(){}pointerUp(){}pointerMove(){}pointerCancel(){}keyDown(){return!1}keyUp(){return!1}},Bi=class extends Fe{constructor(t,e,i=null,n={}){super(t,e,i?i.width:n.w||0,i?i.height:n.h||0),this.image=i,this.factor=n.factor??255,this.stretch=n.stretch??!1,this.onClick=n.onClick||null}setImage(t){this.image=t,this.stretch||(this.w=t?t.width:0,this.h=t?t.height:0),this.invalidate()}draw(t){this.image&&(t.globalAlpha=this.factor/255,this.stretch?t.drawImage(this.image,this.x,this.y,this.w,this.h):t.drawImage(this.image,this.x,this.y),t.globalAlpha=1)}pointerUp(t,e){this.onClick&&this.hit(t,e)&&this.onClick(this)}},Rf={name:"Arial, Helvetica, sans-serif",size:16,color:"#F1D240",bold:!0},Ee=class extends Fe{constructor(t,e,i,n,r="",a={},o={}){super(t,e,i,n),this.text=r,this.font={...Rf,...a},this.wordWrap=o.wordWrap??!1,this.align=o.align||"left",this.layout=o.layout||"top",this.autoSize=o.autoSize??!1,this.onClick=o.onClick||null}pointerUp(t,e){this.onClick&&this.hit(t,e)&&this.onClick(this)}setText(t){this.text!==t&&(this.text=t,this.invalidate())}draw(t){if(!this.text)return;let e=this.font;t.font=`${e.bold?"bold ":""}${e.size}px ${e.name}`,t.fillStyle=e.color,t.textBaseline="top",t.textAlign=this.align;let i=this.align==="center"?this.x+this.w/2:this.align==="right"?this.x+this.w:this.x,n=this.wordWrap?qs(t,String(this.text),this.w):String(this.text).split(`
`),r=Math.round(e.size*1.2),a=this.y;this.layout==="center"&&(a=this.y+(this.h-n.length*r)/2),t.save(),!this.autoSize&&this.w>0&&this.h>0&&(t.beginPath(),t.rect(this.x,this.y,this.w,this.h),t.clip());for(let o of n)t.fillText(o,i,a),a+=r;t.restore(),t.textAlign="left"}};function qs(s,t,e){let i=[];for(let n of t.split(/\r?\n/)){let r="";for(let a of n.split(/\s+/)){let o=r?r+" "+a:a;s.measureText(o).width>e&&r?(i.push(r),r=a):r=o}i.push(r)}return i}var _e=class extends Fe{constructor(t,e,i,n={}){super(e,i,t?t.width:0,t?t.height:0),this.def=t,this.tabStop=n.tabStop??!0,this.tabOrder=n.tabOrder??1e3,this.onClick=n.onClick||null,this.modalResult=n.modalResult||0,this.isDefault=n.default||!1,this.isCancel=n.cancel||!1,this.pressed=!1,this.armed=!1,this.hovered=!1,this.checked=!1,this.lastState=Kl,this.caption=n.caption||"",this.captionFont=n.font||null}state(){return this.enabled?this.pressed||this.checked?Ef:this.hovered?Af:this.parent&&this.parent.focus===this||this.isDefault&&this.parent&&!this.parent.focus?qh:Kl:Cf}setDef(t){this.def=t,this.w=t?t.width:0,this.h=t?t.height:0,this.invalidate()}hit(t,e){if(!this.visible||!this.def)return!1;let i=t-this.x,n=e-this.y;if(i<0||n<0)return!1;let r=this.def.region;return r?i>=r.w||n>=r.h?!1:r.mask[Math.floor(n)*r.w+Math.floor(i)]===1:i<this.w&&n<this.h}draw(t){if(!this.def)return;let e=this.state();e!==this.lastState&&this.stateChanged(e);let i=this.def.images[e]||this.def.images[Kl];if(i&&(t.globalAlpha=this.def.factor/255,t.drawImage(i,this.x,this.y),t.globalAlpha=1),this.caption){let n=this.captionFont||{size:15,color:"#62280E",bold:!0};t.font=`${n.bold?"bold ":""}${n.size}px ${Rf.name}`,t.fillStyle=this.enabled?n.color:"#63614B",t.textAlign="center",t.textBaseline="middle";let r=this.captionRect||[0,0,this.w,this.h];t.fillText(this.caption,this.x+(r[0]+r[2])/2,this.y+(r[1]+r[3])/2),t.textAlign="left"}}stateChanged(t){let e=this.lastState;this.lastState=t,this.def&&this.def.onState&&this.def.onState(this,t,e)}click(){if(!this.enabled||!this.visible)return;let t=this.parent;this.modalResult&&t&&(t.modalResult=this.modalResult),this.onClick&&this.onClick(this),this.modalResult&&t&&t.finishModal&&t.finishModal()}pointerDown(){this.pressed=!0,this.armed=!0,this.parent&&this.parent.setFocus(this),this.invalidate()}pointerMove(t,e){if(this.armed){let i=this.hit(t,e);i!==this.pressed&&(this.pressed=i,this.invalidate())}}pointerUp(t,e){let i=this.armed&&this.hit(t,e);this.armed=!1,this.pressed=!1,this.invalidate(),i&&this.click()}pointerCancel(){this.armed=!1,this.pressed=!1,this.invalidate()}keyDown(t){return t==="Space"?(this.pressed=!0,this.invalidate(),!0):!1}keyUp(t){return t==="Space"&&this.pressed?(this.pressed=!1,this.invalidate(),this.click(),!0):!1}},Ws=class extends _e{click(){!this.enabled||!this.visible||(this.checked=!this.checked,super.click())}},Xs=class s extends _e{constructor(t,e,i,n={}){super(t,e,i,n),this.group=n.group||null,this.tabStop=!1}setChecked(t){if(this.checked=t,this.tabStop=t,t&&this.parent)for(let e of this.parent.components)e!==this&&e instanceof s&&e.group===this.group&&(e.checked=!1,e.tabStop=!1);this.invalidate()}click(){!this.enabled||!this.visible||(this.setChecked(!0),super.click())}},Zr=class extends Fe{constructor(t,e,i,n,r={}){super(t,e,r.w||(i?i.width:100),r.h||(i?i.height:15)),this.background=i,this.needle=n,this.min=r.min??0,this.max=r.max??100,this.position=r.position??this.min,this.largeStep=r.largeStep??5,this.onChange=r.onChange||null,this.tabStop=r.tabStop??!0,this.tabOrder=r.tabOrder??1e3,this.drag=!1}range(){return this.w-(this.needle?this.needle.width:6)}setPosition(t,e=!0){let i=Math.max(this.min,Math.min(this.max,Math.round(t)));i!==this.position&&(this.position=i,this.invalidate(),e&&this.onChange&&this.onChange(i))}draw(t){this.background&&t.drawImage(this.background,this.x,this.y),this.needle&&t.drawImage(this.needle,this.needleX(),this.y),this.parent&&this.parent.focus===this&&(t.strokeStyle="#F1D240",t.lineWidth=1,t.strokeRect(this.x-1.5,this.y-1.5,this.w+3,this.h+3))}needleX(){return this.x+Math.trunc(this.range()*(this.position-this.min)/(this.max-this.min))}touchMargin(t){return this.parent&&this.parent.rt.touchInput?t:0}hit(t,e){let i=this.touchMargin(12);return t>=this.x&&t<this.x+this.w&&e>=this.y-i&&e<this.y+this.h+i}onNeedle(t){let e=this.touchMargin(10),i=this.needleX();return t>=i-e&&t<i+this.w-this.range()+e}pageTowards(t){let e=this.x+Math.trunc(this.w*(this.position-this.min)/(this.max-this.min));this.setPosition(this.position+(t<e?-this.largeStep:this.largeStep))}repeatStep(){this.onNeedle(this.pointerX)?this.parent.clearTimer(this.repeat):this.pageTowards(this.pointerX)}pointerDown(t){let e=this.parent;if(e&&e.setFocus(this),this.onNeedle(t)){this.drag=!0,this.grab=t-this.needleX();return}this.pointerX=t,this.pageTowards(t),this.repeat=e.setTimer(250,()=>{this.repeat=e.setTimer(50,()=>this.repeatStep(),!0),this.repeatStep()})}pointerMove(t){if(this.pointerX=t,!this.drag)return;let e=Math.max(0,Math.min(this.range(),t-this.grab-this.x));this.setPosition(this.min+Math.trunc(e*(this.max-this.min)/this.range()))}pointerUp(){this.drag=!1,this.parent&&this.parent.clearTimer(this.repeat),this.repeat=null}pointerCancel(){this.pointerUp()}keyDown(t){switch(t){case"PageUp":return this.setPosition(this.position+this.largeStep),!0;case"PageDown":return this.setPosition(this.position-this.largeStep),!0;case"End":return this.setPosition(this.min),!0;case"Home":return this.setPosition(this.max),!0;case"ArrowLeft":case"ArrowDown":return this.setPosition(this.position-1),!0;case"ArrowUp":case"ArrowRight":return this.setPosition(this.position+1),!0;default:return!1}}},Qi=class extends Fe{constructor(t,e,i,n,r={}){super(t,e,i,n),this.text=r.text||"",this.maxLength=r.maxLength??255,this.onEnter=r.onEnter||null,this.onChange=r.onChange||null,this.tabStop=!0,this.tabOrder=r.tabOrder??1e3,this.font={size:16,color:"#000000",...r.font},this.background=r.background??"#FFFFFF",this.element=null}draw(t){}attach(t){if(this.element)return;let e=document.createElement("input");e.type="text",e.maxLength=this.maxLength,e.value=this.text,e.autocomplete="off",e.spellcheck=!1,e.className="menu-edit",e.addEventListener("input",()=>{this.text=e.value,this.onChange&&this.onChange(this.text)}),e.addEventListener("keydown",i=>{if(i.stopPropagation(),t.lastInputPad=!1,t.staleRepeat(i)){i.preventDefault();return}i.key==="Enter"?(i.preventDefault(),this.onEnter&&this.onEnter()):i.key==="Escape"&&t.key("Escape",!0)}),e.addEventListener("keyup",i=>i.stopPropagation()),t.overlay.appendChild(e),this.element=e,this.place(t)}place(t){let e=this.element;if(!e)return;let i=t.toScreenRect(this.parent,this.x,this.y,this.w,this.h);e.style.left=i.x+"px",e.style.top=i.y+"px",e.style.width=i.w+"px",e.style.height=i.h+"px",e.style.fontSize=Math.max(14,this.font.size*i.scale)+"px",e.style.color=this.font.color,e.style.background=this.background}detach(){this.element&&this.element.remove(),this.element=null}setText(t){this.text=t,this.element&&(this.element.value=t)}focusElement(){this.element&&this.element.focus()}},ni=class{constructor(t,e={}){this.rt=t,this.args=e,this.components=[],this.focus=null,this.width=In,this.height=es,this.x=0,this.y=0,this.modalResult=0,this.capture=null,this.timers=new Set,this.background=null,this.keyPreview=null}portraitZones(){return null}async create(){}onShow(){}onClose(){}add(t,e){return t.parent=this,e===void 0?this.components.push(t):this.components.splice(e,0,t),t}remove(t){let e=this.components.indexOf(t);e>=0&&this.components.splice(e,1),this.focus===t&&(this.focus=null)}bringToFront(t){let e=this.components.indexOf(t);e>=0&&e!==this.components.length-1&&(this.components.splice(e,1),this.components.push(t)),this.invalidate()}invalidate(){this.rt.invalidate()}setFocus(t){this.focus!==t&&(this.focus=t,t instanceof Qi?t.focusElement():document.activeElement&&document.activeElement.classList&&document.activeElement.classList.contains("menu-edit")&&document.activeElement.blur(),this.invalidate())}setTimer(t,e,i=!1){let n={id:0},r=()=>{i||this.timers.delete(n),e()};return n.id=i?setInterval(r,t):setTimeout(r,t),n.repeat=i,this.timers.add(n),n}clearTimer(t){t&&(t.repeat?clearInterval(t.id):clearTimeout(t.id),this.timers.delete(t))}clearTimers(){for(let t of this.timers)t.repeat?clearInterval(t.id):clearTimeout(t.id);this.timers.clear()}draw(t){this.background&&t.drawImage(this.background,0,0);for(let e of this.components)e.visible&&e.draw(t)}topAt(t,e){for(let i=this.components.length-1;i>=0;i--){let n=this.components[i];if(n.visible&&n.enabled&&n.hit(t,e))return n}return null}pointerDown(t,e){let i=this.topAt(t,e);this.capture=i,i?i.pointerDown(t,e):this.onBackgroundClick&&this.onBackgroundClick(t,e)}pointerMove(t,e){this.capture&&this.capture.pointerMove(t,e);let i=this.topAt(t,e);for(let n of this.components)if(n instanceof _e){let r=n===i&&!this.rt.touchInput;n.hovered!==r&&(n.hovered=r,this.invalidate())}}pointerUp(t,e){let i=this.capture;this.capture=null,i&&i.pointerUp(t,e)}pointerCancel(){let t=this.capture;this.capture=null,t&&t.pointerCancel()}focusables(t=!1){return this.components.filter(e=>e.visible&&e.enabled&&(e.tabStop||t&&(e instanceof _e||e instanceof Zr||e instanceof Qi))).sort((e,i)=>e.tabOrder-i.tabOrder)}moveFocus(t,e=!1){let i=this.focusables(e);if(!i.length)return;let n=i.indexOf(this.focus);n=n<0?t>0?0:i.length-1:(n+t+i.length)%i.length,this.setFocus(i[n])}keyDown(t,e){if(this.keyPreview&&this.keyPreview(t))return;let i=this.focus;if(!(i&&i.keyDown(t)))switch(t){case"Tab":this.moveFocus(e?-1:1);break;case"ArrowRight":case"ArrowDown":this.moveFocus(1,!0);break;case"ArrowLeft":case"ArrowUp":this.moveFocus(-1,!0);break;case"Enter":{if(i instanceof _e){i.click();break}let n=this.components.find(r=>r instanceof _e&&r.isDefault&&r.visible&&r.enabled);n&&n.click();break}case"Escape":{let n=this.components.find(r=>r instanceof _e&&r.isCancel&&r.visible&&r.enabled);n&&n.click();break}default:break}}keyUp(t){this.focus&&this.focus.keyUp(t)}finishModal(){this.resolveModal&&this.rt.closeModal(this,this.modalResult)}},Jl=class{constructor({canvas:t,overlay:e,assets:i,data:n,sound:r}){this.canvas=t,this.overlay=e,this.assets=i,this.data=n,this.sound=r,this.g=t.getContext("2d"),this.screen=null,this.modals=[],this.dirty=!0,this.active=!1,this.layout={zones:[],scale:1},this.touchInput=!1,this.buffer=document.createElement("canvas"),this.bufferG=null,this.bufferScale=1,this.video=null,this.onExitMenu=null,this.keysDown=new Set,this.press=null,this.lastInputPad=!1,this.ignoreRepeat=!1,this.bind()}bind(){let t=this.canvas;t.addEventListener("pointerdown",n=>{if(!this.active||(n.preventDefault(),this.press))return;this.lastInputPad=!1,this.touchInput=n.pointerType==="touch";let r=this.eventToForm(n);r&&(this.press={id:n.pointerId,form:r.form},r.form.pointerDown(r.x,r.y),t.setPointerCapture?.(n.pointerId))}),t.addEventListener("pointermove",n=>{if(!this.active||(this.press?n.pointerId!==this.press.id:n.pointerType==="touch"))return;let r=this.eventToForm(n,this.press?.form);r&&r.form.pointerMove(r.x,r.y)});let e=(n,r)=>{if(!this.press||n.pointerId!==this.press.id)return;let{form:a}=this.press;if(this.press=null,r){a.pointerCancel();return}let o=this.eventToForm(n,a);a.pointerUp(o.x,o.y)};t.addEventListener("pointerup",n=>e(n,!1)),t.addEventListener("pointercancel",n=>e(n,!0)),t.addEventListener("lostpointercapture",n=>e(n,!0)),window.addEventListener("keydown",n=>{this.active&&(this.lastInputPad=!1,this.staleRepeat(n)||this.key(n.code,!0,n.shiftKey),["Tab","Space","Enter","Escape","ArrowUp","ArrowDown","ArrowLeft","ArrowRight"].includes(n.code)&&n.preventDefault())}),window.addEventListener("keyup",n=>{this.active&&this.key(n.code,!1,n.shiftKey)});let i=n=>{this.active&&this.data.flow.unexpectedError(this,n)};window.addEventListener("error",n=>{n.error&&i(n.error)}),window.addEventListener("unhandledrejection",n=>{n.reason?.name!=="NotAllowedError"&&n.reason?.name!=="AbortError"&&i(n.reason)})}staleRepeat(t){return this.ignoreRepeat?t.repeat?!0:(this.ignoreRepeat=!1,!1):!1}key(t,e,i=!1){let n=this.top();n&&(e?n.keyDown(t,i):n.keyUp(t),this.invalidate())}top(){return this.modals.length?this.modals[this.modals.length-1]:this.screen}invalidate(){this.dirty=!0}async goTo(t,e={}){let i=new t(this,e);return i.prevClass=this.screen?this.screen.constructor:null,await i.create(),this.screen&&this.closeForm(this.screen),this.screen=i,this.attachEdits(i),i.onShow(),this.relayout(),this.invalidate(),i}closeForm(t){this.press?.form===t&&(this.press=null),t.clearTimers(),t.onClose();for(let e of t.components)e instanceof Qi&&e.detach()}async showModal(t,e={}){let i=new t(this,e);return await i.create(),i.isDialog=!0,i.x=Math.round((In-i.width)/2),i.y=Math.round((es-i.height)/2),new Promise(n=>{i.resolveModal=n,this.modals.push(i),this.attachEdits(i),i.onShow(),this.relayout(),this.invalidate()})}closeModal(t,e){let i=this.modals.indexOf(t);if(i<0)return;this.modals.splice(i,1),this.closeForm(t);let n=t.resolveModal;t.resolveModal=null,this.relayout(),this.invalidate(),n(e)}attachEdits(t){for(let e of t.components)e instanceof Qi&&e.attach(this)}hideAll(){this.screen&&this.closeForm(this.screen);for(let t of this.modals)this.closeForm(t);this.screen=null,this.modals=[],this.stopVideo()}relayout(){let t=this.canvas.width,e=this.canvas.height;if(!t||!e)return;let i=this.screen,n=e>t*1.1,r=this.safeRect(),a=null;if(n&&i&&(a=i.portraitZones()),a&&a.length){let l=Math.max(...a.map(u=>u[2])),c=Math.min(r.w/l,r.h/a.reduce((u,f)=>u+f[3],0)),h=a.reduce((u,f)=>u+f[3]*c,0),d=r.y+(r.h-h)/2;this.layout.zones=a.map(([u,f,p,y])=>{let m={sx:u,sy:f,sw:p,sh:y,dx:r.x+(r.w-p*c)/2,dy:d,dw:p*c,dh:y*c};return d+=y*c,m}),this.layout.scale=c}else{let l=Math.min(r.w/In,r.h/es),c=In*l,h=es*l;this.layout.zones=[{sx:0,sy:0,sw:In,sh:es,dx:r.x+(r.w-c)/2,dy:r.y+(r.h-h)/2,dw:c,dh:h}],this.layout.scale=l}let o=Math.max(1,Math.min(2,Math.ceil(this.layout.scale)));(this.bufferScale!==o||this.buffer.width!==In*o)&&(this.bufferScale=o,this.buffer.width=In*o,this.buffer.height=es*o,this.bufferG=this.buffer.getContext("2d"));for(let l of[this.screen,...this.modals])if(l)for(let c of l.components)c instanceof Qi&&c.place(this);this.placeVideo(),this.invalidate()}safeRect(){let t=Xl(),e=this.canvas.width/(this.canvas.getBoundingClientRect().width||this.canvas.width);return{x:t.left*e,y:t.top*e,w:Math.max(1,this.canvas.width-(t.left+t.right)*e),h:Math.max(1,this.canvas.height-(t.top+t.bottom)*e)}}mapPoint(t,e){for(let i of this.layout.zones)if(t>=i.sx&&e>=i.sy&&t<=i.sx+i.sw&&e<=i.sy+i.sh){let n=i.dw/i.sw;return{x:i.dx+(t-i.sx)*n,y:i.dy+(e-i.sy)*n,k:n}}return null}dialogRect(t){if(t.canvasRect)return t.canvasRect();let e=this.safeRect(),i=Math.min(e.w/t.width,e.h/t.height,Math.max(this.layout.scale,Math.min(e.w/t.width,1))),n=t.width*i,r=t.height*i;return{x:e.x+(e.w-n)/2,y:e.y+(e.h-r)/2,w:n,h:r,scale:i}}toScreenRect(t,e,i,n,r){let a=this.canvas.getBoundingClientRect(),o=a.width/this.canvas.width;if(t&&t.isDialog){let c=this.dialogRect(t);return{x:a.left+(c.x+e*c.scale)*o,y:a.top+(c.y+i*c.scale)*o,w:n*c.scale*o,h:r*c.scale*o,scale:c.scale*o}}let l=this.mapPoint(e,i)||{x:0,y:0,k:this.layout.scale};return{x:a.left+l.x*o,y:a.top+l.y*o,w:n*l.k*o,h:r*l.k*o,scale:l.k*o}}eventToForm(t,e=null){let i=this.canvas.getBoundingClientRect(),n=(t.clientX-i.left)*this.canvas.width/i.width,r=(t.clientY-i.top)*this.canvas.height/i.height;if(e)return this.canvasToForm(e,n,r);for(let a=this.modals.length-1;a>=0;a--){let o=this.modals[a],l=this.canvasToForm(o,n,r);if(!o.passesPointer||!o.passesPointer(l.x,l.y))return l}return this.screen?this.canvasToForm(this.screen,n,r):null}canvasToForm(t,e,i){if(t.isDialog){let n=this.dialogRect(t);return{form:t,x:(e-n.x)/n.scale,y:(i-n.y)/n.scale}}for(let n of this.layout.zones)if(e>=n.dx&&i>=n.dy&&e<=n.dx+n.dw&&i<=n.dy+n.dh){let r=n.sw/n.dw;return{form:t,x:n.sx+(e-n.dx)*r,y:n.sy+(i-n.dy)*r}}return{form:t,x:-1,y:-1}}render(){if(!this.active||!this.dirty)return;this.dirty=!1;let t=this.g,e=this.canvas.width,i=this.canvas.height;if(t.setTransform(1,0,0,1,0,0),t.fillStyle="#000",t.fillRect(0,0,e,i),this.screen){let n=this.bufferG,r=this.bufferScale;n.setTransform(r,0,0,r,0,0),n.clearRect(0,0,In,es),this.screen.draw(n),t.imageSmoothingEnabled=!0,t.imageSmoothingQuality="high";for(let a of this.layout.zones)t.drawImage(this.buffer,a.sx*r,a.sy*r,a.sw*r,a.sh*r,a.dx,a.dy,a.dw,a.dh)}for(let n of this.modals){let r=this.dialogRect(n);t.setTransform(r.scale,0,0,r.scale,r.x,r.y),n.draw(t)}t.setTransform(1,0,0,1,0,0)}playVideo(t,e,i,n,r,a,o={}){this.stopVideo();let l=document.createElement("video");return l.src="assets/media/"+t,l.playsInline=!0,l.className="menu-video",l.muted=o.muted??!1,l.loop=o.loop??!1,l.volume=(this.data.app?.settings.get("volume")??100)/100,this.overlay.appendChild(l),this.video={el:l,form:e,x:i,y:n,w:r,h:a},this.placeVideo(),new Promise(c=>{this.video.resolve=c,l.onended=()=>{l.loop||this.stopVideo()},l.onerror=()=>this.stopVideo();let h=l.play();h&&h.catch(d=>{!this.video||this.video.el!==l||d&&d.name!=="NotAllowedError"||(l.muted=!0,l.play().catch(()=>this.stopVideo()),o.onMuted&&o.onMuted())})})}placeVideo(){if(!this.video)return;let{el:t,form:e,x:i,y:n,w:r,h:a}=this.video,o=this.toScreenRect(e,i,n,r,a);t.style.left=o.x+"px",t.style.top=o.y+"px",t.style.width=o.w+"px",t.style.height=o.h+"px"}stopVideo(){if(!this.video)return;let{el:t,resolve:e}=this.video;this.video=null,t.pause(),t.remove(),e&&e()}};var jl=class{constructor(t,e=null,i="assets/menu/"){this.getContext=t,this.getOutput=e,this.base=i,this.buffers=new Map,this.music=null,this.musicGain=null,this.voice=null,this.volumes={music:1,fx:1,voice:1},this.musicOn=!0,this.fxOn=!0}gainFor(t){return Math.max(0,Math.min(1,t/100))}setVolumes({music:t,fx:e,voice:i,musicOn:n,fxOn:r}){t!==void 0&&(this.volumes.music=this.gainFor(t)),e!==void 0&&(this.volumes.fx=this.gainFor(e)),i!==void 0&&(this.volumes.voice=this.gainFor(i)),n!==void 0&&(this.musicOn=n),r!==void 0&&(this.fxOn=r),this.musicGain&&(this.musicGain.gain.value=this.musicOn?this.volumes.music:0)}async load(t,e=this.base){let i=t.toLowerCase(),n=this.buffers.get(i);return n||(n=(async()=>{let r=this.getContext();if(!r)return null;let a=await fetch(e+i+".wav");if(!a.ok)return null;let o=await a.arrayBuffer(),l=o.byteLength;return{audio:await r.decodeAudioData(o),bytes:l}})().catch(()=>null),this.buffers.set(i,n)),n}output(){let t=this.getContext();return this.getOutput&&this.getOutput()||t&&t.destination}async start(t,e,i=!1,n,r=null){let a=this.getContext(),o=await this.load(t,n);if(!a||!o||r&&!r())return null;let l=a.createBufferSource();l.buffer=o.audio,l.loop=i;let c=a.createGain();return c.gain.value=e,l.connect(c),c.connect(this.output()),l.start(),{source:l,gain:c}}async startMusic(){if(this.music)return;let t={};this.music=t;let e=this.musicOn?this.volumes.music:0,i=await this.start("menumsc",e,!0,"assets/media/",()=>this.music===t);if(this.music!==t){i&&i.source.stop();return}this.music=i,i&&(this.musicGain=i.gain)}stopMusic(){this.music&&this.music.source&&this.music.source.stop(),this.music=null,this.musicGain=null}async playVoice(t){this.stopVoice();let e={};this.voiceToken=e;let i=await this.start(t,this.volumes.voice);if(this.voiceToken!==e){i&&i.source.stop();return}this.voice=i}stopVoice(){if(this.voiceToken=null,this.voice)try{this.voice.source.stop()}catch{}this.voice=null}async playFx(t){this.fxOn&&await this.start(t,this.volumes.fx)}async durationSeconds(t,e=25){let i=await this.load(t);return i?Math.trunc(i.bytes*e/1e6):0}stopAll(){this.stopVoice(),this.stopMusic()}};var rs={};vp(rs,{TBalloonForm:()=>ma,TfrmCDRequest:()=>tu,TfrmCharacter:()=>Fn,TfrmCloseDlg:()=>ha,TfrmCurrentChar:()=>ns,TfrmDeletePlayer:()=>sc,TfrmDifficulty:()=>is,TfrmDisplaySettings:()=>Sa,TfrmDoubleKeys:()=>fa,TfrmException2:()=>ga,TfrmGarage:()=>jr,TfrmHighScoreDlg:()=>ua,TfrmInternetDlg:()=>eu,TfrmIntro:()=>Jr,TfrmJoyStickSettings:()=>va,TfrmKeySettings:()=>xa,TfrmLoseChase:()=>Zs,TfrmLoseNormal:()=>na,TfrmMainScreen:()=>Mi,TfrmNewPlayer:()=>da,TfrmNoMoney:()=>la,TfrmOptions:()=>ea,TfrmPlayer:()=>ta,TfrmQualify:()=>sa,TfrmQuickRace:()=>zi,TfrmResults:()=>Ks,TfrmSliderSettings:()=>ya,TfrmStartInfo:()=>Js,TfrmStartInfoKeyBoard:()=>pa,TfrmTrack:()=>Ye,TfrmTrackIntro:()=>ss,TfrmUnlock:()=>Qr,TfrmWheelSettings:()=>_a,TfrmWinChase:()=>aa,TfrmWinFinal:()=>oa,TfrmWinNormal:()=>ra,isDialog:()=>pc,showHelpContext:()=>ac,showHelpTopic:()=>nu});var L_={gdfBtnHelp:"helpm",gdfBtnClose:"end",gdfBtnNext:"nextm",gdfBtnNextSingle:"nexts",gdfBtnPrevious:"backm",gdfBtnOkDlg:"okay",gdfBtnOkSingleDlg:"okas",gdfBtnCancelDlg:"cance",gdfBtnCloseDlg:"cross",gdfBtnYesDlg:"ryes",gdfBtnNoDlg:"lno",gdfBtnNextItem:"next2",gdfBtnPreviousItem:"back2",gdfRadioBtn:"radio",gdfCheckBox:"check",gdfBtnTour:"tour",gdfBtnQR:"quick",gdfBtnInternet:"inter",gdfBtnPlayer:"playe",gdfBtnOptions:"optio",gdfBtnEasy:"easy",gdfBtnMedium:"norma",gdfBtnHard:"hard",gdfBtnChoose:"newch",gdfBtnPrevious3:"back3",gdfBtnNext3:"next3",gdfBtnBuyTU:"buy",gdfBtnAdvVideo:"advan",gdfBtnCtrlSettings:"setti",gdfBtnDefault:"defau",gdfBtnKey:"key",gdfBtnDeletePlayer:"delet",defEmpty:"butp1",gdfBigRadioBtnMain:"radhm",gdfRadioBtnExit:"radex"},Yh=new Map;async function be(s,t){let e=t.replace(/^Data\./,"");if(Yh.has(e))return Yh.get(e);let i=L_[e]||e,n=e==="gdfRadioBtn"||e==="gdfCheckBox",r=await $l.load(s.assets,i,{factor:n?150:255,onState:n?F_:D_});return Yh.set(e,r),r}function F_(s,t){t===1&&s.parent?.rt.sound.playFx("start")}function D_(s,t){(t===1||t===2)&&s.parent?.bringToFront(s),t===1&&s.parent?.rt.sound.playFx("start")}var N_=s=>{let t=typeof s=="number"?s:parseInt(String(s).replace(/^\$|^0x/i,""),16);return`rgb(${t&255},${t>>8&255},${t>>16&255})`};function Ys(s){let t={clWhite:"#FFFFFF",clBlack:"#000000",clYellow:"#FFFF00",clRed:"#FF0000",clLime:"#00FF00",clBlue:"#0000FF",clMaroon:"#800000",clNavy:"#000080",clGray:"#808080",clSilver:"#C0C0C0",clWindowText:"#000000",clBtnFace:"#D4D0C8"};return typeof s=="string"&&t[s]?t[s]:N_(s)}async function Ln(s,t){let e=s.rt,i=e.forms[t];if(!i)throw new Error("No DFM "+t);s.dfmClass=i.class;let n=async(r,a,o,l)=>{for(let c of r.children){let h=c.props,d=s[c.name],u=(h.Left??(d?d.x-a:0))+a,f=(h.Top??(d?d.y-o:0))+o,p=c.class;if(!(p==="TGDIButtonDefinition"||p==="TDaviWave"||p==="TPopupMenu"||p==="TMenuItem")){if(p==="TTimer"){s[c.name]={interval:h.Interval??1e3,enabled:h.Enabled!==!1,handler:h.OnTimer,name:c.name};continue}if(c.name!=="imgBackGround"){if(p==="TGDIButton"||p==="TGDICheckBox"||p==="TGDIRadioButton"){let y=p==="TGDICheckBox"?Ws:p==="TGDIRadioButton"?Xs:_e;if(d)h.Definition&&d.setDef(await be(e,String(h.Definition))),h.Left!==void 0&&(d.x=u),h.Top!==void 0&&(d.y=f);else{let m=h.Definition?await be(e,String(h.Definition)):null;d=new y(m,u,f),d.tabStop=!1,s.add(d)}h.TabOrder!==void 0&&(d.tabOrder=h.TabOrder),h.TabStop!==void 0&&(d.tabStop=h.TabStop),h.Default!==void 0&&(d.isDefault=h.Default),h.Cancel!==void 0&&(d.isCancel=h.Cancel),h.ModalResult&&(d.modalResult=h.ModalResult),h.Enabled!==void 0&&(d.enabled=h.Enabled),h.Visible!==void 0&&(d.visible=h.Visible),h.Checked!==void 0&&(d.checked=h.Checked),h.OnClick&&Kh(s,d,"onClick",h.OnClick)}else if(p==="TLabel")d?(h.Left!==void 0&&(d.x=u),h.Top!==void 0&&(d.y=f)):(d=new Ee(u,f,h.Width??0,h.Height??0,"",{},{wordWrap:h.WordWrap===!0,align:U_(h.Alignment),layout:h.Layout==="tlCenter"?"center":"top",autoSize:h.AutoSize!==!1}),s.add(d)),h.Visible!==void 0&&(d.visible=h.Visible),h.OnClick&&Kh(s,d,"onClick",h.OnClick);else if(p==="TGDIGraphic"||p==="TImage")d||(d=new Bi(u,f,null,{w:h.Width??0,h:h.Height??0,stretch:h.Stretch===!0}),s.add(d)),h.Visible!==void 0&&(d.visible=h.Visible),h.OnClick&&Kh(s,d,"onClick",h.OnClick);else if(p==="TDaviGraphicSlider"){if(!d){let y=await e.assets.image("slider.bmp");d=new Zr(u,f,null,y,{w:h.Width??111,h:h.Height??15,min:h.Min??0,max:h.Max??100,position:h.Position??0,largeStep:h.LargeStep??5,tabOrder:h.TabOrder}),s.add(d)}if(h.OnChange){let y=h.OnChange;d.onChange=m=>s[y]&&s[y](d,m)}}else if(p==="TEdit")d||(d=new Qi(u,f,h.Width??100,h.Height??24,{maxLength:h.MaxLength||255,tabOrder:h.TabOrder}),s.add(d));else if(p==="TPanel"||p==="TGroupBox"||p==="TPageControl"||p==="TTabSheet"){await n(c,u,f,l);continue}else{s[c.name]=s[c.name]||{name:c.name,class:p,props:h,x:u,y:f,w:h.Width,h:h.Height};continue}d.name=c.name,s[c.name]=d,c.children.length&&await n(c,u,f,l)}}}};await n(i,0,0,!0),Zh(s,i.class)}function U_(s){return s==="taCenter"?"center":s==="taRightJustify"?"right":"left"}function Kh(s,t,e,i){t[e]=(...n)=>{if(s[i])return s[i](t,...n);console.warn("Missing handler",i,"on",s.constructor.name)}}function Zh(s,t){let i=s.rt.data.vfs.parsedIni("menucaps.ini"),n=(l,c)=>{let h=i.get(t,l);return h===null?c:h},r=(l,c)=>{let h=i.get("DEFAULT",l);return h===null?c:h},a=Number(r("FontSize",12)),o=r("FontColor","0x0040D2F1");for(let l of s.components){if(!l.name)continue;let c=n(l.name+".Left",null),h=n(l.name+".Top",null);if(c!==null&&(l.x=Number(c)),h!==null&&(l.y=Number(h)),l instanceof Ee){l.text=n(l.name+".Caption","");let d=Number(n(l.name+".FontSize",a));l.font.size=Math.round(d*96/72),l.font.color=Ys(n(l.name+".FontColor",o)),l.font.bold=t!=="TfrmDisplaySettings"}l instanceof _e&&(l.caption="")}}var $r=class extends ni{backgroundName(){return this.constructor.className.slice(4,12).toLowerCase()+".bmp"}async create(){let t=this.rt;this.background=await t.assets.image(this.backgroundName())||await t.assets.image("currentc.bmp"),this.btnHelp=this.add(new _e(await be(t,"gdfBtnHelp"),609,7,{tabOrder:0,onClick:()=>this.helpClick()})),this.btnHelp.name="btnHelp",this.btnClose=this.add(new _e(await be(t,"gdfBtnClose"),685,7,{tabOrder:this.btnPrevious?3:1,cancel:!0,onClick:()=>this.closeClick()})),this.btnClose.name="btnClose",this.constructor.dfm&&await Ln(this,this.constructor.dfm)}onShow(){this.rt.sound.stopVoice()}helpClick(){this.rt.data.flow.helpRequested(this.rt,this)}closeClick(){this.rt.data.flow.closeRequested(this.rt)}},Pn=class extends $r{async create(){let t=this.rt;this.btnNext=this.add(new _e(await be(t,"gdfBtnNextSingle"),649,518,{tabOrder:2,default:!0,onClick:()=>this.next()})),this.btnNext.name="btnNext",await super.create()}onShow(){super.onShow(),this.setFocus(this.btnNext)}next(){}},Vi=class extends Pn{async create(){let t=this.rt;this.btnPrevious=this.add(new _e(await be(t,"gdfBtnPrevious"),581,552,{tabOrder:1,onClick:()=>this.previous()})),this.btnPrevious.name="btnPrevious",await super.create(),this.btnNext.setDef(await be(t,"gdfBtnNext"))}previous(){}},ge=class extends ni{backgroundName(){return this.constructor.className.slice(4,12).toLowerCase()+".tga"}async create(){let t=this.rt,e=await t.assets.image(this.backgroundName());this.background=e,e&&(this.width=e.width,this.height=e.height),this.btnOk1=this.add(new _e(await be(t,"gdfBtnOkDlg"),0,0,{default:!0,modalResult:1,tabOrder:0})),this.btnOk1.name="btnOk1",this.btnClose=this.add(new _e(await be(t,"gdfBtnCloseDlg"),0,0,{cancel:!0,modalResult:2,tabOrder:2})),this.btnClose.name="btnClose",this.btnHelp=this.add(new _e(await be(t,"gdfBtnHelp"),0,0,{tabOrder:1,onClick:()=>t.data.flow.helpRequested(t,this)})),this.btnHelp.name="btnHelp",this.constructor.dfm&&await Ln(this,this.constructor.dfm)}onShow(){this.setFocus(this.btnOk1)}};var bi=s=>String(s).padStart(2,"0");async function Ae(s,t,e){t.wanted=e;let i=await s.rt.assets.image(e+".tga");t.wanted===e&&t.setImage(i)}var Ql=class{constructor(t,e,i,n,r,a){this.pips=[];for(let o=0;o<i;o++){let l=t.add(new Bi(n+a*o,r,e));l.visible=!1,this.pips.push(l)}}show(t){this.pips.forEach((e,i)=>{e.visible=i<t}),this.pips[0]?.invalidate()}};async function $h(s){let t=await s.rt.assets.image("butbigci.tga"),e=s.lblAncTrackInd00,i=s.rt.data.static.tour.trackCount;return new Ql(s,t,i,e.x,e.y,s.lblAncTrackInd01.x-e.x)}var tc=class s{static async create(t){let e=await t.rt.assets.image("klrondje.tga"),i=t.lblAncInd00,n=t.lblAncInd01.x-i.x,r=t.lblAncInd10.y-i.y,a=l=>new Ql(t,e,9,i.x,i.y+r*l,n),o=new s;return o.speed=a(0),o.accell=a(1),o.handling=a(2),o.brakes=a(3),o}show(t){this.speed.show(t.speed),this.accell.show(t.accell),this.handling.show(t.handling),this.brakes.show(t.brakes)}},ec=class{constructor(t,e,i){this.form=t,this.prefix=e,this.currentTrack=i,this.timer=null,this.run=0}async restart(){let{imgTrack1:t,imgTrack2:e}=this.form;this.frame=5,this.loadIntoFirst=!0,this.run++,t.visible=!1,e.visible=!0,this.stop(),this.start(),await this.step()}start(){this.timer=this.form.setTimer(this.form.timCycler.interval,()=>this.step(),!0)}stop(){this.form.clearTimer(this.timer),this.timer=null}async step(){let{form:t}=this,{imgTrack1:e,imgTrack2:i}=t,n=this.run;this.frame=this.frame===5?0:this.frame+1;let r=this.loadIntoFirst?e:i;this.loadIntoFirst=!this.loadIntoFirst;let a=`${this.prefix}${this.currentTrack().indexInGame}_${bi(this.frame)}.tga`,o=await t.rt.assets.image(a);n===this.run&&(r.setImage(o),e.visible=!e.visible,i.visible=!i.visible,t.invalidate())}},Jr=class extends ni{static className="TfrmIntro";static dfm="TFRMINTRO";async create(){await Ln(this,this.constructor.dfm);let{ClientWidth:t,ClientHeight:e}=this.rt.forms[this.constructor.dfm].props;this.width=t,this.height=e}onShow(){this.keyPreview=t=>(this.userAction(t),!0),this.onPointer=()=>this.userAction(null),window.addEventListener("pointerdown",this.onPointer,!0),this.rt.playVideo("intro1.mp4",this,0,0,this.width,this.height,{onMuted:()=>this.showSoundNote()}).then(()=>this.finishModal())}userAction(t){if(this.soundNote){this.soundNote.remove(),this.soundNote=null;let e=this.rt.video?.el;e&&(e.muted=!1);return}t!=="Space"&&this.rt.stopVideo()}showSoundNote(){let t=document.createElement("div");t.textContent="Klik of druk op een toets voor geluid",t.style.cssText="position:fixed;left:50%;bottom:max(4px,env(safe-area-inset-bottom));transform:translateX(-50%);padding:2px 8px;background:#000;font-size:14px;white-space:nowrap;pointer-events:none",this.rt.overlay.appendChild(t),this.soundNote=t}onClose(){window.removeEventListener("pointerdown",this.onPointer,!0),this.soundNote?.remove(),this.rt.stopVideo()}},O_="De website van A2 Racer 4 bestaat niet meer. Daarom kun je hier niet naar het internet.",Mi=class extends Pn{static className="TfrmMainScreen";static dfm="TFRMMAINSCREEN";async create(){await super.create(),this.btnInternet.enabled=!1,this.showTitle();let t=this.rt.data.raceMode===1;(t?this.optQuickRace:this.optTour).setChecked(!0),await Ae(this,this.imgItem,t?"quick":"tour")}showTitle(){this.lblTitle.setText(this.rt.data.menuFormat(9,this.rt.data.player.name))}optTourClick(){return Ae(this,this.imgItem,"tour")}optQuickRaceClick(){return Ae(this,this.imgItem,"quick")}btnOptionsClick(){return this.rt.showModal(ea)}async btnPlayerClick(){await this.rt.showModal(ta),this.showTitle()}onBackgroundClick(t,e){this.btnInternet.hit(t,e)&&this.rt.data.notApplicable(O_)}next(){return this.rt.data.raceMode=this.optTour.checked?2:1,this.rt.goTo(is)}closeClick(){return this.rt.data.raceMode=0,this.rt.data.doExit()}portraitZones(){return[[392,0,408,400],[0,20,392,478],[25,545,355,50],[640,515,160,80]]}},is=class extends Vi{static className="TfrmDifficulty";static dfm="TFRMDIFFICULTY";backgroundName(){return this.rt.data.raceMode===1?"quickdif.bmp":super.backgroundName()}async create(){await super.create();let t=this.rt.data;await Ae(this,this.imgItemName,t.raceMode===2?"headtour":"headquic");let e=t.player.settings.difficulty,i=[this.optEasy,this.optMedium,this.optHard][e];i&&(i.setChecked(!0),await Ae(this,this.imgItem,"diffic"+bi(e)))}optEasyClick(){return Ae(this,this.imgItem,"diffic00")}optMediumClick(){return Ae(this,this.imgItem,"diffic01")}optHardClick(){return Ae(this,this.imgItem,"diffic02")}next(){let t=this.rt.data;t.player.settings.difficulty=this.optEasy.checked?0:this.optMedium.checked?1:2,t.raceMode===1?this.rt.goTo(zi):t.raceMode===2&&this.rt.goTo(t.player.tourStarted?ns:Fn)}previous(){return this.rt.goTo(Mi)}portraitZones(){return[[392,0,408,445],[0,20,392,478],[575,510,225,85]]}},zi=class extends Vi{static className="TfrmQuickRace";static dfm="TFRMQUICKRACE";async create(){await super.create(),this.bringToFront(this.btnNext);let t=this.rt.data;this.trackAvailable=t.static.quickRace.trackIx.map((e,i)=>t.quickTrackAvailable(i)),this.slideshow=new ec(this,"qtc0",()=>t.player.qrTrack),this.stats=await tc.create(this),await Promise.all([this.setCurrentTrack(t.player.qr.trackIx),this.setCurrentChar(t.player.qr.charIx)]),t.raceMode=1,this.updateNext()}onShow(){super.onShow(),this.unlock()}async unlock(){let t=this.rt.data;t.takeUnlock()&&(this.setCurrentChar(t.static.quickRace.lockedCharIx),this.rt.sound.playVoice("unlock"),await this.rt.showModal(Qr))}async setCurrentTrack(t){let e=this.rt.data;e.selectQuickTrack(t);let i=e.player.qrTrack,n=e.menuIni.highscores[e.player.trackToDrive];this.lblTime.setText(e.formatTime(n.time)),this.lblRecName.setText(n.name),this.lblType.setText(i.type),this.lblLocked.visible=!this.trackAvailable[t],this.lblLocked.setText(e.menuString(i.isChase?7:2)),await Promise.all([Ae(this,this.imgTrackName,"trname"+bi(e.player.trackToDrive)),this.slideshow.restart()])}async setCurrentChar(t){let e=this.rt.data;e.player.qr.charIx=t;let i=e.player.qrChar;this.lblCharLocked.setText(i.lockedText),this.lblCharLocked.visible=!e.quickCharAvailable(t),this.stats.show(i),this.updateNext(),await Promise.all([Ae(this,this.imgCharName,"chara_"+bi(i.index)),Ae(this,this.imgItem,"qr_CH"+bi(i.index))])}updateNext(){let t=this.rt.data;this.btnNext.enabled=!!this.trackAvailable[t.player.qr.trackIx]&&t.quickCharAvailable(t.player.qr.charIx),this.invalidate()}btnPrevTrack1Click(){let t=this.rt.data.player.qr.trackIx;this.setCurrentTrack(t===0?this.rt.data.static.quickRace.trackCount-1:t-1),this.updateNext()}btnNextTrack1Click(){let t=this.rt.data.player.qr.trackIx;this.setCurrentTrack(t===this.rt.data.static.quickRace.trackCount-1?0:t+1),this.updateNext()}btnPrevCharClick(){let t=this.rt.data.player.qr.charIx;return this.setCurrentChar(t===0?this.rt.data.static.quickRace.charCount-1:t-1)}btnNextCharClick(){let t=this.rt.data.player.qr.charIx;return this.setCurrentChar(t===this.rt.data.static.quickRace.charCount-1?0:t+1)}async next(){this.slideshow.stop(),await this.rt.data.flow.startInfoThenRace(this.rt)||this.slideshow.start()}previous(){return this.rt.goTo(is)}closeClick(){return this.slideshow.stop(),super.closeClick()}portraitZones(){return[[392,0,408,285],[0,25,392,265],[0,312,392,240],[392,290,408,305]]}},ns=class extends Vi{static className="TfrmCurrentChar";static dfm="TFRMCURRENTCHAR";async create(){await super.create();let t=this.rt.data.player,e=bi(t.tourChar.indexInGame);this.lblPoints.setText(String(t.euro)),(await $h(this)).show(t.result.trackReached),await Promise.all([Ae(this,this.imgItemName,"chara_"+e),Ae(this,this.imgItem,"ch_"+e)])}onShow(){super.onShow(),this.rt.sound.playVoice("aud3")}btnChooseCharClick(){return this.rt.goTo(Fn)}next(){return this.rt.goTo(Ye)}previous(){return this.rt.goTo(is)}portraitZones(){return[[392,0,408,420],[0,20,392,540],[575,510,225,85]]}},Fn=class extends Vi{static className="TfrmCharacter";static dfm="TFRMCHARACTER";async create(){await super.create(),this.imgCar.onClick=()=>this.imgCarClick(),this.trackPips=await $h(this),this.stats=await tc.create(this),await this.setCurrentChar(this.rt.data.player.tour.charIx)}onShow(){super.onShow(),this.rt.data.player.tourStarted=!0}async setCurrentChar(t){let e=this.rt.data.player;e.tour.charIx=t,this.trackPips.show(e.result.trackReached);let i=e.tourChar;this.stats.show(i),this.lblTextBlock.setText(i.story);let n=bi(i.indexInGame);await Promise.all([Ae(this,this.imgItemName,"chara_"+n),Ae(this,this.imgItem,"ch_"+n)])}btnPrevCharClick(){let t=this.rt.data.player.tour.charIx;return this.setCurrentChar(t===0?this.rt.data.static.tour.charCount-1:t-1)}btnNextCharClick(){let t=this.rt.data.player.tour.charIx;return this.setCurrentChar(t===this.rt.data.static.tour.charCount-1?0:t+1)}next(){let t=bi(this.rt.data.player.tourChar.indexInGame);this.rt.sound.playVoice(`CCS${t}_${bi(Math.floor(Math.random()*2))}`),this.selection||(this.selection=this.setTimer(this.timSelection.interval,()=>this.timSelectionTimer()))}timSelectionTimer(){return this.rt.goTo(Ye)}previous(){return this.rt.goTo(ns)}async imgCarClick(){let t=performance.now(),e=t-(this.lastCarClick??-1/0)<=500;this.lastCarClick=t,e&&this.rt.data.player.name[0]==="f"&&this.imgItem.setImage(await this.rt.assets.image("m018.bmp"))}portraitZones(){return[[392,0,408,420],[0,20,392,540],[575,510,225,85]]}},Ye=class extends Vi{static className="TfrmTrack";static dfm="TFRMTRACK";async create(){await super.create();let t=this.rt.data;this.slideshow=new ec(this,"ttc0",()=>t.player.tourTrack);let e=await $h(this);this.imgFocus.y=this.lblAncFocus.y,await Promise.all([Ae(this,this.imgFocus,"indfocus"),Ae(this,this.imgItem,"hunny"),Ae(this,this.imgShadow,"shadow")]),await this.setCurrentTrack(t.initialTourTrack),e.show(t.player.result.trackReached),this.showTrackInfo()}onShow(){super.onShow(),this.clearTimer(this.soundTimer),this.soundTimer=this.setTimer(this.tmrSound.interval,()=>this.tmrSoundTimer())}async setCurrentTrack(t){let e=this.rt.data;e.player.tour.trackIx=t;let i=e.player.tourTrack;this.imgItem.visible=!i.isChase,this.imgShadow.visible=i.isChase;let n=this.lblAncTrackInd00;this.imgFocus.x=n.x+(this.lblAncTrackInd01.x-n.x)*t,this.soundTimer||(this.soundTimer=this.setTimer(this.tmrSound.interval,()=>this.tmrSoundTimer())),await Promise.all([Ae(this,this.imgTrackName,"trname"+bi(i.indexInGame)),this.slideshow.restart()])}showTrackInfo(){let t=this.rt.data,e=t.player.tourTrack,i=t.menuIni.highscores[e.indexInGame];this.lblTime.setText(t.formatTime(i.time)),this.lblRecName.setText(i.name),this.lblQualify.setText(t.qualifyCaption(e)),this.lblType.setText(e.type),this.lblTextBlock.setText(e.story),this.btnNextTrack.enabled=t.player.tour.trackIx<t.maxTourTrack,this.btnPrevTrack.enabled=t.player.tour.trackIx>0,this.invalidate()}tmrSoundTimer(){this.soundTimer=null;let t=this.rt.data.player.tourTrack;this.rt.sound.playVoice((t.isChase?"CTI08_":"CTI07_")+bi(t.indexInGame))}btnPrevTrackClick(){this.setCurrentTrack(this.rt.data.player.tour.trackIx-1),this.showTrackInfo()}btnNextTrackClick(){this.setCurrentTrack(this.rt.data.player.tour.trackIx+1),this.showTrackInfo()}next(){let t=this.rt.data.player;return t.trackToDrive=t.tourTrack.indexInGame,this.rt.goTo(jr)}previous(){return this.rt.goTo(ns)}portraitZones(){return[[392,0,408,516],[0,20,392,575],[575,516,225,80]]}},ss=class extends $r{static className="TfrmTrackIntro";static dfm="TFRMTRACKINTRO";onShow(){super.onShow(),this.rt.sound.playVoice("NextTr"),this.setTimer(this.timClose.interval,()=>this.timCloseTimer())}onBackgroundClick(){return this.rt.goTo(Ye)}timCloseTimer(){return this.rt.goTo(Ye)}portraitZones(){return[[0,0,800,600]]}};var si=s=>String(s).padStart(2,"0");async function wi(s,t,e,i){t.setImage(await s.assets.image(e+si(i)+".tga"))}function Gi(s,t){s.assets.has(t+".wav")?s.sound.playVoice(t):s.sound.stopVoice()}function ia(s,t,e){Gi(s,`${t}_${si(Math.floor(Math.random()*e))}`)}function $s(...s){s.forEach((t,e)=>{t.tabOrder=e})}var If=[[600,0,200,50],[10,22,385,480],[400,60,400,540]],Pf=[[600,0,200,50],[10,22,490,480],[400,70,400,530]],Jh=class{constructor(t,e,i){this.image=i,this.pips=[];for(let n=0;n<e;n++){let r=t.add(new Bi(0,0,i));r.visible=!1,this.pips.push(r)}}place(t,e,i){this.pips.forEach((n,r)=>{n.x=t+r*i,n.y=e})}show(t){this.pips.forEach((e,i)=>{e.setImage(this.image),e.visible=i<t})}},jh=class extends Jh{constructor(t,e,i,n,r){super(t,e,i),this.lossImage=n,this.gainImage=r}show(t,e){this.pips.forEach((i,n)=>{let r=n<t+e;n<t?i.setImage(r?this.image:this.lossImage):r&&i.setImage(this.gainImage),i.visible=n<t||r})}},jr=class extends Vi{static className="TfrmGarage";static dfm="TFRMGARAGE";async create(){await super.create();let{assets:t}=this.rt;$s(this.btnNext,this.btnPrevTU,this.btnBuyTuneUp,this.btnNextTU,this.btnHelp,this.btnClose,this.btnPrevious);let e=i=>Promise.all([0,1,2,3,4].map(n=>t.image(i+si(n)+".tga")));[this.names,this.pictures]=await Promise.all([e("tune_"),e("tuneup")]),await this.createRows(),this.selectTuneUp(0)}async createRows(){let{assets:t}=this.rt,[e,i,n]=await Promise.all(["klrondje","blind_up","redin_up"].map(l=>t.image(l+".tga"))),r=this.lblAncInd00,a=this.lblAncInd01.x-r.x,o=this.lblAncInd10.y-r.y;this.rows=[0,1,2,3,4].map(l=>{let c=new jh(this,9,e,n,i);return c.place(r.x,r.y+o*l,a),c})}onShow(){super.onShow();let{data:t}=this.rt;t.menuIni.prevState===2&&(t.resultFlags&t.RR.QUALIFY?ia(this.rt,"CGR07",3):ia(this.rt,"CBR07",6))}selectTuneUp(t){this.selected=t,this.imgItemName.setImage(this.names[t]),this.imgItem.setImage(this.pictures[t]),this.showTexts(),this.showRows(),this.showBuyButton()}showTexts(){let{data:t}=this.rt,e=t.static.tuneUps[this.selected];this.lblPoints.setText(String(t.player.euro)),this.lblTextBlock.setText(e.text),this.lblPrice.setText(t.menuFormat(13,String(e.price)))}showRows(){let{player:t,static:e}=this.rt.data,i=t.result,n=t.tourChar,r=e.tuneUps[this.selected],a=this.selected===4,o=l=>a||i.hasTuneUp(this.selected)?0:r[l];this.rows[0].show(n.speed+i.speedBonus,o("dSpeed")),this.rows[1].show(n.accell+i.accellBonus,o("dAccell")),this.rows[2].show(n.handling+i.handlingBonus,o("dHandling")),this.rows[3].show(n.brakes+i.brakesBonus,o("dBrakes")),this.rows[4].show(Math.trunc(i.turbo*9/100),a?1:0),this.invalidate()}showBuyButton(){this.btnBuyTuneUp.enabled=this.rt.data.canBuyTuneUp(this.selected),this.invalidate()}btnNextTUClick(){this.selectTuneUp(this.selected===4?0:this.selected+1)}btnPrevTUClick(){this.selectTuneUp(this.selected===0?4:this.selected-1)}async btnBuyTuneUpClick(){let t=this.rt.data.buyTuneUp(this.selected);t==="noMoney"?await this.rt.showModal(la):t==="bought"&&(this.rt.sound.playFx("PEEP"),this.showTexts(),this.showRows(),this.showBuyButton())}next(){return this.rt.data.flow.startInfoThenRace(this.rt)}previous(){return this.rt.goTo(Ye)}portraitZones(){return[[600,0,200,50],[10,22,385,545],[410,60,390,390],[570,510,230,90]]}},Dn=class extends Pn{async create(){await super.create(),this.imgItem=this.add(new Bi(456,96),0),this.imgItem.name="imgItem",$s(this.btnHelp,this.btnClose,this.btnNext)}portraitZones(){return If}},Ks=class extends Dn{static className="TfrmResults";static dfm="TFRMRESULTS";backgroundName(){return this.rt.data.menuIni.prevState===1?"quickres.bmp":super.backgroundName()}async create(){await super.create();let{rt:t}=this,{rankList:e,playerPos:i,static:n}=t.data;$s(this.btnNext,this.btnClose,this.btnHelp),this.imgFocus.setImage(await t.assets.image("focus.tga")),await wi(t,this.imgItem,"win_ch",e[0].charIx);let r=this.lbl2ndImage.y-this.lblTopImage.y;for(let a=0;a<n.tour.charCount;a++){let o=this.add(new Bi(this.lblTopImage.x,this.lblTopImage.y+r*a));await wi(t,o,"res_ch",e[a].charIx),this.add(this.timeLabel(a,this.lblTime.y+r*a))}this.imgFocus.x=this.lblFocus.x,this.imgFocus.y=this.lblFocus.y+r*i,this.bringToFront(this.imgFocus)}timeLabel(t,e){let{data:i}=this.rt,{rankList:n}=i,r=t===0?i.formatTime(n[0].time):" + "+i.formatTime(n[t].time-n[0].time),{size:a,color:o}=this.lblTime.font;return new Ee(this.lblTime.x,e,0,0,r,{name:"'MS Sans Serif', Arial, Helvetica, sans-serif",size:a,color:o,bold:!1})}onShow(){super.onShow(),Gi(this.rt,"aud2")}next(){let{data:t}=this.rt,{RR:e,resultFlags:i}=t;return t.menuIni.prevState===1?this.rt.goTo(zi):i&e.WINTRACK?this.rt.goTo(ra):i&e.QUALIFY?this.rt.goTo(sa):this.rt.goTo(na)}portraitZones(){return[[600,0,200,50],[10,22,385,540],[400,60,400,540]]}},na=class extends Dn{static className="TfrmLoseNormal";static dfm="TFRMLOSENORMAL";async create(){await super.create();let{player:t}=this.rt.data;await wi(this.rt,this.imgTrackName,"trname",t.tourTrack.index),this.lblPoints.setText(String(t.euro)),this.lblTextBlock.setText(t.tourTrack.loseText),await wi(this.rt,this.imgItem,"los_ch",t.tourChar.index),$s(this.btnHelp,this.btnNext,this.btnClose)}onShow(){super.onShow(),ia(this.rt,"CDL"+si(this.rt.data.player.tourChar.index),2),this.setTimer(4500,()=>this.timSampleTimer())}timSampleTimer(){Gi(this.rt,"CDL07_"+si(this.rt.data.player.trackToDrive))}next(){return this.rt.goTo(Ye)}},sa=class extends Dn{static className="TfrmQualify";static dfm="TFRMQUALIFY";async create(){await super.create();let{player:t,rankList:e}=this.rt.data,i=e[0].charIx;await wi(this.rt,this.imgTrackName,"trname",t.tourTrack.index),this.lblTextBlock.setText(t.tourTrack.qualifyText),await wi(this.rt,this.imgItem,"win_ch",i),await wi(this.rt,this.imgWinnerName,"chara_",i),$s(this.btnNext,this.btnClose,this.btnHelp)}onShow(){super.onShow(),ia(this.rt,"CDW"+si(this.rt.data.rankList[0].charIx),2),this.setTimer(4500,()=>this.timSampleTimer())}timSampleTimer(){Gi(this.rt,"CDQ07_"+si(this.rt.data.player.trackToDrive))}next(){return this.rt.goTo(ss)}portraitZones(){return Pf}},ra=class extends Dn{static className="TfrmWinNormal";static dfm="TFRMWINNORMAL";async create(){await super.create();let{data:t}=this.rt,{player:e}=t;this.lblTextBlock.setText(e.trackDriven.winText),this.lblBonus.w=0,this.lblBonus.setText(t.menuFormat(10,t.static.firstPlaceBonus)),await wi(this.rt,this.imgTrackName,"trname",e.tourTrack.index),await wi(this.rt,this.imgItem,"win_ch",e.tourChar.index)}onShow(){super.onShow(),ia(this.rt,"CDW"+si(this.rt.data.player.tourChar.index),2),this.setTimer(4500,()=>this.timSampleTimer())}timSampleTimer(){Gi(this.rt,"CDW07_"+si(this.rt.data.player.trackToDrive))}next(){return this.rt.goTo(ss)}portraitZones(){return Pf}},aa=class extends Dn{static className="TfrmWinChase";static dfm="TFRMWINCHASE";async create(){await super.create();let{rt:t}=this,{player:e}=t.data;this.lblTextBlock.setText(e.tourTrack.winText),await wi(t,this.imgTrackName,"trname",e.tourTrack.index),this.imgItem.setImage(await t.assets.image("COPANGRY.tga"))}onShow(){super.onShow(),Gi(this.rt,"CDW05_"+si(this.rt.data.player.trackToDrive))}next(){return this.rt.goTo(ss)}},Zs=class extends Dn{static className="TfrmLoseChase";static dfm="TFRMLOSECHASE";async create(){await super.create();let{rt:t}=this,{player:e}=t.data;await wi(t,this.imgTrackName,"trname",e.tourTrack.index),this.imgItem.setImage(await t.assets.image("cophappy.tga")),this.lblTextBlock.setText(e.tourTrack.loseText)}onShow(){super.onShow(),Gi(this.rt,"CDL05_"+si(this.rt.data.player.trackToDrive))}next(){return this.rt.goTo(Ye)}},oa=class extends Pn{static className="TfrmWinFinal";static dfm="TFRMWINFINAL";async create(){await super.create();let{rt:t}=this,e=t.data.player.tourChar;$s(this.btnNext,this.btnClose,this.btnHelp),this.lblTextBlock.setText(e.winRaceText),this.pnlMovie={x:this.lblAncTopLeft.x,y:this.lblAncTopLeft.y,w:this.lblAncBottomRight.x-this.lblAncTopLeft.x,h:this.lblAncBottomRight.y-this.lblAncTopLeft.y},this.charVoice="CCW08_"+si(e.index),this.firstSeconds=await t.sound.durationSeconds("CDW07_04"),this.charSeconds=await t.sound.durationSeconds(this.charVoice)}onShow(){super.onShow();let{x:t,y:e,w:i,h:n}=this.pnlMovie;this.rt.playVideo(`ch${si(this.rt.data.player.tourChar.index)}.mp4`,this,t,e,i,n,{loop:!0}),this.rt.video.el.style.visibility="hidden",this.setTimer(40,()=>this.invalidate(),!0),this.showScreen()}showScreen(){this.setTimer(this.firstSeconds*1e3+1500,()=>this.timSample1Timer()),Gi(this.rt,"CDW07_04")}timSample1Timer(){this.setTimer(this.charSeconds*1e3+1500,()=>this.timSample2Timer()),Gi(this.rt,this.charVoice)}timSample2Timer(){Gi(this.rt,"CCW08_05")}draw(t){super.draw(t);let{x:e,y:i,w:n,h:r}=this.pnlMovie;t.fillStyle="#000",t.fillRect(e,i,n,r);let a=this.rt.video?.el;a&&t.drawImage(a,e,i,n,r)}onClose(){this.rt.stopVideo()}next(){return this.rt.goTo(this.rt.data.player.qr.harryUnlocked?Fn:zi)}portraitZones(){return If}},Qr=class extends ge{static className="TfrmUnlock";static dfm="TFRMUNLOCK";async create(){await super.create(),this.btnOk1.setDef(await be(this.rt,"gdfBtnOkSingleDlg"))}};var Lf="Arial, Helvetica, sans-serif";function kf(s,t){let e=t.font;return s.font=`${e.bold?"bold ":""}${e.size}px ${e.name}`,qs(s,t.text,t.w).length*Math.round(e.size*1.2)}var nc=class extends ge{async create(){await super.create(),this.txtName.background=Ys(this.rt.forms[this.constructor.dfm].children.find(t=>t.name==="txtName").props.Color),this.txtName.onEnter=()=>this.txtNameKeyDown(),this.txtName.setText(this.args.name||"")}onShow(){super.onShow(),this.setFocus(this.txtName)}txtNameKeyDown(){this.modalResult=1,this.finishModal()}onClose(){this.args.name=this.txtName.text}},ha=class extends ge{static className="TfrmCloseDlg";static dfm="TFRMCLOSEDLG";async create(){await super.create(),this.optMainScreen.setChecked(!0)}btnOk1Click(){this.modalResult=this.optMainScreen.checked?1:3,this.finishModal()}},la=class extends ge{static className="TfrmNoMoney";static dfm="TFRMNOMONEY"},ua=class extends nc{static className="TfrmHighScoreDlg";static dfm="TFRMHIGHSCOREDLG";async create(){await super.create(),this.btnOk1.setDef(await be(this.rt,"gdfBtnOkSingleDlg"))}onShow(){super.onShow(),this.txtName.element?.select(),this.rt.sound.playVoice("aud2")}},tu=class extends ge{static className="TfrmCDRequest";static dfm="TFRMCDREQUEST";async create(){await super.create(),this.btnCancel.setDef(await be(this.rt,"gdfBtnCancelDlg")),this.btnCancel.tabStop=!1}},eu=class extends ge{static className="TfrmInternetDlg";static dfm="TFRMINTERNETDLG";backgroundName(){return"popempty.tga"}},da=class extends nc{static className="TfrmNewPlayer";static dfm="TFRMNEWPLAYER"},sc=class extends ge{static className="TfrmDeletePlayer";static dfm="TFRMDELETEPLAYER";backgroundName(){return"popempty.tga"}async create(){await super.create(),this.lblSure.setText(this.rt.data.menuFormat(4,this.args.name)),this.btnCancel.tabStop=!1}},fa=class extends ge{static className="TfrmDoubleKeys";static dfm="TFRMDOUBLEKEYS";backgroundName(){return"popempty.tga"}async create(){await super.create(),this.btnOk1.setDef(await be(this.rt,"gdfBtnOkSingleDlg")),this.lblDouble.setText(this.rt.data.menuFormat(6,this.args.key))}},Ff={rect:[10,135,115,155],font:{size:11,color:"#000000",bold:!1}},ta=class extends ge{static className="TfrmPlayer";static dfm="TFRMPLAYER";async create(){await super.create(),this.remove(this.imgBack),this.btn0.tabStop=!1,this.rt.data.beginPlayerDialog(),await this.refresh()}onClose(){this.rt.data.endPlayerDialog(this.modalResult)}async refresh(){let t=this.rt.data,e=t.otherPlayers(),i=await be(this.rt,"defEmpty"),n=await Promise.all([1,2,3,4].map(r=>e[r-1]?this.portraitDef(e[r-1].tourChar):i));this.others=e,this.btn0.setDef(await this.portraitDef(t.player.tourChar)),this.setCaption(this.btn0,t.player.name),n.forEach((r,a)=>{let o=this["btn"+(a+1)];o.setDef(r),o.tag=e[a]?a:-1,this.setCaption(o,e[a]?e[a].name:t.menuString(17))}),this.btnDeletePlayer.enabled=e.length>0,this.invalidate()}portraitDef(t){return be(this.rt,"pch"+String(t.indexInGame).padStart(2,"0"))}setCaption(t,e){t.caption=e,t.captionRect=Ff.rect,t.captionFont=Ff.font}async btn1Click(t){t.tag===-1?await this.addNewPlayer():this.rt.data.loadPlayer(this.others[t.tag].number),await this.refresh()}async addNewPlayer(){let t=this.rt.data,{result:e,name:i}=await t.flow.askPlayerName(this.rt);e===1&&t.createPlayer(i)}async btnDeletePlayerClick(){let t=this.rt.data;await this.rt.showModal(sc,{name:t.player.name})===1&&(t.deletePlayer(t.menuIni.currentPlayer),await this.btn1Click(this.btn1))}},k_="Op een aanraakscherm: het stuur links op het scherm stuurt naar links en rechts, boven op het stuur is gas, onder is remmen en achteruit. Knoppen: Claxon, Turbo, Handrem, Camera, Terugkijken, Reset, Pauze, Stop, Roepen, Dashboard, Detail. Liggend staan de laatste drie onder Meer.",B_={color:"#F1D240",bold:!0},Js=class extends ge{static className="TfrmStartInfo";static dfm="TFRMSTARTINFO";backgroundName(){return["popstrt0","popstrt2","popstrt1","popstrt3"][this.rt.data.player.settings.controls.controlType]+".tga"}async create(){await super.create(),this.chkStartInfo.checked=this.rt.data.player.settings.startInfoOn,Qn(this.rt.data.app.settings)&&this.addTouchNote()}addTouchNote(){let e={...B_,size:this.width>400?20:15},i=new Ee(10,this.height+10,this.width-20,0,k_,e,{wordWrap:!0});i.h=kf(this.rt.g,i),this.add(i),this.artHeight=this.height,this.height+=i.h+20}draw(t){this.artHeight&&(t.fillStyle="#000000",t.fillRect(0,this.artHeight,this.width,this.height-this.artHeight)),super.draw(t)}lblClickAreaClick(){this.chkStartInfo.click()}btnOkClick(){this.rt.data.player.settings.startInfoOn=this.chkStartInfo.checked,this.modalResult=1,this.finishModal()}},pa=class extends Js{static className="TfrmStartInfoKeyBoard";async create(){await super.create(),await Ln(this,"TFRMSTARTINFOKEYBOARD");let t=this.rt.data,e=t.player.settings.controls;this.lblSetGas.setText(t.keyName(e.up)),this.lblSetBrake.setText(t.keyName(e.down)),this.lblSetLeft.setText(t.keyName(e.left)),this.lblSetRight.setText(t.keyName(e.right)),this.lblSetParkingBrake.setText(t.keyName(e.extra2)),this.lblSetTurbo.setText(t.keyName(e.extra1)),this.lblSetHorn.setText(t.keyName(e.extra3))}},Ti={w:75,h:150,perRow:19,rest:20,idleEvery:1e4},ic=(s,t)=>Array.from({length:t-s+1},(e,i)=>s+i),Qh=(s,t)=>ic(t,s).reverse(),Df={Showing:{ms:50,frames:ic(0,20)},Hiding:{ms:50,frames:Qh(20,0)},IdlingLevel1:{ms:100,frames:[...ic(21,32),...Qh(31,21)]},IdlingLevel2:{ms:40,frames:[33,34,35,36,37,36,35,34,33,33,34,35,37,36,36,35,34,33,33,34,35,36,37,36,35,34,33]},IdlingLevel3:{ms:100,frames:[...ic(38,56),...Qh(55,38)]}},Nf=["IdlingLevel1","IdlingLevel2","IdlingLevel3"];function V_(s,t){return[[5,0],[5,1],[3,1],[3,2],[2,2],[2,3],[1,3],[1,5],[0,5],[0,t-21],[1,t-21],[1,t-19],[2,t-19],[2,t-18],[4,t-18],[4,t-17],[67,t-17],[67,t-16],[68,t-16],[68,t-14],[69,t-14],[69,t-13],[70,t-13],[70,t-11],[71,t-11],[71,t-9],[72,t-9],[72,t-8],[73,t-8],[73,t-6],[74,t-6],[74,t-5],[75,t-5],[75,t-3],[76,t-2],[76,t-1],[76,t-17],[s-5,t-17],[s-5,t-18],[s-3,t-18],[s-3,t-19],[s-2,t-19],[s-2,t-21],[s-1,t-21],[s-1,5],[s-2,5],[s-2,3],[s-3,3],[s-3,2],[s-4,2],[s-4,1],[s-6,1],[s-6,0],[5,0]]}var ca=class extends Ee{draw(t){let e=this.font;t.font=`${e.size}px ${e.name}`,t.fillStyle=this.hovered?"#000000":e.color,t.textBaseline="top";let i=this.y;for(let n of qs(t,this.text,this.w))t.fillText(n,this.x,i),t.fillRect(this.x,i+e.size+1,t.measureText(n).width,1),i+=Math.round(e.size*1.2)}},iu=class extends Fe{constructor(t,e,i){super(t,e,12,12),this.onClick=i}hit(t,e){return t>=this.x-8&&e>=this.y-8&&t<this.x+this.w+8&&e<this.y+this.h+8}draw(t){t.fillStyle="#000000",t.fillRect(this.x+this.w-1,this.y,1,this.h),t.fillRect(this.x,this.y+this.h-1,this.w,1),t.fillStyle="#626092";for(let e=1;e<=8;e++)t.fillRect(this.x+1+e,this.y+1+e,1,1),t.fillRect(this.x+10-e,this.y+1+e,1,1)}pointerUp(t,e){this.hit(t,e)&&this.onClick()}},ma=class s extends ni{static className="TBalloonForm";static current=null;static showFor(t,e){t.sound.playVoice("cmh07_00"),s.current?s.current.open(e):t.showModal(s,{owner:e})}async create(){s.current=this,this.sheet=await this.rt.assets.image("hunny_agent.png"),this.frame=-1,this.owner||this.open(this.args.owner??null)}onClose(){s.current=null,this.rt.canvas.style.cursor=""}open(t){let e=this.rt;this.owner=t,this.hideOnOwnerClose(t),this.layoutBalloon(t?t.constructor.className:"TfrmMainScreen");let i=e.modals.indexOf(this);i>=0&&i!==e.modals.length-1&&(e.modals.splice(i,1),e.modals.push(this)),(this.frame<0||this.animation===Df.Hiding)&&this.play("Showing",()=>this.idleLater(0)),this.invalidate()}hideOnOwnerClose(t){if(!t||t.helpHooked)return;t.helpHooked=!0;let e=t.onClose;t.onClose=()=>{e.call(t);let i=s.current;i&&i.owner===t&&i.hide()}}layoutBalloon(t){let e=this.rt,i=e.data.vfs.parsedIni("agent.ini"),n=t+"BalloonItems";this.components=[],this.focus=null,this.balloonVisible=!0;let r=new Ee(6,6,126,43,i.get(t,"Caption")??"Error",{name:Lf,size:12,color:"#000000",bold:!0},{wordWrap:!0});this.add(r),this.add(new iu(132,6,()=>this.hide()));let a=42;for(let o of i.keys(n)){let l=Number(i.get(n,o)),c=new ca(6,a,138,0,o,{name:Lf,size:13,color:"#74061F",bold:!1},{onClick:()=>ac(e,l)});c.h=kf(e.g,c),this.add(c),a+=c.h+3}this.balloonW=150,this.balloonH=a+30,this.width=this.balloonW,this.height=this.balloonH+6+Ti.h}hide(){this.balloonVisible=!1,this.components=[],this.rt.canvas.style.cursor="",this.play("Hiding",()=>this.rt.closeModal(this,0))}play(t,e){let i=Df[t];this.clearTimers(),this.animation=i;let n=0,r=()=>{this.frame=i.frames[n++],this.invalidate(),n<i.frames.length?this.setTimer(i.ms,r):e&&this.setTimer(i.ms,e)};r()}idleLater(t){this.frame=Ti.rest,this.animation=null,this.invalidate(),this.setTimer(Ti.idleEvery,()=>this.play(Nf[t],()=>this.idleLater((t+1)%Nf.length)))}draw(t){if(this.balloonVisible){let e=V_(this.balloonW,this.balloonH);t.beginPath(),e.forEach(([i,n],r)=>r?t.lineTo(i+.5,n+.5):t.moveTo(i+.5,n+.5)),t.fillStyle="#FFFFFF",t.fill(),t.strokeStyle="#000000",t.lineWidth=1,t.stroke()}if(super.draw(t),this.sheet&&this.frame>=0){let e=this.frame%Ti.perRow*Ti.w,i=Math.floor(this.frame/Ti.perRow)*Ti.h;t.drawImage(this.sheet,e,i,Ti.w,Ti.h,0,this.balloonH+6,Ti.w,Ti.h)}}canvasRect(){let t=this.rt,e=t.canvas,i=e.getBoundingClientRect(),n=i.width/e.width||1,r=this.owner?.btnHelp,a=this.owner?t.toScreenRect(this.owner,r.x,r.y,1,1):{x:i.left,y:i.top,scale:1},o=Math.min(Math.max(a.scale,1)/n,e.width/this.width,e.height/this.height),l=this.width*o,c=this.height*o,h=Math.max(0,Math.min((a.x-i.left)/n+10*(a.scale/n),e.width-l)),d=Math.max(0,Math.min((a.y-i.top)/n+54*(a.scale/n),e.height-c));return{x:h,y:d,w:l,h:c,scale:o}}passesPointer(t,e){let i=this.balloonVisible&&t>=0&&e>=0&&t<this.balloonW&&e<this.balloonH-16;return i||this.hover(null),!i}hover(t){for(let e of this.components)e instanceof ca&&(e.hovered=e===t);this.rt.canvas.style.cursor=t instanceof ca?"pointer":"",this.invalidate()}pointerMove(t,e){this.hover(this.topAt(t,e))}below(){let t=this.rt,e=t.modals.indexOf(this);return e<0?null:t.modals[e-1]||t.screen}keyDown(t,e){this.below()?.keyDown(t,e)}keyUp(t){this.below()?.keyUp(t)}},z_="background:none;border:0;padding:0;margin:0;font:inherit;color:#008000;text-decoration:underline;cursor:pointer;text-align:left",G_="margin:8px 0 8px 8px;padding:6px 14px;font:inherit",rc=class extends ni{onShow(){let t=document.createElement("div");t.setAttribute("role","dialog"),t.style.cssText="position:fixed;left:max(5%,env(safe-area-inset-left));right:max(5%,env(safe-area-inset-right));top:max(5%,env(safe-area-inset-top));bottom:max(5%,env(safe-area-inset-bottom));max-width:640px;margin:auto;display:flex;flex-direction:column;background:#fff;color:#000;border:1px solid #000;font:16px/1.4 Arial,Helvetica,sans-serif",this.titleBar=document.createElement("div"),this.titleBar.style.cssText="padding:10px 14px;font-weight:bold;border-bottom:1px solid #000",this.body=document.createElement("div"),this.body.style.cssText="flex:1;overflow-y:auto;padding:0 14px;touch-action:pan-y";let e=document.createElement("div");e.style.cssText="display:flex;justify-content:flex-end;padding:0 14px";let i=(n,r)=>{let a=document.createElement("button");return a.textContent=n,a.style.cssText=G_,a.addEventListener("click",r),e.appendChild(a),a};i("Index",()=>this.go(this.indexTopic())),this.btnBack=i("Terug",()=>this.back()),i("Sluiten",()=>this.close()),t.append(this.titleBar,this.body,e),this.rt.overlay.appendChild(t),this.panel=t,this.history=[],this.show(this.args.topic)}onClose(){this.panel.remove()}close(){this.rt.closeModal(this,2)}go(t){this.history.push(this.topic),this.show(t)}back(){this.history.length&&this.show(this.history.pop())}show(t){this.topic=t,this.selected=null,this.titleBar.textContent=t.title,this.body.replaceChildren(...t.paragraphs.map(e=>this.paragraph(e))),this.body.scrollTop=0,this.btnBack.disabled=!this.history.length}paragraph(t){let e=document.createElement("p");e.style.cssText="white-space:pre-wrap;tab-size:72px";for(let i of typeof t=="string"?[{t}]:t)if(i.to!==void 0){let n=document.createElement("button");n.textContent=i.t,n.style.cssText=z_,n.addEventListener("click",()=>this.go(this.args.help.topics[i.to])),e.appendChild(n)}else i.b?e.appendChild(document.createElement("b")).textContent=i.t:e.append(i.t);return e}indexTopic(){let{topics:t,keywords:e}=this.args.help;return{title:"Index",paragraphs:e.map(([n,r])=>r.length===1?[{t:n,to:r[0]}]:[{t:n+": "},...r.flatMap((a,o)=>[...o?[{t:", "}]:[],{t:t[a].title,to:a}])])}}select(t){let e=[...this.panel.querySelectorAll("button")].filter(n=>!n.disabled),i=e.indexOf(this.selected);this.selected=e[i<0?t>0?0:e.length-1:(i+t+e.length)%e.length],this.selected.style.outline="2px dotted #000",this.selected.focus();for(let n of e)n!==this.selected&&(n.style.outline="")}keyDown(t,e){let i=this.body.clientHeight;t==="Escape"?this.close():t==="Enter"?this.selected?this.selected.click():this.close():t==="Tab"?this.select(e?-1:1):t==="ArrowDown"?this.body.scrollTop+=40:t==="ArrowUp"?this.body.scrollTop-=40:t==="PageDown"?this.body.scrollTop+=i:t==="PageUp"&&(this.body.scrollTop-=i)}},Uf=null;function Bf(s){return Uf||=fetch(s.assets.base+"menu-help.json").then(t=>t.json()),Uf}async function ac(s,t){let e=await Bf(s),i=e.topics[e.contexts[t]];i&&await s.showModal(rc,{help:e,topic:i})}async function nu(s,t){await s.showModal(rc,{help:await Bf(s),topic:t})}function Of(s,t,e){let i=s.data;return(i.vfs.parsedIni("menu.ini").get("ERRORSTRINGS",t)??e).replaceAll("%s",i.menuString(5)).replaceAll("&","").split("@")}var ga=class extends ni{static className="TfrmException2";static modal=!0;onShow(){let t=this.args.error,e=String(t?.stack||t?.message||t||""),i=document.createElement("div");i.setAttribute("role","alertdialog"),i.style.cssText="position:fixed;left:max(8px,env(safe-area-inset-left));right:max(8px,env(safe-area-inset-right));top:max(8px,env(safe-area-inset-top));bottom:max(8px,env(safe-area-inset-bottom));width:fit-content;max-width:436px;height:fit-content;max-height:calc(100% - 16px);margin:auto;overflow:auto;box-sizing:border-box;background:#D4D0C8;color:#000;border:2px outset #fff;font:14px/1.3 Arial,Helvetica,sans-serif";let n=document.createElement("div");n.textContent=this.rt.data.menuString(5),n.style.cssText="padding:3px 6px;font-weight:bold;color:#fff;background:linear-gradient(90deg,#0A246A,#A6CAF0)";let r=document.createElement("div");r.style.cssText="display:flex;gap:9px;padding:8px";let a=document.createElement("img");a.src=this.rt.assets.base+"error_icon.png",a.alt="",a.style.cssText="width:39px;height:41px;flex:none";let o=document.createElement("div");o.style.whiteSpace="pre-wrap";let l=Of(this.rt,"errormessage","Er is een onverwachte fout opgetreden.");o.textContent=l.filter(p=>!p.includes("Davi-Service")).join(`
`),r.append(a,o);let c=(p,y,m)=>{let g=document.createElement("label");g.style.cssText="display:block;padding:5px 8px 5px 56px;text-indent:-20px";let E=document.createElement("input");return E.type="radio",E.name="fout",E.checked=m,E.style.marginRight="6px",g.append(E,Of(this.rt,p,y)[0]),{label:g,input:E}};this.closeApp=c("close","Afsluiten",!0),this.ignore=c("ignore","Negeren",!1);let h=document.createElement("div");h.hidden=!0,h.style.cssText="padding:0 8px 8px 56px";let d=document.createElement("textarea");d.readOnly=!0,d.rows=6,d.value=e,d.style.cssText="width:100%;box-sizing:border-box;font:12px monospace",h.append("Foutmelding (Toets Ctrl+C om de melding naar het klembord te kopi\xEBren)",d);let u=document.createElement("div");u.style.cssText="display:flex;justify-content:space-between;padding:8px 8px 8px 56px;border-top:1px solid #808080;margin-top:8px";let f=document.createElement("button");f.textContent="Details >>",f.addEventListener("click",()=>{h.hidden=!1,f.style.visibility="hidden"}),this.btnOk=document.createElement("button"),this.btnOk.textContent="OK",this.btnOk.style.minWidth="104px",this.btnOk.addEventListener("click",()=>this.btnOkClick()),u.append(f,this.btnOk),i.addEventListener("keydown",p=>{p.stopPropagation(),p.ctrlKey&&p.code==="KeyC"&&!h.hidden&&navigator.clipboard?.writeText(e)}),i.addEventListener("keyup",p=>p.stopPropagation()),i.append(n,r,this.closeApp.label,this.ignore.label,h,u),this.rt.overlay.appendChild(i),this.panel=i,this.btnOk.focus()}onClose(){this.panel.remove()}btnOkClick(){this.modalResult=this.closeApp.input.checked?7:5,this.finishModal()}keyDown(t){t==="Enter"?this.btnOkClick():t==="ArrowUp"||t==="ArrowLeft"?this.closeApp.input.checked=!0:(t==="ArrowDown"||t==="ArrowRight")&&(this.ignore.input.checked=!0)}};var dc="Arial, Helvetica, sans-serif",Ve=Ys("clBtnFace"),ui="#FFFFFF",as="#808080",os="#404040",Un="#808080",en=4,H_=23,Vf=18,W_=4,X_=24,tn=22;function Nn(s,t,e,i,n,r,a){s.fillStyle=r,s.fillRect(t,e,i-1,1),s.fillRect(t,e,1,n-1),s.fillStyle=a,s.fillRect(t,e+n-1,i,1),s.fillRect(t+i-1,e,1,n)}function On(s,t,e,i,n){Nn(s,t,e,i,n,ui,os),Nn(s,t+1,e+1,i-2,n-2,Ve,as)}function Qs(s,t,e,i,n){Nn(s,t,e,i,n,as,ui),Nn(s,t+1,e+1,i-2,n-2,os,Ve)}function ir(s,t,e,i,n){s.save(),s.strokeStyle="#000000",s.lineWidth=1,s.setLineDash([1,1]),s.strokeRect(t+.5,e+.5,i-1,n-1),s.restore()}function Ei(s,t,e,i,n,r,a="left"){s.font=`${n.bold?"bold ":""}${n.size}px ${dc}`,s.fillStyle=r,s.textAlign=a,s.textBaseline="middle",s.fillText(t,e,i),s.textAlign="left"}function au(s,t){return Math.max(t,Math.ceil(11/s.rt.toScreenRect(s,0,0,1,1).scale))}function ls(s,t,e,i=6){let n=s.parent&&s.parent.rt.touchInput?i:0;return s.visible&&t>=s.x-n&&e>=s.y-n&&t<s.x+s.w+n&&e<s.y+s.h+n}var js=class extends _e{constructor(t,e,i,n,r={}){super(null,t,e,r),this.w=i,this.h=n,this.font={size:15,color:"#000000"}}hit(t,e){return ls(this,t,e)}draw(t){let{x:e,y:i,w:n,h:r}=this,a=this.parent&&this.parent.focus===this;t.fillStyle=Ve,t.fillRect(e,i,n,r),this.pressed?(Nn(t,e,i,n,r,os,os),Nn(t,e+1,i+1,n-2,r-2,as,as)):a?(Nn(t,e,i,n,r,"#000000","#000000"),On(t,e+1,i+1,n-2,r-2)):On(t,e,i,n,r);let o=this.pressed?1:0;this.enabled?Ei(t,this.caption,e+n/2+o,i+r/2+o,this.font,this.font.color,"center"):(Ei(t,this.caption,e+n/2+1,i+r/2+1,this.font,ui,"center"),Ei(t,this.caption,e+n/2,i+r/2,this.font,Un,"center")),a&&ir(t,e+4,i+4,n-8,r-8)}},oc=class extends js{draw(t){let{x:e,y:i,w:n,h:r}=this;t.fillStyle=Ve,t.fillRect(e,i,n,r),this.pressed?Qs(t,e,i,n,r):On(t,e,i,n,r);let a=this.pressed?1:0;t.strokeStyle="#000000",t.lineWidth=1.5,t.beginPath(),t.moveTo(e+4+a,i+3+a),t.lineTo(e+n-5+a,i+r-4+a),t.moveTo(e+n-5+a,i+3+a),t.lineTo(e+4+a,i+r-4+a),t.stroke()}},tr=class extends Ws{constructor(t,e,i,n,r={}){super(null,t,e,r),this.w=i,this.h=n,this.font={size:16,color:"#000000"}}hit(t,e){return ls(this,t,e)}draw(t){let e=this.x,i=Math.round(this.y+(this.h-13)/2);t.fillStyle=this.enabled&&!this.pressed?ui:Ve,t.fillRect(e,i,13,13),Qs(t,e,i,13,13),this.checked&&(t.strokeStyle=this.enabled?"#000000":Un,t.lineWidth=2,t.beginPath(),t.moveTo(e+3,i+6),t.lineTo(e+5.5,i+9),t.lineTo(e+10,i+3.5),t.stroke()),this.caption&&Ei(t,this.caption,e+19,this.y+this.h/2,this.font,this.enabled?this.font.color:Un),this.parent&&this.parent.focus===this&&ir(t,this.x-2,this.y,this.caption?this.w+2:18,this.h)}},er=class s extends Xs{constructor(t,e,i,n,r={}){super(null,t,e,r),this.w=i,this.h=n,this.font={size:15,color:"#000000"}}hit(t,e){return ls(this,t,e)}keyDown(t){let e=t==="ArrowRight"||t==="ArrowDown"?1:t==="ArrowLeft"||t==="ArrowUp"?-1:0;if(!e)return super.keyDown(t);if(this.parent.rt.lastInputPad)return!1;let i=this.parent.components.filter(r=>r instanceof s&&r.group===this.group&&r.enabled&&r.visible),n=i[i.indexOf(this)+e];return n?(this.parent.setFocus(n),n.click(),!0):!1}draw(t){let e=this.x+6.5,i=this.y+this.h/2;t.fillStyle=this.enabled&&!this.pressed?ui:Ve,t.beginPath(),t.arc(e,i,6,0,Math.PI*2),t.fill(),t.lineWidth=1;for(let[n,r,a]of[[5.5,as,ui],[4.5,os,Ve]])t.strokeStyle=r,t.beginPath(),t.arc(e,i,n,Math.PI*.75,Math.PI*1.75),t.stroke(),t.strokeStyle=a,t.beginPath(),t.arc(e,i,n,Math.PI*1.75,Math.PI*.75),t.stroke();this.checked&&(t.fillStyle=this.enabled?"#000000":Un,t.beginPath(),t.arc(e,i,2,0,Math.PI*2),t.fill()),this.caption&&Ei(t,this.caption,this.x+19,i,this.font,this.enabled?this.font.color:Un),this.parent&&this.parent.focus===this&&ir(t,this.x-2,this.y,this.caption?this.w+2:18,this.h)}},su=class extends Fe{constructor(t,e,i,n){super(t,e,i,n),this.caption=""}hit(){return!1}draw(t){let{x:e,w:i}=this,n=this.y+7,r=this.h-7;t.lineWidth=1,t.strokeStyle=as,t.strokeRect(e+.5,n+.5,i-2,r-2),t.strokeStyle=ui,t.strokeRect(e+1.5,n+1.5,i-2,r-2);let a={size:au(this.parent,13)};t.font=`${a.size}px ${dc}`,t.fillStyle=Ve,t.fillRect(e+8,this.y,t.measureText(this.caption).width+6,14),Ei(t,this.caption,e+11,this.y+7,a,"#000000")}},lc=class extends Fe{constructor(t,e,i,n){super(t,e,i,n),this.enabled=!1,this.text=""}hit(t,e){return ls(this,t,e)}draw(t){let{x:e,y:i,w:n,h:r}=this;t.fillStyle=Ve,t.fillRect(e,i,n,r),Qs(t,e,i,n,r),Ei(t,this.text,e+5,i+r/2,{size:13},Un);let a=e+n-18;t.fillStyle=Ve,t.fillRect(a,i+2,16,r-4),On(t,a,i+2,16,r-4),t.fillStyle=Un,t.beginPath(),t.moveTo(a+4,i+r/2-2),t.lineTo(a+12,i+r/2-2),t.lineTo(a+8,i+r/2+2),t.fill()}},ru=class extends Fe{constructor(t,e,i,n){super(t,e,i,n),this.captions=[],this.active=0,this.tabStop=!0}rects(){let t=this.parent,e=t.rt.g,i=au(t,11);e.font=`${i}px ${dc}`;let n=this.x+2;return this.captions.map(r=>{let a=Math.ceil(e.measureText(r).width)+14,o={x:n,y:this.y+2,w:a,h:tn-2,size:i};return n+=a,o})}tabAt(t,e){let i=this.parent.rt.touchInput?6:0;return this.rects().findIndex(n=>t>=n.x&&t<n.x+n.w&&e>=n.y-i&&e<n.y+n.h+i)}hit(t,e){return this.tabAt(t,e)>=0}select(t){let e=this.parent;this.active=t;for(let i of e.components)i.page!==void 0&&(i.visible=i.page===t);e.focus&&!e.focus.visible&&e.setFocus(this),this.invalidate()}pointerDown(t,e){let i=this.tabAt(t,e);this.parent.setFocus(this),i>=0&&this.select(i)}keyDown(t){return t==="ArrowLeft"?(this.active>0&&this.select(this.active-1),!0):t==="ArrowRight"?(this.active<this.captions.length-1&&this.select(this.active+1),!0):!1}draw(t){let{x:e,w:i}=this,n=this.y+tn,r=this.h-tn;t.fillStyle=Ve,t.fillRect(e,n,i,r),On(t,e,n,i,r);let a=this.rects();a.forEach((h,d)=>{d!==this.active&&(t.fillStyle=Ve,t.fillRect(h.x,h.y,h.w,h.h),Nn(t,h.x,h.y,h.w+1,h.h+1,ui,os),t.fillStyle=ui,t.fillRect(h.x,n,h.w,1),Ei(t,this.captions[d],h.x+h.w/2,h.y+h.h/2+1,{size:h.size},"#000000","center"))});let o=a[this.active];if(!o)return;let l=o.x-2,c=o.w+4;t.fillStyle=Ve,t.fillRect(l,this.y,c,tn+2),t.fillStyle=ui,t.fillRect(l,this.y,c-1,1),t.fillRect(l,this.y,1,tn+1),t.fillStyle=os,t.fillRect(l+c-1,this.y,1,tn+1),t.fillStyle=as,t.fillRect(l+c-2,this.y+1,1,tn),Ei(t,this.captions[this.active],o.x+o.w/2,this.y+(tn+1)/2,{size:o.size},"#000000","center"),this.parent.focus===this&&ir(t,l+2,this.y+2,c-4,tn-3)}},cc=class extends Fe{constructor(t,e,i,n,r={}){super(t,e,i,n),this.tabStop=!0,this.tabOrder=r.tabOrder??1e3,this.onStep=r.onStep,this.text="",this.canDown=!0,this.canUp=!0,this.side=0,this.armed=0}hit(t,e){return ls(this,t,e)}sideAt(t,e){if(!ls(this,t,e))return 0;let i=this.h+8;return t<this.x+i?-1:t>=this.x+this.w-i?1:0}step(t){(t<0?this.canDown:this.canUp)&&this.onStep(t)}pointerDown(t,e){this.parent.setFocus(this),this.side=this.armed=this.sideAt(t,e),this.invalidate()}pointerMove(t,e){if(!this.armed)return;let i=this.sideAt(t,e)===this.armed?this.armed:0;i!==this.side&&(this.side=i,this.invalidate())}pointerUp(t,e){let i=this.armed;this.pointerCancel(),i&&this.sideAt(t,e)===i&&this.step(i)}pointerCancel(){this.side=0,this.armed=0,this.invalidate()}keyDown(t){if(t==="ArrowLeft")this.step(-1);else if(t==="ArrowRight")this.step(1);else return!1;return!0}draw(t){let{x:e,y:i,w:n,h:r}=this,a=r+8;t.fillStyle=ui,t.fillRect(e+a,i,n-2*a,r),Qs(t,e+a,i,n-2*a,r),Ei(t,this.text,e+n/2,i+r/2,{size:15},"#000000","center");for(let[o,l,c]of[[-1,e,this.canDown],[1,e+n-a,this.canUp]]){t.fillStyle=Ve,t.fillRect(l,i,a,r),this.side===o?Qs(t,l,i,a,r):On(t,l,i,a,r),t.fillStyle=c?"#000000":Un;let h=l+a/2+(this.side===o?1:0),d=i+r/2+(this.side===o?1:0);t.beginPath(),t.moveTo(h-3*o,d-6),t.lineTo(h+4*o,d),t.lineTo(h-3*o,d+6),t.fill()}this.parent.focus===this&&ir(t,e+a+3,i+3,n-2*a-6,r-6)}},hc=class extends Fe{constructor(t,e,i,n,r={}){super(t,e,i,n),this.tabStop=!0,this.tabOrder=r.tabOrder??1e3,this.min=r.min??0,this.max=r.max??100,this.step=r.step??1,this.keyStep=r.keyStep??this.step,this.onChange=r.onChange,this.value=this.min,this.drag=!1}hit(t,e){return ls(this,t,e)}thumbX(){return this.x+6+(this.value-this.min)/(this.max-this.min)*(this.w-12)}setValue(t,e=!0){let i=Math.max(this.min,Math.min(this.max,t));i!==this.value&&(this.value=i,this.invalidate(),e&&this.onChange(i))}fromX(t){let e=Math.max(0,Math.min(1,(t-this.x-6)/(this.w-12)));this.setValue(this.min+Math.round(e*(this.max-this.min)/this.step)*this.step)}pointerDown(t){this.parent.setFocus(this),this.drag=!0,this.fromX(t)}pointerMove(t){this.drag&&this.fromX(t)}pointerUp(){this.drag=!1}pointerCancel(){this.drag=!1}keyDown(t){let e=this.keyStep;if(t==="ArrowLeft")this.setValue((Math.ceil(this.value/e)-1)*e);else if(t==="ArrowRight")this.setValue((Math.floor(this.value/e)+1)*e);else if(t==="Home")this.setValue(this.min);else if(t==="End")this.setValue(this.max);else return!1;return!0}draw(t){let{x:e,y:i,w:n,h:r}=this,a=i+r/2;t.fillStyle=ui,t.fillRect(e+6,a-2,n-12,4),Qs(t,e+6,a-2,n-12,4);let o=this.thumbX();t.fillStyle=Ve,t.fillRect(o-6,i+2,12,r-4),On(t,o-6,i+2,12,r-4),this.parent.focus===this&&ir(t,e,i,n,r)}},uc=class extends ni{static modal=!0;addCaptionClose(){this.add(new oc(this.width-en-18,6,16,14,{modalResult:2,tabStop:!1}))}focusables(t=!1){return super.focusables(t).filter(e=>!(e instanceof oc))}draw(t){let e=this.width,i=this.height;t.fillStyle=Ve,t.fillRect(0,0,e,i),On(t,0,0,e,i);let n=t.createLinearGradient(en,0,e-en,0);n.addColorStop(0,"#0A246A"),n.addColorStop(1,"#A6CAF0"),t.fillStyle=n,t.fillRect(en,en,e-2*en,Vf),Ei(t,this.title??"",en+4,en+Vf/2+1,{size:au(this,11),bold:!0},"#FFFFFF"),super.draw(t)}};function zf(s,t){let e=s.rt.forms[t],i=e.class;s.width=e.props.Width,s.height=e.props.Height;let n=(c,h,d,u,f,p)=>{for(let y of c.children){let m=y.props,g=(m.Left??0)+h,E=(m.Top??0)+d,L=m.Width??0,b=m.Height??0,T=f+(m.TabOrder??0)*p,M=null;y.class==="TButton"?M=new js(g,E,L,b,{modalResult:m.ModalResult,cancel:m.Cancel,default:m.Default,tabOrder:T}):y.class==="TCheckBox"?M=new tr(g,E,L,b,{tabOrder:T}):y.class==="TRadioButton"?M=new er(g,E,L,b,{group:c.name,tabOrder:T}):y.class==="TLabel"?M=new Ee(g,E,L,b,"",{},{wordWrap:m.WordWrap===!0,autoSize:m.AutoSize!==!1}):y.class==="TComboBox"?(M=new lc(g,E,L,b),M.items=[...String(m["Items.Strings"]??"").matchAll(/'([^']*)'/g)].map(F=>F[1])):y.class==="TGroupBox"?M=new su(g,E,L,b):y.class==="TPageControl"&&(M=new ru(g,E,L,b),M.tabOrder=T),M&&(M.name=y.name,u!==null&&(M.page=u),m.OnClick&&!(M instanceof lc)&&(M.onClick=()=>s[m.OnClick]?.(M)),s[y.name]=M,s.add(M),y.class==="TPageControl"?y.children.forEach((F,S)=>n(F,g+W_,E+X_,S,T+p/100,p/100)):y.children.length&&n(y,g,E,u,T+p/100,p/100))}};n(e,en,H_,null,0,1e4),Zh(s,i);let r=s.rt.data.vfs.parsedIni("menucaps.ini"),a=(c,h)=>r.get("DEFAULT",c)??h,o=c=>Math.round(Number(c)*96/72),l=s.rt.g;for(let c of s.components){if(!c.name)continue;let h=(d,u)=>r.get(i,`${c.name}.${d}`)??u;c instanceof js||c instanceof er?(c.caption=h("Caption",""),c.font.size=o(h("FontSize",a("BtnFontSize",11))),c.font.color=Ys(h("FontColor",a(c instanceof js?"BtnFontColor":"FontColor","0x00000000")))):c instanceof Ee&&c.autoSize&&(l.font=`${c.font.size}px ${dc}`,c.w=Math.ceil(l.measureText(c.text).width),c.h=Math.round(c.font.size*1.2))}s.addCaptionClose()}var Gf={size:16,color:"#000000",bold:!1},ou={size:13,color:"#000000",bold:!1},Hf="#63614B",q_=7,Y_=93,K_=["resolution","renderScale","volume","showFps","fullscreen","touch","deadzone"];function qf(s){return Object.fromEntries(K_.map(t=>[t,s.get(t)]))}function Yf(s,t){for(let e of Object.keys(t))s.get(e)!==t[e]&&s.set(e,t[e])}var fc=s=>![0,1,2,5].includes(s);function Z_(s){let t=s.sound.getContext();if(!t)return;let e=t.createOscillator(),i=t.createGain();i.gain.value=s.sound.volumes.fx,e.frequency.value=880,e.connect(i),i.connect(s.sound.output()),e.start(),e.stop(t.currentTime+.12)}var Wf="Laag kan alleen als 3D kaart uit staat.",$_="Dit kan alleen als 3D kaart aan staat: kies dat bij Opties.",Xf="In de browser bepaalt 3D-resolutie hoe groot het beeld is: kies Geavanceerd en dan het tabblad Browser. Daarom is Hoog hier niet beschikbaar.",ea=class extends ge{static className="TfrmOptions";static dfm="TFRMOPTIONS";async create(){await super.create();let t=this.rt;this.remove(this.imgPanel1),this.remove(this.imgPanel2),this.btnControls.x=q_+53,this.btnControls.y=Y_+258,this.btnOk1.modalResult=0,this.btnControls.def.onState=null,this.btnVideoAdvanced.def.onState=null;for(let e of[this.optKeyboard,this.optJoyPad,this.optJoystick,this.optWheel])e.group="control";for(let e of[this.optVideoLow,this.optVideoMedium,this.optVideoHigh])e.group="video";[this.btnOk1,this.btnHelp,this.btnClose,this.btnControls,this.optKeyboard,this.optJoyPad,this.optJoystick,this.optWheel,this.chkStartInfoOn,this.btnVideoAdvanced,this.sldrMusic,this.sldrSound,this.sldrVoice,this.chkVideo3d,this.optVideoLow,this.optVideoMedium,this.optVideoHigh,this.btnCancel].forEach((e,i)=>{e.tabOrder=i}),this.images={};for(let e of["opt_keyb.bmp","opt_gpad.bmp","opt_joys.bmp","opt_whee.bmp","opt_lowr.bmp","opt_midr.bmp","opt_higr.bmp"])this.images[e]=await t.assets.image(e);this.imgSound.setImage(await t.assets.image("opt_soun.bmp")),this.imgVideo3d.setImage(await t.assets.image("opt_3dfx.tga")),this.optVideoHigh.state=()=>this.optVideoHigh.checked?1:4,this.savedPort=qf(t.data.app.settings),this.temp=t.data.player.settings.clone(),this.copySettingsToControls()}onShow(){super.onShow();let t=this.rt.data.player.settings;this.savedFx=t.fxVolume,this.savedVoices=t.voicesVolume,this.savedMusic=t.musicVolume}onClose(){this.modalResult!==1&&Yf(this.rt.data.app.settings,this.savedPort)}closeWith(t){this.modalResult=t,this.finishModal()}copySettingsToControls(){let t=this.temp,e=t.resolution;this.chkVideo3d.checked=fc(e),this.optVideoLow.setChecked(e===0||e===6),this.optVideoMedium.setChecked(e===1||e===3),this.optVideoHigh.setChecked(e===4||this.isCustomResolution()),this.showVideoChoice(),this.enableVideoChoices(),this.chkStartInfoOn.checked=t.startInfoOn,this.sldrMusic.setPosition(t.musicVolume),t.musicOn||this.sldrMusic.setPosition(0),this.sldrSound.setPosition(t.fxVolume),t.fxOn||this.sldrSound.setPosition(0),this.sldrVoice.setPosition(t.voicesVolume),[this.optKeyboard,this.optJoystick,this.optJoyPad,this.optWheel][t.controls.controlType].click()}copyControlsToSettings(){let t=this.temp;this.isCustomResolution()||(this.optVideoLow.checked?t.resolution=this.chkVideo3d.checked?6:0:this.optVideoMedium.checked?t.resolution=this.chkVideo3d.checked?3:1:this.optVideoHigh.checked&&(t.resolution=4)),t.startInfoOn=this.chkStartInfoOn.checked,t.musicVolume=this.sldrMusic.position,t.musicOn=this.sldrMusic.position>0,t.fxVolume=this.sldrSound.position,t.fxOn=this.sldrSound.position>0,t.voicesVolume=this.sldrVoice.position,this.optKeyboard.checked?t.controls.controlType=0:this.optJoyPad.checked?t.controls.controlType=2:this.optJoystick.checked?t.controls.controlType=1:this.optWheel.checked&&(t.controls.controlType=3)}isCustomResolution(){return![0,6,1,3,4].includes(this.temp.resolution)}showVideoChoice(){this.optVideoLow.checked?this.imgVideo.setImage(this.images["opt_lowr.bmp"]):this.optVideoMedium.checked?this.imgVideo.setImage(this.images["opt_midr.bmp"]):this.optVideoHigh.checked&&this.imgVideo.setImage(this.images["opt_higr.bmp"]),this.imgVideo3d.visible=this.chkVideo3d.checked}chkVideo3dClick(){this.enableVideoChoices(),this.showVideoChoice();let{optVideoLow:t,optVideoHigh:e}=this;(!t.enabled&&t.checked||!e.enabled&&e.checked)&&this.optVideoMedium.click()}enableVideoChoices(){this.optVideoLow.enabled=!this.chkVideo3d.checked,this.optVideoHigh.enabled=!1}btnOkClick(){let t=this.rt.data;this.copyControlsToSettings(),t.player.settings.assign(this.temp),t.saveProgress(),t.vfs.iniSet("raser.ini","PROGRAM","RESOLUTION",String(this.temp.resolution)),this.closeWith(1)}btnCancelClick(){let t=this.rt.data,e=t.player.settings;t.previewMusicVolume(this.savedMusic),e.musicVolume=this.savedMusic,e.voicesVolume=this.savedVoices,e.fxVolume=this.savedFx,t.applySoundSettings({music:!1}),this.closeWith(2)}optKeyboardClick(){this.imgControl.setImage(this.images["opt_keyb.bmp"]),this.btnControls.enabled=!0}optJoypadClick(){this.imgControl.setImage(this.images["opt_gpad.bmp"]),this.btnControls.enabled=!1}optJoystickClick(){this.imgControl.setImage(this.images["opt_joys.bmp"]),this.btnControls.enabled=!0}optWheelClick(){this.imgControl.setImage(this.images["opt_whee.bmp"]),this.btnControls.enabled=!0}lblKeyboardClick(){this.optKeyboard.click()}lblJoypadClick(){this.optJoyPad.click()}lblJoystickClick(){this.optJoystick.click()}lblWheelClick(){this.optWheel.click()}lblClickAreaClick(){this.chkStartInfoOn.click()}btnControlsClick(){let t=this.temp.controls;this.optKeyboard.checked?this.rt.showModal(xa,{controls:t}):this.optJoystick.checked?this.rt.showModal(va,{controls:t}):this.optWheel.checked&&this.rt.showModal(_a,{controls:t})}optVideoLowClick(){this.imgVideo.setImage(this.images["opt_lowr.bmp"])}optVideoMediumClick(){this.imgVideo.setImage(this.images["opt_midr.bmp"])}optVideoHighClick(){this.imgVideo.setImage(this.images["opt_higr.bmp"])}lblVideo3dClick(){this.chkVideo3d.click()}lblVideoLowClick(){this.optVideoLow.enabled?this.optVideoLow.click():this.rt.data.notApplicable(Wf)}lblVideoMediumClick(){this.optVideoMedium.enabled&&this.optVideoMedium.click()}lblVideoHighClick(){this.optVideoHigh.enabled?this.optVideoHigh.click():this.rt.data.notApplicable(Xf)}onBackgroundClick(t,e){!this.optVideoLow.enabled&&this.optVideoLow.hit(t,e)?this.rt.data.notApplicable(Wf):this.optVideoHigh.hit(t,e)&&this.rt.data.notApplicable(Xf)}async btnVideoAdvancedClick(){this.copyControlsToSettings(),await this.rt.showModal(Sa,{settings:this.temp})===1&&this.copySettingsToControls()}sldrMusicChange(t,e){let i=this.rt.data;i.previewMusicVolume(e),i.player.settings.musicVolume=e,this.temp.musicVolume=e}sldrSoundChange(t,e){let i=this.rt.data;this.rt.sound.playFx("trin"),i.player.settings.fxVolume=e,this.temp.fxVolume=e,i.applySoundSettings({music:!1})}sldrVoiceChange(t,e){let i=this.rt.data;this.rt.sound.playFx("trin"),i.player.settings.voicesVolume=e,this.temp.voicesVolume=e,i.applySoundSettings({music:!1})}},fu=class extends Fe{constructor(){super(0,0,17,19),this.visible=!1,this.caretOn=!0}draw(t){t.fillStyle="#D2CFA2",t.fillRect(this.x,this.y,this.w,this.h),this.caretOn&&(t.fillStyle="#000000",t.fillRect(this.x+1,this.y+2,1,this.h-4))}};function J_(s){let t=0;for(let e=0;e<6;e++)for(let i=e+1;i<7;i++)if(s[i]===s[e]){t=s[e];break}return t}var xa=class extends ge{static className="TfrmKeySettings";static dfm="TFRMKEYSETTINGS";async create(){await super.create(),this.controls=this.args.controls??this.rt.data.player.settings.controls,this.btnOk1.modalResult=0,this.btnDefaults.def.onState=null,this.btnGas.def.onState=null,this.caps=[["up",this.btnGas],["down",this.btnBreak],["left",this.btnLeft],["right",this.btnRight],["extra1",this.btnTurbo],["extra2",this.btnParkingBrake],["extra3",this.btnHorn]];for(let[,t]of this.caps)t.captionFont={size:11,color:"#000000",bold:!1};this.remove(this.txtKey),this.txtKey=this.add(new fu),this.capturing=!1,this.current=null,this.keyPreview=t=>this.formKeyDown(t),this.holdBrowserKeys=t=>t.preventDefault()}onShow(){super.onShow(),this.copyControlsToCaps()}onClose(){window.removeEventListener("keydown",this.holdBrowserKeys,!0)}copyControlsToCaps(){for(let[t,e]of this.caps)this.setCap(e,this.controls[t])}setCap(t,e){t.tag=e,t.caption=this.rt.data.keyName(e),t.invalidate()}btnClick(t){this.current=t,this.setCapturing(!0)}setCapturing(t){this.capturing=t;let e=this.current,i=this.txtKey;t?(i.x=e.x+Math.trunc((e.w-i.w)/2),i.y=e.y+Math.trunc((e.h-i.h)/2),i.visible=!0,this.bringToFront(i),this.setFocus(i),e.caption="",e.enabled=!1,this.caretTimer=this.setTimer(500,()=>{i.caretOn=!i.caretOn,this.invalidate()},!0),window.addEventListener("keydown",this.holdBrowserKeys,!0)):(e.enabled=!0,this.setFocus(e),this.current=null,i.visible=!1,this.clearTimer(this.caretTimer),window.removeEventListener("keydown",this.holdBrowserKeys,!0)),this.invalidate()}formKeyDown(t){if(!this.capturing)return!1;let e=qr(t);return this.rt.data.isControlKey(e)?this.setCap(this.current,e):Z_(this.rt),this.setCapturing(!1),!0}pointerDown(t,e){this.capturing&&this.setCapturing(!1),super.pointerDown(t,e)}btnOkClick(){let t=J_(this.caps.map(([,e])=>e.tag));if(t===0){for(let[e,i]of this.caps)this.controls[e]=i.tag;this.modalResult=1,this.finishModal()}else this.rt.showModal(fa,{key:this.rt.data.keyName(t)})}btnDefaultsClick(){this.controls.assign(this.rt.data.static.defaultSettings.controls),this.copyControlsToCaps()}},ya=class extends ge{static className="TfrmSliderSettings";static dfm="TFRMSLIDERSETTINGS";static childDfm=null;static setting="joySensitivity";static padNote="";backgroundName(){return this.constructor.childDfm?super.backgroundName():"joystick.tga"}async create(){await super.create(),this.controls=this.args.controls??this.rt.data.player.settings.controls,this.constructor.childDfm&&await Ln(this,this.constructor.childDfm),this.add(new Ee(56,142,170,36,this.constructor.padNote,{size:13},{wordWrap:!0}))}onShow(){super.onShow(),this.sldrSensitivity.setPosition(this.controls[this.constructor.setting])}onClose(){this.modalResult===1&&(this.controls[this.constructor.setting]=this.sldrSensitivity.position)}},_a=class extends ya{static className="TfrmWheelSettings";static childDfm="TFRMWHEELSETTINGS";static setting="wheelSensitivity";static padNote="In de browser werkt een gamepad als stuur."},va=class extends ya{static className="TfrmJoyStickSettings";static childDfm="TFRMJOYSTICKSETTINGS";static setting="joySensitivity";static padNote="In de browser werkt een gamepad als joystick.";async create(){await super.create(),this.sldrSensitivity.tabOrder=2}},lu=0;function j_(s){let t=s.runner?.renderer?.maxTextureSize;if(t)return t;if(!lu){let e=document.createElement("canvas").getContext("webgl2");lu=e?e.getParameter(e.MAX_TEXTURE_SIZE):1/0,e?.getExtension("WEBGL_lose_context")?.loseContext()}return lu}function Q_(s,t,e){let i=window.devicePixelRatio||1,n=Math.max(1,Math.round(window.innerWidth*i)),r=Math.max(1,Math.round(window.innerHeight*i)),a=r;r>n*1.15&&(a=Qn(s)?Math.min(Math.round(r*.62),Math.round(n*1.2)):Math.min(r,Math.round(n*1.5)));let o=lf(e);return s.renderSize(n/i,a/i,i,t,o&&Nl(o.width,o.height,n/a))}var cu="De browser wacht zelf op de verversing van het beeldscherm. Daarom kun je dit hier niet instellen.",hu="De browser bepaalt zelf waar het rendergeheugen staat. Daarom kun je dit hier niet instellen.",uu="De browser kiest zelf de videokaart. Daarom kun je dit hier niet instellen.",du="Hoe groot de browser het beeld tekent, stel je in bij 3D-resolutie op het tabblad Browser.",tv="Deze browser kan het spel niet op het volledige scherm tonen.",ev=[["auto","Automatisch"],["on","Aan"],["off","Uit"]],iv="640 x 480",nv={title:"Weergave: browser",paragraphs:["Deze instellingen horen bij de browser, niet bij het originele spel. Ze gaan meteen in en gelden voor alle spelers op dit apparaat. Annuleren zet ze terug.",[{t:"3D-resolutie",b:1},{t:" is de hoogte in pixels waarop het 3D-beeld wordt getekend. Automatisch volgt de grootte van het scherm, en zonder 3D kaart de resolutie van het spel. "},{t:"Renderschaal",b:1},{t:" vergroot of verkleint dat beeld, in de breedte en in de hoogte. De menu's en het dashboard veranderen daardoor niet. Daaronder zie je hoeveel pixels dat wordt. De GPU-limiet is het grootste beeld dat de videokaart aankan."}],[{t:"Volume",b:1},{t:" regelt al het geluid van het spel, bovenop de schuifbalken in het Opties-menu."}],[{t:"Beeldjes per seconde tonen",b:1},{t:" laat tijdens de race zien hoe vloeiend het spel loopt."}],[{t:"Volledig scherm",b:1},{t:" vult het hele scherm, zoals het origineel. Sommige browsers kunnen dit niet."}],[{t:"Aanraakbediening",b:1},{t:" toont het stuur en de knoppen in de race. Automatisch doet dat alleen op een aanraakscherm."}],[{t:"Deadzone gamepad",b:1},{t:" is hoe ver je de stick moet bewegen voordat de auto stuurt."}]]},Sa=class extends uc{static className="TfrmDisplaySettings";static dfm="TFRMDISPLAYSETTINGS";async create(){let t=this.rt.data;this.settings=this.args.settings??t.player.settings,this.port=t.app.settings,this.savedPort=qf(this.port),zf(this,this.constructor.dfm),this.title=t.menuString(1),this.PageControl.captions=[t.menuString(22),t.menuString(23),"Browser"],this.grpTexture.caption=t.menuString(3),this.greyOut(),this.addBrowserPage(),this.copySettingsToControls(),this.refreshPortRows(),this.PageControl.select(0),this.onPortChange=()=>this.refreshPortRows()}onShow(){this.setFocus(this.btnOk),window.addEventListener("resize",this.onPortChange),this.port.listeners.add(this.onPortChange)}onClose(){window.removeEventListener("resize",this.onPortChange),this.port.listeners.delete(this.onPortChange),this.modalResult!==1&&Yf(this.port,this.savedPort)}greyOut(){let t=this.rt.data;this.greyed=[[this.cboDriver,uu],[this.cboResolution,du],[this.btnRenderToVideoMemory,hu],[this.btnWaitVbl,cu]];for(let[i]of this.greyed)i.enabled=!1;let e=[[this.lblDriver,uu],[this.lblDriverExplanation,uu],[this.lblResolution,du],[this.lblResolutionExplanation,du],[this.lblRenderToVideoMemory,hu],[this.lblRenderToVideoMemoryExplanation,hu],[this.lblWaitVbl,cu],[this.lblWaitVblExplanation,cu]];for(let[i,n]of e)i.font.color=Hf,i.onClick=()=>t.notApplicable(n);for(let i of[0,1]){let n=new Ee(this.PageControl.x,this.btnOk.y-6,290,34,"Grijs geldt niet in de browser. Klik erop voor uitleg.",{...ou,color:Hf},{layout:"center",wordWrap:!0});n.page=i,this.add(n)}}onBackgroundClick(t,e){for(let[i,n]of this.greyed)i.visible&&i.hit(t,e)&&this.rt.data.notApplicable(n);for(let i of this.only3d)i.visible&&i.hit(t,e)&&this.rt.data.notApplicable($_);this.chkFullscreen.visible&&!this.chkFullscreen.enabled&&this.chkFullscreen.hit(t,e)&&this.rt.data.notApplicable(tv)}addBrowserPage(){let e=this.PageControl.x+4+21,i=this.PageControl.y+24,n=this.PageControl.x+4+175,r=270,a=this.PageControl.tabOrder+100,o=d=>(d.page=2,d.tabOrder=a,a+=100,this.add(d)),l=(d,u,f,p=Gf)=>{let y=new Ee(e,i+d,420,u,f,p,{layout:"center",wordWrap:!0});return y.page=2,this.add(y)},c=(d,u,f)=>{l(d,30,u);let p=o(new hc(n,i+d,r-56,30,f)),y=new Ee(n+r-52,i+d,52,30,"",Gf,{layout:"center",align:"right"});return y.page=2,this.add(y),{control:p,value:y}};l(12,30,"3D-resolutie"),this.rowResolution=o(new cc(n,i+12,r,30,{onStep:d=>this.stepResolution(d)})),this.rowScale=c(54,"Renderschaal",{min:25,max:200,step:5,keyStep:25,onChange:d=>this.port.set("renderScale",d)}),this.lblEffective=l(92,24,""),this.lblLimit=l(116,36,"",ou),this.rowVolume=c(158,"Volume",{min:0,max:100,keyStep:5,onChange:d=>this.port.set("volume",d)}),this.chkFps=o(new tr(e,i+198,r+100,26,{onClick:()=>this.port.set("showFps",this.chkFps.checked)})),this.chkFps.caption="Beeldjes per seconde tonen",this.chkFullscreen=o(new tr(e,i+232,r+100,26,{onClick:()=>this.port.set("fullscreen",this.chkFullscreen.checked)})),this.chkFullscreen.caption="Volledig scherm",this.chkFullscreen.enabled=!!(document.documentElement.requestFullscreen||document.documentElement.webkitRequestFullscreen),l(272,30,"Aanraakbediening");let h=n;this.touchChoices=ev.map(([d,u])=>{let f=u.length>3?122:62,p=o(new er(h,i+272,f,30,{group:"touch",onClick:()=>this.port.set("touch",d)}));return p.caption=u,p.value=d,h+=f,p}),this.rowDeadzone=c(314,"Deadzone gamepad",{min:0,max:50,keyStep:2,onChange:d=>this.port.set("deadzone",d/100)}),l(364,36,"Deze instellingen horen bij de browser, niet bij een speler. Ze gaan meteen in en Annuleren zet ze terug.",ou)}resolutionIndex(){return Math.max(0,Hs.findIndex(([t])=>t===String(this.port.get("resolution"))))}stepResolution(t){this.port.set("resolution",Hs[this.resolutionIndex()+t][0])}refreshPortRows(){let t=this.port,e=this.resolutionIndex(),i=this.rowResolution;i.text=Hs[e][1],i.canDown=e>0,i.canUp=e<Hs.length-1,this.rowScale.control.setValue(t.get("renderScale"),!1),this.rowScale.value.setText(t.get("renderScale")+"%"),this.rowVolume.control.setValue(t.get("volume"),!1),this.rowVolume.value.setText(t.get("volume")+"%"),this.chkFps.checked=t.get("showFps"),this.chkFullscreen.checked=this.chkFullscreen.enabled&&t.get("fullscreen");for(let o of this.touchChoices)o.setChecked(o.value===t.get("touch"));let n=Math.round(t.get("deadzone")*100);this.rowDeadzone.control.setValue(n,!1),this.rowDeadzone.value.setText(n+"%");let r=j_(this.rt.data.app),a=Q_(t,r,this.settings.resolution);this.lblEffective.setText(`3D-beeld: ${a.width} \xD7 ${a.height} pixels`),this.lblLimit.setText(a.limited?`GPU-limiet: de videokaart tekent niet groter dan ${r} pixels breed of hoog.`:""),this.invalidate()}btnHelpStdClick(){let t=this.PageControl.active;return t===2?nu(this.rt,nv):ac(this.rt,t===0?15:14)}lblBrightnessLightClick(){this.btnBrightnessLight.enabled&&this.btnBrightnessLight.click()}lblBrightnessDarkClick(){this.btnBrightnessDark.enabled&&this.btnBrightnessDark.click()}lblMipmappingClick(){fc(this.settings.resolution)&&this.chkMipMapping.click()}lblBilinearFilteringClick(){this.btnBilinearFiltering.enabled&&this.btnBilinearFiltering.click()}lblAlphaBlendingClick(){this.btnAlphaBlending.enabled&&this.btnAlphaBlending.click()}copySettingsToControls(){let t=this.settings;if(this.chkMipMapping.checked=t.mipmapping,this.optLowDetail.setChecked(t.textureMem===0),this.optMediumDetail.setChecked(t.textureMem===1),this.optHighDetail.setChecked(t.textureMem===2),this.limitTextureDetail(),this.btnBilinearFiltering.checked=t.bilinear,this.btnAlphaBlending.checked=t.alphaBlending,this.btnRenderToVideoMemory.checked=t.renderFocus===0,this.btnWaitVbl.checked=t.waitVbl,this.btnBrightnessLight.setChecked(t.gamma===0),this.btnBrightnessDark.setChecked(t.gamma===1),this.cboDriver.text=this.cboDriver.items[t.driverIndex+1]??"",this.cboResolution.text=iv,this.only3d=[this.chkMipMapping,this.btnBilinearFiltering,this.btnAlphaBlending,this.btnBrightnessLight,this.btnBrightnessDark],fc(t.resolution))this.only3d.length=0;else{this.only3d.push(this.optLowDetail,this.optMediumDetail,this.optHighDetail);for(let e of this.only3d)e.enabled=!1}}limitTextureDetail(){let t=this.rt.data.availableTextureMemory;t<=0||!fc(this.settings.resolution)||(t<16777216&&(this.optHighDetail.checked&&this.optMediumDetail.setChecked(!0),this.optHighDetail.enabled=!1),t<8388608&&(this.optMediumDetail.checked&&this.optLowDetail.setChecked(!0),this.optMediumDetail.enabled=!1))}btnOkClick(){let t=this.settings;t.bilinear=this.btnBilinearFiltering.checked,t.alphaBlending=this.btnAlphaBlending.checked,t.mipmapping=this.chkMipMapping.checked,this.optHighDetail.checked?t.textureMem=2:this.optMediumDetail.checked?t.textureMem=1:t.textureMem=0,t.gamma=this.btnBrightnessLight.checked?0:1}};var pc=s=>s.prototype instanceof ge||s.modal===!0;var mu=class extends ge{static className="TfrmDoubleKeys";static dfm="TFRMDOUBLEKEYS";backgroundName(){return"popempty.tga"}async create(){await super.create(),this.btnOk1.setDef(await be(this.rt,"gdfBtnOkSingleDlg"));let t=this.lblDouble;t.setText(this.args.text);let e=this.rt.g,i=()=>(e.font=`bold ${t.font.size}px ${t.font.name}`,qs(e,t.text,t.w).length);for(;t.font.size>14&&i()*Math.round(t.font.size*1.2)>t.h;)t.font.size--}};function jf(s,t){return s.showModal(mu,{text:t})}function sv(s){return s.showModal(Jr)}function Kf(s){s.data.applySoundSettings(),s.sound.startMusic().then(()=>s.data.applySoundSettings())}async function Qf(s,t,e){let i={name:e};return{result:await s.showModal(t,i),name:i.name||""}}function rv(s){let t=new Set(s.otherPlayers().map(i=>i.name));s.player&&t.add(s.player.name);let e=1;for(;t.has("Speler "+e);)e++;return"Speler "+e}async function gu(s){for(;;){let t=await Qf(s,da,"");if(!t.name&&t.result===1&&s.lastInputPad&&(t.name=rv(s.data)),t.name||t.result===2)return t}}async function Zf(s){let{result:t,name:e}=await gu(s);return e&&s.data.createPlayer(e),t}async function $f(s){let t=s.data,e=1;if(t.menuIni.currentPlayer>=0)try{t.loadPlayer(t.menuIni.currentPlayer)}catch(i){console.warn("load player error",i),e=await Zf(s)}else e=await Zf(s);e===1?await s.goTo(Mi):await t.terminate()}function Jf(s){return async t=>(await Qf(s,ua,t)).name}async function av(s){let t=s.data,e=t.gameIni.finished&&!t.player.qrTrack.isChase;await s.goTo(e?Ks:zi)}async function ov(s){let t=s.data,e=t.resultFlags,i=e&Ke.CHASE,n;t.gameIni.finished?i?e&Ke.QUALIFY?n=e&Ke.WINRACE?oa:aa:n=Zs:n=Ks:i&&!t.gameIni.playerAborted?n=Zs:n=Ye,await s.goTo(n)}async function xu(s,{firstTime:t=!1}={}){let e=s.data;e.beginMenuRun(t);let i=e.menuIni.prevState;if(e.raceMode=i,i===0){await sv(s),Kf(s),await $f(s);return}if(i!==1&&i!==2){console.error("illegal value of Previous : "+i);return}Kf(s);try{e.loadPlayer(e.menuIni.currentPlayer)}catch(n){console.warn(n),e.raceMode=0,await $f(s);return}i===1?(await e.fillRaceResultsQR(Jf(s)),e.saveProgress(),await av(s)):(await e.fillRaceResultsTour(Jf(s)),e.saveProgress(),await ov(s))}function tp(s){return xu(s,{firstTime:!1})}async function ep(s){let t=await s.showModal(ha);t===3?(s.data.raceMode=0,await s.data.doExit()):t===1&&await s.goTo(Mi)}function ip(s,t){return ma.showFor(s,t)}var pu=!1;async function np(s,t){if(!pu){pu=!0;try{await s.showModal(ga,{error:t})===7&&await s.data.terminate()}catch(e){console.error(e),globalThis.location?.reload()}finally{pu=!1}}}async function sp(s){let t=s.data,e=t.player.settings;if(e.startInfoOn){let i=e.controls.controlType===0?pa:Js;if(await s.showModal(i)===2)return!1}return await t.doExit(),!0}var Ke={CHASE:1,QUALIFY:2,WINRACE:4,WINTRACK:8,BESTLAP:32},lv=[".cmp",".dmp",".ini",".omp",".pmp",".pth",".rmp"],yu=/^savegame(\d)\.rcr$/,nr=s=>`SaveGame${s}.RCR`;function rp(s,...t){let e=0;return String(s).replace(/%(?:\.(\d+))?([sd%])/g,(i,n,r)=>{if(r==="%")return"%";let a=t[e++];return r==="s"?String(a):String(Math.trunc(a)).padStart(Number(n||0),"0")})}function _u(s){let t=100-Math.trunc(Math.pow(10,2*(100-s)/100));return Math.min(100,Math.max(1,t))}function cv(s){let t=Math.log10(4e3)-2,e=-Math.trunc(Math.pow(10,2+(100-s)/100*t));return Math.min(-100,Math.max(-4e3,e))}var mc=s=>100*Math.pow(10,cv(s)/2e3);function hp(s,t,e=0,i=s.length-1){if(i<e)return;let n=e,r;do{r=n;let a=i,o=s[n+i>>>1];do{for(;t(s[r],o)<0;)r++;for(;t(s[a],o)>0;)a--;r<=a&&([s[r],s[a]]=[s[a],s[r]],r++,a--)}while(r<=a);n<a&&hp(s,t,n,a),n=r}while(r<i)}var Hi=class{constructor(t){this.ini=t}has(t,e){return this.ini.get(t,e)!==null}str(t,e,i=""){let n=this.ini.get(t,e);return n===null?i:n}int(t,e,i=0){let n=this.ini.get(t,e);if(n===null)return i;let r=n.trim().replace(/^0[xX]/,"$");return/^[+-]?\d+$/.test(r)?Number(r):/^\$[0-9a-fA-F]+$/.test(r)?parseInt(r.slice(1),16):i}bool(t,e,i=!1){return this.int(t,e,i?1:0)!==0}ints(t,e){let i=this.ini.get(t,e);return i===null||i===""?[]:i.split(",").map(n=>Number(n.trim())||0)}},ba=class{constructor(t,e){this.vfs=t,this.path=e,this.ini=t.parsedIni(e)}writeString(t,e,i){this.ini.set(t,e,String(i))}writeInteger(t,e,i){this.writeString(t,e,Math.trunc(i))}writeBool(t,e,i){this.writeString(t,e,i?1:0)}close(){this.vfs.write(this.path,Ea(this.ini.serialize()))}};function hv(s,t){let e="char"+t;return{index:t,name:s.str(e,"Name"),indexInGame:s.int(e,"IndexInGame",0),winRaceText:s.str(e,"winracetext","..."),lockedText:s.str(e,"LockedText","..."),story:s.str(e,"Story","..."),speed:s.int(e,"Speed",0),brakes:s.int(e,"Brakes",0),accell:s.int(e,"Accell",0),handling:s.int(e,"Handling",0)}}function uv(s,t){let e="track"+t,i=r=>{let a=s.ints(e,r);return[a[0]||0,a[1]||0,a[2]||0]},n=i("chasetime");return{index:t,name:s.str(e,"name","..."),story:s.str(e,"story","..."),type:s.str(e,"type","..."),nrLaps:s.int(e,"nrlaps",2),british:s.bool(e,"british",!1),winText:s.str(e,"wintext","..."),qualifyText:s.str(e,"QualifyText","..."),loseText:s.str(e,"losetext","..."),indexInGame:s.int(e,"indexingame",0),qualifyPosition:i("qualifyposition"),chaseTime:n,isChase:n[0]>0}}function dv(s,t){let e=s.str("TUNEUPS","specs"+t).split(","),i=n=>Number(e[n])||0;return{index:t,name:(e[0]||"").trim(),price:i(1),dSpeed:i(2),dAccell:i(3),dBrakes:i(4),dHandling:i(5),text:s.str("TUNEUPS","text"+t,"...")}}var gc=class s{constructor(){this.up=1,this.down=1,this.left=1,this.right=1,this.extra1=1,this.extra2=1,this.extra3=1,this.controlType=0,this.joySensitivity=1,this.wheelSensitivity=1}static fromIni(t){let e=new s,i="DEFAULTSETTINGS";return e.up=t.int(i,"UP",1),e.down=t.int(i,"Down",1),e.left=t.int(i,"Left",1),e.right=t.int(i,"Right",1),e.extra1=t.int(i,"Extra1",1),e.extra2=t.int(i,"Extra2",1),e.extra3=t.int(i,"Extra3",1),e.controlType=t.int(i,"ControlType",0)&255,e.joySensitivity=t.int(i,"JoySensitivity",1),e.wheelSensitivity=t.int(i,"WheelSensitivity",1),e}clone(){return Object.assign(new s,this)}assign(t){Object.assign(this,t)}get inputDevice(){return[1,3,2,4][this.controlType]??1}get sensitivity(){return this.controlType===3?this.wheelSensitivity:this.joySensitivity}},xc=class s{constructor(){this.difficulty=1,this.resolution=1,this.fxVolume=100,this.musicVolume=100,this.voicesVolume=100,this.fxOn=!0,this.musicOn=!0,this.voicesOn=!0,this.startInfoOn=!0,this.alphaBlending=!0,this.bilinear=!0,this.waitVbl=!1,this.mipmapping=!1,this.gamma=0,this.textureMem=1,this.driverIndex=0,this.renderFocus=0,this.guid=null,this.guidChanged=!1,this.controls=new gc}static fromIni(t){let e=new s,i="DEFAULTSETTINGS";return e.difficulty=t.int(i,"DIFFICULTY",1)&255,e.resolution=t.int(i,"RESOLUTION",1),e.musicVolume=t.int(i,"MUSICVOLUME",100),e.fxVolume=t.int(i,"FXVOLUME",100),e.voicesVolume=t.int(i,"VOICESVOLUME",100),e.musicOn=t.bool(i,"MUSICON",!0),e.fxOn=t.bool(i,"FXON",!0),e.voicesOn=t.bool(i,"VOICESON",!0),e.startInfoOn=t.bool(i,"SHOWSTARTINFO",!0),e.alphaBlending=t.bool(i,"AlphaBlending",!0),e.bilinear=t.bool(i,"BiliniarFiltering",!0),e.waitVbl=t.bool(i,"WaitVbl",!1),e.mipmapping=t.bool(i,"Mipmapping",!1),e.gamma=t.int(i,"Gamma",0),e.renderFocus=t.int(i,"RenderFocus",0),e.driverIndex=t.int(i,"DriverIndex",0),e.controls=gc.fromIni(t),e}clone(){return new s().assign(this)}assign(t){return Object.assign(this,t),this.controls=t.controls.clone(),this}get textureMemoryBytes(){return[2097152,8388608,16777216][this.textureMem]??8388608}},yc=class{constructor(t,e,i,n){this.tracks=i,this.chars=n,this.defaultChar=t.int(e,"defaultchar",0),this.trackIx=t.ints(e,"trackix"),this.charIx=t.ints(e,"charix")}get trackCount(){return this.trackIx.length}get charCount(){return this.charIx.length}trackAt(t){return this.tracks[this.trackIx[t]]}charAt(t){return this.chars[this.charIx[t]]}positionOfTrack(t){return this.trackIx.indexOf(t.index)}};function fv(s){let t=new Hi(s.parsedIni("static.ini")),e=[],i=[],n=t.int("GENERAL","trackcount",0);for(let o=0;o<n;o++)i.push(uv(t,o));let r=t.int("GENERAL","charcount",0);for(let o=0;o<r;o++)e.push(hv(t,o));let a=new yc(t,"QUICKRACE",i,e);return a.downloadSection=t.str("QUICKRACE","DOWNLOADSECTION","DOWNLOADCAR"),a.downloadCharIx=t.int("QUICKRACE","DOWNLOADCHARIX",0),a.lockedCharText=t.str("QUICKRACE","LOCKEDCHARTEXT","locked!"),a.lockedCharIx=t.int("QUICKRACE","LOCKEDCHARIX",0),a.downloadCharAvailable=new Hi(s.parsedIni("L0_ANIM.INI")).int(a.downloadSection,"Count",0)>0,{chars:e,tracks:i,quickRace:a,tour:new yc(t,"TOURRACE",i,e),tuneUps:[0,1,2,3,4].map(o=>dv(t,o)),downloadUrl:t.str("GENERAL","DownLoadURL","http//:www.davilex.nl"),firstPlaceBonus:t.int("GAMEVALUES","FirstPlaceBonus",2500),turboOilAmount:t.int("GAMEVALUES","TurboOilAmount",10),checkpointTime:[0,1,2].map(o=>t.int("CheckPointTime","difficulty"+o,110)),defaultSettings:xc.fromIni(t),charByGameIndex(o){return e.find(l=>l.indexInGame===o)||null}}}var ap=["difficulty","resolution","fxVolume","musicVolume","voicesVolume"],op=["fxOn","musicOn","voicesOn","startInfoOn","alphaBlending","bilinear","waitVbl","mipmapping"],lp=["gamma","textureMem","driverIndex","renderFocus"],cp=["up","down","left","right","extra1","extra2","extra3","controlType","joySensitivity","wheelSensitivity"],_c=class{constructor(t){this.bytes=t,this.view=new DataView(t.buffer,t.byteOffset,t.byteLength),this.pos=0}int(){let t=this.view.getInt32(this.pos,!0);return this.pos+=4,t}bool(){return this.view.getUint8(this.pos++)!==0}shortString(t){let e=Math.min(this.view.getUint8(this.pos),t-1),i="";for(let n=1;n<=e;n++)i+=String.fromCharCode(this.view.getUint8(this.pos+n));return this.pos+=t,i}},vu=class{constructor(){this.out=[]}int(t){let e=Math.trunc(t)|0;this.out.push(e&255,e>>8&255,e>>16&255,e>>24&255)}bool(t){this.out.push(t?1:0)}shortString(t,e){let i=Ea(String(t).slice(0,e-1));this.out.push(i.length,...i);for(let n=i.length+1;n<e;n++)this.out.push(0)}bytes(){return Uint8Array.from(this.out)}},Su=class{constructor(t){this.statics=t,this.points=0,this.trackReached=0,this.turboAmount=0,this.tuneUps=[!1,!1,!1,!1,!1]}get euro(){return this.points}set euro(t){this.points=Math.max(0,t)}get turbo(){return this.turboAmount}set turbo(t){this.turboAmount=Math.min(100,Math.max(0,t))}hasTuneUp(t){return this.tuneUps[t]}clearTuneUps(){this.tuneUps.fill(!1)}bonus(t){return this.statics.tuneUps.reduce((e,i,n)=>this.tuneUps[n]?e+i[t]:e,0)}get speedBonus(){return this.bonus("dSpeed")}get accellBonus(){return this.bonus("dAccell")}get brakesBonus(){return this.bonus("dBrakes")}get handlingBonus(){return this.bonus("dHandling")}applyTuneUp(t){this.tuneUps[t]=!0,this.euro-=this.statics.tuneUps[t].price}applyTurboOil(){this.turbo+=this.statics.turboOilAmount,this.euro-=this.statics.tuneUps[4].price}get isFinished(){return this.statics.tour.trackCount<=this.trackReached}advance(){this.statics.tour.trackCount>this.trackReached&&this.trackReached++}read(t){this.trackReached=t.int(),this.points=t.int(),this.turboAmount=t.int();for(let e=0;e<5;e++)this.tuneUps[e]=t.bool()}write(t){t.int(this.trackReached),t.int(this.points),t.int(this.turboAmount);for(let e=0;e<5;e++)t.bool(this.tuneUps[e])}},sr=class s{constructor(t){this.statics=t,this.name="",this.settings=new xc,this.tour={charIx:0,trackIx:0,results:t.tour.charIx.map(()=>new Su(t))},this.qr={charIx:0,trackIx:0,harryUnlocked:!1},this.trackToDrive=0,this.tourStarted=!1}static createNew(t,e){let i=new s(t);return i.name=e,i.tour.charIx=t.tour.defaultChar,i.qr.charIx=t.quickRace.defaultChar,i.settings.assign(t.defaultSettings),i.tourStarted=!1,i}static fromBytes(t,e){let i=new _c(e),n=new s(t);n.name=i.shortString(33),i.int();let r=n.settings;for(let a of ap)r[a]=i.int();for(let a of op)r[a]=i.bool();for(let a of lp)r[a]=i.int();for(let a of cp)r.controls[a]=i.int();n.tour.charIx=i.int(),n.tour.trackIx=i.int();for(let a of n.tour.results)a.read(i);if(n.qr.charIx=i.int(),n.qr.trackIx=i.int(),n.qr.harryUnlocked=i.bool(),n.trackToDrive=i.int(),!n.tour.results[n.tour.charIx]||!t.quickRace.charAt(n.qr.charIx)||!t.tracks[n.trackToDrive])throw new RangeError("index out of range in save");return n}toBytes(){let t=new vu;t.shortString(this.name,33),t.int(this.tour.charIx);let e=this.settings;for(let i of ap)t.int(e[i]);for(let i of op)t.bool(e[i]);for(let i of lp)t.int(e[i]);for(let i of cp)t.int(e.controls[i]);t.int(this.tour.charIx),t.int(this.tour.trackIx);for(let i of this.tour.results)i.write(t);return t.int(this.qr.charIx),t.int(this.qr.trackIx),t.bool(this.qr.harryUnlocked),t.int(this.trackToDrive),t.bytes()}get result(){return this.tour.results[this.tour.charIx]}get euro(){return this.result.euro}set euro(t){this.result.euro=t}get tourChar(){return this.statics.tour.charAt(this.tour.charIx)}get qrChar(){return this.statics.quickRace.charAt(this.qr.charIx)}get tourTrack(){return this.statics.tour.trackAt(this.tour.trackIx)}get qrTrack(){return this.statics.quickRace.trackAt(this.qr.trackIx)}get trackDriven(){return this.statics.tracks[this.trackToDrive]}reachedInTour(t){let e=this.statics.tour.positionOfTrack(t);return e>=0&&this.tour.results.some(i=>i.trackReached>=e)}},vc=class{constructor(t,{files:e}={}){this.vfs=t,this.files=e||null,this.app=null,this.RR=Ke,this.flow={startUp:xu,afterRace:tp,closeRequested:ep,askPlayerName:gu,startInfoThenRace:sp,helpRequested:ip,unexpectedError:np},this.static=null,this.menuIni=null,this.controlKeys=[],this.player=null,this.gameIni=null,this.rankList=[],this.raceMode=0,this.resultFlags=0,this.playerPos=0,this.allowExit=!1,this.playerDialogBackup=null,this.testRoute=!1}async load(){for(let e of this.vfs.list())yu.test(e)&&this.vfs.stat(e).size===0&&this.vfs.remove(e);this.static=fv(this.vfs),this.readMenuIni(),this.readControlKeys();let t=globalThis.location?new URLSearchParams(globalThis.location.search):null;t&&t.has("form")?this.prepareFormTest(t):this.watchPageClose()}watchPageClose(){let t=()=>{this.player&&this.saveProgress()};globalThis.addEventListener?.("pagehide",t),globalThis.document?.addEventListener("visibilitychange",()=>{globalThis.document.hidden&&t()})}prepareFormTest(t){this.testRoute=!0;let e=Number(t.get("mode")??2);this.raceMode=e,this.menuIni.prevState=e,this.resultFlags=Number(t.get("flags")??0);let i=this.menuIni.currentPlayer;i>=0&&this.vfs.exists(nr(i))?this.player=sr.fromBytes(this.static,this.vfs.read(nr(i))):(this.player=sr.createNew(this.static,"Speler"),this.player.tour.charIx=0,this.player.qr.charIx=0),this.player.tourStarted=!0,this.gameIni=this.readGameIni(),this.fillRankResults()}beginMenuRun(t){this.readMenuIni(),this.menuIni.firstTime=t,t&&(this.menuIni.prevState=0),this.allowExit=!1,this.raceMode=0,this.resultFlags=0,this.playerPos=0,this.rankList=[],this.player=null,this.playerDialogBackup=null,this.testRoute=!1,this.gameIni=t?null:this.readGameIni()}async terminate(){this.allowExit=!1,await this.leaveMenu()}async doExit(){this.allowExit=!0,await this.leaveMenu()}async leaveMenu(){this.dataDestroy(),this.sound?.stopAll(),this.app&&(this.raceMode!==0?await this.app.startRace():await this.app.exitGame())}dataDestroy(){this.allowExit?this.raceMode!==0&&this.writeToInis():this.raceMode=0,this.player&&this.savePlayer(),this.saveMenuIni()}readMenuIni(){let t=new Hi(this.vfs.parsedIni("menu.ini")),e=[];for(let i=0;i<this.static.tracks.length;i++)e.push({time:t.int("HIGHSCORES",String(i),0),name:t.str("HIGHSCORES","name"+i,"<no name>")});this.menuIni={firstTime:!1,currentPlayer:t.int("GENERAL","CURRENTPLAYER",0),prevState:t.int("GENERAL","PREVSTATE",0),timeFormat:t.str("FORMAT","TIME",""),introAvi:t.str("GENERAL","INTROAVI",""),highscores:e}}saveMenuIni(){let t=new ba(this.vfs,"menu.ini");t.writeInteger("GENERAL","CURRENTPLAYER",this.menuIni.currentPlayer),t.writeInteger("GENERAL","PREVSTATE",this.raceMode),t.writeInteger("GENERAL","EXITCODE",this.raceMode!==0?40:255),this.menuIni.highscores.forEach((e,i)=>{t.writeInteger("HIGHSCORES",String(i),e.time),t.writeString("HIGHSCORES","name"+i,e.name)}),t.close()}menuString(t){return this.vfs.parsedIni("menu.ini").get("MenuStrings",String(t))??""}menuFormat(t,...e){return rp(this.menuString(t),...e)}ordinalNumber(t){return this.vfs.parsedIni("menu.ini").get("OrdinalNumbers",String(t))??""}ordinalWord(t){return this.vfs.parsedIni("menu.ini").get("OrdinalWords",String(t))??""}formatTime(t){let e=Math.trunc(t/6e4),i=Math.trunc(t/1e3)%60,n=Math.trunc(t/10)%100;return rp(this.menuIni.timeFormat,e,i,n)}readControlKeys(){let t=new Hi(this.vfs.parsedIni("menu.ini")),e=t.int("CONTROLKEYS","count",0);this.controlKeys=[];for(let i=0;i<e;i++){let n=t.str("CONTROLKEYS",String(i)),r=n.indexOf(",");this.controlKeys.push({vk:Number(n.slice(0,r))||0,name:n.slice(r+1)})}}keyName(t){return this.controlKeys.find(e=>e.vk===t)?.name??""}isControlKey(t){return t!==0&&this.controlKeys.some(e=>e.vk===t)}qualifyCaption(t){if(t.isChase)return this.menuString(8);let e=t.qualifyPosition[this.player.settings.difficulty];return this.menuFormat(14,this.ordinalNumber(e+1))}loadPlayer(t){let e=nr(t),i=this.vfs.exists(e)?this.vfs.read(e):null;if(!i)throw new Error("Unable to load: "+e);let n;try{n=sr.fromBytes(this.static,i)}catch(r){throw new Error("Unable to load: "+e+" ("+r.message+")")}n.tourStarted=!0,this.readInstalledResolution(n),this.player=n,this.menuIni.currentPlayer=t,this.applySoundSettings()}savePlayer(){this.menuIni.currentPlayer<0&&(this.menuIni.currentPlayer=this.lowestFreeSave()),this.vfs.write(nr(this.menuIni.currentPlayer),this.player.toBytes())}lowestFreeSave(){let t=0;for(;this.vfs.exists(nr(t));)t++;return t}createPlayer(t){let e=sr.createNew(this.static,t);e.settings.textureMem=this.readTextureMemorySetting(),this.readInstalledResolution(e),this.player=e,this.menuIni.currentPlayer=this.lowestFreeSave(),this.savePlayer(),this.applySoundSettings({music:!1})}deletePlayer(t){this.removeSave(nr(t))}removeSave(t){this.vfs.write(t,new Uint8Array(0)),this.vfs.remove(t)}saveNames(){return this.vfs.list().filter(t=>yu.test(t))}otherPlayers(){let t=[];for(let e of this.saveNames()){let i=Number(yu.exec(e)[1]);if(i!==this.menuIni.currentPlayer)try{let n=new _c(this.vfs.read(e)),r=n.shortString(33);t.push({number:i,name:r,tourChar:this.static.tour.charAt(n.int())})}catch(n){console.warn("Unable to load: "+e,n)}}return t.sort((e,i)=>e.number-i.number)}beginPlayerDialog(){this.savePlayer();let t=new Map(this.saveNames().map(e=>[e,this.vfs.read(e).slice()]));this.playerDialogBackup={current:this.menuIni.currentPlayer,files:t}}endPlayerDialog(t){let e=this.playerDialogBackup;if(this.playerDialogBackup=null,!(t!==2||!e)){for(let i of this.saveNames())this.removeSave(i);for(let[i,n]of e.files)this.vfs.write(i,n);this.loadPlayer(e.current)}}readInstalledResolution(t){t.settings.resolution=new Hi(this.vfs.parsedIni("raser.ini")).int("PROGRAM","RESOLUTION",3)}readTextureMemorySetting(){let t=new Hi(this.vfs.parsedIni("game.ini")).int("GFX OPTIONS","CUSTOM_TEXTURE_MEMORY",0);return t===2097152?0:t===16777216?2:1}get availableTextureMemory(){return new Hi(this.vfs.parsedIni("game.ini")).int("GFX OPTIONS","AVAILABLE_TEXTURE_MEMORY",0)}saveProgress(){this.testRoute||(this.player&&this.savePlayer(),this.menuIni&&this.saveMenuIni())}trackFilesExist(t){return lv.every(e=>this.fileExists("etappe"+t.indexInGame+e))}fileExists(t){if(this.vfs.exists(t))return!0;let e=t.toLowerCase();return!!this.files?.list?.some(i=>i.name.toLowerCase()===e)}quickTrackAvailable(t){let e=this.static.quickRace.trackAt(t),i=this.trackFilesExist(e);return e.isChase&&!this.player.reachedInTour(e)&&(i=!1),i}quickCharAvailable(t){let e=this.static.quickRace;return t===e.downloadCharIx?e.downloadCharAvailable:t===e.lockedCharIx?this.player.qr.harryUnlocked:!0}selectQuickTrack(t){this.player.qr.trackIx=t,this.player.trackToDrive=this.static.quickRace.trackIx[t]}takeUnlock(){return!(this.resultFlags&Ke.WINRACE)||this.player.qr.harryUnlocked?!1:(this.player.qr.harryUnlocked=!0,this.saveProgress(),!0)}get maxTourTrack(){let t=this.player.result;return t.isFinished?this.static.tour.trackCount-1:t.trackReached}get initialTourTrack(){let t=this.player.result;return t.isFinished?this.player.tour.trackIx:t.trackReached}canBuyTuneUp(t){let e=this.player.result;return t===4?e.turbo<100:!e.hasTuneUp(t)}buyTuneUp(t){let e=this.player.result,i=e.euro>=this.static.tuneUps[t].price;if(t===4){if(!i)return"noMoney";if(e.turbo>=100)return null;e.applyTurboOil()}else{if(e.hasTuneUp(t))return null;if(!i)return"noMoney";e.applyTuneUp(t)}return this.saveProgress(),"bought"}writeToInis(){let t=new ba(this.vfs,"game.ini");this.writeControlStuff(t),this.writeGeneralStuff(t),this.raceMode===1?this.writeQuickRaceStuff(t):this.raceMode===2&&this.writeTourStuff(t),t.close();let e=new ba(this.vfs,"raser.ini");this.writeRaserStuff(e),e.close()}writeControlStuff(t){let e=this.player.settings.controls;t.writeInteger("INPUT","DEVICE",e.inputDevice),t.writeInteger("INPUT","LEFT",e.left),t.writeInteger("INPUT","RIGHT",e.right),t.writeInteger("INPUT","UP",e.up),t.writeInteger("INPUT","DOWN",e.down),t.writeInteger("INPUT","EXTRA1",e.extra1),t.writeInteger("INPUT","EXTRA2",e.extra2),t.writeInteger("INPUT","EXTRA3",e.extra3),t.writeInteger("INPUT","SENSITIVITY",e.sensitivity)}writeGeneralStuff(t){let e=this.player.trackDriven,i=this.player.settings;t.writeInteger("ETAPPE","ETAPPE",e.indexInGame),t.writeInteger("OPTIONS","NRLAPS",e.nrLaps),t.writeBool("OPTIONS","OPPONENTS",!e.isChase),t.writeBool("ETAPPE","BRITISH",e.british),t.writeInteger("LEAGUE","LEAGUE",i.difficulty),t.writeInteger("PLAYER","DAMAGE",0),e.isChase&&t.writeInteger("PLAYER","CHECKPOINT_SPEED",this.static.checkpointTime[i.difficulty]),t.writeInteger("GFX OPTIONS","gamma",i.gamma),t.writeBool("GFX OPTIONS","alpha_blending",i.alphaBlending),t.writeInteger("GFX OPTIONS","CUSTOM_TEXTURE_MEMORY",i.textureMemoryBytes),t.writeBool("OPTIONS","waitvbl",i.waitVbl),t.writeInteger("OPTIONS","filter",i.bilinear?2:0)}writeQuickRaceStuff(t){t.writeInteger("PLAYER","MONEY",0),t.writeInteger("PLAYER","CAR",this.player.qrChar.indexInGame),t.writeInteger("PLAYER","TURBO_AMOUNT",100),t.writeBool("PLAYER","MOTOR",!0),t.writeBool("PLAYER","BANDEN",!0),t.writeBool("PLAYER","ABS",!0),t.writeBool("PLAYER","VERSNELLINGSBAK",!0),t.writeInteger("PLAYER","POSITION",4)}writeTourStuff(t){let e=this.player.result;t.writeInteger("PLAYER","MONEY",e.euro),t.writeInteger("PLAYER","CAR",this.player.tourChar.indexInGame),t.writeBool("PLAYER","MOTOR",e.hasTuneUp(0)),t.writeBool("PLAYER","BANDEN",e.hasTuneUp(1)),t.writeBool("PLAYER","ABS",e.hasTuneUp(2)),t.writeBool("PLAYER","VERSNELLINGSBAK",e.hasTuneUp(3)),t.writeInteger("PLAYER","TURBO_AMOUNT",e.turbo),t.writeInteger("PLAYER","POSITION",4)}writeRaserStuff(t){let e=this.player.settings;t.writeInteger("PROGRAM","RESOLUTION",e.resolution),t.writeInteger("SOUND","MUSICVOLUME",e.musicOn?_u(e.musicVolume):0),t.writeInteger("SOUND","SFXVOLUME",e.fxOn?_u(e.fxVolume):0),t.writeInteger("SOUND","POLICEVOLUME",e.voicesOn?_u(e.voicesVolume):0),t.writeInteger("directx","index",e.driverIndex),e.guidChanged&&e.guid&&t.writeString("directx","guid",e.guid),t.writeInteger("program","resolution",e.resolution),t.writeInteger("program","focus",e.renderFocus)}readGameIni(){let t=new Hi(this.vfs.parsedIni("game.ini")),e={money:t.int("PLAYER","MONEY",0),turboAmount:t.int("PLAYER","TURBO_AMOUNT",0),finished:t.bool("PLAYER","FINISHED",!1),outOfTime:t.bool("PLAYER","Out_Of_Time",!1),totalLoss:t.bool("PLAYER","Total_Loss",!1),trackTime:t.int("PLAYER","TRACKTIME",0),lapTimes:[],racers:[],get playerAborted(){return!this.finished&&!this.outOfTime&&!this.totalLoss}};for(let i=1;i<=5;i++)t.has("PLAYER",`LAP_${i}_TIME`)&&e.lapTimes.push(t.int("PLAYER",`LAP_${i}_TIME`,0));for(let i=0;i<4;i++){let n=t.str("RACERS",String(i)).split(","),r=this.static.charByGameIndex(Number(n[0]));r||console.warn("charby index not found",n[0]),e.racers.push({charIx:r?r.index:-1,time:Number(n[2])||0})}return e}fillRankResults(){let t=this.gameIni,e=0;this.menuIni.prevState===1?e=this.player.qrChar.index:this.menuIni.prevState===2&&(e=this.player.tourChar.index),this.rankList=[];for(let i of t.racers)i.charIx===e&&console.warn("double racers : ",e),this.rankList.push({charIx:i.charIx,time:i.time});this.rankList.push({charIx:e,time:t.trackTime}),hp(this.rankList,(i,n)=>i.time-n.time),this.playerPos=this.rankList.findIndex(i=>i.charIx===e)}async checkIfBestLap(t){let e=this.player.trackDriven,i=this.menuIni.highscores[this.player.trackToDrive];for(let r=0;r<e.nrLaps;r++){let a=this.gameIni.lapTimes[r];a!==void 0&&a<i.time&&(this.resultFlags|=Ke.BESTLAP,i.time=a)}if(!(this.resultFlags&Ke.BESTLAP))return;let n=this.player.name.slice(0,12);do n=await t(n);while(!n);i.name=n}async fillRaceResultsQR(t){this.player.tourTrack.isChase&&(this.resultFlags|=Ke.CHASE),this.gameIni.finished&&(this.player.qrTrack.isChase||this.fillRankResults(),await this.checkIfBestLap(t))}async fillRaceResultsTour(t){let e=this.player.tourTrack;if(e.isChase&&(this.resultFlags|=Ke.CHASE),!this.gameIni.finished)return;let i=this.player.result;if(i.clearTuneUps(),i.euro=this.gameIni.money,i.turbo=this.gameIni.turboAmount,e.isChase){await this.checkIfBestLap(t),this.checkChaseQualify();return}this.fillRankResults(),await this.checkIfBestLap(t),this.playerPos===0?this.processFirstPosition():this.playerPos<=e.qualifyPosition[this.player.settings.difficulty]&&this.processQualify()}checkChaseQualify(){let t=this.player;this.resultFlags|=Ke.QUALIFY,t.result.advance(),this.static.tour.trackCount-1===t.tour.trackIx&&(this.resultFlags|=Ke.WINRACE)}processFirstPosition(){let t=this.player;t.result.trackReached===t.tour.trackIx&&t.result.advance(),this.resultFlags|=Ke.WINTRACK,t.result.euro+=this.static.firstPlaceBonus}processQualify(){let t=this.player;this.resultFlags|=Ke.QUALIFY,t.result.trackReached===t.tour.trackIx&&t.result.advance()}get sound(){return this.app?.menu?.sound??null}applySoundSettings({music:t=!0}={}){let e=this.sound;if(!e)return;let i=this.player?this.player.settings:this.static.defaultSettings;e.setVolumes({fx:mc(i.fxVolume),voice:mc(i.voicesVolume)}),t&&e.setVolumes({music:mc(i.musicVolume)})}previewMusicVolume(t){this.sound?.setVolumes({music:mc(t)})}notApplicable(t){let e=this.app?.menu;return e?jf(e,t):(console.info(t),Promise.resolve())}};var pv=["Escape","KeyT","KeyN","KeyW"],Sc=class{constructor(){this.canvasRace=document.getElementById("game"),this.canvasMenu=document.getElementById("menu"),this.overlay=document.getElementById("overlay"),this.status=document.getElementById("status"),this.params=new URLSearchParams(location.search),this.audioContext=null}getAudioContext=()=>{if(!this.audioContext){let t=globalThis.AudioContext||globalThis.webkitAudioContext;t&&(this.audioContext=new t)}return this.audioContext};getMasterOutput=()=>{let t=this.getAudioContext();return t?(this.masterGain||(this.masterGain=t.createGain(),this.masterGain.gain.value=this.settings.get("volume")/100,this.masterGain.connect(t.destination)),this.masterGain):null};say(t,e=0){this.status.textContent=t,clearTimeout(this.sayTimer),e&&(this.sayTimer=setTimeout(()=>{this.status.textContent=""},e))}async start(){this.settings=new Dl,this.vfs=new Ta,this.say("Laden..."),this.persist=new Aa,await this.persist.open(),this.files=new Yl(this.vfs),await this.files.loadBase((r,a)=>this.say(`Laden ${r}/${a}`)),await this.persist.restoreInto(this.vfs),this.vfs.onWrite=(r,a)=>this.persist.save(r,a);let t=new Zl;await t.init();let e=new jl(this.getAudioContext,this.getMasterOutput);this.data=new vc(this.vfs,{files:this.files}),await this.data.load(),this.menu=new Jl({canvas:this.canvasMenu,overlay:this.overlay,assets:t,data:this.data,sound:e}),this.menu.forms=await(await fetch("assets/menu/forms.json")).json(),this.data.app=this,this.runner=new ql(this),this.menuPad=new Gs(()=>this.settings.get("deadzone")),window.addEventListener("resize",()=>this.layout()),window.addEventListener("orientationchange",()=>{this.layout(),this.runner.touch&&this.runner.touch.releaseAll()});let i=()=>{let r=this.getAudioContext();r&&r.state==="suspended"&&!this.runner.holdsSound()&&r.resume(),this.applyFullscreen()};this.settings.listeners.add((r,a)=>{r==="fullscreen"?this.applyFullscreen():r==="volume"&&this.masterGain&&(this.masterGain.gain.value=a/100)});for(let r of["pointerdown","pointerup","touchend","click","keydown"])window.addEventListener(r,i);for(let r of["fullscreenchange","webkitfullscreenchange"])document.addEventListener(r,()=>this.fullscreenChanged());document.addEventListener("visibilitychange",()=>{if(this.mode!=="menu")return;let r=this.audioContext;r&&(document.hidden?r.suspend():r.resume());let a=this.menu.video&&this.menu.video.el;document.hidden?(this.videoHeld=!!(a&&!a.paused),this.videoHeld&&a.pause()):this.videoHeld&&(this.videoHeld=!1,a&&a.play().catch(()=>{}))}),this.layout(),this.say("");let n=()=>{requestAnimationFrame(n),this.mode==="menu"&&(this.menu.render(),this.menuPad.pollMenu((r,a)=>{this.menu.lastInputPad=!0,this.menu.key(r,a)}))};requestAnimationFrame(n),await this.route()}async route(){let t=this.params.get("form");if(t){this.showMenu();let e=rs[t];if(!e){this.say("Unknown form "+t);return}pc&&pc(e)?(Mi&&await this.menu.goTo(Mi),await this.menu.showModal(e,{})):await this.menu.goTo(e,{});return}if(this.params.has("race")){Tf(this.vfs,{etappe:Number(this.params.get("etappe"))||0,car:Number(this.params.get("car"))||0,resolution:this.params.has("resolution")?Number(this.params.get("resolution")):null,chunks:this.params.has("chunks")?Number(this.params.get("chunks")):null}),await this.startRace();return}this.showMenu(),await this.data.flow.startUp(this.menu,{firstTime:!0})}async startRace(){this.showRace(),await this.runner.run(),this.menu.ignoreRepeat=!0,this.showMenu(),this.params.has("race")||await this.data.flow.afterRace(this.menu)}async exitGame(){this.menu.hideAll(),this.menu.sound.stopAll(),await this.data.flow.startUp(this.menu,{firstTime:!0})}applyFullscreen(){let t=document.documentElement,e=this.settings.get("fullscreen"),i=Wr();if(e&&!i&&!this.fullscreenPending&&document.fullscreenEnabled!==!1){let n=t.requestFullscreen||t.webkitRequestFullscreen;if(!n)return;this.fullscreenPending=!0,Promise.resolve(n.call(t)).catch(()=>{}).finally(()=>{this.fullscreenPending=!1})}else if(!e&&i){let n=document.exitFullscreen||document.webkitExitFullscreen;n&&Promise.resolve(n.call(document)).catch(()=>{})}}fullscreenChanged(){let t=navigator.keyboard;Wr()?t&&t.lock&&t.lock(pv).catch(()=>{}):this.settings.get("fullscreen")&&(this.settings.set("fullscreen",!1),this.mode==="race"&&this.runner.leftFullscreen()),this.runner.updateStop()}showMenu(){this.mode="menu",this.canvasRace.style.display="none",this.canvasMenu.style.display="block",this.menu.active=!0,this.menuPad.resync(),this.layout()}showRace(){this.mode="race",this.menu.active=!1,this.menu.hideAll(),this.canvasMenu.style.display="none",this.canvasRace.style.display="block",this.layout()}layout(){let t=window.devicePixelRatio||1,e=Math.max(1,Math.round(window.innerWidth*t)),i=Math.max(1,Math.round(window.innerHeight*t));this.mode==="menu"?(this.canvasMenu.width=e,this.canvasMenu.height=i,this.menu.relayout()):this.runner&&this.runner.layout()}};var up=new Sc;window.__app=up;up.start().catch(s=>{document.getElementById("status").textContent=String(s&&s.stack?s.stack:s),console.error(s)});
//# sourceMappingURL=main.js.map
