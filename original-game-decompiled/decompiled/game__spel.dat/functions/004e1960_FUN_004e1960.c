
/* ==== FUN_004e1960 @ 004e1960 ==== 
 * signature: undefined __thiscall FUN_004e1960(void * this, void * param_1)
 * body: 004e1960-004e1997
 */

void __thiscall FUN_004e1960(void *this,void *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)((int)this + 0x10);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  pcVar1 = *(char **)(*(int *)((int)this + 8) + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d2720(param_1,3,pcVar1,pcVar2,(undefined4 *)((int)this + 0x2c),
               (undefined4 *)((int)this + 0x30));
  return;
}


