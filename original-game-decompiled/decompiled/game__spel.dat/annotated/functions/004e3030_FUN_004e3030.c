
/* ==== FUN_004e3030 @ 004e3030 ==== 
 * signature: undefined4 * __thiscall FUN_004e3030(void * this, undefined4 * param_1, int param_2)
 * body: 004e3030-004e3061
 */

undefined4 * __thiscall FUN_004e3030(void *this,undefined4 *param_1,int param_2)

{
  FUN_004cef20(param_1,param_2 + (*(short *)((int)this + 8) + 1) * 0x18);
  *param_1 = &PTR_FUN_005778c0;
  return param_1;
}


