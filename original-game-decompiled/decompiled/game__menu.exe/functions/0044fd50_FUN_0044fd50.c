
/* ==== FUN_0044fd50 @ 0044fd50 ==== 
 * signature: undefined FUN_0044fd50(void)
 * body: 0044fd50-0044fddb;0044fde3-0044fe41
 */

void FUN_0044fd50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_10;
  int *piStack_c;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  puStack_1c = &UNK_0044fe42;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iStack_8 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x128) + 4) == 0) {
    puStack_24 = (undefined1 *)0x44fd88;
    puStack_18 = &stack0xfffffffc;
    piStack_c = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
    puStack_28 = &UNK_0044fddc;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*piStack_c + 0x40))(piStack_c,*(undefined4 *)(iStack_8 + 0x38));
    (**(code **)(*piStack_c + 0x34))(piStack_c,*(undefined4 *)(iStack_8 + 0x3c));
    FUN_0041b4a4(*(int **)(iStack_8 + 0x128),piStack_c);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x44fde3;
    puStack_28 = (undefined *)0x44fddb;
    FUN_00402f9c(piStack_c);
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x128) + 4);
  puStack_24 = (undefined1 *)0x44fdfc;
  uVar1 = FUN_00403114(piVar2,(int)FUN_004173a4);
  if ((char)uVar1 == '\0') {
    puStack_24 = (undefined1 *)0x44fe18;
    FUN_00405808((undefined4 *)PTR_PTR_004ab6c4,(int *)&puStack_10);
    puStack_24 = (undefined1 *)0x44fe27;
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',puStack_10);
    puStack_24 = (undefined1 *)0x44fe2c;
    FUN_004036f4(piVar2);
  }
  else {
    puStack_24 = (undefined1 *)0x44fe07;
    FUN_0041df1c(piVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0044fe49;
  puStack_1c = (undefined *)0x44fe41;
  FUN_00403c5c((int *)&puStack_10);
  return;
}


