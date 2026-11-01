
/* ==== FUN_00520440 @ 00520440 ==== 
 * signature: undefined4 * __thiscall FUN_00520440(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00520440-0052046c
 */

undefined4 * __thiscall FUN_00520440(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar2 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return this;
}


