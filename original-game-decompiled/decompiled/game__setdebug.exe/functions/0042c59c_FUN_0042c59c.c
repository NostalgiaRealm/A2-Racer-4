
/* ==== FUN_0042c59c @ 0042c59c ==== 
 * signature: undefined __register FUN_0042c59c(int param_1, int * param_2)
 * body: 0042c59c-0042c5de
 */

void FUN_0042c59c(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_004039b8(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == 0) {
      piVar1 = FUN_0040a9f4((int *)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446bf8);
      FUN_0040346c(piVar1);
    }
    FUN_00403a0c(param_2,*(undefined4 **)(*(int *)(param_1 + 4) + 8));
  }
  return;
}


