
/* ==== FUN_004fa460 @ 004fa460 ==== 
 * signature: undefined __thiscall FUN_004fa460(void * this, double * param_1, double * param_2)
 * body: 004fa460-004fa56a
 */

void __thiscall FUN_004fa460(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int local_94;
  double local_88;
  double local_80;
  double local_78;
  double local_68 [8];
  undefined8 local_28 [4];
  
  FUN_004faec0(this,param_1 + 0xc,&local_88);
  local_94 = 3;
  pdVar3 = (double *)((int)this + 8);
  pdVar5 = local_68;
  do {
    pdVar4 = pdVar3 + 4;
    *pdVar5 = param_1[4] * *pdVar3 + param_1[8] * pdVar3[1] + *param_1 * pdVar3[-1];
    *(double *)(((int)&local_88 - (int)this) + (int)pdVar4) =
         param_1[1] * pdVar3[-1] + param_1[5] * *pdVar3 + param_1[9] * pdVar3[1];
    *(double *)(((int)&local_80 - (int)this) + (int)pdVar4) =
         param_1[2] * pdVar3[-1] + param_1[6] * *pdVar3 + param_1[10] * pdVar3[1];
    local_94 = local_94 + -1;
    pdVar3 = pdVar4;
    pdVar5 = pdVar5 + 4;
  } while (local_94 != 0);
  *param_2 = local_68[0];
  param_2[1] = local_68[1];
  param_2[2] = local_68[2];
  FUN_004fa570(param_2 + 4,local_68 + 4);
  FUN_004fa570(param_2 + 8,local_28);
  dVar1 = *(double *)((int)this + 0x68);
  dVar2 = *(double *)((int)this + 0x60);
  param_2[0xe] = local_78 + *(double *)((int)this + 0x70);
  param_2[0xc] = local_88 + dVar2;
  param_2[0xd] = local_80 + dVar1;
  return;
}


