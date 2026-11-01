
/* ==== FUN_00412630 @ 00412630 ==== 
 * signature: undefined FUN_00412630(void)
 * body: 00412630-00412720
 */

void FUN_00412630(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puStack_138;
  undefined *puStack_134;
  undefined1 *puStack_130;
  int iStack_128;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  byte abStack_108 [256];
  int iStack_8;
  
  puStack_130 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_134 = &UNK_00412721;
  puStack_138 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_138;
  FUN_004039b8(&iStack_8);
  uVar1 = FUN_00402e8c(*(int **)(param_4 + -4),(int)&PTR_TPersistent_vmt_000_0040e30c);
  if ((char)uVar1 != '\0') {
    FUN_00403a50(&iStack_8,*(int *)(*(int *)(param_4 + -4) + 8));
  }
  if (iStack_8 == 0) {
    FUN_00402c60(**(int **)(param_4 + -4),abStack_108);
    FUN_00403bdc(&iStack_8,abStack_108);
  }
  iStack_128 = iStack_8;
  uStack_124 = 0xb;
  uStack_120 = *(undefined4 *)PTR_PTR_00446b88;
  uStack_11c = 0xb;
  uStack_118 = *(undefined4 *)(param_4 + -8);
  uStack_114 = 0xb;
  uStack_110 = *(undefined4 *)(param_1 + 4);
  uStack_10c = 0xb;
  uVar2 = 3;
  uVar1 = FUN_0040aa30((int)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d40,3,&iStack_128);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_138 = &UNK_00412728;
  FUN_004039b8(&iStack_8);
  return;
}


