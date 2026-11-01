
/* ==== FUN_004080d8 @ 004080d8 ==== 
 * signature: undefined __register FUN_004080d8(uint param_1, uint param_2, undefined2 * param_3, undefined2 * param_4)
 * body: 004080d8-004080f3
 */

void FUN_004080d8(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}


