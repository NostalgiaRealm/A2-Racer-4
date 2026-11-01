
/* ==== FUN_00425310 @ 00425310 ==== 
 * signature: undefined __thiscall FUN_00425310(void * this, float param_1)
 * body: 00425310-00425372
 */

void __thiscall FUN_00425310(void *this,float param_1)

{
  longlong lVar1;
  
  if (*(float *)((int)this + 4) < param_1) {
    FUN_00426b90((undefined4 *)&DAT_005d3460);
    lVar1 = __ftol();
    *(int *)((int)this + 0xc) = (int)lVar1;
    if (0x44c < (int)lVar1) {
      *(undefined4 *)((int)this + 0xc) = 0x44c;
    }
  }
  return;
}


