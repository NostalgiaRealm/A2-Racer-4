
/* ==== TWinControl.dyn_ffc7 @ 00431354 ==== 
 * signature: undefined __register TWinControl.dyn_ffc7(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00431354-00431418
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffc7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  
  pcStack_20 = (code *)0x43136c;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  iVar2 = TForm_get_ClientWidth(param_1);
  iVar3 = FUN_004317bc((int)param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar4 = (int *)FUN_00431780((int)param_1,iVar6);
      if (piVar4[1] == param_1[1]) {
        iVar5 = FUN_00431780((int)param_1,iVar6);
        FUN_00410104(piVar1,iVar5);
        TControl_set_Left(piVar4,(iVar2 - piVar4[0xe]) - piVar4[0xc]);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = piVar1[2];
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uVar7 = 0;
      iVar6 = FUN_004102b0(piVar1,iVar3);
      FUN_0042f720(iVar6,0xb03e,0,uVar7);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00431420;
  pcStack_24 = (code *)0x431418;
  FUN_00402f9c(piVar1);
  return;
}


