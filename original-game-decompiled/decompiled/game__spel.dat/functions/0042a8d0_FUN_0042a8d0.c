
/* ==== FUN_0042a8d0 @ 0042a8d0 ==== 
 * signature: undefined __fastcall FUN_0042a8d0(int * param_1)
 * body: 0042a8d0-0042a9c4
 */

void __fastcall FUN_0042a8d0(int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056a226;
  pvStack_c = ExceptionList;
  iVar2 = param_1[0x79];
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      ExceptionList = &pvStack_c;
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      ExceptionList = &pvStack_c;
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_004f5510(param_1 + 0x5c);
  iVar2 = param_1[0x4b];
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_004f5510(param_1 + 0x2e);
  iVar2 = param_1[0x1d];
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_004f5510(param_1);
  ExceptionList = pvStack_c;
  return;
}


