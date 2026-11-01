
/* ==== FUN_00543f50 @ 00543f50 ==== 
 * signature: undefined __thiscall FUN_00543f50(void * this, undefined8 param_1, int param_2, int param_3)
 * body: 00543f50-00543f6a
 */

void __thiscall FUN_00543f50(void *this,undefined8 param_1,int param_2,int param_3)

{
  *(undefined8 *)(*(int *)((int)this + 0x10) + (*(int *)((int)this + 8) * param_3 + param_2) * 8) =
       param_1;
  return;
}


