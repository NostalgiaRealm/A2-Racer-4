
/* ==== FUN_004fd2b0 @ 004fd2b0 ==== 
 * signature: undefined __thiscall FUN_004fd2b0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004fd2b0-004fd2e3
 */

void __thiscall
FUN_004fd2b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_0057864c;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return;
}


