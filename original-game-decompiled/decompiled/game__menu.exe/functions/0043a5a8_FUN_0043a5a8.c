
/* ==== FUN_0043a5a8 @ 0043a5a8 ==== 
 * signature: int __register FUN_0043a5a8(int param_1, int param_2)
 * body: 0043a5a8-0043a5b7
 */

int FUN_0043a5a8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    return param_2;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  return iVar1;
}


