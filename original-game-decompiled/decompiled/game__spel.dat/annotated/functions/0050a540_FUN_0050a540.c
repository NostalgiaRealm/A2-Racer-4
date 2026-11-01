
/* ==== FUN_0050a540 @ 0050a540 ==== 
 * signature: undefined __thiscall FUN_0050a540(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0050a540-0050a576
 */

void __thiscall FUN_0050a540(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((double)*(int *)((int)this + 0x14) != 0.0) {
    puVar2 = this;
    for (iVar1 = 0x29; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
    }
    *(undefined4 *)((int)this + 0xa0) = param_1;
    *(undefined4 *)((int)this + 0xa4) = param_2;
  }
  return;
}


