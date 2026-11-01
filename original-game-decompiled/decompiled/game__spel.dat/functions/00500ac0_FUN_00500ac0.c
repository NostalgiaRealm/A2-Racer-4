
/* ==== FUN_00500ac0 @ 00500ac0 ==== 
 * signature: undefined __thiscall FUN_00500ac0(void * this, int param_1, ushort * param_2)
 * body: 00500ac0-00500b6d
 */

void __thiscall FUN_00500ac0(void *this,int param_1,ushort *param_2)

{
  void *this_00;
  void *pvVar1;
  void *this_01;
  void *this_02;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  this_02 = *(void **)((int)this + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0xc0);
  local_14 = *(undefined4 *)(param_1 + 0xc4);
  local_10 = *(undefined4 *)(param_1 + 200);
  local_8 = param_1;
  local_c = *(undefined4 *)(param_1 + 0xcc);
  if (this_02 != (void *)0x0) {
    this_01 = *(void **)((int)this_02 + 8);
    if (this_01 != (void *)0x0) {
      this_00 = *(void **)((int)this_01 + 8);
      if (this_00 != (void *)0x0) {
        for (pvVar1 = *(void **)((int)this_00 + 8); pvVar1 != (void *)0x0;
            pvVar1 = *(void **)((int)pvVar1 + 8)) {
          FUN_00500820(this_02,(int)&local_18,param_2);
          this_02 = this_01;
          this_01 = this_00;
          this_00 = pvVar1;
        }
        FUN_00500820(this_00,(int)&local_18,param_2);
      }
      FUN_00500820(this_01,(int)&local_18,param_2);
    }
    FUN_00500820(this_02,(int)&local_18,param_2);
  }
  return;
}


