
/* ==== FUN_0043bc19 @ 0043bc19 ==== 
 * signature: undefined __stdcall FUN_0043bc19(void)
 * body: 0043bc19-0043bc1f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bc19(void)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 auStack_c [3];
  
  FUN_004390d0(1);
  FUN_0043b680();
  switch(DAT_0059a190) {
  case 0:
    _DAT_0071277c = 6;
    break;
  case 1:
    _DAT_0071277c = 0xc;
    break;
  case 2:
    _DAT_0071277c = 7;
    break;
  case 0xffffffff:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__No_game_over_mode_set__0059a36c);
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Illegal_game_over_mode_s_0059a3b0);
  }
  FUN_004a6800(0x7128b0);
  lVar2 = __ftol();
  _DAT_006c39e0 = (undefined4)lVar2;
  _DAT_006c39e8 = 0;
  pfVar1 = (float *)FUN_004b11c0((void *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178),
                                 auStack_c);
  _DAT_006c39f4 = *pfVar1;
  DAT_006c39f8 = pfVar1[1];
  _DAT_006c39fc = pfVar1[2];
  DAT_006c39ec = 0xfffffc00;
  _DAT_006c39e4 = SQRT(_DAT_006c39f4 * _DAT_006c39f4 + _DAT_006c39fc * _DAT_006c39fc);
  lVar2 = __ftol();
  DAT_006c39f0 = (int)lVar2;
  return;
}


