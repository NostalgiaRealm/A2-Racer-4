
/* ==== FUN_004dbaa0 @ 004dbaa0 ==== 
 * signature: undefined4 * __thiscall FUN_004dbaa0(void * this, undefined4 * param_1, int param_2)
 * body: 004dbaa0-004dbb7c
 */

undefined4 * __thiscall FUN_004dbaa0(void *this,undefined4 *param_1,int param_2)

{
  undefined **local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [24];
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057098f;
  local_c = ExceptionList;
  local_30 = *(undefined4 *)(param_2 + 8);
  local_34 = param_2;
  local_2c = 0;
  ExceptionList = &local_c;
  FUN_00558643(local_24,0x18,1,FUN_004db4f0);
  local_3c[0] = &PTR_FUN_005779c4;
  local_4 = 1;
  FUN_004dd0b0(this,param_2);
  FUN_004de310(local_3c,(int)this + 0x68);
  FUN_004dd0e0(this,param_2);
  FUN_004dd110((int)this);
  param_1[2] = 2;
  param_1[4] = 1;
  *param_1 = &PTR_FUN_005778c0;
  local_4 = local_4 & 0xffffff00;
  local_3c[0] = &PTR_FUN_005779c4;
  FUN_005586c5(local_24,0x18,1,FUN_004d3a00);
  ExceptionList = local_c;
  return param_1;
}


