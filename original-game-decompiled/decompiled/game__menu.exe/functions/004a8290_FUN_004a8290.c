
/* ==== FUN_004a8290 @ 004a8290 ==== 
 * signature: undefined __register FUN_004a8290(void)
 * body: 004a8290-004a833b;004a8346-004a8363
 */

void FUN_004a8290(void)

{
  bool bVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int *local_c;
  int *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_2c = thunk_FUN_00403408;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    local_8 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',DAT_004ab5c8,0x40);
    iVar2 = FUN_00412680(local_8);
    if (10000 < iVar2) {
      local_c = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',DAT_004ab5c8,0x21);
      (**(code **)(*local_8 + 0xc))(local_8,0xffffd8f0,CONCAT22(extraout_var,2));
      FUN_00412728(local_c,local_8,10000);
      (**(code **)*local_c)(local_c,10000);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_004a836b;
  pcStack_20 = (code *)0x4a835b;
  FUN_00402f9c(local_c);
  pcStack_20 = (code *)0x4a8363;
  FUN_00402f9c(local_8);
  return;
}


