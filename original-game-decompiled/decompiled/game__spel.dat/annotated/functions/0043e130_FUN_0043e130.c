
/* ==== FUN_0043e130 @ 0043e130 ==== 
 * signature: undefined __cdecl FUN_0043e130(int param_1)
 * body: 0043e130-0043e4b3
 */

void __cdecl FUN_0043e130(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  
  draw_2d_item(param_1,0x3e,0,0,0,0);
  draw_2d_item(param_1,0x40,DAT_006fbaa4,1,0,0);
  iVar1 = FUN_00458b90(0x11);
  pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xe);
  FUN_00440b60(param_1,0x3f,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,pbVar2);
  pcVar5 = s__02d__02d__d_0059bed4;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x41,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)pcVar5);
  pcVar5 = s__02d__02d__d_0059bee4;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x42,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)pcVar5);
  pcVar5 = s__02d__02d__d_0059bef4;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x43,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)pcVar5);
  FUN_004502d0();
  FUN_004501c0();
  ppuVar8 = &PTR_DAT_0059bf04;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x44,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf08;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x45,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf0c;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x46,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf10;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x47,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  return;
}


