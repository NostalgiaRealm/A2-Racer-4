
/* ==== FUN_004dc300 @ 004dc300 ==== 
 * signature: undefined __fastcall FUN_004dc300(undefined4 * param_1)
 * body: 004dc300-004dc385
 */

void __fastcall FUN_004dc300(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_00570a33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577a10;
  local_4 = 1;
  FUN_004da170(param_1 + 0xf);
  local_4 = local_4 & 0xffffff00;
  FUN_004da170(param_1 + 10);
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


