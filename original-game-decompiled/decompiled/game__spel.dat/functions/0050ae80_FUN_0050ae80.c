
/* ==== FUN_0050ae80 @ 0050ae80 ==== 
 * signature: undefined __fastcall FUN_0050ae80(int param_1)
 * body: 0050ae80-0050aee2
 */

void __fastcall FUN_0050ae80(int param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057390e;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x2b4) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x2b4) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  local_4 = 0xffffffff;
  FUN_0050acb0(param_1 + 0x288);
  ExceptionList = pvStack_c;
  return;
}


