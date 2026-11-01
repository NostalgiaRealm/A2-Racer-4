
/* ==== TDaviButton.vmt_08c @ 00476304 ==== 
 * signature: undefined __register TDaviButton.vmt_08c(int * param_1)
 * body: 00476304-0047632f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviButton_vmt_08c(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  TWinControl_vmt_08c(param_1);
  FUN_0047474c(param_1[0x81],cVar1 == '\0');
  return;
}


