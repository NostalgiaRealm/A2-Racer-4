
/* ==== FUN_0043a910 @ 0043a910 ==== 
 * signature: undefined __stdcall FUN_0043a910(void)
 * body: 0043a910-0043a977
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a910(void)

{
  DAT_006c35c0 = DAT_006c35c0 + 1;
  DAT_006c35b0 = DAT_00599c80;
  DAT_006c35b8 = DAT_006c3568;
  if (DAT_00599c80 == 3) {
    *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x54 + DAT_00715e50) = 1;
  }
  FUN_0043a690();
  FUN_0043a540();
  DAT_006c35ac = 0;
  FUN_0043a5c0();
  _DAT_006c35bc = GetTickCount();
  return;
}


