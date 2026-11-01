
/* ==== FUN_004e1ba0 @ 004e1ba0 ==== 
 * signature: undefined4 * __thiscall FUN_004e1ba0(void * this, undefined4 * param_1, int param_2)
 * body: 004e1ba0-004e1c26
 */

undefined4 * __thiscall FUN_004e1ba0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **local_24 [6];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0057151f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d9280(*(int *)(param_2 + 8));
  iVar2 = (**(code **)((int)this + 0x2c))(local_24,uVar1);
  uStack_4 = 1;
  FUN_004cef20(param_1,iVar2);
  *param_1 = &PTR_FUN_005778c0;
  uStack_4 = uStack_4 & 0xffffff00;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  ExceptionList = pvStack_c;
  return param_1;
}


