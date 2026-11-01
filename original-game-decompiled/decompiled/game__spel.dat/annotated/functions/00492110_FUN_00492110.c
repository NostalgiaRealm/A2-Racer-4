
/* ==== FUN_00492110 @ 00492110 ==== 
 * signature: undefined __thiscall FUN_00492110(void * this, undefined4 * param_1)
 * body: 00492110-0049217f
 */

void __thiscall FUN_00492110(void *this,undefined4 *param_1)

{
  float local_4;
  
  local_4 = 0.0;
  if ((0.0 <= (float)DAT_006fba64) &&
     (local_4 = ((float)DAT_006fba64 / 200.0) * *(float *)((int)this + 0x48),
     *(float *)((int)this + 0x48) <= local_4)) {
    local_4 = *(float *)((int)this + 0x48);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


