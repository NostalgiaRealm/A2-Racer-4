
/* ==== TPen.Destroy @ 004185b0 ==== 
 * signature: undefined TPen.Destroy(void)
 * body: 004185b0-004185d5
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00417750(DAT_004ac6a0,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


