
/* ==== FUN_004c0ff0 @ 004c0ff0 ==== 
 * signature: undefined __thiscall FUN_004c0ff0(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 004c0ff0-004c1020
 */

void __thiscall FUN_004c0ff0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0xcc);
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x198) = 1;
  return;
}


