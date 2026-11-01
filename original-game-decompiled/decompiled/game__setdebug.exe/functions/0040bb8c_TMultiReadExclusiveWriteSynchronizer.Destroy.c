
/* ==== TMultiReadExclusiveWriteSynchronizer.Destroy @ 0040bb8c ==== 
 * signature: undefined TMultiReadExclusiveWriteSynchronizer.Destroy(void)
 * body: 0040bb8c-0040bbc9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMultiReadExclusiveWriteSynchronizer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040bc08((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  CloseHandle((HANDLE)piVar1[7]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 1));
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


