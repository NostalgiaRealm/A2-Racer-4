
/* ==== FUN_0046cef8 @ 0046cef8 ==== 
 * signature: undefined FUN_0046cef8(void)
 * body: 0046cef8-0046ceff
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046cef8(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  *(char *)(unaff_EDI * 9) = *(char *)(unaff_EDI * 9) + (char)((uint)param_3 >> 8);
  *param_1 = *param_1 + (char)param_1;
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1bc = _DAT_004ad1bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


