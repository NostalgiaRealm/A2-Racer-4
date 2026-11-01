
/* ==== FUN_0052bd70 @ 0052bd70 ==== 
 * signature: undefined __cdecl FUN_0052bd70(int param_1)
 * body: 0052bd70-0052bd9a
 */

void __cdecl FUN_0052bd70(int param_1)

{
  if (param_1 < 1) {
    DAT_005c1fd0 = 1;
    return;
  }
  DAT_005c1fd0 = 0x7ffffffe;
  if (param_1 < 0x7fffffff) {
    DAT_005c1fd0 = param_1;
  }
  return;
}


