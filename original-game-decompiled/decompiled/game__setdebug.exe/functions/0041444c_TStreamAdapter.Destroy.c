
/* ==== TStreamAdapter.Destroy @ 0041444c ==== 
 * signature: undefined TStreamAdapter.Destroy(void)
 * body: 0041444c-00414483
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStreamAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((char)piVar1[4] == '\x01') {
    FUN_00402d14((int *)piVar1[3]);
    piVar1[3] = 0;
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


