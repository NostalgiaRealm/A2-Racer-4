
/* ==== FUN_0052bfa0 @ 0052bfa0 ==== 
 * signature: undefined __cdecl FUN_0052bfa0(int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 0052bfa0-0052c0cc
 */

void __cdecl
FUN_0052bfa0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  double *pdVar1;
  undefined4 unaff_EBP;
  float10 fVar2;
  int local_1c;
  double local_18;
  double local_10;
  undefined4 uStack_8;
  
  local_1c = 0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_scalelast__scale_last_coordin_005c2a84);
  }
  DAT_0074c718 = param_4;
  local_18 = (double)CONCAT44(param_7,param_6) - (double)CONCAT44(param_5,param_4);
  DAT_0074c71c = param_5;
  DAT_0074c720 = param_6;
  DAT_0074c724 = param_7;
  DAT_0074c728 = param_8;
  DAT_0074c72c = param_9;
  fVar2 = FUN_0052a0c0((double)CONCAT44(param_9,param_8),local_18,
                       (double)CONCAT44(DAT_0074c4bc,DAT_0074c4b8),&local_1c);
  local_10 = (double)fVar2;
  if (local_1c != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__last_coordina_005c2a08);
    FUN_0051e8e0(1,(int *)0x0);
  }
  pdVar1 = (double *)(param_3 * 8 + -8 + param_1);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *pdVar1 = (double)CONCAT44(unaff_EBP,uStack_8) * *pdVar1 +
              -(((double)CONCAT44(param_5,param_4) * (double)CONCAT44(param_9,param_8)) / local_10);
    pdVar1 = pdVar1 + param_3;
  }
  return;
}


