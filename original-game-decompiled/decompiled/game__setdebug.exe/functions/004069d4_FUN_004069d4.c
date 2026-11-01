
/* ==== FUN_004069d4 @ 004069d4 ==== 
 * signature: undefined __register FUN_004069d4(undefined4 param_1, int * param_2)
 * body: 004069d4-004069e7
 */

void FUN_004069d4(undefined4 param_1,int *param_2)

{
  short local_4;
  short sStack_2;
  
  local_4 = (short)param_1;
  *param_2 = (int)local_4;
  sStack_2 = (short)((uint)param_1 >> 0x10);
  param_2[1] = (int)sStack_2;
  return;
}


