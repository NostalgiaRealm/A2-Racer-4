
/* ==== FUN_005004e0 @ 005004e0 ==== 
 * signature: undefined __thiscall FUN_005004e0(void * this, undefined4 param_1)
 * body: 005004e0-00500537
 */

void __thiscall FUN_005004e0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0x402375c2;
  *(undefined4 *)((int)this + 0x10) = 0x40000000;
  *(undefined4 *)((int)this + 0x14) = 0x3fd33333;
  return;
}


