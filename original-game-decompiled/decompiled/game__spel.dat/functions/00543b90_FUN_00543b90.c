
/* ==== FUN_00543b90 @ 00543b90 ==== 
 * signature: undefined __thiscall FUN_00543b90(void * this, int param_1, int param_2)
 * body: 00543b90-00543c20
 */

void __thiscall FUN_00543b90(void *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)((int)this + 0x10);
  iVar4 = *(int *)((int)this + 0xc);
  puVar7 = (undefined8 *)(iVar3 + iVar4 * param_2 * 8);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar2)) {
    uVar6 = iVar2 + 1U >> 1;
    puVar8 = (undefined8 *)(iVar3 + iVar4 * param_1 * 8);
    do {
      uVar1 = *puVar7;
      *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
      *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)((int)puVar8 + 4);
      *puVar8 = uVar1;
      uVar1 = puVar7[1];
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((int)puVar7 + 0xc) = *(undefined4 *)((int)puVar8 + 0xc);
      puVar7 = puVar7 + 2;
      puVar8[1] = uVar1;
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 2;
    } while (uVar6 != 0);
  }
  iVar2 = *(int *)((int)this + 0x14);
  uVar1 = *(undefined8 *)(iVar2 + param_1 * 8);
  *(undefined4 *)(iVar2 + param_1 * 8) = *(undefined4 *)(iVar2 + param_2 * 8);
  *(undefined4 *)(iVar2 + 4 + param_1 * 8) = *(undefined4 *)(iVar2 + 4 + param_2 * 8);
  *(undefined8 *)(*(int *)((int)this + 0x14) + param_2 * 8) = uVar1;
  return;
}


