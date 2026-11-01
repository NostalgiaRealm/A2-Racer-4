
/* ==== FUN_0043e4c0 @ 0043e4c0 ==== 
 * signature: undefined __cdecl FUN_0043e4c0(int param_1)
 * body: 0043e4c0-0043e715
 */

void __cdecl FUN_0043e4c0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  
  draw_2d_item(param_1,0x48,0,0,0,0);
  iVar1 = FUN_00458b90(0x11);
  pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xe);
  FUN_00440b60(param_1,0x3f,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,pbVar2);
  draw_2d_item(param_1,0x40,DAT_006fbaa4,1,0,0);
  pcVar5 = s__02d__02d__d_0059bf14;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x52,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)pcVar5);
  FUN_004502d0();
  FUN_004501c0();
  ppuVar8 = &PTR_DAT_0059bf24;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x4e,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf28;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x4f,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf2c;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x50,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  ppuVar8 = &PTR_DAT_0059bf30;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x51,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
               iVar6,iVar7,(byte *)ppuVar8);
  return;
}


