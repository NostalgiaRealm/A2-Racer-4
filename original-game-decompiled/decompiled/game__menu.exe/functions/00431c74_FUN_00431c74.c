
/* ==== FUN_00431c74 @ 00431c74 ==== 
 * signature: undefined FUN_00431c74(void)
 * body: 00431c74-00431c77
 */

void FUN_00431c74(char *param_1)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  char *pcStack_8;
  
  *param_1 = *param_1 + (char)param_1;
  *param_1 = *param_1 + (char)param_1;
  puStack_c = &stack0xfffffffc;
  *(ushort *)(param_1 + 0x44) = *(ushort *)(param_1 + 0x44) | 0x200;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  pcStack_8 = param_1;
  BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    FUN_0040c6d4();
  }
  *in_FS_OFFSET = uStack_14;
  *(ushort *)(pcStack_8 + 0x44) = *(ushort *)(pcStack_8 + 0x44) & 0xfdff;
  return;
}


