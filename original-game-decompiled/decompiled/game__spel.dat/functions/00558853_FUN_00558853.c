
/* ==== FUN_00558853 @ 00558853 ==== 
 * signature: undefined4 * __thiscall FUN_00558853(void * this, undefined4 * param_1)
 * body: 00558853-0055888f
 */

undefined4 * __thiscall FUN_00558853(void *this,undefined4 *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_005795d8;
  sVar1 = _strlen((char *)*param_1);
  puVar2 = operator_new(sVar1 + 1);
  *(uint **)((int)this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0055ee40(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)((int)this + 8) = 1;
  return this;
}


