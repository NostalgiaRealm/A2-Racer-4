
/* ==== FUN_0049c5b0 @ 0049c5b0 ==== 
 * signature: undefined __fastcall FUN_0049c5b0(undefined4 * param_1)
 * body: 0049c5b0-0049c638
 */

void __fastcall FUN_0049c5b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e9dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577184;
  local_4 = 1;
  FUN_00498ce0(param_1,param_1);
  iVar2 = param_1[0x10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 0xffffffff;
  FUN_00498c10(param_1);
  ExceptionList = local_c;
  return;
}


