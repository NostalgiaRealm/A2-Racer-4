
/* ==== FUN_0053a2f0 @ 0053a2f0 ==== 
 * signature: undefined __thiscall FUN_0053a2f0(void * this, int param_1)
 * body: 0053a2f0-0053a365
 */

void __thiscall FUN_0053a2f0(void *this,int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffcfffff | 0xc0000;
  iVar1 = *(int *)((int)this + 8);
  *(int *)(param_1 + 0x7c) = iVar1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x80) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_1 + 0x18;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(*(int *)(param_1 + 0x28) + 0x20) = param_1 + 0x18;
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x20);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_1 + 0x34;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(int *)(*(int *)(param_1 + 0x44) + 0x20) = param_1 + 0x34;
  return;
}


