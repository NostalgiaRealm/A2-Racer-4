
/* ==== FUN_00536460 @ 00536460 ==== 
 * signature: undefined __cdecl FUN_00536460(double * param_1, double * param_2, int param_3)
 * body: 00536460-005366e1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00536460(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  int *piVar2;
  int *piVar3;
  double *pdVar4;
  double *unaff_EDI;
  double *pdVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (DAT_0074c008 + -1 == DAT_0074cd50) {
    DAT_0074be68 = DAT_0074bff0;
    DAT_0074c788 = DAT_0074bff0;
  }
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_nonconvex__merge___d_fo_005c60e8);
  }
  pdVar4 = param_2;
  if (((ulonglong)param_1[10] & 0x200) == 0) {
    pdVar4 = param_1;
    param_1 = param_2;
  }
  pdVar5 = param_1;
  piVar2 = (int *)FUN_00535190((int *)param_1,(double *)&local_38,&local_20,&local_28,unaff_EDI);
  piVar3 = (int *)FUN_00535190((int *)pdVar4,(double *)&local_30,&local_10,&local_18,pdVar5);
  if ((double)CONCAT44(uStack_2c,local_30) <= (double)CONCAT44(uStack_34,local_38)) {
    if (((DAT_0074be1c == 0) || (((ulonglong)pdVar4[10] & 0x200) != 0)) ||
       (((local_20 < -_DAT_0074be88 || (_DAT_0074c678 < local_28)) &&
        ((double)CONCAT44(uStack_2c,local_30) <= (double)CONCAT44(uStack_34,local_38) * 1.5)))) {
      FUN_00537280((int *)pdVar4,piVar3,&local_10,&local_18,(int *)0x0);
      dVar1 = (double)CONCAT44(uStack_2c,local_30);
    }
    else {
      _DAT_0074c838 = _DAT_0074c838 + (double)CONCAT44(uStack_34,local_38);
      _DAT_0074c828 = _DAT_0074c828 + 1;
      if ((double)CONCAT44(_DAT_0074c834,_DAT_0074c830) < (double)CONCAT44(uStack_34,local_38)) {
        _DAT_0074c830 = local_38;
        _DAT_0074c834 = uStack_34;
      }
      if (1 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_nonconvex__avoid_mergin_005c608c);
      }
      FUN_00537280((int *)param_1,piVar2,&local_20,&local_28,(int *)0x0);
      dVar1 = (double)CONCAT44(uStack_34,local_38);
    }
  }
  else {
    FUN_00537280((int *)param_1,piVar2,&local_20,&local_28,(int *)0x0);
    dVar1 = (double)CONCAT44(uStack_34,local_38);
  }
  if (DAT_0074bf80 != 0) {
    if (param_3 == 2) {
      _DAT_0074c7e0 = _DAT_0074c7e0 + dVar1;
      DAT_0074c7d0._0_4_ = (int)DAT_0074c7d0 + 1;
      if (_DAT_0074c7d8 < dVar1) {
        _DAT_0074c7d8 = dVar1;
        return;
      }
    }
    else if (param_3 == 3) {
      _DAT_0074c880 = _DAT_0074c880 + dVar1;
      _DAT_0074c870 = _DAT_0074c870 + 1;
      if (_DAT_0074c878 < dVar1) {
        _DAT_0074c878 = dVar1;
        return;
      }
    }
    else {
      _DAT_0074c8a8 = _DAT_0074c8a8 + dVar1;
      _DAT_0074c898 = _DAT_0074c898 + 1;
      if (_DAT_0074c8a0 < dVar1) {
        _DAT_0074c8a0 = dVar1;
        return;
      }
    }
  }
  return;
}


