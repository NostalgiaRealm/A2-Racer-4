
/* ==== FUN_0040ca60 @ 0040ca60 ==== 
 * signature: undefined FUN_0040ca60(void)
 * body: 0040ca60-0040ca6b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca60(byte *param_1)

{
  undefined4 uVar1;
  byte unaff_BH;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  *param_1 = *param_1 ^ unaff_BH;
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00447604 = _DAT_00447604 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


