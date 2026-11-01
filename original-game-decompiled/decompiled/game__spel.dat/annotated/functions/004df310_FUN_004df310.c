
/* ==== FUN_004df310 @ 004df310 ==== 
 * signature: undefined __fastcall FUN_004df310(undefined4 * param_1)
 * body: 004df310-004df353
 */

void __fastcall FUN_004df310(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00577860;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


