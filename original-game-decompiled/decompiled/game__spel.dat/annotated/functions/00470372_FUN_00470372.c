
/* ==== FUN_00470372 @ 00470372 ==== 
 * signature: undefined __stdcall FUN_00470372(void)
 * body: 00470372-00470374
 */

void FUN_00470372(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar1[1] = *(undefined4 *)(unaff_EBP + -0x20);
  puVar1[2] = *(undefined4 *)(unaff_EBP + -0x1c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


