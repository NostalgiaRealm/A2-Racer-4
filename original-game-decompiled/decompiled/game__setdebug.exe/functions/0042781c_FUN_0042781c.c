
/* ==== FUN_0042781c @ 0042781c ==== 
 * signature: int __register FUN_0042781c(int param_1)
 * body: 0042781c-0042783a
 */

int FUN_0042781c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 8);
  }
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x180) + 8);
  }
  return iVar1;
}


