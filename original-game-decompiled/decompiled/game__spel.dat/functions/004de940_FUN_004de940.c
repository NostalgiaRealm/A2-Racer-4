
/* ==== FUN_004de940 @ 004de940 ==== 
 * signature: undefined4 * __thiscall FUN_004de940(void * this, undefined4 * param_1, undefined1 param_2)
 * body: 004de940-004de9de
 */

undefined4 * __thiscall FUN_004de940(void *this,undefined4 *param_1,undefined1 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined1 local_34 [16];
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570ee7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = FUN_004de7c0(this,local_34,param_2);
  local_4 = 1;
  iVar2 = (**(code **)((int)this + 0x40))(local_24,pvVar1);
  local_4._0_1_ = 2;
  FUN_004cef20(param_1,iVar2);
  *param_1 = &PTR_FUN_005778c0;
  local_4._0_1_ = 1;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004d29b0((int)local_34);
  ExceptionList = pvStack_c;
  return param_1;
}


