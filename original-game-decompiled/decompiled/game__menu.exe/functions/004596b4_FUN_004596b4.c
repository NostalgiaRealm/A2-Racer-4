
/* ==== FUN_004596b4 @ 004596b4 ==== 
 * signature: undefined __register FUN_004596b4(undefined4 param_1, undefined * param_2)
 * body: 004596b4-00459763
 */

void FUN_004596b4(undefined4 param_1,undefined *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  byte *local_10;
  uint *local_c;
  undefined *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (byte *)0x0;
  pcStack_18 = (code *)0x4596c9;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = 1;
  pcStack_18 = (code *)&stack0xfffffffc;
  FUN_00408a68(local_8,(int *)&local_10);
  FUN_0040822c(local_10,(int *)&local_c);
  FUN_00403fec(local_c,(uint *)&DAT_0045977c);
  if ((bool)uVar1) {
    TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX);
  }
  else {
    FUN_00403fec(local_c,(uint *)&DAT_0045978c);
    if ((bool)uVar1) {
      TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX_00);
    }
    else {
      FUN_00403c40(" Unhandled case-part");
    }
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0045976b;
  pcStack_1c = (code *)0x459756;
  FUN_00403c5c((int *)&local_10);
  pcStack_1c = (code *)0x459763;
  FUN_00403c80((int *)&local_c,2);
  return;
}


