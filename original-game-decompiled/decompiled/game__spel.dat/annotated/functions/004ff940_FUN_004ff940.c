
/* ==== FUN_004ff940 @ 004ff940 ==== 
 * signature: undefined __stdcall FUN_004ff940(void)
 * body: 004ff940-004ff98b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ff940(void)

{
  if ((DAT_0074b9c0 & 1) == 0) {
    DAT_0074b9c0 = DAT_0074b9c0 | 1;
    if (DAT_0074b9bc != &DAT_0074b9c0) {
      if (DAT_0074b9bc != (undefined1 *)0x0) {
        FUN_00559d4e(DAT_0074b9bc);
        DAT_0074b9bc = (undefined1 *)0x0;
      }
      _DAT_0074b9b8 = 0;
    }
    _DAT_0074b9ba = 0;
  }
  return;
}


