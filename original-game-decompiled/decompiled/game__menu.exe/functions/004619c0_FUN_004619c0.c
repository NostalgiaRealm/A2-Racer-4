
/* ==== FUN_004619c0 @ 004619c0 ==== 
 * signature: undefined FUN_004619c0(void)
 * body: 004619c0-00461a2f
 */

void FUN_004619c0(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0;
  puStack_14 = (undefined1 *)0x4619d9;
  iStack_8 = param_1;
  FUN_00404090(param_1);
  puStack_18 = &UNK_00461a30;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004085ac(*(undefined4 *)(*(int *)(param_4 + -8) + 0x44),&iStack_c);
  iVar1 = iStack_8;
  FUN_00403f9c(param_2,4);
  *in_FS_OFFSET = iVar1;
  FUN_00403c80(&iStack_c,2);
  return;
}


