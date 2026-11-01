
/* ==== FUN_0042d4c8 @ 0042d4c8 ==== 
 * signature: undefined __register FUN_0042d4c8(int * param_1, int param_2)
 * body: 0042d4c8-0042d4df
 */

void FUN_0042d4c8(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16]) {
    FUN_0042d494(param_1);
    param_1[0x16] = param_2;
  }
  return;
}


