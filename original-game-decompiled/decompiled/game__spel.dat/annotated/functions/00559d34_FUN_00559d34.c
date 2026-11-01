
/* ==== FUN_00559d34 @ 00559d34 ==== 
 * signature: undefined __cdecl FUN_00559d34(undefined4 * param_1, undefined4 * param_2)
 * body: 00559d34-00559d4d
 */

void __cdecl FUN_00559d34(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


