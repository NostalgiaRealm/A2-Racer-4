
/* ==== TResourceManager.Destroy @ 004159a8 ==== 
 * signature: undefined TResourceManager.Destroy(void)
 * body: 004159a8-004159c9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TResourceManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


