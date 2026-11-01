
/* ==== FUN_0054c537 @ 0054c537 ==== 
 * signature: undefined __thiscall FUN_0054c537(void * this, undefined4 param_1, char param_2)
 * body: 0054c537-0054c580
 */

void __thiscall FUN_0054c537(void *this,undefined4 param_1,char param_2)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  uVar1 = FUN_0054ef7c(0x20);
  *(short *)((int)this + 0x30) = (short)uVar1;
  FUN_0054c9f0((int)this);
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_0054c6db();
  }
  if (param_2 != '\0') {
    FUN_0054c9bb((int)this);
  }
  return;
}


