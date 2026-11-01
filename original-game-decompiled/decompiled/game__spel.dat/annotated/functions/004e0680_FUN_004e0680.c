
/* ==== FUN_004e0680 @ 004e0680 ==== 
 * signature: undefined __fastcall FUN_004e0680(undefined4 * param_1)
 * body: 004e0680-004e0710
 */

void __fastcall FUN_004e0680(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005712b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577eb0;
  local_4 = 0;
  FUN_004e5b00(param_1 + 0xd);
  *param_1 = &PTR_FUN_00577e50;
  local_4 = 1;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  *param_1 = &PTR_FUN_00577860;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = pvStack_c;
  return;
}


