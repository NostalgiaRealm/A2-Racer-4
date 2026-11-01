
/* ==== TMetafile.vmt_008 @ 0041bdc8 ==== 
 * signature: undefined TMetafile.vmt_008(void)
 * body: 0041bdc8-0041be5a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_008(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  
  if ((param_2 != (int *)0x0) &&
     (uVar3 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00417234), param_3 = extraout_ECX,
     (char)uVar3 == '\0')) {
    TPersistent_vmt_008(param_1,param_2);
    return;
  }
  iVar5 = 0;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    iVar5 = piVar1[5];
    FUN_0041cf14(piVar1);
    param_3 = extraout_ECX_00;
  }
  if (param_2 == (int *)0x0) {
    iVar4 = FUN_00402f6c((int *)&PTR_TMetafileImage_vmt_000_004171d4,'\x01',param_3);
    param_1[8] = iVar4;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    param_1[8] = param_2[8];
    *(char *)(param_1 + 9) = (char)param_2[9];
  }
  FUN_0041cf10(param_1[8]);
  iVar4 = (**(code **)(*param_1 + 0x24))();
  if ((iVar5 == iVar4) || (iVar5 = (**(code **)(*param_1 + 0x24))(), iVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1a) = uVar2;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


