
/* ==== FUN_004dcbc0 @ 004dcbc0 ==== 
 * signature: undefined __cdecl FUN_004dcbc0(void * param_1, int * param_2)
 * body: 004dcbc0-004dcc0a
 */

void __cdecl FUN_004dcbc0(void *param_1,int *param_2)

{
  undefined1 local_30 [36];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e2480(local_30,param_2);
  local_4 = 0;
  FUN_004e2580(local_30,param_1);
  ExceptionList = local_c;
  return;
}


