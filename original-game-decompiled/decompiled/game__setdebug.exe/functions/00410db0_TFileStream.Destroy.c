
/* ==== TFileStream.Destroy @ 00410db0 ==== 
 * signature: undefined TFileStream.Destroy(void)
 * body: 00410db0-00410dd4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFileStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (-1 < piVar1[1]) {
    FUN_00407dbc((HANDLE)piVar1[1]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


