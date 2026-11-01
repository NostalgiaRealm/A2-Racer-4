
/* ==== FUN_004faa20 @ 004faa20 ==== 
 * signature: undefined __thiscall FUN_004faa20(void * this, undefined8 * param_1)
 * body: 004faa20-004faa84
 */

void __thiscall FUN_004faa20(void *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 0x28) = param_1[5];
  *(undefined8 *)((int)this + 0x50) = param_1[10];
  iVar5 = 1;
  puVar6 = this;
  puVar3 = this;
  do {
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 4;
    if (0 < iVar5) {
      puVar2 = puVar6;
      puVar4 = puVar3;
      iVar7 = iVar5;
      do {
        uVar1 = *(undefined8 *)(((int)param_1 - (int)this) + (int)puVar2);
        *puVar2 = *(undefined8 *)(((int)param_1 - (int)this) + (int)puVar4);
        puVar2 = puVar2 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}


