
/* ==== FUN_0053a280 @ 0053a280 ==== 
 * signature: undefined4 __cdecl FUN_0053a280(int * param_1)
 * body: 0053a280-0053a2b7
 */

undefined4 __cdecl FUN_0053a280(int *param_1)

{
  int local_8 [2];
  
  (**(code **)(*param_1 + 8))();
  if ((local_8 == (int *)param_1[2]) && (local_8[0] == param_1[3])) {
    return 1;
  }
  return 0;
}


