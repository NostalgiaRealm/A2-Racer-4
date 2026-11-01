
/* ==== FUN_0041e928 @ 0041e928 ==== 
 * signature: undefined FUN_0041e928(void)
 * body: 0041e928-0041e9a5;0041e9bd-0041e9d2
 */

void FUN_0041e928(void)

{
  HPALETTE pHVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_0000000c;
  
  if (((8 < *(ushort *)(*(int *)(unaff_EBP + -0x3c) + 0xe)) &&
      (*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x20) != 0)) && (*(int *)(unaff_EBP + -0x30) == 0)) {
    pHVar1 = FUN_00419fc0((HGDIOBJ)0x0,*(undefined4 **)(unaff_EBP + -0x1c),
                          *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x20));
    *(HPALETTE *)(unaff_EBP + -0x30) = pHVar1;
  }
  FUN_00402c30((undefined4 *)(unaff_EBP + -0x9c),0x54,0);
  GetObjectA(*(HANDLE *)(unaff_EBP + -0x28),0x54,(LPVOID)(unaff_EBP + -0x9c));
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x18);
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x1c);
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x20);
  *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x24);
  *in_FS_OFFSET = in_stack_00000000;
  *in_FS_OFFSET = in_stack_0000000c;
  FUN_00402794(*(int *)(unaff_EBP + -0x18));
  return;
}


