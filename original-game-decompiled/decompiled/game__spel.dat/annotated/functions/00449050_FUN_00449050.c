
/* ==== FUN_00449050 @ 00449050 ==== 
 * signature: undefined __stdcall FUN_00449050(undefined4 * param_1, int param_2)
 * body: 00449050-00449079
 */

void FUN_00449050(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = puVar1;
  }
  *puVar1 = param_1;
  if (param_2 != 0) {
    puVar1[1] = param_2;
    return;
  }
  puVar1[1] = puVar1;
  return;
}


