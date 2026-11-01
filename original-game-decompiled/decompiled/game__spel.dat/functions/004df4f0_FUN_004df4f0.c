
/* ==== FUN_004df4f0 @ 004df4f0 ==== 
 * signature: undefined __thiscall FUN_004df4f0(void * this, void * param_1)
 * body: 004df4f0-004df512
 */

void __thiscall FUN_004df4f0(void *this,void *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)((int)this + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d2750(param_1,0,pcVar1,(undefined4 *)((int)this + 0x2c),(undefined4 *)((int)this + 0x30));
  return;
}


