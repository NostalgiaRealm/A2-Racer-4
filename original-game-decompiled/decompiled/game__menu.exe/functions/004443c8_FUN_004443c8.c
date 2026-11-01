
/* ==== FUN_004443c8 @ 004443c8 ==== 
 * signature: undefined4 __register FUN_004443c8(void)
 * body: 004443c8-00444428
 */

undefined4 FUN_004443c8(void)

{
  BOOL BVar1;
  uint uVar2;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_004aa93c) && (in_stack_00000004 != *(HWND *)(DAT_004ac7d4 + 0x24)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
        if ((uVar2 & 8) == 0) {
          if (DAT_004aa940 == (HWND)0x0) {
            DAT_004aa940 = in_stack_00000004;
          }
        }
        else if (DAT_004aa944 == (HWND)0x0) {
          DAT_004aa944 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}


