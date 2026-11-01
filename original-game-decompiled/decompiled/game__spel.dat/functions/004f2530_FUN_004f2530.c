
/* ==== FUN_004f2530 @ 004f2530 ==== 
 * signature: undefined4 * __thiscall FUN_004f2530(void * this, void * param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4, undefined8 * param_5)
 * body: 004f2530-004f26a8
 */

undefined4 * __thiscall
FUN_004f2530(void *this,void *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  void *this_00;
  uint *puVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f29d0(this,param_1,param_3);
  *(undefined ***)this = &PTR_FUN_005782dc;
  local_4 = 0;
  FUN_0053cc80((undefined4 *)((int)this + 0x48));
  local_4 = 1;
  *(undefined ***)this = &PTR_FUN_005782d0;
  if (param_4 == (undefined4 *)0x0) {
    param_4 = &local_2c;
    local_1c = 0;
    local_18 = 0;
    local_24 = 0;
    local_20 = 0;
    local_2c = 0;
    local_28 = 0;
    local_14 = 0;
    local_10 = 0x3ff00000;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  _strncpy((char *)((int)this + 0x90),(char *)(param_3 + 1),8);
  this_00 = operator_new(0x238);
  local_4._0_1_ = 2;
  if (this_00 == (void *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = FUN_004f4cc0(this_00,(int)this,param_4,param_5,param_3[3],param_3[4]);
  }
  *(uint **)((int)this + 0xa4) = puVar1;
  *(uint **)((int)this + 0xa8) = puVar1;
  *(uint **)((int)this + 0xac) = puVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_3[3] == 0) {
    *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xffffff08 | 8;
  }
  else {
    *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xffffff10 | 0x10;
  }
  *(undefined4 *)((int)this + 0x98) = param_3[5];
  FUN_004f68a0(*(int *)(puVar1[3] + 0xc));
  *(undefined4 *)((int)this + 0xb0) = param_3[0x1a];
  ExceptionList = local_c;
  return this;
}


