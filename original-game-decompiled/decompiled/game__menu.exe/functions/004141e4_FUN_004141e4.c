
/* ==== FUN_004141e4 @ 004141e4 ==== 
 * signature: undefined FUN_004141e4(void)
 * body: 004141e4-004142d4
 */

void FUN_004141e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_134 = &UNK_004142d5;
  puStack_138 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_138;
  FUN_00403c5c(&iStack_8);
  uVar1 = FUN_00403114(*(int **)(param_4 + -4),(int)&PTR_TPersistent_vmt_000_0040f548);
  if ((char)uVar1 != '\0') {
    FUN_00403cf4(&iStack_8,*(int *)(*(int *)(param_4 + -4) + 8));
  }
  if (iStack_8 == 0) {
    FUN_00402ee4(**(int **)(param_4 + -4),abStack_108);
    FUN_00403e80(&iStack_8,abStack_108);
  }
  iStack_128 = iStack_8;
  uStack_124 = 0xb;
  uStack_120 = *(undefined4 *)PTR_PTR_004ab770;
  uStack_11c = 0xb;
  uStack_118 = *(undefined4 *)(param_4 + -8);
  uStack_114 = 0xb;
  uStack_110 = *(undefined4 *)(param_1 + 4);
  uStack_10c = 0xb;
  uVar2 = 3;
  uVar1 = FUN_0040b6d0((int)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab9a8,3,&iStack_128);
  FUN_004036f4(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_138 = &UNK_004142dc;
  FUN_00403c5c(&iStack_8);
  return;
}


