
/* ==== TCustomGDIRadioButton.vmt_0bc @ 004905a0 ==== 
 * signature: undefined __register TCustomGDIRadioButton.vmt_0bc(int * param_1, char param_2)
 * body: 004905a0-00490650
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIRadioButton_vmt_0bc(int *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 != param_2) {
    TGDIButton_set_TabStop((int)param_1,param_2);
    if ((param_2 != '\0') && (param_1[9] != 0)) {
      uVar2 = FUN_004317bc(param_1[9]);
      if (SBORROW4(uVar2,1)) {
        thunk_FUN_00402808(uVar2);
      }
      if (-1 < (int)(uVar2 - 1)) {
        iVar6 = 0;
        do {
          iVar3 = FUN_00431780(param_1[9],iVar6);
          uVar4 = FUN_00403114(*(int **)(iVar3 + 4),(int)&PTR_TControl_vmt_000_004901c8);
          if ((char)uVar4 != '\0') {
            iVar3 = FUN_00431780(param_1[9],iVar6);
            if (param_1 != *(int **)(iVar3 + 4)) {
              iVar3 = FUN_00431780(param_1[9],iVar6);
              piVar5 = (int *)FUN_0040312c(*(int **)(iVar3 + 4),(int)&PTR_TControl_vmt_000_004901c8)
              ;
              (**(code **)(*piVar5 + 0xbc))(piVar5,0);
            }
          }
          iVar6 = iVar6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    TCustomGDICheckBox_vmt_0bc(param_1,param_2);
  }
  return;
}


