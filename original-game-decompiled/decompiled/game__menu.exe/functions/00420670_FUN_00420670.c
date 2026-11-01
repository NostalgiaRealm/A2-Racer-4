
/* ==== FUN_00420670 @ 00420670 ==== 
 * signature: undefined FUN_00420670(void)
 * body: 00420670-004206e8
 */

undefined4 FUN_00420670(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_004ac6eb == '\0') {
    DAT_004ac6cc = (code *)FUN_004203d8(3,DAT_004ac6cc,"MonitorFromPoint");
    uVar1 = (*DAT_004ac6cc)();
    return uVar1;
  }
  if ((in_stack_0000000c & 3) == 0) {
    if (in_stack_00000004 < 0) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= in_stack_00000004) {
      return 0;
    }
    if (in_stack_00000008 < 0) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= in_stack_00000008) {
      return 0;
    }
  }
  return 0x12340042;
}


