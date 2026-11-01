
/* ==== TCustomActionList.vmt_030 @ 0042f7bc ==== 
 * signature: undefined __register TCustomActionList.vmt_030(int param_1)
 * body: 0042f7bc-0042f822
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomActionList_vmt_030(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x24),iVar4);
      (**(code **)(*piVar1 + 0x30))();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_vmt_000_00438838);
    if (((char)uVar2 != '\0') && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  return;
}


