
/* ==== TCustomGDICheckBox.vmt_0bc @ 0048ff58 ==== 
 * signature: undefined __register TCustomGDICheckBox.vmt_0bc(int * param_1, char param_2)
 * body: 0048ff58-0048ff75
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDICheckBox_vmt_0bc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x66]) {
    *(char *)(param_1 + 0x66) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


