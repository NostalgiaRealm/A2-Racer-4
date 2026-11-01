
/* ==== FUN_005064c0 @ 005064c0 ==== 
 * signature: void * __cdecl FUN_005064c0(int param_1, undefined4 * param_2)
 * body: 005064c0-00506540
 */

void * __cdecl FUN_005064c0(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057377b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = FUN_00506470(param_1);
  if (pvVar1 != (void *)0x0) {
    *param_2 = 0;
    ExceptionList = local_c;
    return pvVar1;
  }
  pvVar1 = operator_new(0x78);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_0053cde0(pvVar1,param_1);
  }
  *param_2 = 1;
  ExceptionList = local_c;
  return pvVar1;
}


