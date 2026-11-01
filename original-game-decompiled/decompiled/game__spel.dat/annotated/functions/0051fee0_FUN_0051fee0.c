
/* ==== FUN_0051fee0 @ 0051fee0 ==== 
 * signature: undefined4 * __thiscall FUN_0051fee0(void * this, undefined4 param_1)
 * body: 0051fee0-0051fefa
 */

undefined4 * __thiscall FUN_0051fee0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x20) = param_1;
  return this;
}


