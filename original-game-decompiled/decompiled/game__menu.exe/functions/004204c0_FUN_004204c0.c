
/* ==== FUN_004204c0 @ 004204c0 ==== 
 * signature: undefined FUN_004204c0(void)
 * body: 004204c0-0042052b
 */

void FUN_004204c0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (DAT_004ac6e8 == '\0') {
    DAT_004ac6c0 = (code *)FUN_004203d8(0,DAT_004ac6c0,"GetSystemMetrics");
    (*DAT_004ac6c0)();
  }
  else {
    iVar1 = -1;
    if (in_stack_00000004 - 0x4cU < 2) {
      iVar1 = 0;
    }
    else if (in_stack_00000004 == 0x4e) {
      in_stack_00000004 = 0;
    }
    else if (in_stack_00000004 == 0x4f) {
      in_stack_00000004 = 1;
    }
    else if (in_stack_00000004 - 0x50U < 2) {
      iVar1 = 1;
    }
    if (iVar1 == -1) {
      GetSystemMetrics(in_stack_00000004);
    }
  }
  return;
}


