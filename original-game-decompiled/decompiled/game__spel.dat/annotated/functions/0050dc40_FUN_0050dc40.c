
/* ==== FUN_0050dc40 @ 0050dc40 ==== 
 * signature: undefined4 * __fastcall FUN_0050dc40(undefined4 * param_1)
 * body: 0050dc40-0050dc98
 */

undefined4 * __fastcall FUN_0050dc40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573b88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005789b8;
  puVar1 = (undefined4 *)FUN_004f5ad0(0x20,0x10);
  param_1[1] = puVar1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}


