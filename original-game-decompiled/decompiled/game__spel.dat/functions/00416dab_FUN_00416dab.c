
/* ==== FUN_00416dab @ 00416dab ==== 
 * signature: undefined __thiscall FUN_00416dab(void * this, int param_1)
 * body: 00416dab-00416e45
 */

/* WARNING: Removing unreachable block (ram,0x00416dfc) */
/* WARNING: Removing unreachable block (ram,0x00416e00) */
/* WARNING: Removing unreachable block (ram,0x00416e1e) */

void __thiscall FUN_00416dab(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (-1 < param_1) {
    iVar4 = (*(code *)**(undefined4 **)((int)this + 0x20))();
    if (param_1 < iVar4) {
      iVar4 = *(int *)(*(int *)((int)this + 0x24) + 4);
      puVar5 = (undefined4 *)(**(code **)(*(int *)((int)this + 0x20) + 8))();
      puVar1 = (undefined4 *)(iVar4 + param_1 * 0xc);
      *puVar1 = *puVar5;
      puVar1[1] = puVar5[1];
      puVar1[2] = puVar5[2];
      iVar2 = *(int *)((int)this + 0x24);
      iVar3 = *(int *)(iVar2 + 8);
      for (iVar4 = iVar3 + -0xc; iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
        FUN_0041e410();
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -0xc;
    }
  }
  return;
}


