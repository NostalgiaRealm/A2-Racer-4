
/* ==== FUN_004e2930 @ 004e2930 ==== 
 * signature: undefined1 * __thiscall FUN_004e2930(void * this, undefined4 param_1, undefined4 param_2, undefined1 * param_3)
 * body: 004e2930-004e29d3
 */

undefined1 * __thiscall
FUN_004e2930(void *this,undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  int iStack_10;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_005716d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004dbc40(&stack0xffffffe4,*(int *)((int)this + 8));
  FUN_004d7610(param_3);
  if (iStack_10 != 0) {
    cVar1 = *(char *)(iStack_10 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_10 + -1) = cVar1 + -1;
      ExceptionList = pvStack_4;
      return param_3;
    }
    FUN_0054b339((char *)(iStack_10 + -1));
  }
  ExceptionList = pvStack_4;
  return param_3;
}


