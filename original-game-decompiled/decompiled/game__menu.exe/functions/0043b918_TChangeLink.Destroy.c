
/* ==== TChangeLink.Destroy @ 0043b918 ==== 
 * signature: undefined TChangeLink.Destroy(void)
 * body: 0043b918-0043b94a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TChangeLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_0043b2a0(piVar1[1],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


