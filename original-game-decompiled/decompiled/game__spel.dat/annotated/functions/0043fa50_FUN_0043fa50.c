
/* ==== FUN_0043fa50 @ 0043fa50 ==== 
 * signature: int __cdecl FUN_0043fa50(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 0043fa50-0043fb7a
 */

int __cdecl FUN_0043fa50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar4 = *(int *)(DAT_00740a1c + *(int *)(&DAT_0059c1ac + (uint)(DAT_006fb894 == 0) * 0x3f0) * 0xc)
  ;
  iVar1 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  iVar2 = FUN_00425300(iVar1);
  lVar5 = __ftol();
  iVar1 = (int)lVar5;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar4 <= iVar1) {
    iVar1 = iVar4 + -1;
  }
  if (0x36f < iVar2) {
    DVar3 = GetTickCount();
    if ((DVar3 / 200 & 1) != 0) {
      return DVar3 * 0x51eb851f;
    }
  }
  draw_2d_item(param_1,3,iVar1,0,param_2,param_3);
  iVar4 = DAT_006fb894;
  if ((DAT_006fb894 == 0) && (DAT_006fb890 == 1)) {
    iVar4 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
    FUN_00425300(iVar4);
    pbVar8 = &DAT_0059c0f4;
    iVar7 = 0;
    iVar6 = 0;
    iVar2 = 0;
    iVar4 = FUN_0043cda0(DAT_006c4098);
    iVar1 = FUN_0043cd70(0x10);
    iVar4 = FUN_00440b60(param_1,0x53,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar4 * 0x11 + iVar1) * 0x94),
                         iVar2,iVar6,iVar7,pbVar8);
  }
  return iVar4;
}


