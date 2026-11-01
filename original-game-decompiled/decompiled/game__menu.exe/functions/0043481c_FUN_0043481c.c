
/* ==== FUN_0043481c @ 0043481c ==== 
 * signature: int __register FUN_0043481c(int param_1)
 * body: 0043481c-00434831
 */

int FUN_0043481c(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = FUN_004349e0(*(int **)(param_1 + 0x24));
    return iVar1;
  }
  return *(int *)(param_1 + 0x164);
}


