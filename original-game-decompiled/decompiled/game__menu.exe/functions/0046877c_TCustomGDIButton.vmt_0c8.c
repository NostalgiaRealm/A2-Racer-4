
/* ==== TCustomGDIButton.vmt_0c8 @ 0046877c ==== 
 * signature: undefined TCustomGDIButton.vmt_0c8(void)
 * body: 0046877c-004687f0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0c8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),4));
    return;
  }
  uVar2 = extraout_EDX;
  if (((char)param_1[0x60] != '\0') ||
     (cVar1 = (**(code **)(*param_1 + 0xb8))(), uVar2 = extraout_EDX_00, cVar1 != '\0')) {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)uVar2 >> 8),1));
    return;
  }
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),3));
    return;
  }
  uVar2 = FUN_00468310(param_1);
  if ((char)uVar2 != '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),2));
    return;
  }
  FUN_00468dd4((int)param_1,0);
  return;
}


