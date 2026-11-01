
/* ==== FUN_004dbf60 @ 004dbf60 ==== 
 * signature: int * __cdecl FUN_004dbf60(int * param_1, void * param_2)
 * body: 004dbf60-004dbfef
 */

int * __cdecl FUN_004dbf60(int *param_1,void *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iStack_10;
  void *pvStack_c;
  code *pcStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  pcStack_8 = FUN_005709a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_004dbdd0(param_2,&stack0xffffffe4);
  pcVar3 = *(char **)(puVar2 + 4);
  local_4 = (void *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(param_1,pcVar3);
  if (iStack_10 != 0) {
    cVar1 = *(char *)(iStack_10 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_10 + -1) = cVar1 + -1;
      ExceptionList = local_4;
      return param_1;
    }
    FUN_0054b339((char *)(iStack_10 + -1));
  }
  ExceptionList = local_4;
  return param_1;
}


