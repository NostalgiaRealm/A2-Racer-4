
/* ==== TStreamAdapter.Destroy @ 00416000 ==== 
 * signature: undefined TStreamAdapter.Destroy(void)
 * body: 00416000-00416037
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStreamAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if ((char)piVar1[4] == '\x01') {
    FUN_00402f9c((int *)piVar1[3]);
    piVar1[3] = 0;
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


