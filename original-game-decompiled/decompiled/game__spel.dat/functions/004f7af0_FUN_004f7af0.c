
/* ==== FUN_004f7af0 @ 004f7af0 ==== 
 * signature: undefined __thiscall FUN_004f7af0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004f7af0-004f7b16
 */

void __thiscall FUN_004f7af0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc0) = param_1;
  *(undefined4 *)((int)this + 0xc4) = param_2;
  *(double *)((int)this + 200) = 1.0 / (double)CONCAT44(param_2,param_1);
  return;
}


