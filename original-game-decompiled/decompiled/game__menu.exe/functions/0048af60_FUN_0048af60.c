
/* ==== FUN_0048af60 @ 0048af60 ==== 
 * signature: undefined __register FUN_0048af60(int * param_1, undefined * param_2)
 * body: 0048af60-0048b01e
 */

void FUN_0048af60(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  code *pcStackY_34;
  int iVar2;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  undefined *local_18;
  undefined1 local_14;
  int *local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x48af74;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404090((int)param_2);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403c40(" Self = nil: LoadFromFile");
  }
  local_18 = local_c;
  local_14 = 0xb;
  iVar2 = 0;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,0x48b0b8,0,iVar2);
  pcStackY_34 = (code *)0x48afd2;
  local_10 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0045e160,'\x01',local_c,0);
  pcStackY_34 = thunk_FUN_004036bc;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*local_8 + 0x14))(local_8,local_10);
  FUN_00482830(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),*(int *)(local_8[6] + 0x18));
  *in_FS_OFFSET = uStackY_38;
  pcStackY_34 = (code *)0x48b01e;
  FUN_00402f9c(local_10);
  return;
}


