
/* ==== FUN_004f3c20 @ 004f3c20 ==== 
 * signature: undefined __thiscall FUN_004f3c20(void * this, double param_1, double * param_2)
 * body: 004f3c20-004f3cf1
 */

void __thiscall FUN_004f3c20(void *this,double param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_28 [36];
  
  if ((*(int *)((int)this + 0x5c) * 0x1000000 < 0x8000000) &&
     (dVar5 = param_1 - *(double *)((int)this + 0x68), dVar5 != 0.0)) {
    FUN_004f8d60(local_28,(double *)((int)this + 0xe8),(double *)((int)this + 0x108),
                 (double)(*(float *)((int)this + 0x70) * (float)dVar5));
    FUN_004f8b00(local_28,param_2);
    fVar1 = *(float *)((int)this + 0xdc);
    dVar3 = *(double *)((int)this + 0xc0);
    fVar2 = *(float *)((int)this + 0xd8);
    dVar4 = *(double *)((int)this + 0xb8);
    param_2[0xe] = (double)(*(float *)((int)this + 0xe0) * (float)dVar5 +
                           (float)*(double *)((int)this + 200));
    param_2[0xc] = (double)(fVar2 * (float)dVar5 + (float)dVar4);
    param_2[0xd] = (double)(fVar1 * (float)dVar5 + (float)dVar3);
    return;
  }
  puVar7 = (undefined4 *)((int)this + 0x128);
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = (double *)((int)param_2 + 4);
  }
  return;
}


