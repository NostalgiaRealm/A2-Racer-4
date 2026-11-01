
/* ==== FUN_004701d0 @ 004701d0 ==== 
 * signature: undefined __fastcall FUN_004701d0(int * param_1)
 * body: 004701d0-00470226
 */

void __fastcall FUN_004701d0(int *param_1)

{
  void *pvVar1;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056b0ff;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = (void *)FUN_004ea0c0();
  FUN_004eb740(pvVar1,*param_1,(float *)0x0);
  pvVar1 = (void *)FUN_004ea0c0();
  FUN_004eb740(pvVar1,param_1[1],(float *)0x0);
  FUN_00470284();
  return;
}


