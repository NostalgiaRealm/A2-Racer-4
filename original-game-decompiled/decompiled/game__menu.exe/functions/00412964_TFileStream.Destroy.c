
/* ==== TFileStream.Destroy @ 00412964 ==== 
 * signature: undefined TFileStream.Destroy(void)
 * body: 00412964-00412988
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFileStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (-1 < piVar1[1]) {
    FUN_00408734((HANDLE)piVar1[1]);
  }
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


