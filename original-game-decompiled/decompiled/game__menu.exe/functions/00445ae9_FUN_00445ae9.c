
/* ==== FUN_00445ae9 @ 00445ae9 ==== 
 * signature: undefined FUN_00445ae9(void)
 * body: 00445ae9-00445b20
 */

void FUN_00445ae9(void)

{
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_c;
  code *pcStack_8;
  
  *(undefined1 *)(*(int *)(unaff_EBP + -4) + 0x200) = 1;
  pcStack_8 = thunk_FUN_004036bc;
  uStack_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c;
  FUN_004456c8(*(int *)(unaff_EBP + -4));
  *in_FS_OFFSET = uStack_c;
  *(undefined1 *)(*(int *)(unaff_EBP + -4) + 0x200) = 0;
  return;
}


