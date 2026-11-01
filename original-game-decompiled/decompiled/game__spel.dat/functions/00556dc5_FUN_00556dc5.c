
/* ==== FUN_00556dc5 @ 00556dc5 ==== 
 * signature: undefined __thiscall FUN_00556dc5(void * this, void * param_1)
 * body: 00556dc5-00556df7
 */

void __thiscall FUN_00556dc5(void *this,void *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = FUN_0055313b(param_1);
  uVar2 = FUN_0054e986(pcVar1);
  *(undefined4 *)((int)this + 8) = uVar2;
  pcVar1 = FUN_00553181((int)param_1);
  uVar2 = FUN_0054e986(pcVar1);
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return;
}


