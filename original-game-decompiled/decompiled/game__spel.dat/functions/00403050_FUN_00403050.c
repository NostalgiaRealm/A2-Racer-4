
/* ==== FUN_00403050 @ 00403050 ==== 
 * signature: undefined __thiscall FUN_00403050(void * this, int param_1)
 * body: 00403050-00403073
 */

void __thiscall FUN_00403050(void *this,int param_1)

{
  *(int *)((int)this + 0x14) = param_1;
  if (10 < param_1) {
    *(undefined4 *)((int)this + 0x14) = 10;
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return;
}


