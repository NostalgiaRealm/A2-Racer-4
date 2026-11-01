
/* ==== FUN_0043132c @ 0043132c ==== 
 * signature: undefined __register FUN_0043132c(int param_1)
 * body: 0043132c-00431348
 */

void FUN_0043132c(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + -1;
  if ((*(short *)(param_1 + 0x120) == 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    FUN_0043134c((int *)param_1);
  }
  return;
}


