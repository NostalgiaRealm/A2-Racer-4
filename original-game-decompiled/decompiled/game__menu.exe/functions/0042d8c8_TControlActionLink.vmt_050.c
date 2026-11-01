
/* ==== TControlActionLink.vmt_050 @ 0042d8c8 ==== 
 * signature: undefined TControlActionLink.vmt_050(void)
 * body: 0042d8c8-0042d8e8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403cb0((int *)(param_1[6] + 0x70),param_2);
  }
  return;
}


