
/* ==== FUN_005189b0 @ 005189b0 ==== 
 * signature: undefined __cdecl FUN_005189b0(undefined4 * param_1)
 * body: 005189b0-00518a9d
 */

void __cdecl FUN_005189b0(undefined4 *param_1)

{
  int iVar1;
  double *pdVar2;
  int *piVar3;
  double *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = param_1[0x10];
  local_1c = (double *)0x0;
  local_18 = 0xffffffff;
  uStack_14 = 0xffefffff;
  if (iVar1 != 0) {
    pdVar2 = *(double **)(iVar1 + 4);
    piVar3 = (int *)(iVar1 + 4);
    if (pdVar2 != (double *)0x0) {
      do {
        piVar3 = piVar3 + 1;
        FUN_005273a0(pdVar2,(int)param_1,(double *)&local_10);
        DAT_0074c868 = DAT_0074c868 + 1;
        if ((double)CONCAT44(uStack_14,local_18) < (double)CONCAT44(uStack_c,local_10)) {
          local_18 = local_10;
          uStack_14 = uStack_c;
          local_1c = pdVar2;
        }
        pdVar2 = (double *)*piVar3;
      } while (pdVar2 != (double *)0x0);
      if (local_1c != (double *)0x0) {
        FUN_00514280((int *)param_1[0x10],0);
        FUN_00514020(param_1 + 0x10,0);
        *param_1 = local_18;
        param_1[1] = uStack_14;
      }
    }
  }
  param_1[0x14] = param_1[0x14] & 0xfffdffff;
  if (2 < DAT_0074be68) {
    FUN_005164c0(0);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_furthestout__p_d_is_furthest_o_005bbd20);
  }
  return;
}


