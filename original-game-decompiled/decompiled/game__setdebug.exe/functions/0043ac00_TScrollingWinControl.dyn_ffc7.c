
/* ==== TScrollingWinControl.dyn_ffc7 @ 0043ac00 ==== 
 * signature: undefined TScrollingWinControl.dyn_ffc7(void)
 * body: 0043ac00-0043ad07
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
  
  puStack_24 = (undefined1 *)0x43ac18;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
  puStack_28 = &UNK_0043ad08;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iStack_c = TForm_get_ClientWidth(param_1);
  iVar4 = param_1[0x7c];
  uVar3 = FUN_0043a1f4(iVar4);
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
  iVar4 = FUN_0042781c((int)param_1);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      piVar5 = (int *)FUN_004277e0((int)param_1,iVar7);
      iVar6 = FUN_004277e0((int)param_1,iVar7);
      FUN_0040eec8(piVar2,iVar6);
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
      iVar6 = FUN_0040f024(piVar2,iVar7);
      FUN_00425780(iVar6,0xb03e,0,uVar3);
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (bVar1) {
    FUN_0043a03c(param_1[0x7c]);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_0043ad0f;
  puStack_28 = (undefined *)0x43ad07;
  FUN_00402d14(piVar2);
  return;
}


