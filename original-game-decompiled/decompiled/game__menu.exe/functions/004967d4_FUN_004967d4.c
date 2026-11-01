
/* ==== FUN_004967d4 @ 004967d4 ==== 
 * signature: undefined4 __register FUN_004967d4(int param_1)
 * body: 004967d4-004967fa
 */

undefined4 FUN_004967d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 900) + 0x2c);
  if ((((iVar1 != 0) && (iVar1 != 6)) && (iVar1 != 1)) && ((iVar1 != 3 && (iVar1 != 4)))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


