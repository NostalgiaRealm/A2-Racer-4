
/* ==== TCustomGDIButton.vmt_0a4 @ 00468834 ==== 
 * signature: undefined TCustomGDIButton.vmt_0a4(void)
 * body: 00468834-00468878
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0a4(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  iVar1 = param_1[0x62];
  *(int **)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  TWinControlWrapper_vmt_0a4((int)param_1);
  return;
}


