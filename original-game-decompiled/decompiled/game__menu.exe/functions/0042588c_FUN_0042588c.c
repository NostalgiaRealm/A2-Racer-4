
/* ==== FUN_0042588c @ 0042588c ==== 
 * signature: undefined4 __register FUN_0042588c(int param_1)
 * body: 0042588c-004258a3
 */

undefined4 FUN_0042588c(int param_1)

{
  undefined4 in_EDX;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  return CONCAT31((int3)((uint)in_EDX >> 8),1);
}


