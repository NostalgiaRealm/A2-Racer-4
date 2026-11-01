
/* ==== entry @ 00445940 ==== 
 * signature: undefined __register entry(void)
 * body: 00445940-00445a9c
 */

void entry(void)

{
  undefined4 uVar1;
  int *in_FS_OFFSET;
  undefined4 **ppuVar2;
  int iStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined *local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  puStack_28 = (undefined1 *)0x445957;
  FUN_00406034(&DAT_00445808);
  pcStack_2c = thunk_FUN_00403434;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00442678(*(undefined4 *)PTR_DAT_00446c80,(int *)&local_18);
  FUN_00407ef8(local_18,(int *)&local_14);
  FUN_00403c84((int *)&DAT_00447850,local_14,(undefined4 *)"debug.ini");
  uVar1 = FUN_00407e2c((undefined *)DAT_00447850);
  if ((char)uVar1 == '\0') {
    FUN_0040399c("Cannot find \"debug.ini\"");
  }
  FUN_00445760((undefined *)DAT_00447850);
  DAT_00447844 = FUN_00444c58((int *)&PTR_TIniFile_vmt_000_00444bfc,'\x01',DAT_00447850);
  DAT_00447848 = (**(code **)(*DAT_00447844 + 8))(DAT_00447844,"general","debug",0);
  if (DAT_00447848 == 0) {
    (**(code **)(*DAT_00447844 + 0xc))(DAT_00447844,"general","debug",1);
    ppuVar2 = &local_1c;
    (**(code **)*DAT_00447844)(DAT_00447844,"messages",&DAT_00445b44,ppuVar2,&DAT_00445b38);
    FUN_00403a0c((int *)&DAT_0044784c,local_1c);
  }
  else {
    (**(code **)(*DAT_00447844 + 0xc))(DAT_00447844,"general","debug",0);
    ppuVar2 = &local_20;
    (**(code **)*DAT_00447844)(DAT_00447844,"messages","isoff",ppuVar2,&DAT_00445b38);
    FUN_00403a0c((int *)&DAT_0044784c,local_20);
  }
  FUN_00444900(DAT_0044784c);
  *in_FS_OFFSET = (int)ppuVar2;
  FUN_004039dc((int *)&local_20,4);
  return;
}


