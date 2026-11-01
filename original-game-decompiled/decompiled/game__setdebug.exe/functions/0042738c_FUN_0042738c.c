
/* ==== FUN_0042738c @ 0042738c ==== 
 * signature: undefined __register FUN_0042738c(int param_1)
 * body: 0042738c-004273a8
 */

void FUN_0042738c(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + -1;
  if ((*(short *)(param_1 + 0x120) == 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    FUN_004273ac((int *)param_1);
  }
  return;
}


