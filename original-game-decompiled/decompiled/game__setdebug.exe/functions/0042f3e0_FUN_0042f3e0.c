
/* ==== FUN_0042f3e0 @ 0042f3e0 ==== 
 * signature: int __register FUN_0042f3e0(int param_1)
 * body: 0042f3e0-0042f3f4
 */

int FUN_0042f3e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_0040f080(*(int *)(*(int *)(param_1 + 0x4c) + 0x24),param_1);
    return iVar1;
  }
  return -1;
}


