
/* ==== TDaviSpeedButton.vmt_00c @ 0047594c ==== 
 * signature: undefined __register TDaviSpeedButton.vmt_00c(int * param_1)
 * body: 0047594c-00475975
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviSpeedButton_vmt_00c(int *param_1)

{
  char cVar1;
  
  TControl_vmt_00c(param_1);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_0047474c(param_1[0x4d],cVar1 == '\0');
  return;
}


