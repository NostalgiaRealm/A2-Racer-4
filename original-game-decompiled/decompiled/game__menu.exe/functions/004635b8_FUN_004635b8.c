
/* ==== FUN_004635b8 @ 004635b8 ==== 
 * signature: undefined __register FUN_004635b8(undefined4 param_1, undefined * param_2)
 * body: 004635b8-0046361c;0046364b-00463665
 */

void FUN_004635b8(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined *puStack_28;
  undefined4 local_24;
  code *pcStack_20;
  code *pcStack_1c;
  int local_c;
  undefined *local_8;
  
  local_c = 0;
  pcStack_1c = (code *)0x4635d1;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_20 = thunk_FUN_004036bc;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_28 = (undefined *)0x4635e7;
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_28 = FUN_004040a0(local_8);
  pcStack_2c = (code *)0x4635ed;
  uVar2 = xvga_src_fopen();
  puVar1 = puStack_28;
  pcStack_2c = thunk_FUN_00403408;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar3 = xvga_get_filehandle(uVar2,0,puVar1,uVar2);
  FUN_0041283c((int *)&PTR_THandleStream_vmt_000_0040f050,'\x01',iVar3);
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  pcStack_1c = FUN_0046366d;
  pcStack_20 = (code *)0x463665;
  FUN_00403c80(&local_c,2);
  return;
}


