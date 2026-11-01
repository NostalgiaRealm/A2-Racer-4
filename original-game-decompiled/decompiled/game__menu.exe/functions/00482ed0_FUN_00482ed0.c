
/* ==== FUN_00482ed0 @ 00482ed0 ==== 
 * signature: undefined FUN_00482ed0(void)
 * body: 00482ed0-00482efc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482ed0(char *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_c [8];
  
  cVar2 = (char)(param_2 + -1);
  *param_1 = *param_1 + '\x01';
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + cVar2;
  in(CONCAT11((char)((uint)(param_2 + -1) >> 8) + cVar2,cVar2));
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_c;
  _DAT_004ad2d8 = _DAT_004ad2d8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


