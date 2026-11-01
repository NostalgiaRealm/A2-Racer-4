
/* ==== FUN_00401ea0 @ 00401ea0 ==== 
 * signature: undefined __register FUN_00401ea0(void)
 * body: 00401ea0-00401ee9
 */

void FUN_00401ea0(void)

{
  if (0 < (int)DAT_00447480) {
    if ((int)DAT_00447480 < 0xc) {
      DAT_0044742c = 7;
    }
    else {
      *DAT_00447484 = DAT_00447480 | 2;
      FUN_00401c8c((int)(DAT_00447484 + 1));
      DAT_00447484 = (uint *)0x0;
      DAT_00447480 = 0;
    }
  }
  return;
}


