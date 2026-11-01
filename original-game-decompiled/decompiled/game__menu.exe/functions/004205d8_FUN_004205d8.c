
/* ==== FUN_004205d8 @ 004205d8 ==== 
 * signature: undefined FUN_004205d8(void)
 * body: 004205d8-00420651
 */

undefined4 FUN_004205d8(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  HWND in_stack_00000004;
  uint in_stack_00000008;
  WINDOWPLACEMENT WStack_30;
  
  if (DAT_004ac6e9 == '\0') {
    DAT_004ac6c4 = (code *)FUN_004203d8(1,DAT_004ac6c4,"MonitorFromWindow");
    uVar1 = (*DAT_004ac6c4)();
  }
  else if ((in_stack_00000008 & 3) == 0) {
    BVar2 = IsIconic(in_stack_00000004);
    if (BVar2 == 0) {
      GetWindowRect(in_stack_00000004,&WStack_30.rcNormalPosition);
    }
    else {
      GetWindowPlacement(in_stack_00000004,&WStack_30);
    }
    uVar1 = FUN_00420548();
  }
  else {
    uVar1 = 0x12340042;
  }
  return uVar1;
}


