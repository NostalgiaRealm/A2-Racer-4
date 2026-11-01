
/* ==== FUN_00420548 @ 00420548 ==== 
 * signature: undefined4 __register FUN_00420548(void)
 * body: 00420548-004205bd
 */

undefined4 FUN_00420548(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if (DAT_004ac6ea == '\0') {
    DAT_004ac6c8 = (code *)FUN_004203d8(2,DAT_004ac6c8,"MonitorFromRect");
    uVar1 = (*DAT_004ac6c8)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}


