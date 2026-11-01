
/* ==== FUN_00439a18 @ 00439a18 ==== 
 * signature: undefined4 __register FUN_00439a18(void)
 * body: 00439a18-00439a78
 */

undefined4 FUN_00439a18(void)

{
  BOOL BVar1;
  uint uVar2;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_00446868) && (in_stack_00000004 != *(HWND *)(DAT_004477c4 + 0x24)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
        if ((uVar2 & 8) == 0) {
          if (DAT_0044686c == (HWND)0x0) {
            DAT_0044686c = in_stack_00000004;
          }
        }
        else if (DAT_00446870 == (HWND)0x0) {
          DAT_00446870 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}


