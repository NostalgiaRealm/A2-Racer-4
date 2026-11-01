
/* ==== TControlActionLink.vmt_050 @ 00423988 ==== 
 * signature: undefined TControlActionLink.vmt_050(void)
 * body: 00423988-004239a8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403a0c((int *)(param_1[6] + 0x70),param_2);
  }
  return;
}


