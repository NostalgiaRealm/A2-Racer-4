
/* ==== FUN_004252e0 @ 004252e0 ==== 
 * signature: undefined __thiscall FUN_004252e0(void * this, uint param_1)
 * body: 004252e0-004252ff
 */

void __thiscall FUN_004252e0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & ((int)param_1 < 0) - 1;
  if (0x44c < (int)uVar1) {
    uVar1 = 0x44c;
  }
  *(uint *)((int)this + 0xc) = uVar1;
  return;
}


