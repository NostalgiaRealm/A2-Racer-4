
/* ==== TScrollingWinControl.dyn_ffc7 @ 004455b0 ==== 
 * signature: undefined TScrollingWinControl.dyn_ffc7(void)
 * body: 004455b0-004456b7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TScrollingWinControl_dyn_ffc7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  int iStack_c;
  
  puStack_24 = (undefined1 *)0x4455c8;
  piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  puStack_28 = &UNK_004456b8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iStack_c = TForm_get_ClientWidth(param_1);
  iVar4 = param_1[0x7c];
  uVar3 = FUN_00444ba4(iVar4);
  if (((char)uVar3 == '\0') || (*(int *)(iVar4 + 0x10) <= iStack_c)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iStack_c = *(int *)(iVar4 + 0x10);
    TControlScrollBar_set_Position(iVar4,0);
  }
  iVar4 = FUN_004317bc((int)param_1);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      piVar5 = (int *)FUN_00431780((int)param_1,iVar7);
      iVar6 = FUN_00431780((int)param_1,iVar7);
      FUN_00410104(piVar2,iVar6);
      TControl_set_Left(piVar5,(iStack_c - piVar5[0xe]) - piVar5[0xc]);
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = piVar2[2];
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      uVar3 = 0;
      iVar6 = FUN_004102b0(piVar2,iVar7);
      FUN_0042f720(iVar6,0xb03e,0,uVar3);
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (bVar1) {
    FUN_004449ec(param_1[0x7c]);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_004456bf;
  puStack_28 = (undefined *)0x4456b7;
  FUN_00402f9c(piVar2);
  return;
}


