
/* ==== TMenu.Destroy @ 00435b60 ==== 
 * signature: undefined __register TMenu.Destroy(int * param_1, char param_2)
 * body: 00435b60-00435b94
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[10]);
  FUN_00402d14((int *)piVar1[0xe]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


