
/* ==== FUN_004a36bc @ 004a36bc ==== 
 * signature: undefined __register FUN_004a36bc(int param_1, int param_2)
 * body: 004a36bc-004a36d1
 */

void FUN_004a36bc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2e4)) {
    *(int *)(param_1 + 0x2e4) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  return;
}


