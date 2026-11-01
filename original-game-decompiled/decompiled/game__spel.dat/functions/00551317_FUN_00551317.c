
/* ==== FUN_00551317 @ 00551317 ==== 
 * signature: undefined __thiscall FUN_00551317(void * this, LPVOID param_1)
 * body: 00551317-0055133e
 */

void __thiscall FUN_00551317(void *this,LPVOID param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0055133f(&param_1);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *puVar1 = 0;
  FUN_00559d4e(param_1);
  return;
}


