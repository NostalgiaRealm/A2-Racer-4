
/* ==== FUN_00475690 @ 00475690 ==== 
 * signature: undefined __cdecl FUN_00475690(undefined4 * param_1, int * param_2, void * param_3)
 * body: 00475690-0047574d
 */

void __cdecl FUN_00475690(undefined4 *param_1,int *param_2,void *param_3)

{
  char cVar1;
  void *this;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b4ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = FUN_00479a80(param_3,local_24,0);
  local_4 = 0;
  puVar2 = FUN_00479930(this,local_34);
  pcVar3 = *(char **)(puVar2 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_00450b00(*param_2,pcVar3);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


