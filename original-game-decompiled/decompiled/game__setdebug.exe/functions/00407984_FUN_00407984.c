
/* ==== FUN_00407984 @ 00407984 ==== 
 * signature: undefined __register FUN_00407984(uint param_1, uint param_2, undefined2 * param_3, undefined2 * param_4)
 * body: 00407984-0040799f
 */

void FUN_00407984(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}


