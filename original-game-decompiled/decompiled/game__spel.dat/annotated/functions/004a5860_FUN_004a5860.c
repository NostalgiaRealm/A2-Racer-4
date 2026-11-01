
/* ==== FUN_004a5860 @ 004a5860 ==== 
 * signature: undefined __fastcall FUN_004a5860(undefined4 * param_1)
 * body: 004a5860-004a58aa
 */

void __fastcall FUN_004a5860(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_005772dc;
  iVar2 = param_1[0xd];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_004fd310(param_1);
  return;
}


