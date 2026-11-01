
/* ==== FUN_004398dc @ 004398dc ==== 
 * signature: undefined FUN_004398dc(void)
 * body: 004398dc-00439928
 */

undefined4 FUN_004398dc(void)

{
  BOOL BVar1;
  undefined4 *puVar2;
  HWND in_stack_00000004;
  
  if (in_stack_00000004 != DAT_00446868) {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        puVar2 = (undefined4 *)FUN_004026b8(8);
        *puVar2 = DAT_00446874;
        puVar2[1] = in_stack_00000004;
        DAT_00446874 = puVar2;
        EnableWindow(in_stack_00000004,0);
      }
    }
  }
  return 0xffffffff;
}


