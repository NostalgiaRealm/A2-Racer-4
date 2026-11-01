
/* ==== TCustomComboBox.vmt_090 @ 00427a28 ==== 
 * signature: undefined TCustomComboBox.vmt_090(void)
 * body: 00427a28-00427a7f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomComboBox_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"COMBOBOX");
  param_2[1] = param_2[1] | 0x200240U |
               *(uint *)(&DAT_004aa6a8 + (uint)*(byte *)((int)param_1 + 0x1fa) * 4) |
               *(uint *)(&DAT_004aa6c8 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_004aa6bc + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


