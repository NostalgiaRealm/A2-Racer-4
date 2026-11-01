
/* ==== TDIB.vmt_004 @ 00456b70 ==== 
 * signature: undefined TDIB.vmt_004(void)
 * body: 00456b70-00456b9e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_004(int *param_1,int *param_2)

{
  TGraphic_vmt_004(param_1,param_2);
  (**(code **)(*param_2 + 8))(param_2,&DAT_00456ba8,0,0,0,*(undefined4 *)(*param_1 + 0x50),param_1);
  return;
}


