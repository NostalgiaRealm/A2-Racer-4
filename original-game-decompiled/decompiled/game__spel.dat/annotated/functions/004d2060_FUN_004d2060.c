
/* ==== FUN_004d2060 @ 004d2060 ==== 
 * signature: undefined __fastcall FUN_004d2060(undefined4 * param_1)
 * body: 004d2060-004d20d8
 */

void __fastcall FUN_004d2060(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00577808;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_005777cc;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


