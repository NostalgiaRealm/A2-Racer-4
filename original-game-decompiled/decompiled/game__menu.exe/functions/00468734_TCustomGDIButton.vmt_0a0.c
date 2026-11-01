
/* ==== TCustomGDIButton.vmt_0a0 @ 00468734 ==== 
 * signature: undefined TCustomGDIButton.vmt_0a0(void)
 * body: 00468734-00468778
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0a0(int *param_1,short *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  uVar1 = (undefined1)param_3;
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX;
    if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
    }
  }
  TWinControlWrapper_vmt_0a0((int)param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),uVar1));
  return;
}


