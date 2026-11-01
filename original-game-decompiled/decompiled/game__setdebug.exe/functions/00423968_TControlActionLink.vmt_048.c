
/* ==== TControlActionLink.vmt_048 @ 00423968 ==== 
 * signature: undefined TControlActionLink.vmt_048(void)
 * body: 00423968-00423985
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_048(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[6] + 0x5c))((int *)param_1[6],param_2);
  }
  return;
}


