
/* ==== FUN_00526a20 @ 00526a20 ==== 
 * signature: undefined __stdcall FUN_00526a20(void)
 * body: 00526a20-00526a7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526a20(void)

{
  if ((((DAT_0074c654 != 0) && (DAT_0074bed8 == 0)) && (DAT_0074be90 == 0)) &&
     (_DAT_0074c668 < 8.988465674311579e+307)) {
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_precision__qhull_restart_beca_005c1218);
    }
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_0074c57c,3);
  }
  return;
}


