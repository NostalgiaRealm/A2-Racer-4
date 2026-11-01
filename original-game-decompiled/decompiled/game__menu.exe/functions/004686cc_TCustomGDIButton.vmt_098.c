
/* ==== TCustomGDIButton.vmt_098 @ 004686cc ==== 
 * signature: undefined TCustomGDIButton.vmt_098(void)
 * body: 004686cc-0046872f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_098(int *param_1,short *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  uVar1 = (undefined1)param_3;
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX;
  }
  if (*param_2 == 0x1b) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX_00;
  }
  TWinControlWrapper_vmt_098((int)param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),uVar1));
  return;
}


