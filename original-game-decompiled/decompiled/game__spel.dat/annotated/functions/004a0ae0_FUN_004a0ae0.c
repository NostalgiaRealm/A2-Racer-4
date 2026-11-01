
/* ==== FUN_004a0ae0 @ 004a0ae0 ==== 
 * signature: undefined4 * __thiscall FUN_004a0ae0(void * this, int param_1)
 * body: 004a0ae0-004a0b18
 */

undefined4 * __thiscall FUN_004a0ae0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00511d20(param_1);
  puVar2 = operator_new(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_005771d0;
    puVar2[1] = puVar1;
    *(undefined4 **)((int)this + 0x1c) = puVar1;
    return puVar2;
  }
  *(undefined4 **)((int)this + 0x1c) = puVar1;
  return (undefined4 *)0x0;
}


