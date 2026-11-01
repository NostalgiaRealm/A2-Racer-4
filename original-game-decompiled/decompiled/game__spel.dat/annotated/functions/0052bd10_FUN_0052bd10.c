
/* ==== FUN_0052bd10 @ 0052bd10 ==== 
 * signature: undefined __stdcall FUN_0052bd10(void)
 * body: 0052bd10-0052bd61
 */

void FUN_0052bd10(void)

{
  DAT_005c1fd0 = (DAT_005c1fd0 % 0x1f31d) * 0x41a7 + (DAT_005c1fd0 / 0x1f31d) * -0xb14;
  if (DAT_005c1fd0 < 1) {
    DAT_005c1fd0 = DAT_005c1fd0 + 0x7fffffff;
  }
  return;
}


