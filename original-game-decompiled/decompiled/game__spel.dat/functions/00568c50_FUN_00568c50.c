
/* ==== FUN_00568c50 @ 00568c50 ==== 
 * signature: undefined4 __thiscall FUN_00568c50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, double param_5, int param_6, undefined4 * param_7, undefined4 * param_8, double * param_9, undefined4 * param_10)
 * body: 00568c50-00568e5f
 */

undefined4 __thiscall
FUN_00568c50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5,int param_6,undefined4 *param_7,undefined4 *param_8,double *param_9,
            undefined4 *param_10)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  if (param_9 == (double *)0x0) {
    fVar5 = (float10)(*(code *)**(undefined4 **)this)(param_7[5],param_8[5]);
    local_10 = (double)fVar5;
  }
  else {
    local_10 = *param_9;
  }
  if ((double)CONCAT44(param_2,param_1) < local_10) {
    local_18 = param_3;
    uStack_14 = param_4;
    while( true ) {
      if (0.0 < ((double)CONCAT44(uStack_14,local_18) - param_5) +
                (local_10 - (double)CONCAT44(param_2,param_1)) * *(double *)((int)this + 0x10)) {
        return 0;
      }
      lVar6 = __ftol();
      iVar3 = (int)lVar6;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      param_6 = param_6 + iVar3;
      dVar1 = (double)((float)iVar3 * 0.005 + (float)(double)CONCAT44(uStack_14,local_18));
      local_20 = SUB84(dVar1,0);
      uStack_1c = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (param_7[param_6 + 5] == 0) {
        param_7[param_6 + 5] = param_7 + param_6 * 0x20 + 0x1a;
        FUN_004f2c40((void *)*param_7,dVar1,(double *)(param_7 + param_6 * 0x20 + 0x1a));
      }
      uVar2 = param_7[param_6 + 5];
      if (param_8[param_6 + 5] == 0) {
        param_8[param_6 + 5] = param_8 + param_6 * 0x20 + 0x1a;
        FUN_004f2c40((void *)*param_8,dVar1,(double *)(param_8 + param_6 * 0x20 + 0x1a));
      }
      fVar5 = (float10)(*(code *)**(undefined4 **)this)(uVar2,param_8[param_6 + 5]);
      if (fVar5 <= (float10)(double)CONCAT44(param_2,param_1)) break;
      if (param_6 == 0x14) {
        return 0;
      }
      local_18 = local_20;
      uStack_14 = uStack_1c;
      local_10 = (double)fVar5;
    }
    pdVar4 = (double *)
             FUN_00568ad0(this,(undefined4 *)&local_10,local_18,uStack_14,local_20,uStack_1c,
                          (double)CONCAT44(param_2,param_1),local_10,(double)fVar5,(void *)*param_7,
                          (void *)*param_8);
    uVar2 = *(undefined4 *)((int)pdVar4 + 4);
    if (0.0 < *pdVar4 - param_5) {
      return 0;
    }
    *param_10 = *(undefined4 *)pdVar4;
    param_10[1] = uVar2;
    return 1;
  }
  *param_10 = param_3;
  param_10[1] = param_4;
  return 1;
}


