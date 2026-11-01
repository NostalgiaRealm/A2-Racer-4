
/* ==== FUN_0046bf50 @ 0046bf50 ==== 
 * signature: undefined FUN_0046bf50(void)
 * body: 0046bf50-0046bf7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bf50(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  *(char *)param_1 = (char)*param_1 + (char)((uint)param_3 >> 8);
  *param_1 = *param_1 + 1;
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)(param_2 + -1);
  in(param_2 + -1);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ad1a4 = _DAT_004ad1a4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


