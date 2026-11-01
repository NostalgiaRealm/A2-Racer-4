
/* ==== FUN_004e1ec0 @ 004e1ec0 ==== 
 * signature: undefined __fastcall FUN_004e1ec0(undefined4 * param_1)
 * body: 004e1ec0-004e1f35
 */

void __fastcall FUN_004e1ec0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578024;
  local_4 = 0;
  FUN_004e5b00(param_1 + 0xf);
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


