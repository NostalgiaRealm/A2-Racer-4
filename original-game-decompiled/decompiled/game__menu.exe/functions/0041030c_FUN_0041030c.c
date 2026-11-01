
/* ==== FUN_0041030c @ 0041030c ==== 
 * signature: int __register FUN_0041030c(int param_1, int param_2)
 * body: 0041030c-0041032a
 */

int FUN_0041030c(int param_1,int param_2)

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


