
/* ==== TResourceManager.Destroy @ 00417630 ==== 
 * signature: undefined TResourceManager.Destroy(void)
 * body: 00417630-00417651
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TResourceManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


