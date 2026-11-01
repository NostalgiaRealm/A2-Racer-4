
/* ==== TMenuIni.vmt_018 @ 0048edec ==== 
 * signature: undefined __register TMenuIni.vmt_018(int * param_1, int * param_2)
 * body: 0048edec-0048f072
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuIni_vmt_018(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined *puVar10;
  int iStack_150;
  code *pcStack_14c;
  undefined1 *puStack_148;
  undefined4 *local_138;
  int local_134;
  undefined4 *local_130;
  int local_12c;
  byte *local_128;
  uint *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_130 = (undefined4 *)0x0;
  local_134 = 0;
  local_138 = (undefined4 *)0x0;
  local_12c = 0;
  local_124 = (uint *)0x0;
  local_128 = (byte *)0x0;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  pcStack_14c = thunk_FUN_004036bc;
  iStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_150;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  puVar10 = &DAT_0048f08c;
  pcVar9 = "DoLoadFromFile";
  iVar3 = local_18;
  FUN_00403f9c((int *)&local_14,3);
  puVar8 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar8,0);
  iVar3 = (**(code **)(*local_c + 8))(local_c,"GENERAL","CURRENTPLAYER",0,pcVar9,puVar10,iVar3);
  local_8[5] = iVar3;
  uVar1 = (**(code **)(*local_c + 8))(local_c,"GENERAL","PREVSTATE",0);
  *(undefined1 *)((int)local_8 + 9) = uVar1;
  (**(code **)*local_c)(local_c,"FORMAT",&DAT_0048f0f0,&local_11c,0);
  FUN_00403cb0(local_8 + 3,local_11c);
  ppuVar7 = &local_120;
  (**(code **)*local_c)(local_c,"GENERAL","INTROAVI",ppuVar7,0);
  FUN_00403cb0(local_8 + 4,local_120);
  *(undefined1 *)(local_8 + 2) = 0;
  iVar3 = FUN_00402990();
  uVar1 = iVar3 == 0;
  if (0 < iVar3) {
    iVar4 = 1;
    do {
      FUN_004029f0(iVar4,(int *)&local_128);
      FUN_004081f0(local_128,(int *)&local_124);
      FUN_00403fec(local_124,(uint *)"/FIRSTTIME");
      if ((bool)uVar1) {
        *(undefined1 *)(local_8 + 2) = 1;
        *(undefined1 *)((int)local_8 + 9) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      uVar1 = iVar3 == 0;
    } while (!(bool)uVar1);
  }
  uVar2 = FUN_0048e138(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc));
  uVar6 = extraout_ECX;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
    uVar6 = extraout_ECX_00;
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar3 = 0;
    do {
      local_10 = FUN_00402f6c((int *)&DAT_0048ec8c,'\x01',uVar6);
      uVar6 = 0;
      FUN_004085ac(iVar3,&local_12c);
      uVar6 = (**(code **)(*local_c + 8))(local_c,"HIGHSCORES",local_12c,uVar6);
      *(undefined4 *)(local_10 + 4) = uVar6;
      pcVar9 = "<no name>";
      ppuVar5 = &local_130;
      FUN_004085ac(iVar3,(int *)&local_138);
      FUN_00403f28(&local_134,(undefined4 *)FUN_0048f160,local_138);
      (**(code **)*local_c)(local_c,"HIGHSCORES",local_134,ppuVar5,pcVar9);
      FUN_00403cb0((int *)(local_10 + 8),local_130);
      FUN_00410104((int *)local_8[6],local_10);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
      uVar6 = extraout_ECX_01;
    } while (uVar2 != 0);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = (int)ppuVar7;
  FUN_00403c80((int *)&local_138,8);
  FUN_00403c80(&local_18,2);
  return;
}


