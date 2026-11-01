
/* ==== FUN_00492200 @ 00492200 ==== 
 * signature: undefined __thiscall FUN_00492200(void * this, undefined4 * param_1)
 * body: 00492200-0049225e
 */

void __thiscall FUN_00492200(void *this,undefined4 *param_1)

{
  float local_4;
  
  local_4 = 0.0;
  if (0.0 <= (float)DAT_006fba74) {
    local_4 = ((float)DAT_006fba74 / 100.0) * *(float *)((int)this + 0x50);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


