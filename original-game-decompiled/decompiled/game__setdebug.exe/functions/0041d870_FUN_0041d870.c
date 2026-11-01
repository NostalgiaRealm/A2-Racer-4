
/* ==== FUN_0041d870 @ 0041d870 ==== 
 * signature: undefined FUN_0041d870(void)
 * body: 0041d870-0041d8e8
 */

undefined4 FUN_0041d870(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (DAT_004476db == '\0') {
    DAT_004476bc = (code *)FUN_0041d5d8(3,DAT_004476bc,"MonitorFromPoint");
    uVar1 = (*DAT_004476bc)();
    return uVar1;
  }
  if ((in_stack_0000000c & 3) == 0) {
    if (in_stack_00000004 < 0) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= in_stack_00000004) {
      return 0;
    }
    if (in_stack_00000008 < 0) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= in_stack_00000008) {
      return 0;
    }
  }
  return 0x12340042;
}


