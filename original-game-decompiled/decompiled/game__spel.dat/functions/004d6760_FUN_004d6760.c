
/* ==== FUN_004d6760 @ 004d6760 ==== 
 * signature: undefined __cdecl FUN_004d6760(undefined4 param_1, char * param_2)
 * body: 004d6760-004d6832
 */

void __cdecl FUN_004d6760(undefined4 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  void *local_c;
  code *pcStack_8;
  void *local_4;
  
  pcStack_8 = FUN_00570118;
  local_c = ExceptionList;
  local_4 = (void *)0x0;
  ExceptionList = &local_c;
  if (DAT_0074b8ac != (int *)0x0) {
    pcVar3 = "";
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
    }
    ExceptionList = &local_c;
    FUN_004d4cd0(DAT_0074b8ac,pcVar3);
    bVar2 = false;
    if (((*(byte *)(*(int *)(*DAT_0074b8ac + 4) + 4 + (int)DAT_0074b8ac) & 6) == 0) &&
       (iVar4 = (**(code **)(**(int **)((int)DAT_0074b8ac + *(int *)(*DAT_0074b8ac + 4) + 0x28) +
                            0x2c))(), iVar4 == -1)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0054c6db();
    }
  }
  if (param_2 != (char *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_2[-1] = cVar1 + -1;
      ExceptionList = local_4;
      return;
    }
    FUN_0054b339(param_2 + -1);
  }
  ExceptionList = local_4;
  return;
}


