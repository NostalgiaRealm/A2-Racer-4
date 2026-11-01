
/* ==== FUN_0048c83c @ 0048c83c ==== 
 * signature: undefined __register FUN_0048c83c(int * param_1, undefined * param_2)
 * body: 0048c83c-0048c904
 */

void FUN_0048c83c(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_14c;
  code *pcStackY_148;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_12c;
  code *pcStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_18 = 0;
  local_1c = 0;
  puStack_124 = (undefined1 *)0x48c85b;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_124 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "LoadFromFile";
  FUN_00403f9c(&local_18,3);
  pcStackY_148 = (code *)0x48c8b7;
  iVar2 = local_18;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar2,0,(int)pcVar3);
  pcStackY_148 = (code *)0x48c8d4;
  local_c = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0045e160,'\x01',local_8,0);
  pcStackY_148 = thunk_FUN_004036bc;
  uStackY_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_14c;
  (**(code **)(*param_1 + 0x14))(param_1,local_c);
  *in_FS_OFFSET = uStackY_14c;
  pcStackY_148 = (code *)0x48c904;
  FUN_00402f9c(local_c);
  return;
}


