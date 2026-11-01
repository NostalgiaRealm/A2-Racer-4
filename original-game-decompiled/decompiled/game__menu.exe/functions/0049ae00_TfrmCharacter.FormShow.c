
/* ==== TfrmCharacter.FormShow @ 0049ae00 ==== 
 * signature: undefined __register TfrmCharacter.FormShow(int * param_1)
 * body: 0049ae00-0049ae4f
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCharacter_FormShow(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049af5c(param_1,extraout_EDX,extraout_ECX);
  FUN_0049ac68(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 8));
  *(undefined1 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x1c) = 1;
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  return;
}


