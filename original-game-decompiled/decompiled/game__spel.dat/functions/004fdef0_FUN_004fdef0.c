
/* ==== FUN_004fdef0 @ 004fdef0 ==== 
 * signature: undefined __thiscall FUN_004fdef0(void * this, undefined4 param_1, float param_2, float param_3)
 * body: 004fdef0-004fdf3a
 */

void __thiscall FUN_004fdef0(void *this,undefined4 param_1,float param_2,float param_3)

{
  if ((*(float *)((int)this + 0x63c) == 0.0) && (*(float *)((int)this + 0x644) <= 0.0)) {
    *(undefined4 *)((int)this + 0x63c) = param_1;
    *(float *)((int)this + 0x640) = param_2;
    *(float *)((int)this + 0x644) = param_2 + param_3;
  }
  return;
}


