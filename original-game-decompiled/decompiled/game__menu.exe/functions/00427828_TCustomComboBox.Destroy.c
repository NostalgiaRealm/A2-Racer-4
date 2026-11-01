
/* ==== TCustomComboBox.Destroy @ 00427828 ==== 
 * signature: undefined TCustomComboBox.Destroy(void)
 * body: 00427828-00427898
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomComboBox_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  bVar1 = FUN_00434cdc((int)piVar2);
  if (bVar1) {
    (**(code **)(*piVar2 + 0x9c))();
  }
  FUN_00444618(piVar2[0x85]);
  FUN_00444618(piVar2[0x84]);
  FUN_00402f9c((int *)piVar2[0x7d]);
  FUN_00402f9c((int *)piVar2[0x7c]);
  FUN_00402f9c((int *)piVar2[0x89]);
  TWinControl_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


