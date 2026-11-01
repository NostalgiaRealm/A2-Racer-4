
/* ==== TfrmException2.btnDetailsClick @ 004a8040 ==== 
 * signature: undefined TfrmException2.btnDetailsClick(void)
 * body: 004a8040-004a807c
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmException2_btnDetailsClick(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  TControl_set_Height(param_1,param_1[0xbf]);
  TGroupBox_set_Visible
            ((int *)param_1[0xba],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TGroupBox_set_Visible
            ((int *)param_1[0xb9],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  TGroupBox_set_Visible((int *)param_1[0xbe],0,extraout_ECX_01);
  return;
}


