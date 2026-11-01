
/* ==== FUN_00553108 @ 00553108 ==== 
 * signature: undefined __thiscall FUN_00553108(void * this, void * param_1)
 * body: 00553108-0055313a
 */

void __thiscall FUN_00553108(void *this,void *param_1)

{
  char *pcVar1;
  undefined2 *puVar2;
  
  pcVar1 = FUN_0055313b(param_1);
  puVar2 = FUN_0055466a(pcVar1);
  *(undefined2 **)((int)this + 8) = puVar2;
  pcVar1 = FUN_00553181((int)param_1);
  puVar2 = FUN_0055466a(pcVar1);
  *(undefined2 **)((int)this + 0xc) = puVar2;
  return;
}


