
/* ==== FUN_0043f590 @ 0043f590 ==== 
 * signature: uint __cdecl FUN_0043f590(int param_1)
 * body: 0043f590-0043f63c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0043f590(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_0059becc != -1) {
    DAT_0059bed0 = DAT_0059becc;
    _DAT_006c941c = GetTickCount();
    DAT_0059becc = -1;
  }
  DVar1 = GetTickCount();
  uVar2 = DVar1 - _DAT_006c941c;
  if ((uVar2 < 0x7d1) && (DAT_0059bed0 != -1)) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 * 0x51eb851f;
    if ((DVar1 / 100 & 1) != 0) {
      iVar3 = FUN_00458b90(DAT_0059bed0);
      pbVar4 = &DAT_006fd14c + iVar3 * 0x100;
      iVar8 = 0;
      iVar7 = 0;
      iVar6 = 1;
      iVar3 = FUN_0043cda0(DAT_006c4098);
      iVar5 = FUN_0043cd70(10);
      uVar2 = FUN_00440b60(param_1,0x4c,
                           (int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar5) * 0x94),iVar6,iVar7
                           ,iVar8,pbVar4);
    }
  }
  return uVar2;
}


