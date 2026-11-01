
/* ==== FUN_00528400 @ 00528400 ==== 
 * signature: undefined4 __cdecl FUN_00528400(int param_1)
 * body: 00528400-0052848f
 */

undefined4 __cdecl FUN_00528400(int param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  pdVar1 = (double *)FUN_00528350(*(int **)(param_1 + 0x34));
  DAT_0074c858 = DAT_0074c858 + 1;
  FUN_005273a0(pdVar1,param_1,(double *)&local_8);
  uVar2 = FUN_005288f0(pdVar1,param_1,(double)CONCAT44(local_4,local_8));
  FUN_0051e2b0((undefined4 *)pdVar1,DAT_0074c5f4);
  if (3 < DAT_0074be68) {
    FUN_00514af0(*(int **)(param_1 + 0x34));
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_getcentrum__for_f_d___d_verti_005c1d5c);
  }
  return uVar2;
}


