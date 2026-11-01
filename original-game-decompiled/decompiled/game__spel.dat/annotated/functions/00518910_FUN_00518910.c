
/* ==== FUN_00518910 @ 00518910 ==== 
 * signature: undefined __stdcall FUN_00518910(void)
 * body: 00518910-005189a8
 */

void FUN_00518910(void)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double local_10;
  
  pdVar3 = (double *)0x0;
  local_10 = -1.79769313486232e+308;
  pdVar2 = DAT_0074c600;
  if (DAT_0074c600 != (double *)0x0) {
    do {
      pdVar1 = *(double **)(pdVar2 + 6);
      if (pdVar1 == (double *)0x0) break;
      if ((*(int *)(pdVar2 + 8) != 0) && (local_10 < *pdVar2)) {
        pdVar3 = pdVar2;
        local_10 = *pdVar2;
      }
      pdVar2 = pdVar1;
    } while (pdVar1 != (double *)0x0);
    if (pdVar3 != (double *)0x0) {
      FUN_00516530((int)pdVar3);
      FUN_0051a280((int)pdVar3,&DAT_0074c608);
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_furthestnext__made_f_d_next_f_005bbcec);
      }
    }
  }
  return;
}


