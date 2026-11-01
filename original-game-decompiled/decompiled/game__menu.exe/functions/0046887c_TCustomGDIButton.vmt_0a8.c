
/* ==== TCustomGDIButton.vmt_0a8 @ 0046887c ==== 
 * signature: undefined TCustomGDIButton.vmt_0a8(void)
 * body: 0046887c-004688b4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0a8(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  iVar1 = param_1[0x62];
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  (**(code **)(*param_1 + 0x74))();
  TWinControlWrapper_vmt_0a8((int)param_1);
  return;
}


