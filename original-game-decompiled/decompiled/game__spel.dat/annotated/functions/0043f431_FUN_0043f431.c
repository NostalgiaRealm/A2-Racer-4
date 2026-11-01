
/* ==== FUN_0043f431 @ 0043f431 ==== 
 * signature: uint __stdcall FUN_0043f431(int param_1)
 * body: 0043f431-0043f43f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0043f431(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if (DAT_006fcf88 != 0) {
    _DAT_006c9418 = GetTickCount();
    DAT_006fcf88 = 0;
  }
  DVar1 = GetTickCount();
  uVar2 = DVar1 - _DAT_006c9418;
  if (uVar2 < 0x7d1) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 * 0x51eb851f;
    if ((DVar1 / 100 & 1) != 0) {
      if (DAT_006fcf80 < 0) {
        pcVar8 = s___02d__d_0059c008;
      }
      else {
        pcVar8 = s___02d__d_0059c014;
      }
      iVar7 = 0;
      iVar6 = 0;
      iVar5 = 1;
      iVar3 = FUN_0043cda0(DAT_006c4098);
      iVar4 = FUN_0043cd70(0xf);
      uVar2 = FUN_00440b60(param_1,0x4d,
                           (int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94),iVar5,iVar6
                           ,iVar7,(byte *)pcVar8);
    }
  }
  return uVar2;
}


