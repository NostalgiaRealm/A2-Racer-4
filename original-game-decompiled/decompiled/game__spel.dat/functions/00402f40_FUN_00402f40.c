
/* ==== FUN_00402f40 @ 00402f40 ==== 
 * signature: undefined __thiscall FUN_00402f40(void * this, int param_1)
 * body: 00402f40-00402f63
 */

void __thiscall FUN_00402f40(void *this,int param_1)

{
  *(int *)((int)this + 0xc) = param_1;
  if (5 < param_1) {
    *(undefined4 *)((int)this + 0xc) = 5;
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


