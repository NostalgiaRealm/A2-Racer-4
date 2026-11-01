
/* ==== FUN_004df530 @ 004df530 ==== 
 * signature: undefined4 * __thiscall FUN_004df530(void * this, undefined4 * param_1)
 * body: 004df530-004df5a7
 */

undefined4 * __thiscall FUN_004df530(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0057109f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)((int)this + 0x2c))(local_24);
  uStack_4 = 1;
  FUN_004cef20(param_1,iVar1);
  *param_1 = &PTR_FUN_005778c0;
  uStack_4 = uStack_4 & 0xffffff00;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  ExceptionList = pvStack_c;
  return param_1;
}


