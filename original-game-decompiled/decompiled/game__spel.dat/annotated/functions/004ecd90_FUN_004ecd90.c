
/* ==== FUN_004ecd90 @ 004ecd90 ==== 
 * signature: undefined __thiscall FUN_004ecd90(void * this, int param_1, int param_2)
 * body: 004ecd90-004ece1c
 */

/* WARNING: Removing unreachable block (ram,0x004ecdfd) */
/* WARNING: Removing unreachable block (ram,0x004ecdff) */

void __thiscall FUN_004ecd90(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = *(int *)(*(int *)((int)this + 4) + 4);
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))();
    *(undefined4 *)(iVar4 + param_1 * 4) = *puVar3;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)(*(int *)((int)this + 4) + 8) + -4;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)((int)this + 4);
    iVar4 = *(int *)(iVar1 + 4) + param_1 * 4;
    puVar2 = *(undefined4 **)(iVar1 + 8);
    puVar3 = (undefined4 *)(iVar4 + 4);
    if (puVar3 != puVar2) {
      iVar4 = iVar4 - (int)puVar3;
      do {
        *(undefined4 *)(iVar4 + (int)puVar3) = *puVar3;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2);
    }
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -4;
    return;
  }
  return;
}


