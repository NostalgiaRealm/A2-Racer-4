
/* ==== FUN_004361a0 @ 004361a0 ==== 
 * signature: undefined __register FUN_004361a0(int param_1, short param_2)
 * body: 004361a0-004361b5
 */

void FUN_004361a0(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 0x60)) &&
     (*(short *)(param_1 + 0x60) = param_2, *(char *)(param_1 + 0x62) != '\0')) {
    FUN_0043608c(param_1);
  }
  return;
}


