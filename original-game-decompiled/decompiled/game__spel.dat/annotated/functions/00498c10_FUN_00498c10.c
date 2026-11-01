
/* ==== FUN_00498c10 @ 00498c10 ==== 
 * signature: undefined __fastcall FUN_00498c10(undefined4 * param_1)
 * body: 00498c10-00498cdb
 */

void __fastcall FUN_00498c10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e517;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577134;
  local_4 = 2;
  FUN_00498ce0(param_1,param_1);
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}


