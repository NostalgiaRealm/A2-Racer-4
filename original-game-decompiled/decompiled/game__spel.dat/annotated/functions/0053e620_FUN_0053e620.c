
/* ==== FUN_0053e620 @ 0053e620 ==== 
 * signature: undefined __fastcall FUN_0053e620(int param_1)
 * body: 0053e620-0053e732
 */

void __fastcall FUN_0053e620(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  this = *(void **)(*(int *)(param_1 + 0x10) + 0x18);
  puVar3 = (uint *)(*(uint *)(param_1 + 0x18) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x8c) + 0x20))
            (puVar3 + ((*puVar3 & 0xfff) + 1) * -4);
  puVar3 = (uint *)(*(uint *)(param_1 + 0x2c) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 0x8c) + 0x20))
            (puVar3 + ((*puVar3 & 0xfff) + 1) * -4);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x24);
  FUN_004f8680(this,&stack0xffffff94);
  if ((*(uint *)(iVar1 + 0x80) & 0x2000) != 0) {
    FUN_004f63f0(*(void **)((int)this + 0xc),iVar1,&stack0xffffff94);
  }
  if ((*(uint *)(iVar2 + 0x80) & 0x2000) != 0) {
    FUN_004f63f0(*(void **)((int)this + 0xc),iVar2,&stack0xffffff94);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28) = *(undefined4 *)(param_1 + 8);
  }
  else {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = *(undefined4 *)(param_1 + 0x20);
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


