
/* ==== FUN_004da470 @ 004da470 ==== 
 * signature: undefined __thiscall FUN_004da470(void * this, undefined4 param_1)
 * body: 004da470-004da49a
 */

void __thiscall FUN_004da470(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x20))(param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


