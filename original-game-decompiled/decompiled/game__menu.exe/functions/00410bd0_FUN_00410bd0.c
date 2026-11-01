
/* ==== FUN_00410bd0 @ 00410bd0 ==== 
 * signature: int __register FUN_00410bd0(int param_1)
 * body: 00410bd0-00410be4
 */

int FUN_00410bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_0041030c(*(int *)(*(int *)(param_1 + 4) + 8),param_1);
    return iVar1;
  }
  return -1;
}


