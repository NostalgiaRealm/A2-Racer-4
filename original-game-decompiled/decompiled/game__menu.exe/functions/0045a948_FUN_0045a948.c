
/* ==== FUN_0045a948 @ 0045a948 ==== 
 * signature: undefined __register FUN_0045a948(int * param_1, undefined4 * param_2)
 * body: 0045a948-0045aa4b
 */

void FUN_0045a948(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  char *pcStack_13c;
  undefined4 uStack_12c;
  code *pcStack_128;
  undefined1 *puStack_124;
  byte local_118 [256];
  int local_18;
  int local_14;
  byte *local_10;
  uint *local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = (byte *)0x0;
  local_c = (uint *)0x0;
  puStack_124 = (undefined1 *)0x45a96e;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  uVar1 = 1;
  puStack_124 = &stack0xfffffffc;
  FUN_00408a68((undefined *)local_8,(int *)&local_10);
  FUN_0040822c(local_10,(int *)&local_c);
  FUN_00403fec(local_c,(uint *)&DAT_0045aa64);
  if ((bool)uVar1) {
    TDaviDADLoader_vmt_018((int *)&PTR_TPersistent_vmt_000_00459524,'\x01',local_8);
  }
  else {
    FUN_00403fec(local_c,(uint *)&DAT_0045aa74);
    if ((bool)uVar1) {
      TDaviAVILoader_vmt_018((int *)&PTR_TPersistent_vmt_000_00457464,'\x01',local_8);
    }
    else {
      FUN_00402ee4(*param_1,local_118);
      FUN_00403e80(&local_18,local_118);
      pcStack_13c = " Unhandled case-part";
      FUN_00403f9c(&local_14,4);
      FUN_00403c40(local_14);
    }
  }
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403c80(&local_18,3);
  FUN_00403c80((int *)&local_c,2);
  return;
}


