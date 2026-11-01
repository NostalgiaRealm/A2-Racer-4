
/* ==== FUN_00462364 @ 00462364 ==== 
 * signature: undefined FUN_00462364(void)
 * body: 00462364-0046238c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462364(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  in(param_2);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ad150 = _DAT_004ad150 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


