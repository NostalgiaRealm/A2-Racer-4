
/* ==== TDaviGraphicButton.vmt_0c4 @ 00469d20 ==== 
 * signature: undefined TDaviGraphicButton.vmt_0c4(void)
 * body: 00469d20-00469d5e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicButton_vmt_0c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x208) != 0) {
    piVar2 = (int *)FUN_0045df74(*(int *)(param_1 + 0x208),CONCAT31((int3)((uint)param_2 >> 8),6));
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      *(undefined ***)(param_4 + 4) = &PTR_TWinControl_vmt_000_00468ee4;
      *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x208);
    }
  }
  return;
}


