
/* ==== FUN_0040f080 @ 0040f080 ==== 
 * signature: int __register FUN_0040f080(int param_1, int param_2)
 * body: 0040f080-0040f09e
 */

int FUN_0040f080(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0;
      (iVar1 < *(int *)(param_1 + 8) && (param_2 != *(int *)(*(int *)(param_1 + 4) + iVar1 * 4)));
      iVar1 = iVar1 + 1) {
  }
  if (iVar1 == *(int *)(param_1 + 8)) {
    iVar1 = -1;
  }
  return iVar1;
}


