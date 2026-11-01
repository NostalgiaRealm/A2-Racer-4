
/* ==== FUN_0041d7d8 @ 0041d7d8 ==== 
 * signature: undefined FUN_0041d7d8(void)
 * body: 0041d7d8-0041d851
 */

undefined4 FUN_0041d7d8(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  HWND in_stack_00000004;
  uint in_stack_00000008;
  WINDOWPLACEMENT WStack_30;
  
  if (DAT_004476d9 == '\0') {
    DAT_004476b4 = (code *)FUN_0041d5d8(1,DAT_004476b4,"MonitorFromWindow");
    uVar1 = (*DAT_004476b4)();
  }
  else if ((in_stack_00000008 & 3) == 0) {
    BVar2 = IsIconic(in_stack_00000004);
    if (BVar2 == 0) {
      GetWindowRect(in_stack_00000004,&WStack_30.rcNormalPosition);
    }
    else {
      GetWindowPlacement(in_stack_00000004,&WStack_30);
    }
    uVar1 = FUN_0041d748();
  }
  else {
    uVar1 = 0x12340042;
  }
  return uVar1;
}


