
/* ==== FUN_004d6870 @ 004d6870 ==== 
 * signature: undefined __thiscall FUN_004d6870(void * this, undefined4 param_1, char param_2)
 * body: 004d6870-004d68b4
 */

void __thiscall FUN_004d6870(void *this,undefined4 param_1,char param_2)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0x20;
  FUN_0054c9f0((int)this);
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_0054c6db();
  }
  if (param_2 != '\0') {
    FUN_0054c9bb((int)this);
  }
  return;
}


