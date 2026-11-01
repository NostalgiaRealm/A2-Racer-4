
/* ==== FUN_004a790c @ 004a790c ==== 
 * signature: undefined __register FUN_004a790c(int param_1, undefined4 * param_2, int * param_3)
 * body: 004a790c-004a79cf
 */

void FUN_004a790c(int param_1,undefined4 *param_2,int *param_3)

{
  int *in_FS_OFFSET;
  uint *puVar1;
  code *pcStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  uint local_1c;
  undefined *local_18;
  undefined4 *local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_1c = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_28 = (undefined1 *)0x4a792f;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404090(param_1);
  puStack_28 = (undefined1 *)0x4a7937;
  FUN_00404090((int)local_c);
  pcStack_2c = thunk_FUN_004036bc;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x4a7954;
  puStack_28 = &stack0xfffffffc;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_18);
  puStack_34 = (undefined1 *)0x4a795f;
  FUN_004089a0(local_18,(int *)&local_14);
  puStack_34 = (undefined1 *)0x4a796c;
  FUN_00403ee4((int *)&local_14,(undefined4 *)"menu.ini");
  puStack_34 = (undefined1 *)0x4a797b;
  local_10 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_14);
  pcStack_38 = thunk_FUN_004036bc;
  pcStack_3c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_3c;
  puVar1 = &local_1c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)*local_10)(local_10,"errorstrings",local_8,puVar1,0);
  FUN_004a7844(local_1c,param_3);
  if (*param_3 == 0) {
    FUN_00403cb0(param_3,local_c);
  }
  *in_FS_OFFSET = (int)puVar1;
  pcStack_3c = FUN_004a79d7;
  FUN_00402f9c(local_10);
  return;
}


