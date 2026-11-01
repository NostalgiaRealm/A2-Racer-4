
/* ==== FUN_0054fb3b @ 0054fb3b ==== 
 * signature: undefined2 * __stdcall FUN_0054fb3b(undefined2 * param_1, undefined2 * param_2, undefined4 param_3, undefined1 * param_4)
 * body: 0054fb3b-0054fb66
 */

undefined2 *
FUN_0054fb3b(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    in_EAX = FUN_0054eb1f(CONCAT22((short)((uint)in_EAX >> 0x10),*param_1));
    *param_4 = (char)in_EAX;
    param_4 = param_4 + 1;
  }
  return param_1;
}


