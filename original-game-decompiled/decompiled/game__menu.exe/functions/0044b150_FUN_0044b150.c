
/* ==== FUN_0044b150 @ 0044b150 ==== 
 * signature: int __register FUN_0044b150(int param_1)
 * body: 0044b150-0044b168
 */

int FUN_0044b150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_004ab760)();
    return iVar1;
  }
  return iVar1;
}


