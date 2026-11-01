
/* ==== FUN_0040161a @ 0040161a ==== 
 * signature: undefined __cdecl FUN_0040161a(undefined4 * param_1, undefined4 * param_2)
 * body: 0040161a-00401633
 */

void __cdecl FUN_0040161a(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


