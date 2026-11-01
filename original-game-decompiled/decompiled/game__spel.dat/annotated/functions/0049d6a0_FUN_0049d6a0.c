
/* ==== FUN_0049d6a0 @ 0049d6a0 ==== 
 * signature: undefined __fastcall FUN_0049d6a0(undefined4 * param_1)
 * body: 0049d6a0-0049d712
 */

void __fastcall FUN_0049d6a0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_005771a0;
  iVar2 = param_1[0xc];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar2 = param_1[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


