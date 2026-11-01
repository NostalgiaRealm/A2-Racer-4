
/* ==== FUN_004f3d20 @ 004f3d20 ==== 
 * signature: undefined __thiscall FUN_004f3d20(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004f3d20-004f3da1
 */

void __thiscall FUN_004f3d20(void *this,undefined4 param_1,undefined4 param_2)

{
  float local_10;
  float local_c;
  float local_8;
  
  if (0x1ffffff < *(int *)((int)this + 0x5c) * 0x1000000) {
    local_10 = *(float *)((int)this + 0x24) + 0.1;
    local_c = *(float *)((int)this + 0x28) + 0.1;
    local_8 = *(float *)((int)this + 0x2c) + 0.1;
    FUN_004f3db0((int)this,(double)CONCAT44(param_2,param_1),&local_10,
                 (double)(*(float *)((int)this + 0x44) + 0.1));
    return;
  }
  FUN_004f3db0((int)this,(double)CONCAT44(param_2,param_1),(float *)((int)this + 0x24),
               (double)*(float *)((int)this + 0x44));
  return;
}


