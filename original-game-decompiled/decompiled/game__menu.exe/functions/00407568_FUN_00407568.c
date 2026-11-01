
/* ==== FUN_00407568 @ 00407568 ==== 
 * signature: undefined FUN_00407568(void)
 * body: 00407568-00407594
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407568(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  (&DAT_550000ff)[unaff_EDI] = (&DAT_550000ff)[unaff_EDI] + (char)((uint)param_1 >> 8);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ac4f0 = _DAT_004ac4f0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


