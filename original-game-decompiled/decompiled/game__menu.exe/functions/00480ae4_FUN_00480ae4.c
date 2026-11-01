
/* ==== FUN_00480ae4 @ 00480ae4 ==== 
 * signature: undefined4 __register FUN_00480ae4(int param_1)
 * body: 00480ae4-00480b06
 */

undefined4 FUN_00480ae4(int param_1)

{
  if (param_1 == 0x200000) {
    return 0;
  }
  if (param_1 != 0x800000) {
    if (param_1 + -0x1000000 != 0) {
      return CONCAT31((int3)((uint)(param_1 + -0x1000000) >> 8),1);
    }
    return 2;
  }
  return 1;
}


