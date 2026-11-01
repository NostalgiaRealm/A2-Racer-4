
/* ==== FUN_00454454 @ 00454454 ==== 
 * signature: undefined FUN_00454454(void)
 * body: 00454454-00454480
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454454(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  DAT_550000ff = DAT_550000ff + (char)((uint)param_1 >> 8);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ac8d0 = _DAT_004ac8d0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


