
/* ==== FUN_00401cb0 @ 00401cb0 ==== 
 * signature: undefined __register FUN_00401cb0(uint * param_1, uint param_2)
 * body: 00401cb0-00401cd7
 */

void FUN_00401cb0(uint *param_1,uint param_2)

{
  if (0xb < (int)param_2) {
    *param_1 = param_2 | 2;
    FUN_00401c8c((int)(param_1 + 1));
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
  }
  *(uint *)((int)param_1 + param_2) = *(uint *)((int)param_1 + param_2) & 0xfffffffe;
  return;
}


