
/* ==== TWinControlActionLink.vmt_04c @ 00426900 ==== 
 * signature: undefined TWinControlActionLink.vmt_04c(void)
 * body: 00426900-0042691c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlActionLink_vmt_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[8] + 0x150) = param_2;
  }
  return;
}


