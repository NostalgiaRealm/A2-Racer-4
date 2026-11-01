
/* ==== FUN_0040dde8 @ 0040dde8 ==== 
 * signature: undefined FUN_0040dde8(void)
 * body: 0040dde8-0040de14
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dde8(int *param_1,short param_2)

{
  undefined4 uVar1;
  char unaff_BH;
  int unaff_EBP;
  char *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  *unaff_EDI = *unaff_EDI + unaff_BH;
  *param_1 = *param_1 + 1;
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)(param_2 + -1);
  in(param_2 + -1);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ac610 = _DAT_004ac610 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


