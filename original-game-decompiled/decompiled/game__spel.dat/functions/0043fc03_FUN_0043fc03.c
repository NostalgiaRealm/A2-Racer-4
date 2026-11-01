
/* ==== FUN_0043fc03 @ 0043fc03 ==== 
 * signature: int __cdecl FUN_0043fc03(int param_1)
 * body: 0043fc03-0043fc8f
 */

int __cdecl FUN_0043fc03(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DVar1 = GetTickCount();
  iVar2 = DVar1 * 0x1b4e81b5;
  if ((DVar1 / 300 & 1) != 0) {
    if (DAT_006fb8d0 == 0) {
      iVar3 = -((int)(DAT_005b3798 + (DAT_005b3798 >> 0x1f & 3U)) >> 2) * DAT_006fb890;
      iVar4 = ((int)(DAT_005b379c + (DAT_005b379c >> 0x1f & 3U)) >> 2) * DAT_006fb890;
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
    }
    iVar2 = FUN_00429360(DAT_006fba58);
    if (iVar2 == 0) {
      iVar2 = FUN_00440cb0(param_1,0x1d,0,1,iVar3,iVar4);
    }
  }
  return iVar2;
}


