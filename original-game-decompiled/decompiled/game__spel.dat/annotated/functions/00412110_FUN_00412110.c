
/* ==== FUN_00412110 @ 00412110 ==== 
 * signature: undefined __cdecl FUN_00412110(undefined4 * param_1, undefined4 * param_2)
 * body: 00412110-0041212c
 */

void __cdecl FUN_00412110(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}


