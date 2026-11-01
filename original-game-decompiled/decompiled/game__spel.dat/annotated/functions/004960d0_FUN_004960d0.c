
/* ==== FUN_004960d0 @ 004960d0 ==== 
 * signature: undefined __thiscall FUN_004960d0(void * this, undefined4 param_1)
 * body: 004960d0-004960f4
 */

void __thiscall FUN_004960d0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 8:
  case 9:
  case 10:
    *(undefined4 *)((int)this + 0x58) = 0;
    return;
  case 0xb:
    FUN_004960c0((int)this);
  }
  return;
}


