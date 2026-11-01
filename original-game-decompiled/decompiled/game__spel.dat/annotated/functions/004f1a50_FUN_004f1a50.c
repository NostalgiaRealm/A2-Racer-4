
/* ==== FUN_004f1a50 @ 004f1a50 ==== 
 * signature: undefined4 __stdcall FUN_004f1a50(undefined4 param_1, int param_2)
 * body: 004f1a50-004f1a84
 */

undefined4 FUN_004f1a50(undefined4 param_1,int param_2)

{
  if (DAT_0074b990 == DAT_0074b98c) {
    FUN_004f1e50(param_2);
    return 0;
  }
  DAT_0074b990 = DAT_0074b990 + 1;
  return 1;
}


