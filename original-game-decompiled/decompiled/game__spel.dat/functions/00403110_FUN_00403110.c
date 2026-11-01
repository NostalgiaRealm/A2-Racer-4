
/* ==== FUN_00403110 @ 00403110 ==== 
 * signature: undefined __thiscall FUN_00403110(void * this, int param_1)
 * body: 00403110-00403133
 */

void __thiscall FUN_00403110(void *this,int param_1)

{
  *(int *)((int)this + 0x10) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  }
  if (5 < param_1) {
    *(undefined4 *)((int)this + 0x10) = 5;
  }
  return;
}


