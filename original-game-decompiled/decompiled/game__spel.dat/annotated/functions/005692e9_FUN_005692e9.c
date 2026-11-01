
/* ==== FUN_005692e9 @ 005692e9 ==== 
 * signature: uint * __cdecl FUN_005692e9(uint * param_1)
 * body: 005692e9-00569386
 */

uint * __cdecl FUN_005692e9(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  LPWSTR local_8;
  
  local_8 = (LPWSTR)0x0;
  if (DAT_0074dce4 == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *(char *)puVar3 = cVar1 + ' ';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    _Size = FUN_0055c112(DAT_0074dce4,0x100,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
    if (((_Size != 0) && (local_8 = _malloc(_Size), local_8 != (LPWSTR)0x0)) &&
       (iVar2 = FUN_0055c112(DAT_0074dce4,0x100,(char *)param_1,-1,local_8,_Size,0,1), iVar2 != 0))
    {
      FUN_0055ee40(param_1,(uint *)local_8);
    }
    FUN_00559d4e(local_8);
  }
  return param_1;
}


