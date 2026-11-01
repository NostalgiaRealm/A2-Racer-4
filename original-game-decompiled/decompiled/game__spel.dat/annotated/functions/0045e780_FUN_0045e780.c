
/* ==== FUN_0045e780 @ 0045e780 ==== 
 * signature: undefined4 * __fastcall FUN_0045e780(undefined4 * param_1)
 * body: 0045e780-0045e822
 */

undefined4 * __fastcall FUN_0045e780(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a9dd;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0045e8a0();
  if (param_1[0x2a] == 0) {
    puVar2 = (undefined4 *)param_1[0x29];
  }
  else {
    *(undefined4 *)(param_1[0x2a] + 0xa4) = param_1[0x29];
    puVar1 = param_1;
    do {
      puVar2 = puVar1;
      puVar1 = (undefined4 *)puVar2[0x2a];
    } while ((undefined4 *)puVar2[0x2a] != (undefined4 *)0x0);
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 0xa8) = param_1[0x2a];
  }
  if (param_1 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return puVar2;
  }
  FUN_0045e650(param_1);
  FUN_0054b339(param_1);
  ExceptionList = local_10;
  return puVar2;
}


