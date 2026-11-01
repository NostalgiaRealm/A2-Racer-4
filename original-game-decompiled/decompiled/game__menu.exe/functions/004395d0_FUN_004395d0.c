
/* ==== FUN_004395d0 @ 004395d0 ==== 
 * signature: int __register FUN_004395d0(int param_1)
 * body: 004395d0-004395e4
 */

int FUN_004395d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_0041030c(*(int *)(*(int *)(param_1 + 0x4c) + 0x24),param_1);
    return iVar1;
  }
  return -1;
}


