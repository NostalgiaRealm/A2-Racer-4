
/* ==== TMenuIni.vmt_01c @ 0048f168 ==== 
 * signature: undefined TMenuIni.vmt_01c(void)
 * body: 0048f168-0048f327
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuIni_vmt_01c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_150;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uStack_138;
  code *pcStack_134;
  undefined1 *puStack_130;
  undefined4 *puStack_120;
  int iStack_11c;
  int iStack_118;
  byte abStack_114 [256];
  int iStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  int *piStack_8;
  
  puStack_130 = &stack0xfffffffc;
  iStack_11c = 0;
  puStack_120 = (undefined4 *)0x0;
  iStack_118 = 0;
  puStack_10 = (undefined4 *)0x0;
  iStack_14 = 0;
  pcStack_134 = thunk_FUN_004036bc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_114);
  FUN_00403e80(&iStack_14,abStack_114);
  puVar7 = &DAT_0048f340;
  pcVar6 = "DoSaveToFile";
  iVar2 = iStack_14;
  FUN_00403f9c((int *)&puStack_10,3);
  puVar5 = puStack_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar5,0);
  (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","CURRENTPLAYER",piStack_8[5],pcVar6,puVar7,iVar2);
  (**(code **)(*param_2 + 0xc))
            (param_2,"GENERAL","PREVSTATE",*(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8));
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\0') {
    uStack_150 = 0xff;
    (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","EXITCODE");
  }
  else {
    uStack_150 = 0x28;
    (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","EXITCODE");
  }
  iVar2 = FUN_0048e138(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc));
  uVar1 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)uVar1) {
    iStack_c = uVar1 + 1;
    iVar2 = 0;
    do {
      iVar3 = FUN_0048f44c((int)piStack_8,iVar2);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      FUN_004085ac(iVar2,&iStack_118);
      (**(code **)(*param_2 + 0xc))(param_2,"HIGHSCORES",iStack_118,uVar4);
      iVar3 = FUN_0048f44c((int)piStack_8,iVar2);
      uVar4 = *(undefined4 *)(iVar3 + 8);
      FUN_004085ac(iVar2,(int *)&puStack_120);
      FUN_00403f28(&iStack_11c,(undefined4 *)FUN_0048f3cc,puStack_120);
      (**(code **)(*param_2 + 4))(param_2,"HIGHSCORES",iStack_11c,uVar4);
      iVar2 = iVar2 + 1;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  *in_FS_OFFSET = uStack_150;
  FUN_00403c80((int *)&puStack_120,3);
  FUN_00403c80(&iStack_14,2);
  return;
}


