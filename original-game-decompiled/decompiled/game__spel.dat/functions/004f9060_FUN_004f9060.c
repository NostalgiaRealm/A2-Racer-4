
/* ==== FUN_004f9060 @ 004f9060 ==== 
 * signature: undefined __thiscall FUN_004f9060(void * this, double * param_1, double * param_2)
 * body: 004f9060-004f912d
 */

void __thiscall FUN_004f9060(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004f9030(&local_28,param_2);
  dVar1 = param_1[2];
  dVar2 = param_1[3];
  dVar3 = param_1[1];
  dVar4 = *param_1;
  dVar5 = (local_18 * param_1[3] + local_10 * param_1[2] + local_20 * *param_1) -
          local_28 * param_1[1];
  local_38 = SUB84(dVar5,0);
  uStack_34 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar9 = ((local_10 * param_1[3] - local_28 * *param_1) - local_20 * param_1[1]) -
          local_18 * param_1[2];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar7 = param_1[3];
  dVar8 = param_1[2];
  local_30 = SUB84(dVar9,0);
  *(undefined4 *)((int)this + 0x10) = local_38;
  uStack_2c = (undefined4)((ulonglong)dVar9 >> 0x20);
  *(undefined4 *)((int)this + 0x18) = local_30;
  *(undefined4 *)((int)this + 0x14) = uStack_34;
  *(undefined4 *)((int)this + 0x1c) = uStack_2c;
  *(double *)this = (local_28 * dVar7 + local_18 * dVar6 + local_10 * dVar5) - local_20 * dVar8;
  *(double *)((int)this + 8) =
       (local_10 * dVar3 + local_20 * dVar2 + local_28 * dVar1) - local_18 * dVar4;
  return;
}


