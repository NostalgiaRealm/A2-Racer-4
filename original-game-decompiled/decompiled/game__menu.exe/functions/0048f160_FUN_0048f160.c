
/* ==== FUN_0048f160 @ 0048f160 ==== 
 * signature: undefined FUN_0048f160(void)
 * body: 0048f160-0048f167
 */

void FUN_0048f160(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,int *param_8,
                 undefined4 param_9,int *param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  int in_GS_OFFSET;
  undefined4 *in_stack_00000000;
  undefined4 uVar5;
  undefined4 uStack_130;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uStack_118;
  code *pcStack_114;
  undefined1 *puStack_110;
  undefined4 *puStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 *puStack_100;
  int iStack_fc;
  int iStack_f8;
  byte abStack_f4 [244];
  
  param_9 = param_10;
  piVar1 = param_8;
  out(*unaff_ESI,param_2);
  puStack_10c = in_stack_00000000 + 1;
  uVar5 = in((short)param_8);
  *in_stack_00000000 = uVar5;
  *(char *)(in_GS_OFFSET + (int)param_10) = *(char *)(in_GS_OFFSET + (int)param_10) + (char)param_10
  ;
  *(char *)param_10 = (char)*param_10 + (char)param_10;
  puStack_110 = (undefined1 *)&param_10;
  param_10 = (int *)param_5;
  iStack_104 = (int)param_7;
  uStack_108 = param_4;
  iStack_fc = 0;
  puStack_100 = (undefined4 *)0x0;
  iStack_f8 = 0;
  param_7 = (undefined4 *)0x0;
  param_6 = 0;
  pcStack_114 = thunk_FUN_004036bc;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  FUN_00402ee4(*param_9,abStack_f4);
  FUN_00403e80(&param_6,abStack_f4);
  puVar8 = &DAT_0048f340;
  pcVar7 = "DoSaveToFile";
  iVar3 = param_6;
  FUN_00403f9c((int *)&param_7,3);
  puVar6 = param_7;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar6,0);
  (**(code **)(*piVar1 + 0xc))(piVar1,"GENERAL","CURRENTPLAYER",param_9[5],pcVar7,puVar8,iVar3);
  (**(code **)(*piVar1 + 0xc))
            (piVar1,"GENERAL","PREVSTATE",*(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8));
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\0') {
    uStack_130 = 0xff;
    (**(code **)(*piVar1 + 0xc))(piVar1,"GENERAL","EXITCODE");
  }
  else {
    uStack_130 = 0x28;
    (**(code **)(*piVar1 + 0xc))(piVar1,"GENERAL","EXITCODE");
  }
  iVar3 = FUN_0048e138(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc));
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)uVar2) {
    param_8 = (int *)(uVar2 + 1);
    iVar3 = 0;
    do {
      iVar4 = FUN_0048f44c((int)param_9,iVar3);
      uVar5 = *(undefined4 *)(iVar4 + 4);
      FUN_004085ac(iVar3,&iStack_f8);
      (**(code **)(*piVar1 + 0xc))(piVar1,"HIGHSCORES",iStack_f8,uVar5);
      iVar4 = FUN_0048f44c((int)param_9,iVar3);
      uVar5 = *(undefined4 *)(iVar4 + 8);
      FUN_004085ac(iVar3,(int *)&puStack_100);
      FUN_00403f28(&iStack_fc,(undefined4 *)FUN_0048f3cc,puStack_100);
      (**(code **)(*piVar1 + 4))(piVar1,"HIGHSCORES",iStack_fc,uVar5);
      iVar3 = iVar3 + 1;
      param_8 = (int *)((int)param_8 + -1);
    } while (param_8 != (int *)0x0);
  }
  *in_FS_OFFSET = uStack_130;
  FUN_00403c80((int *)&puStack_100,3);
  FUN_00403c80(&param_6,2);
  return;
}


