
/* ==== FUN_00488248 @ 00488248 ==== 
 * signature: undefined FUN_00488248(void)
 * body: 00488248-004882d5
 */

void FUN_00488248(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  int *piVar1;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  ushort auStack_20 [4];
  uint uStack_18;
  undefined1 uStack_14;
  uint uStack_10;
  undefined1 uStack_c;
  int iStack_8;
  
  puStack_30 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_34 = &UNK_004882d6;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  piVar1 = &iStack_8;
  FUN_00487478(param_1,(undefined4 *)auStack_20);
  uStack_18 = (uint)auStack_20[0];
  uStack_14 = 0;
  FUN_00487478(param_1,&uStack_28);
  uStack_10 = (uint)uStack_28._2_2_;
  uStack_c = 0;
  FUN_00409254(&UNK_004882ec,&uStack_18,1,piVar1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0);
  (**(code **)(*piVar1 + 0x38))(piVar1,iStack_8,param_1);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &UNK_004882dd;
  puStack_34 = (undefined *)0x4882d5;
  FUN_00403c5c(&iStack_8);
  return;
}


