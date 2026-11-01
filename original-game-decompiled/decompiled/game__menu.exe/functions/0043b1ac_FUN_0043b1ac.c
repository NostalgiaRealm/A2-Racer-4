
/* ==== FUN_0043b1ac @ 0043b1ac ==== 
 * signature: undefined __register FUN_0043b1ac(int param_1, int * param_2)
 * body: 0043b1ac-0043b217
 */

void FUN_0043b1ac(int param_1,int *param_2)

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
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x2c))();
      if (*(int *)(param_1 + 0x28) <= iVar1) goto LAB_0043b202;
    }
    FUN_00405808((undefined4 *)PTR_PTR_004ab708,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
  }
LAB_0043b202:
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0043b21f;
  pcStack_18 = (code *)0x43b217;
  FUN_00403c5c((int *)&local_8);
  return;
}


