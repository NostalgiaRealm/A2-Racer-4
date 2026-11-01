
/* ==== TControlActionLink.vmt_05c @ 0042d8ec ==== 
 * signature: undefined TControlActionLink.vmt_05c(void)
 * body: 0042d8ec-0042d909
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_05c(int *param_1,uint param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TGroupBox_set_Visible((int *)param_1[6],param_2,extraout_ECX);
  }
  return;
}


