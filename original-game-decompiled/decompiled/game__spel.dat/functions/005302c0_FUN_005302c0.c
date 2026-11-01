
/* ==== FUN_005302c0 @ 005302c0 ==== 
 * signature: undefined __cdecl FUN_005302c0(int * param_1, int param_2, int param_3)
 * body: 005302c0-005303d3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_005302c0(int *param_1,int param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  double *local_28;
  double *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  FUN_0052da40(param_2,&local_24,&local_28,&local_10);
  FUN_0052dc70(param_2,(double *)&local_20,(double *)&local_18);
  if (DAT_0074bf00 == 0) {
    if (DAT_0074bef8 != 0) goto LAB_00530337;
    if (DAT_0074bef0 == 0) goto LAB_00530318;
  }
  else {
LAB_00530318:
    FUN_005303e0(param_1,local_24,local_28,param_2,(double)CONCAT44(uStack_1c,local_20));
LAB_00530337:
    if ((DAT_0074bef0 == 0) &&
       (((DAT_0074bef8 != 0 || (DAT_0074bf00 != 0)) ||
        ((double)CONCAT44(uStack_1c,local_20) - (double)CONCAT44(uStack_14,local_18) <=
         _DAT_0074c498 * 0.004)))) goto LAB_005303a9;
  }
  iVar2 = 3;
  pdVar1 = (double *)(param_3 + 0x10);
  do {
    iVar2 = iVar2 + -1;
    *pdVar1 = 1.0 - *pdVar1;
    pdVar1 = pdVar1 + -1;
  } while (iVar2 != 0);
  FUN_005303e0(param_1,local_24,local_28,param_2,(double)CONCAT44(uStack_14,local_18));
LAB_005303a9:
  FUN_0051e2b0((undefined4 *)local_28,DAT_0074c5f4);
  FUN_0051e2b0((undefined4 *)local_24,DAT_0074c5f4);
  return;
}


