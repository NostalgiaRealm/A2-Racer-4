
/* ==== TCustomComboBox.vmt_0a0 @ 00427bf0 ==== 
 * signature: undefined __register TCustomComboBox.vmt_0a0(int * param_1)
 * body: 00427bf0-00427c3a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomComboBox_vmt_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  iVar1 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (0 < iVar1) {
    iVar1 = FUN_00427908(param_1);
    param_1[0x8a] = iVar1;
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
    param_1[0x89] = (int)piVar2;
    (**(code **)(*piVar2 + 8))(piVar2,param_1[0x7c]);
  }
  TWinControl_vmt_0a0(param_1);
  return;
}


