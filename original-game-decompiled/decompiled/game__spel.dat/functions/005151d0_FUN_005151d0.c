
/* ==== FUN_005151d0 @ 005151d0 ==== 
 * signature: undefined4 __cdecl FUN_005151d0(int param_1, double * param_2, int param_3)
 * body: 005151d0-005152ab
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_005151d0(int param_1,double *param_2,int param_3)

{
  double dVar1;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (((*(uint *)(param_1 + 0x50) & 0x8000) != 0) && (param_2 == (double *)0x0)) {
    return 0;
  }
  DAT_0074c950 = DAT_0074c950 + 1;
  FUN_005273a0(DAT_0074c5f0,param_1,(double *)&local_8);
  dVar1 = (double)CONCAT44(uStack_4,local_8);
  if (param_2 != (double *)0x0) {
    *param_2 = dVar1;
  }
  if (param_3 == 0) {
    if (0.0 <= dVar1) goto LAB_00515250;
  }
  else if (-_DAT_0074c490 < dVar1) {
LAB_00515250:
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x8000;
    DAT_0074ca48 = DAT_0074ca48 + 1;
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkflipped__facet_f_d_is_fl_005ba3ec);
    }
    FUN_00526a20();
    return 0;
  }
  return 1;
}


