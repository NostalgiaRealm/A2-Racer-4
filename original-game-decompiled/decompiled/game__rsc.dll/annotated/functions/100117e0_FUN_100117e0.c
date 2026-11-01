
/* ==== FUN_100117e0 @ 100117e0 ==== 
 * signature: undefined4 __cdecl FUN_100117e0(int param_1, int param_2)
 * body: 100117e0-10011866
 */

undefined4 __cdecl FUN_100117e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_100316c4)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10011a50(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_100316b4);
      sVar4 = _strlen(DAT_100316b4);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


