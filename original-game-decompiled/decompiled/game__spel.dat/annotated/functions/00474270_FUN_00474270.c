
/* ==== FUN_00474270 @ 00474270 ==== 
 * signature: undefined __cdecl FUN_00474270(undefined4 * param_1, undefined4 param_2, void * param_3)
 * body: 00474270-00474318
 */

void __cdecl FUN_00474270(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  double dVar1;
  void *pvVar2;
  undefined4 local_3c [6];
  undefined4 local_24 [6];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = FUN_00479a80(param_3,local_24,1);
  dVar1 = *(double *)((int)pvVar2 + 0x10);
  local_4 = 0;
  pvVar2 = FUN_00479a80(param_3,local_3c,0);
  local_4._0_1_ = 1;
  FUN_00451760((float)*(double *)((int)pvVar2 + 0x10),(float)dVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004cf650(local_3c);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


