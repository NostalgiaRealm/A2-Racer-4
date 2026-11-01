
/* ==== FUN_0050be20 @ 0050be20 ==== 
 * signature: undefined4 * __fastcall FUN_0050be20(undefined4 * param_1)
 * body: 0050be20-0050bed3
 */

undefined4 * __fastcall FUN_0050be20(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  ushort *puVar2;
  int iVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057398b;
  local_c = ExceptionList;
  puVar1 = param_1;
  ExceptionList = &local_c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_00578400;
  }
  param_1[1] = puVar1;
  puVar1[1] = 0;
  this = operator_new(0x14);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = FUN_0050df40(this,0x10);
  }
  local_4 = 0xffffffff;
  param_1[2] = puVar2;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_0057889c;
  }
  FUN_0050bf40(param_1,(int)puVar1,0,0);
  ExceptionList = local_c;
  return param_1;
}


