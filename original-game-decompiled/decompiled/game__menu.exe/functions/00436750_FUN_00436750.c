
/* ==== FUN_00436750 @ 00436750 ==== 
 * signature: undefined __register FUN_00436750(int param_1, int * param_2)
 * body: 00436750-00436792
 */

void FUN_00436750(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_00403c5c(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == 0) {
      piVar1 = FUN_0040b694((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab7f4);
      FUN_004036f4(piVar1);
    }
    FUN_00403cb0(param_2,*(undefined4 **)(*(int *)(param_1 + 4) + 8));
  }
  return;
}


