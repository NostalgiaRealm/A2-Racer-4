
/* ==== FUN_00401f64 @ 00401f64 ==== 
 * signature: undefined __register FUN_00401f64(void)
 * body: 00401f64-00401fad
 */

void FUN_00401f64(void)

{
  if (0 < (int)DAT_004ac488) {
    if ((int)DAT_004ac488 < 0xc) {
      DAT_004ac434 = 7;
    }
    else {
      *DAT_004ac48c = DAT_004ac488 | 2;
      FUN_00401d50((int)(DAT_004ac48c + 1));
      DAT_004ac48c = (uint *)0x0;
      DAT_004ac488 = 0;
    }
  }
  return;
}


