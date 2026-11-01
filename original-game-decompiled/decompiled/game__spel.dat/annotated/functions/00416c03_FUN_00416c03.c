
/* ==== FUN_00416c03 @ 00416c03 ==== 
 * signature: undefined __thiscall FUN_00416c03(void * this, int param_1)
 * body: 00416c03-00416cc7
 */

/* WARNING: Removing unreachable block (ram,0x00416c73) */
/* WARNING: Removing unreachable block (ram,0x00416c76) */

void __thiscall FUN_00416c03(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *this_00;
  
  if (-1 < param_1) {
    iVar3 = (*(code *)**(undefined4 **)((int)this + 0x18))();
    if (param_1 < iVar3) {
      iVar3 = *(int *)(*(int *)((int)this + 0x1c) + 4);
      puVar4 = (undefined4 *)(**(code **)(*(int *)((int)this + 0x18) + 8))();
      puVar1 = (undefined4 *)(iVar3 + param_1 * 0x18);
      *puVar1 = *puVar4;
      FUN_004093c0(puVar1 + 1,puVar4 + 1,0,0xffffffff);
      puVar1[5] = puVar4[5];
      iVar3 = *(int *)((int)this + 0x1c);
      pvVar2 = *(void **)(iVar3 + 8);
      for (this_00 = (void *)((int)pvVar2 + -0x18); this_00 != pvVar2;
          this_00 = (void *)((int)this_00 + 0x18)) {
        FUN_004116f0(this_00,0);
      }
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -0x18;
    }
  }
  return;
}


