
/* ==== FUN_0043f0e0 @ 0043f0e0 ==== 
 * signature: undefined __cdecl FUN_0043f0e0(undefined4 param_1)
 * body: 0043f0e0-0043f2d5
 */

void __cdecl FUN_0043f0e0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (1 < DAT_006fb924) {
    if (DAT_006fb8d0 == 0) {
      iVar5 = DAT_006fb890 * 0xf0;
    }
    else {
      iVar5 = 0;
    }
    draw_2d_item(param_1,0x34,(uint)(DAT_006fb954 != 0),0,0,iVar5);
    iVar1 = FUN_00458b90(0x35);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar1 = iVar5;
    iVar3 = FUN_0043cda0(DAT_006c4098);
    iVar4 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x35,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94),iVar6,
                 iVar7,iVar1,pbVar2);
    iVar1 = FUN_00458b90(0x36);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar1 = iVar5;
    iVar3 = FUN_0043cda0(DAT_006c4098);
    iVar4 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x37,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94),iVar6,
                 iVar7,iVar1,pbVar2);
    iVar1 = FUN_00458b90(0x37);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar1 = iVar5;
    iVar3 = FUN_0043cda0(DAT_006c4098);
    iVar4 = FUN_0043cd70(10);
    FUN_00440b60(param_1,7,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94),iVar6,iVar7
                 ,iVar1,pbVar2);
    iVar1 = iVar5;
    if (DAT_006fb954 == 0) {
      pbVar2 = &DAT_0059bfd0;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0);
      iVar3 = iVar4 * 0x11 + iVar3;
    }
    else {
      __ftol();
      pbVar2 = &DAT_0059bfc8;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0);
      iVar3 = iVar4 * 0x11 + iVar3;
    }
    FUN_00440b60(param_1,0x38,(int)(s_lo_fnt3_fnt_0059a8c0 + iVar3 * 0x94),iVar6,iVar7,iVar1,pbVar2)
    ;
    FUN_0043fb80(param_1,0,iVar5);
    FUN_0043fa50(param_1,0,iVar5);
  }
  return;
}


