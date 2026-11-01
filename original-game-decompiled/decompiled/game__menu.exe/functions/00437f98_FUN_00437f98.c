
/* ==== FUN_00437f98 @ 00437f98 ==== 
 * signature: undefined __register FUN_00437f98(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 00437f98-00438046
 */

void FUN_00437f98(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_c;
  int local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_8,4);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x10,1);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x20,4);
  iVar1 = param_4;
  FUN_00436750(param_1,&local_c);
  FUN_00437f20(local_c,extraout_EDX,extraout_ECX,iVar1);
  iVar2 = iVar1;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = param_4;
    FUN_00437f98(*(int *)(param_1 + 8),local_8 + 1,iVar1,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00437f98(*(int *)(param_1 + 0xc),local_8,iVar2,param_4);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0043804e;
  pcStack_1c = (code *)0x438046;
  FUN_00403c5c(&local_c);
  return;
}


