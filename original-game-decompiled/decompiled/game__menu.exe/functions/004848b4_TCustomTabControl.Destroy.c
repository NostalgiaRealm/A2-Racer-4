
/* ==== TCustomTabControl.Destroy @ 004848b4 ==== 
 * signature: undefined __register TCustomTabControl.Destroy(int * param_1, char param_2)
 * body: 004848b4-00484904
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomTabControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0040c968(piVar1 + 0x7c);
  FUN_0040c968(piVar1 + 0x84);
  FUN_0040c968(piVar1 + 0x82);
  FUN_0040c968(piVar1 + 0x7e);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


