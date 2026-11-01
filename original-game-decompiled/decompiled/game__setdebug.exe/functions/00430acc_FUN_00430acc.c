
/* ==== FUN_00430acc @ 00430acc ==== 
 * signature: undefined __register FUN_00430acc(int param_1, int * param_2)
 * body: 00430acc-00430b37
 */

void FUN_00430acc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x2c))();
      if (*(int *)(param_1 + 0x28) <= iVar1) goto LAB_00430b22;
    }
    FUN_00405298((undefined4 *)PTR_PTR_00446b2c,(int *)&local_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar2);
  }
LAB_00430b22:
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00430b3f;
  pcStack_18 = (code *)0x430b37;
  FUN_004039b8((int *)&local_8);
  return;
}


