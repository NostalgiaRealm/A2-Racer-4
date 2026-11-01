
/* ==== FUN_00545c80 @ 00545c80 ==== 
 * signature: undefined __thiscall FUN_00545c80(void * this, int param_1, int param_2)
 * body: 00545c80-00545d7b
 */

void __thiscall FUN_00545c80(void *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 0x28) * param_2;
  iVar7 = *(int *)((int)this + 0x28) * param_1;
  uVar6 = iVar2 + (iVar7 + param_1) * 8;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffff0);
  iVar4 = (((int)(uVar6 - (int)puVar8) >> 3) - param_1) + *(int *)((int)this + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar4)) {
    uVar6 = iVar4 + 1U >> 1;
    puVar9 = (undefined8 *)(iVar2 + (iVar3 + param_1) * 8 & 0xfffffff0);
    do {
      uVar1 = *puVar8;
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar9 + 4);
      *puVar9 = uVar1;
      uVar1 = puVar8[1];
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((int)puVar8 + 0xc) = *(undefined4 *)((int)puVar9 + 0xc);
      puVar8 = puVar8 + 2;
      puVar9[1] = uVar1;
      uVar6 = uVar6 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar6 != 0);
  }
  iVar2 = *(int *)((int)this + 8);
  uVar6 = iVar2 + iVar7 * 8;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffff0);
  iVar4 = ((int)(uVar6 - (int)puVar8) >> 3) + *(int *)((int)this + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar4)) {
    uVar6 = iVar4 + 1U >> 1;
    puVar9 = (undefined8 *)(iVar2 + iVar3 * 8 & 0xfffffff0);
    do {
      uVar1 = *puVar8;
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar9 + 4);
      *puVar9 = uVar1;
      uVar1 = puVar8[1];
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((int)puVar8 + 0xc) = *(undefined4 *)((int)puVar9 + 0xc);
      puVar8 = puVar8 + 2;
      puVar9[1] = uVar1;
      uVar6 = uVar6 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar6 != 0);
  }
  return;
}


