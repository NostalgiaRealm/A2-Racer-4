
/* ==== FUN_004fe470 @ 004fe470 ==== 
 * signature: undefined4 * __thiscall FUN_004fe470(void * this, int param_1)
 * body: 004fe470-004fe4f3
 */

undefined4 * __thiscall FUN_004fe470(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) * 0xd0 + *(int *)((int)this + 8));
  if (puVar2[1] != 0) {
    do {
      uVar1 = *(int *)((int)this + 4) + 1U & *(int *)this - 1U;
      *(uint *)((int)this + 4) = uVar1;
      puVar2 = (undefined4 *)(uVar1 * 0xd0 + *(int *)((int)this + 8));
    } while (puVar2[1] != 0);
  }
  *(uint *)((int)this + 4) = *(int *)this - 1U & *(int *)((int)this + 4) + 1U;
  if (puVar2[2] != 0) {
    FUN_004fe450(puVar2[2]);
  }
  puVar2[2] = param_1;
  *(undefined4 **)(param_1 + 0x40) = puVar2;
  *puVar2 = 0;
  if (0x7ffffff < *(int *)(param_1 + 0x80) * 0x1000000) {
    FUN_004fe580(puVar2);
  }
  return puVar2;
}


