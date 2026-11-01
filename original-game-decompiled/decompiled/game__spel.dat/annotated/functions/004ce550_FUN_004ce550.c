
/* ==== FUN_004ce550 @ 004ce550 ==== 
 * signature: undefined __stdcall FUN_004ce550(void)
 * body: 004ce550-004ce5c0
 */

void FUN_004ce550(void)

{
  if (DAT_0074b190 != 0) {
    if (DAT_0074b194 != 0) {
      DAT_0074b194 = 0;
      (**(code **)(*DAT_0074b188 + 0x20))(DAT_0074b188);
      (**(code **)(*DAT_0074b188 + 8))(DAT_0074b188);
    }
    if (DAT_0074b198 != 0) {
      DAT_0074b198 = 0;
      (**(code **)(*DAT_0074b084 + 0x20))(DAT_0074b084);
      (**(code **)(*DAT_0074b084 + 8))(DAT_0074b084);
    }
    (**(code **)(*DAT_0074b18c + 8))(DAT_0074b18c);
    DAT_0074b190 = 0;
  }
  return;
}


