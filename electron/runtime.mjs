import path from 'node:path';

export const APP_NAME='A2 Racer 4';
export const GAME_SCHEME='a2racer4';
export const GAME_ORIGIN='a2racer4://game';

export function gamePaths({packaged,appPath,resourcesPath}){
  return {root:packaged?path.join(resourcesPath,'game'):path.join(appPath,'public'),
    icon:path.join(appPath,'desktop/icons/icon.png')};
}

export function userDataPath(appData,override){
  if(override!==undefined){
    if(!path.isAbsolute(override))throw Error('A2R4_USER_DATA must be an absolute directory path.');
    return path.normalize(override);
  }
  return path.join(appData,APP_NAME);
}

export function launchURL(argv){
  const query=argv.find(arg=>arg.startsWith('--game-query='));
  return GAME_ORIGIN+'/'+(query?'?'+query.slice(13):'');
}

export function isGameNavigation(value){
  try{
    const url=new URL(value);
    return url.protocol===GAME_SCHEME+':'&&url.hostname==='game'&&!url.port
      &&!url.username&&!url.password&&['/','/index.html'].includes(url.pathname);
  }catch{return false;}
}

export const RENDERER_PREFERENCES=Object.freeze({
  nodeIntegration:false,nodeIntegrationInWorker:false,nodeIntegrationInSubFrames:false,
  contextIsolation:true,sandbox:true,webSecurity:true,allowRunningInsecureContent:false,
  webviewTag:false,spellcheck:false,autoplayPolicy:'no-user-gesture-required',
});
