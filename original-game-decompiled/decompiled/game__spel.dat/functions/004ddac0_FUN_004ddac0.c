
/* ==== FUN_004ddac0 @ 004ddac0 ==== 
 * signature: undefined __thiscall FUN_004ddac0(void * this, void * param_1)
 * body: 004ddac0-004ddb07
 */

void __thiscall FUN_004ddac0(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  FUN_004d73f0(param_1);
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x34))(param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


