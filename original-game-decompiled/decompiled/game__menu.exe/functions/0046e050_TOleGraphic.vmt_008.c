
/* ==== TOleGraphic.vmt_008 @ 0046e050 ==== 
 * signature: undefined TOleGraphic.vmt_008(void)
 * body: 0046e050-0046e080
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0046d380);
  if ((char)uVar1 != '\0') {
    FUN_00405878(param_1 + 8,(int *)param_2[8]);
    return;
  }
  TPersistent_vmt_008(param_1,param_2);
  return;
}


