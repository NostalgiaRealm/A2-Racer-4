
/* ==== FUN_004904e0 @ 004904e0 ==== 
 * signature: undefined1 * __cdecl FUN_004904e0(undefined1 * param_1, undefined1 * param_2, undefined1 param_3)
 * body: 004904e0-004905e3
 */

undefined1 * __cdecl FUN_004904e0(undefined1 *param_1,undefined1 *param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056df48;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(local_1c,param_2,0,0xffffffff);
  local_4 = 0;
  if (-local_14 - 1 < 2) {
    FUN_0054b1b4();
  }
  uVar1 = local_14 + 1;
  uVar3 = FUN_00402a00(local_1c,uVar1,'\0');
  if ((char)uVar3 != '\0') {
    *(undefined1 *)(local_14 + local_18) = param_3;
    *(undefined1 *)(local_18 + uVar1) = 0;
    local_14 = uVar1;
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}


