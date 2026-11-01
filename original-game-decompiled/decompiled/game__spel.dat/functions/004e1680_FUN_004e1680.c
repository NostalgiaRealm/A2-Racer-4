
/* ==== FUN_004e1680 @ 004e1680 ==== 
 * signature: undefined __fastcall FUN_004e1680(undefined4 * param_1)
 * body: 004e1680-004e16fb
 */

void __fastcall FUN_004e1680(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577f68;
  local_4 = 0;
  param_1[0xc] = &PTR_FUN_005778c0;
  FUN_004cf650(param_1 + 0xc);
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
  ExceptionList = local_c;
  return;
}


