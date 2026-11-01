
/* ==== FUN_00474320 @ 00474320 ==== 
 * signature: undefined __cdecl FUN_00474320(undefined4 * param_1, undefined4 param_2, void * param_3)
 * body: 00474320-00474397
 */

void __cdecl FUN_00474320(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined4 local_24 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b472;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479a80(param_3,local_24,0);
  local_4 = 0;
  FUN_00451640();
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


