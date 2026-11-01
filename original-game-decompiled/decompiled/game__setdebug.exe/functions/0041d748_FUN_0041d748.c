
/* ==== FUN_0041d748 @ 0041d748 ==== 
 * signature: undefined4 __register FUN_0041d748(void)
 * body: 0041d748-0041d7bd
 */

undefined4 FUN_0041d748(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if (DAT_004476da == '\0') {
    DAT_004476b8 = (code *)FUN_0041d5d8(2,DAT_004476b8,"MonitorFromRect");
    uVar1 = (*DAT_004476b8)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}


