
/* ==== TScrollingWinControl.Destroy @ 0043ab48 ==== 
 * signature: undefined __register TScrollingWinControl.Destroy(int * param_1, char param_2)
 * body: 0043ab48-0043ab82
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TScrollingWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x7c]);
  FUN_00402d14((int *)piVar1[0x7d]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


