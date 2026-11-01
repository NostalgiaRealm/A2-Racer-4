
/* ==== FUN_00411b38 @ 00411b38 ==== 
 * signature: int __register FUN_00411b38(int param_1)
 * body: 00411b38-00411b4c
 */

int FUN_00411b38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00410ad4(*(int **)(param_1 + 4));
  return iVar1 - (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10));
}


