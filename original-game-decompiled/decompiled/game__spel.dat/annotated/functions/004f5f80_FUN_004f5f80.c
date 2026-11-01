
/* ==== FUN_004f5f80 @ 004f5f80 ==== 
 * signature: undefined __thiscall FUN_004f5f80(void * this, undefined4 * param_1)
 * body: 004f5f80-004f5f9c
 */

void __thiscall FUN_004f5f80(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(undefined4 *)(iVar1 + 0xc);
  param_1[1] = *(undefined4 *)(iVar1 + 0x10);
  param_1[2] = *(undefined4 *)(iVar1 + 0x14);
  return;
}


