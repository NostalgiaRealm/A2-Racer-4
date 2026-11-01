
/* ==== FUN_004dfbc0 @ 004dfbc0 ==== 
 * signature: undefined __thiscall FUN_004dfbc0(void * this, void * param_1)
 * body: 004dfbc0-004dfbe2
 */

void __thiscall FUN_004dfbc0(void *this,void *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)((int)this + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d2750(param_1,1,pcVar1,(undefined4 *)((int)this + 0x34),(undefined4 *)((int)this + 0x38));
  return;
}


