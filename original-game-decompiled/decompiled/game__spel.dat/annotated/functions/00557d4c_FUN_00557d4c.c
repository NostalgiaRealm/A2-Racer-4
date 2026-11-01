
/* ==== FUN_00557d4c @ 00557d4c ==== 
 * signature: undefined __stdcall FUN_00557d4c(PVOID param_1, PEXCEPTION_RECORD param_2)
 * body: 00557d4c-00557d9a
 */

void FUN_00557d4c(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x557d74,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


