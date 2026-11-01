
/* ==== FUN_0050afb0 @ 0050afb0 ==== 
 * signature: float10 __thiscall FUN_0050afb0(int param_1, int param_2, double param_3, double param_4)
 * body: 0050afb0-0050b245
 */

float10 __thiscall FUN_0050afb0(int param_1,int param_2,double param_3,double param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double *local_18;
  
  iVar2 = FUN_0050aef0(SUB84(param_3 + param_3,0),(uint)((ulonglong)(param_3 + param_3) >> 0x20));
  iVar2 = iVar2 + 1;
  if (iVar2 < -0x28) {
    iVar2 = -0x28;
  }
  local_18 = (double *)(param_1 + (0x29 - iVar2) * 8);
  do {
    dVar1 = *local_18;
    FUN_005589b8(((double)*(float *)(param_2 + 0x10) - param_3) * dVar1);
    lVar3 = __ftol();
    FUN_00559d7d((double)((*(float *)(param_2 + 0x10) + (float)param_3) * (float)dVar1));
    lVar4 = __ftol();
    if ((int)lVar4 <= (int)lVar3 + 2) {
      FUN_005589b8((double)((*(float *)(param_2 + 0x14) - (float)param_3) * (float)dVar1));
      lVar4 = __ftol();
      FUN_00559d7d((double)((*(float *)(param_2 + 0x14) + (float)param_3) * (float)dVar1));
      lVar5 = __ftol();
      if ((int)lVar5 <= (int)lVar4 + 2) {
        FUN_005589b8((double)((*(float *)(param_2 + 0x18) - (float)param_3) * (float)dVar1));
        lVar5 = __ftol();
        FUN_00559d7d((double)((*(float *)(param_2 + 0x18) + (float)param_3) * (float)dVar1));
        lVar6 = __ftol();
        if ((int)lVar6 <= (int)lVar5 + 2) {
          *(int *)(param_1 + 0x288) = (int)lVar3;
          *(int *)(param_1 + 0x294) = iVar2 + -1;
          *(int *)(param_1 + 0x28c) = (int)lVar4;
          *(int *)(param_1 + 0x290) = (int)lVar5;
          *(int *)(param_1 + 0x298) = iVar2;
          if (param_4 <= param_3) {
            return (float10)param_3;
          }
          dVar1 = *(double *)(param_1 + (0x28 - iVar2) * 8);
          FUN_005589b8(((double)*(float *)(param_2 + 0x10) - param_4) * dVar1);
          lVar3 = __ftol();
          FUN_00559d7d((double)((*(float *)(param_2 + 0x10) + (float)param_4) * (float)dVar1));
          lVar4 = __ftol();
          if ((int)lVar3 + 2 < (int)lVar4) {
            return (float10)param_3;
          }
          FUN_005589b8((double)((*(float *)(param_2 + 0x14) - (float)param_4) * (float)dVar1));
          lVar4 = __ftol();
          FUN_00559d7d((double)((*(float *)(param_2 + 0x14) + (float)param_4) * (float)dVar1));
          lVar5 = __ftol();
          if ((int)lVar4 + 2 < (int)lVar5) {
            return (float10)param_3;
          }
          FUN_005589b8((double)((*(float *)(param_2 + 0x18) - (float)param_4) * (float)dVar1));
          lVar5 = __ftol();
          FUN_00559d7d((double)((*(float *)(param_2 + 0x18) + (float)param_4) * (float)dVar1));
          lVar6 = __ftol();
          if ((int)lVar5 + 2 < (int)lVar6) {
            return (float10)param_3;
          }
          *(int *)(param_1 + 0x288) = (int)lVar3;
          *(int *)(param_1 + 0x298) = iVar2 + 1;
          *(int *)(param_1 + 0x28c) = (int)lVar4;
          *(int *)(param_1 + 0x290) = (int)lVar5;
          *(int *)(param_1 + 0x294) = iVar2;
          return (float10)param_4;
        }
      }
    }
    iVar2 = iVar2 + 1;
    local_18 = local_18 + -1;
  } while( true );
}


