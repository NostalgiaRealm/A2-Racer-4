
/* ==== FUN_004a1bfc @ 004a1bfc ==== 
 * signature: undefined __register FUN_004a1bfc(int param_1)
 * body: 004a1bfc-004a1c33
 */

void FUN_004a1bfc(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      FUN_00402f9c(*(int **)(param_1 + (uint)bVar1 * 0x10 + 0x1fc + (uint)bVar2 * 4));
      bVar2 = bVar2 + 1;
    } while (bVar2 != 3);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  return;
}


