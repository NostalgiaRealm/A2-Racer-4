
/* ==== FUN_00492180 @ 00492180 ==== 
 * signature: undefined __thiscall FUN_00492180(void * this, undefined4 * param_1)
 * body: 00492180-004921fb
 */

void __thiscall FUN_00492180(void *this,undefined4 *param_1)

{
  int iVar1;
  float local_4;
  
  local_4 = 0.0;
  iVar1 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  iVar1 = FUN_00425300(iVar1);
  if (0.0 <= (float)iVar1) {
    local_4 = ((float)iVar1 / 100.0) * *(float *)((int)this + 0x4c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


