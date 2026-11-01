
/* ==== FUN_004a5bd8 @ 004a5bd8 ==== 
 * signature: undefined FUN_004a5bd8(void)
 * body: 004a5bd8-004a5c16
 */

void FUN_004a5bd8(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_14 = &UNK_004a5c17;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004a5c24(param_1,&iStack_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004a5c1e;
  puStack_14 = (undefined *)0x4a5c16;
  FUN_00403c5c(&iStack_8);
  return;
}


