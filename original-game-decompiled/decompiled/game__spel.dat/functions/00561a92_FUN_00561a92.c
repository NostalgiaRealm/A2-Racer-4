
/* ==== FUN_00561a92 @ 00561a92 ==== 
 * signature: undefined __stdcall FUN_00561a92(void)
 * body: 00561a92-00561aca
 */

void FUN_00561a92(void)

{
  if ((DAT_0074dc58 == 1) || ((DAT_0074dc58 == 0 && (DAT_005c7bd4 == 1)))) {
    FUN_00561acb(0xfc);
    if (DAT_0074de74 != (code *)0x0) {
      (*DAT_0074de74)();
    }
    FUN_00561acb(0xff);
  }
  return;
}


