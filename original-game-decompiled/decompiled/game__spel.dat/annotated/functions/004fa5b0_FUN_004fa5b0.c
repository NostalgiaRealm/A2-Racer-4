
/* ==== FUN_004fa5b0 @ 004fa5b0 ==== 
 * signature: undefined __thiscall FUN_004fa5b0(void * this, double * param_1, undefined8 * param_2)
 * body: 004fa5b0-004fa6d9
 */

void __thiscall FUN_004fa5b0(void *this,double *param_1,undefined8 *param_2)

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
  double local_88 [6];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = param_1[0xc] - *(double *)((int)this + 0x60);
  local_20 = param_1[0xd] - *(double *)((int)this + 0x68);
  local_18 = param_1[0xe] - *(double *)((int)this + 0x70);
  FUN_004faf30(this,&local_28,(double *)(param_2 + 0xc));
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)((int)this + 0x20);
  local_88[2] = (double)*(undefined8 *)((int)this + 0x40);
  local_88[4] = (double)*(undefined8 *)((int)this + 8);
  local_88[5] = (double)*(undefined8 *)((int)this + 0x28);
  local_58 = *(undefined8 *)((int)this + 0x48);
  local_48 = *(undefined8 *)((int)this + 0x10);
  local_40 = *(undefined8 *)((int)this + 0x30);
  local_38 = *(undefined8 *)((int)this + 0x50);
  iVar13 = 3;
  pdVar12 = local_88 + 2;
  do {
    dVar3 = param_1[5];
    dVar4 = param_1[9];
    dVar5 = *pdVar12;
    iVar13 = iVar13 + -1;
    dVar6 = param_1[1];
    dVar7 = pdVar12[-2];
    dVar8 = *param_1;
    dVar9 = param_1[8];
    dVar10 = *pdVar12;
    dVar11 = param_1[4];
    *pdVar12 = param_1[6] * pdVar12[-1] + param_1[10] * *pdVar12 + param_1[2] * pdVar12[-2];
    pdVar12[-2] = dVar11 * pdVar12[-1] + dVar9 * dVar10 + dVar8 * pdVar12[-2];
    pdVar12[-1] = dVar6 * dVar7 + dVar4 * dVar5 + dVar3 * pdVar12[-1];
    pdVar12 = pdVar12 + 4;
  } while (iVar13 != 0);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = local_88[2];
  FUN_004fa570(param_2 + 4,local_88 + 4);
  FUN_004fa570(param_2 + 8,&local_48);
  return;
}


