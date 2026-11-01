
/* ==== FUN_0053b570 @ 0053b570 ==== 
 * signature: undefined __thiscall FUN_0053b570(void * this, int param_1)
 * body: 0053b570-0053b610
 */

void __thiscall FUN_0053b570(void *this,int param_1)

{
  if (*(int *)(param_1 + 4) != 0xffff) {
    FUN_0050bf70(*(void **)(*(int *)((int)this + 4) + 4),param_1);
    *(undefined4 *)(param_1 + 4) = 0xffff;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x80) = *(undefined4 *)(param_1 + 0x80);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 8) = *(undefined4 *)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = *(undefined4 *)(param_1 + 0x3c);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x20) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


