
/* ==== FUN_004dead0 @ 004dead0 ==== 
 * signature: undefined __thiscall FUN_004dead0(void * this, void * param_1)
 * body: 004dead0-004deaf0
 */

void __thiscall FUN_004dead0(void *this,void *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)((int)this + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d2750(param_1,2,pcVar1,(undefined4 *)((int)this + 0x40),(undefined4 *)0x0);
  return;
}


