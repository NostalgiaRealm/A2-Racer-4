
/* ==== FUN_0043f334 @ 0043f334 ==== 
 * signature: int __register FUN_0043f334(int param_1, int param_2)
 * body: 0043f334-0043f34b
 */

int FUN_0043f334(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0041030c(*(int *)(param_1 + 0x50),param_2);
  }
  return iVar1;
}


