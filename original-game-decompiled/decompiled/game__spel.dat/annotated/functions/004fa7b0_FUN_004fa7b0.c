
/* ==== FUN_004fa7b0 @ 004fa7b0 ==== 
 * signature: undefined __thiscall FUN_004fa7b0(void * this, double * param_1, undefined8 * param_2)
 * body: 004fa7b0-004fa8ac
 */

void __thiscall FUN_004fa7b0(void *this,double *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double *pdVar12;
  int iVar13;
  double local_68 [6];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)((int)this + 0x20);
  local_68[2] = (double)*(undefined8 *)((int)this + 0x40);
  local_68[4] = (double)*(undefined8 *)((int)this + 8);
  local_68[5] = (double)*(undefined8 *)((int)this + 0x28);
  local_38 = *(undefined8 *)((int)this + 0x48);
  local_28 = *(undefined8 *)((int)this + 0x10);
  local_20 = *(undefined8 *)((int)this + 0x30);
  local_18 = *(undefined8 *)((int)this + 0x50);
  iVar13 = 3;
  pdVar12 = local_68 + 2;
  do {
    dVar3 = param_1[1];
    dVar4 = pdVar12[-2];
    dVar5 = param_1[5];
    iVar13 = iVar13 + -1;
    dVar6 = param_1[9];
    dVar7 = *pdVar12;
    dVar8 = *param_1;
    dVar9 = param_1[8];
    dVar10 = *pdVar12;
    dVar11 = param_1[4];
    *pdVar12 = param_1[6] * pdVar12[-1] + param_1[10] * *pdVar12 + param_1[2] * pdVar12[-2];
    pdVar12[-2] = dVar11 * pdVar12[-1] + dVar9 * dVar10 + dVar8 * pdVar12[-2];
    pdVar12[-1] = dVar6 * dVar7 + dVar5 * pdVar12[-1] + dVar3 * dVar4;
    pdVar12 = pdVar12 + 4;
  } while (iVar13 != 0);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = local_68[2];
  param_2[4] = local_68[4];
  param_2[5] = local_68[5];
  param_2[6] = local_38;
  param_2[8] = local_28;
  param_2[9] = local_20;
  param_2[10] = local_18;
  return;
}


