
/* ==== FUN_00406e44 @ 00406e44 ==== 
 * signature: undefined FUN_00406e44(void)
 * body: 00406e44-00406e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406e44(byte param_1)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_b [11];
  
  *(char *)(unaff_EBP + 0x550000ff) = *(char *)(unaff_EBP + 0x550000ff) + param_1 / 0x74;
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_b;
  _DAT_004474e8 = _DAT_004474e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


