
/* ==== FUN_0047f6e8 @ 0047f6e8 ==== 
 * signature: undefined FUN_0047f6e8(void)
 * body: 0047f6e8-0047f773
 */

void FUN_0047f6e8(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_20 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  puStack_18 = &UNK_0047f791;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piStack_8 = (int *)0x0;
  puStack_24 = &UNK_0047f774;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00403f28((int *)&puStack_c,*(undefined4 **)(param_1 + 0xb8),(undefined4 *)"debug.ini");
  piStack_8 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_c);
  cVar1 = (**(code **)(*piStack_8 + 0x10))(piStack_8,"GENERAL","debug");
  if (cVar1 == '\0') {
    FUN_0045f46c();
    FUN_0045f660();
  }
  *in_FS_OFFSET = 0;
  puStack_24 = &UNK_0047f77b;
  uStack_28 = 0x47f773;
  FUN_00402f9c(piStack_8);
  return;
}


