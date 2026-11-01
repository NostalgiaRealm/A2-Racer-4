
/* ==== FUN_004faa90 @ 004faa90 ==== 
 * signature: undefined __thiscall FUN_004faa90(void * this, undefined8 * param_1)
 * body: 004faa90-004fab31
 */

void __thiscall FUN_004faa90(void *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  double local_28;
  double local_20;
  double local_18;
  
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 0x28) = param_1[5];
  iVar7 = 1;
  *(undefined8 *)((int)this + 0x50) = param_1[10];
  puVar2 = this;
  puVar4 = this;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 4;
    if (0 < iVar7) {
      puVar3 = puVar2;
      puVar5 = puVar4;
      iVar6 = iVar7;
      do {
        uVar1 = *(undefined8 *)(((int)param_1 - (int)this) + (int)puVar3);
        *puVar3 = *(undefined8 *)(((int)param_1 - (int)this) + (int)puVar5);
        puVar3 = puVar3 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  FUN_004faec0(this,(double *)(param_1 + 0xc),&local_28);
  *(double *)((int)this + 0x60) = -local_28;
  *(double *)((int)this + 0x68) = -local_20;
  *(double *)((int)this + 0x70) = -local_18;
  return;
}


