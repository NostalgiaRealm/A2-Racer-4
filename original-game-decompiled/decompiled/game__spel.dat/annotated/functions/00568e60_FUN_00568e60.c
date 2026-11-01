
/* ==== FUN_00568e60 @ 00568e60 ==== 
 * signature: undefined4 __thiscall FUN_00568e60(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 * param_9, undefined4 * param_10, double * param_11, double * param_12)
 * body: 00568e60-005690a3
 */

undefined4 __thiscall
FUN_00568e60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9,undefined4 *param_10,double *param_11,double *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  int iStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_18;
  double dStack_10;
  
  if (param_11 == (double *)0x0) {
    fVar6 = (float10)(*(code *)**(undefined4 **)this)(param_9[5],param_10[5]);
  }
  else {
    fVar6 = (float10)*param_11;
  }
  local_18 = (double)fVar6;
  if (fVar6 <= (float10)(double)CONCAT44(param_2,param_1)) {
    dStack_10 = 1.0 / *(double *)((int)this + 8);
    iVar5 = 0;
    dVar2 = (double)CONCAT44(param_6,param_5) - (double)CONCAT44(param_8,param_7);
    dVar3 = (double)CONCAT44(param_6,param_5);
    while( true ) {
      if (0.0 <= dVar2) {
        return 0;
      }
      lVar7 = __ftol();
      iStack_30 = (int)lVar7;
      if (iStack_30 < 1) {
        iStack_30 = 1;
      }
      iVar5 = iVar5 + iStack_30;
      dVar1 = (double)((float)iStack_30 * 0.005 + (float)dVar3);
      uStack_28 = SUB84(dVar1,0);
      uStack_24 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (param_9[iVar5 + 5] == 0) {
        param_9[iVar5 + 5] = param_9 + iVar5 * 0x20 + 0x1a;
        FUN_004f2c40((void *)*param_9,dVar1,(double *)(param_9 + iVar5 * 0x20 + 0x1a));
      }
      uVar4 = param_9[iVar5 + 5];
      if (param_10[iVar5 + 5] == 0) {
        param_10[iVar5 + 5] = param_10 + iVar5 * 0x20 + 0x1a;
        FUN_004f2c40((void *)*param_10,dVar1,(double *)(param_10 + iVar5 * 0x20 + 0x1a));
      }
      fVar6 = (float10)(*(code *)**(undefined4 **)this)(uVar4,param_10[iVar5 + 5]);
      if ((float10)(double)CONCAT44(param_2,param_1) < fVar6) break;
      if (fVar6 <= (float10)local_18) {
        *param_12 = dVar3;
        return 1;
      }
      dVar2 = dVar1 - (double)CONCAT44(param_8,param_7);
      dVar3 = dVar1;
    }
    if (0.0 < dVar1 - (double)CONCAT44(param_8,param_7)) {
      return 0;
    }
    dStack_10 = (double)fVar6;
    uVar4 = FUN_00568c50(this,param_1,param_2,uStack_28,uStack_24,(double)CONCAT44(param_8,param_7),
                         iVar5,param_9,param_10,&dStack_10,(undefined4 *)param_12);
    return uVar4;
  }
  uVar4 = FUN_00568c50(this,param_1,param_2,param_5,param_6,(double)CONCAT44(param_8,param_7),0,
                       param_9,param_10,&local_18,(undefined4 *)param_12);
  return uVar4;
}


