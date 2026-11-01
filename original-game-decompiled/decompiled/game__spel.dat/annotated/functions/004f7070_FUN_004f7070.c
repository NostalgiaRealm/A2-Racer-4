
/* ==== FUN_004f7070 @ 004f7070 ==== 
 * signature: uint __thiscall FUN_004f7070(void * this, undefined4 param_1)
 * body: 004f7070-004f70d8
 */

uint __thiscall FUN_004f7070(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573018;
  local_c = ExceptionList;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_4 = 0;
  local_18 = param_1;
  ExceptionList = &local_c;
  uVar1 = FUN_0050a4e0(param_1);
  uVar1 = FUN_005012d0(this,&local_18,uVar1);
  FUN_004f65e0((int)&local_18);
  ExceptionList = local_c;
  return uVar1;
}


