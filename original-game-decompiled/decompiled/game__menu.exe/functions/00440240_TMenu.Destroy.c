
/* ==== TMenu.Destroy @ 00440240 ==== 
 * signature: undefined __register TMenu.Destroy(int * param_1, char param_2)
 * body: 00440240-00440274
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[10]);
  FUN_00402f9c((int *)piVar1[0xe]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


