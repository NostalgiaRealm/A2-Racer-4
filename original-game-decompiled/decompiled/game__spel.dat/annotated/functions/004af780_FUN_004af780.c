
/* ==== FUN_004af780 @ 004af780 ==== 
 * signature: undefined __thiscall FUN_004af780(void * this, int param_1, undefined4 * param_2)
 * body: 004af780-004af79e
 */

void __thiscall FUN_004af780(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(param_1 * 0x20 + (int)this);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


