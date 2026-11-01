
/* ==== FUN_004275cd @ 004275cd ==== 
 * signature: bool __register FUN_004275cd(int param_1, int param_2)
 * body: 004275ca-004275da
 */

bool FUN_004275cd(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


