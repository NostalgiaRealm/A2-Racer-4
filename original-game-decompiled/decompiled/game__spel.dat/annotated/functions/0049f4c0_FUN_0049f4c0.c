
/* ==== FUN_0049f4c0 @ 0049f4c0 ==== 
 * signature: undefined __fastcall FUN_0049f4c0(undefined4 * param_1)
 * body: 0049f4c0-0049f532
 */

void __fastcall FUN_0049f4c0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_005764c0;
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


