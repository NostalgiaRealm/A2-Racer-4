
/* ==== FUN_004f1c10 @ 004f1c10 ==== 
 * signature: undefined __stdcall FUN_004f1c10(void)
 * body: 004f1c10-004f1c38
 */

void FUN_004f1c10(void)

{
  if ((DAT_0074b994 != (int *)0x0) && (DAT_0074b998 == 1)) {
    (**(code **)(*DAT_0074b994 + 8))(DAT_0074b994);
    DAT_0074b994 = (int *)0x0;
  }
  DAT_0074b998 = DAT_0074b998 + -1;
  return;
}


