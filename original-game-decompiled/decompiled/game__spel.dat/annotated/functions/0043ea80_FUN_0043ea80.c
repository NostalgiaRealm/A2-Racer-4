
/* ==== FUN_0043ea80 @ 0043ea80 ==== 
 * signature: undefined __cdecl FUN_0043ea80(undefined4 param_1)
 * body: 0043ea80-0043f0d4
 */

void __cdecl FUN_0043ea80(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (2 < DAT_006fb924) {
    draw_2d_item(param_1,0x33,0,0,0,0);
    FUN_00448470(3);
    iVar1 = FUN_00458b90(0x21);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x26,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    pcVar5 = s__02d__02d__d_0059bf64;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xb);
    FUN_00440b60(param_1,0x27,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,(byte *)pcVar5);
    iVar1 = FUN_00458b90(0x22);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x28,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    FUN_00448470(0);
    iVar1 = FUN_00458b90(0x23);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xd);
    FUN_00440b60(param_1,0x29,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    pcVar5 = s__02d__02d__d_0059bf74;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xc);
    FUN_00440b60(param_1,0x2a,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,(byte *)pcVar5);
    iVar1 = FUN_00458b90(0x24);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xd);
    FUN_00440b60(param_1,0x2b,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    if (DAT_006fb8ec == 0xfffffff) {
      pcVar5 = s_________0059bf84;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xc);
      FUN_00440b60(param_1,0x2c,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    else {
      pcVar5 = s__02d__02d__d_0059bf8c;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xc);
      FUN_00440b60(param_1,0x2c,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    iVar1 = FUN_00458b90(0x25);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xd);
    FUN_00440b60(param_1,0x2d,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    if (DAT_006fb8f8 == 0) {
      pcVar5 = s_________0059bf9c;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xc);
      FUN_00440b60(param_1,0x2e,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    else {
      pcVar5 = s__02d__02d__d_0059bfa4;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xc);
      FUN_00440b60(param_1,0x2e,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    iVar1 = FUN_00458b90(0x26);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x2f,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    pcVar5 = s__d__d_0059bfb4;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xb);
    FUN_00440b60(param_1,0x30,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,(byte *)pcVar5);
    iVar1 = DAT_006fb8fc;
    iVar3 = FUN_00458b90(0x27);
    pbVar2 = &DAT_006fd14c + iVar3 * 0x100;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar3 = FUN_0043cda0(DAT_006c4098);
    iVar4 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x31,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94),iVar6,
                 iVar7,iVar8,pbVar2);
    if (iVar1 < 10) {
      pcVar5 = s__d__d_0059bfbc;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xb);
      FUN_00440b60(param_1,0x32,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
      return;
    }
    pbVar2 = &DAT_0059bfc4;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xb);
    FUN_00440b60(param_1,0x32,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
  }
  return;
}


