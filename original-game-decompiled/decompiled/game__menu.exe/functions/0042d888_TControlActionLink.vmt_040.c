
/* ==== TControlActionLink.vmt_040 @ 0042d888 ==== 
 * signature: undefined TControlActionLink.vmt_040(void)
 * body: 0042d888-0042d8a5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TGroupBox_set_Caption(param_1[6],param_2);
  }
  return;
}


