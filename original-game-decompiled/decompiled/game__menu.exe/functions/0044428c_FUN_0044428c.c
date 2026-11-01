
/* ==== FUN_0044428c @ 0044428c ==== 
 * signature: undefined FUN_0044428c(void)
 * body: 0044428c-004442d8
 */

undefined4 FUN_0044428c(void)

{
  BOOL BVar1;
  undefined4 *puVar2;
  HWND in_stack_00000004;
  
  if (in_stack_00000004 != DAT_004aa93c) {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        puVar2 = (undefined4 *)FUN_0040277c(8);
        *puVar2 = DAT_004aa948;
        puVar2[1] = in_stack_00000004;
        DAT_004aa948 = puVar2;
        EnableWindow(in_stack_00000004,0);
      }
    }
  }
  return 0xffffffff;
}


