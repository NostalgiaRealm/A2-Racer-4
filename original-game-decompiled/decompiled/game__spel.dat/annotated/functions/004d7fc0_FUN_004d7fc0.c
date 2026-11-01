
/* ==== FUN_004d7fc0 @ 004d7fc0 ==== 
 * signature: void * __cdecl FUN_004d7fc0(void * param_1, int param_2)
 * body: 004d7fc0-004d8083
 */

void * __cdecl FUN_004d7fc0(void *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 local_34 [4];
  int local_30;
  undefined **local_24 [2];
  undefined4 local_1c;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057033f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_00479930(*(void **)(param_2 + 4),local_34);
  pcVar3 = *(char **)(puVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_0055a94d(pcVar3);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_1c = 0;
  local_24[0] = &PTR_FUN_005778c0;
  local_4 = 1;
  FUN_004cef20(param_1,(int)local_24);
  local_4 = local_4 & 0xffffff00;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650(local_24);
  ExceptionList = pvStack_c;
  return param_1;
}


