
/* ==== FUN_004e1b20 @ 004e1b20 ==== 
 * signature: undefined4 * __thiscall FUN_004e1b20(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004e1b20-004e1b9c
 */

undefined4 * __thiscall
FUN_004e1b20(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005714ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)((int)this + 0x2c))(local_24,param_3);
  uStack_4 = 1;
  FUN_004cef20(param_1,iVar1);
  *param_1 = &PTR_FUN_005778c0;
  uStack_4 = uStack_4 & 0xffffff00;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  ExceptionList = pvStack_c;
  return param_1;
}


