
/* ==== FUN_00530830 @ 00530830 ==== 
 * signature: undefined __cdecl FUN_00530830(int * param_1, int * param_2, int param_3, double param_4)
 * body: 00530830-005309fb
 */

void __cdecl FUN_00530830(int *param_1,int *param_2,int param_3,double param_4)

{
  double *pdVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  double local_10;
  
  local_14 = FUN_00514af0(param_2);
  FUN_00558953(param_1,(byte *)s___OFF__d_1_1___f_d_005c38d8);
  if (param_4 == 0.0) {
    local_1c = param_2;
  }
  else {
    local_1c = (int *)FUN_00514b50(local_14);
    if (param_2 != (int *)0x0) {
      pdVar1 = (double *)param_2[1];
      piVar3 = param_2 + 2;
      if (pdVar1 != (double *)0x0) {
        local_10 = -param_4;
        do {
          iVar2 = FUN_005288f0(pdVar1,param_3,local_10);
          FUN_00514020((int *)&local_1c,iVar2);
          pdVar1 = (double *)*piVar3;
          piVar3 = piVar3 + 1;
        } while (pdVar1 != (double *)0x0);
      }
    }
  }
  if (local_1c != (int *)0x0) {
    local_18 = (undefined4 *)local_1c[1];
    local_10 = (double)CONCAT44(local_10._4_4_,local_1c + 2);
    if (local_18 != (undefined4 *)0x0) {
      do {
        iVar2 = 0;
        if (0 < DAT_0074c03c) {
          do {
            if (iVar2 == DAT_0074be48) {
              FUN_00558953(param_1,&DAT_005c3400);
            }
            else {
              FUN_00558953(param_1,(byte *)s__8_4g_005c38d0);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < DAT_0074c03c);
        }
        if (local_1c != param_2) {
          FUN_0051e2b0(local_18,DAT_0074c5f4);
        }
        FUN_00558953(param_1,&DAT_005ae60c);
        local_18 = (undefined4 *)*local_10._0_4_;
        local_10 = (double)CONCAT44(local_10._4_4_,local_10._0_4_ + 1);
      } while (local_18 != (undefined4 *)0x0);
      local_18 = (undefined4 *)0x0;
    }
  }
  if (local_1c != param_2) {
    FUN_00514ba0((int *)&local_1c);
  }
  FUN_00558953(param_1,&DAT_005c38cc);
  iVar2 = local_14;
  iVar4 = 0;
  if (0 < local_14) {
    do {
      FUN_00558953(param_1,&DAT_005c38cc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_1_0___005c38b0);
  return;
}


