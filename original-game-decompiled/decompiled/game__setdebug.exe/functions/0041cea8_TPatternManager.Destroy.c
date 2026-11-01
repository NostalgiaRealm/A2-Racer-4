
/* ==== TPatternManager.Destroy @ 0041cea8 ==== 
 * signature: undefined TPatternManager.Destroy(void)
 * body: 0041cea8-0041ced0
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPatternManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041d0a0((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


