
/* ==== FUN_00465ffc @ 00465ffc ==== 
 * signature: undefined __register FUN_00465ffc(int * param_1, int * param_2)
 * body: 00465ffc-004660d5
 */

void FUN_00465ffc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iVar4 = 0;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00466ed8);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00466ed8);
    uVar1 = FUN_00403114(*(int **)(iVar2 + 4),(int)&PTR_TControl_vmt_000_0042a694);
    if ((char)uVar1 != '\0') {
      piVar3 = (int *)FUN_0040312c(*(int **)(iVar2 + 4),(int)&PTR_TControl_vmt_000_0042a694);
      iVar4 = FUN_0044488c(piVar3);
    }
  }
  if (iVar4 == 0) {
    FUN_00402ee4(*param_1,local_10c);
    FUN_00403e80(&local_c,local_10c);
    pcStack_134 = "Could not acquire the form for the Hint";
    FUN_00403f9c(&local_8,4);
    FUN_00403c40(local_8);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403c80(&local_c,2);
  return;
}


