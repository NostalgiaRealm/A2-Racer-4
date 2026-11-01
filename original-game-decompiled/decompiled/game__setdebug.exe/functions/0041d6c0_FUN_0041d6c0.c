
/* ==== FUN_0041d6c0 @ 0041d6c0 ==== 
 * signature: undefined FUN_0041d6c0(void)
 * body: 0041d6c0-0041d72b
 */

void FUN_0041d6c0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (DAT_004476d8 == '\0') {
    DAT_004476b0 = (code *)FUN_0041d5d8(0,DAT_004476b0,"GetSystemMetrics");
    (*DAT_004476b0)();
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


