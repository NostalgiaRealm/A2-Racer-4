
/* ==== FUN_004a4510 @ 004a4510 ==== 
 * signature: undefined4 * __thiscall FUN_004a4510(void * this, void * param_1, float param_2, float param_3)
 * body: 004a4510-004a45cb
 */

undefined4 * __thiscall FUN_004a4510(void *this,void *param_1,float param_2,float param_3)

{
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f13e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = operator_new(0x40);
  local_4 = 0;
  local_10 = local_14;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_004fd2b0(local_14,SUB84((double)param_2,0),(int)((ulonglong)(double)param_2 >> 0x20),
                 SUB84((double)param_3,0),(int)((ulonglong)(double)param_3 >> 0x20));
    *(undefined1 *)(local_14 + 0xc) = param_3._0_1_;
    local_14[0xd] = 0;
    local_14[0xe] = 0;
    local_14[0xf] = 0;
    *local_14 = &PTR_FUN_005772dc;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004093c0(local_14 + 0xc,param_1,0,0xffffffff);
  }
  local_4 = 0xffffffff;
  FUN_004a5620(*(void **)((int)this + 0x70),*(undefined4 **)((int)*(void **)((int)this + 0x70) + 8),
               1,&local_14);
  ExceptionList = local_c;
  return local_14;
}


