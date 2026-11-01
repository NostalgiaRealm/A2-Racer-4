
/* ==== FUN_00415b70 @ 00415b70 ==== 
 * signature: undefined __register FUN_00415b70(int param_1, int param_2)
 * body: 00415b70-00415b9a
 */

void FUN_00415b70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_004101ec(&PTR_TList_vmt_000_0040ea6c,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  FUN_004102b0(*(undefined4 **)(param_1 + 0x10),param_2);
  return;
}


