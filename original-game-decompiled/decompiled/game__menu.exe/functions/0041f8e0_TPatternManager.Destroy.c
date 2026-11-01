
/* ==== TPatternManager.Destroy @ 0041f8e0 ==== 
 * signature: undefined TPatternManager.Destroy(void)
 * body: 0041f8e0-0041f908
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPatternManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041fad8((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


