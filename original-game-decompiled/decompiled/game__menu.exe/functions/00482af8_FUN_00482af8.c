
/* ==== FUN_00482af8 @ 00482af8 ==== 
 * signature: undefined __register FUN_00482af8(int param_1, undefined4 * param_2, undefined4 * param_3, undefined1 * param_4, int param_5)
 * body: 00482af8-00482ca2;00482cad-00482cd2
 */

void FUN_00482af8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 *puVar4;
  int iStack_7c;
  code *pcStack_78;
  undefined1 *puStack_74;
  uint **ppuStack_70;
  char *pcStack_6c;
  code *pcStack_68;
  code *pcStack_64;
  int iStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  uint *local_44;
  undefined *local_40;
  byte *local_3c;
  int local_38;
  uint *local_34;
  int local_30;
  char *local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_44 = (uint *)0x0;
  local_3c = (byte *)0x0;
  local_40 = (undefined *)0x0;
  local_38 = 0;
  local_34 = (uint *)0x0;
  local_30 = 0;
  local_24 = 0;
  puStack_54 = (undefined1 *)0x482b29;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404090((int)param_2);
  puStack_54 = (undefined1 *)0x482b31;
  FUN_00404090((int)local_10);
  pcStack_58 = thunk_FUN_004036bc;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puStack_54 = &stack0xfffffffc;
  if (local_8 == 0) {
    local_2c = "aAgent";
    local_28 = 0xb;
    pcStack_64 = (code *)0x482b64;
    puStack_54 = &stack0xfffffffc;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be nil",&local_2c,0,&local_24);
    FUN_00403c40(local_24);
  }
  if (local_c == (undefined4 *)0x0) {
    local_2c = "aIniFileName";
    local_28 = 0xb;
    pcStack_64 = (code *)0x482b9b;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be empty",&local_2c,0,&local_30);
    FUN_00403c40(local_30);
  }
  FUN_0047de70(local_8);
  local_18 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_c);
  local_14 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  pcStack_64 = thunk_FUN_004036bc;
  pcStack_68 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_68;
  pcStack_6c = "Error";
  ppuStack_70 = &local_34;
  puStack_74 = (undefined1 *)0x482bfc;
  (**(code **)*local_18)(local_18,local_10,"Caption");
  puStack_74 = (undefined1 *)0x482c07;
  FUN_0047e28c(local_8,local_34);
  puStack_74 = (undefined1 *)0x482c17;
  FUN_00403f28(&local_38,local_10,(undefined4 *)"BalloonItems");
  puStack_74 = (undefined1 *)0x482c25;
  (**(code **)(*local_18 + 0x40))(local_18,local_38,local_14);
  puStack_74 = (undefined1 *)0x482c2d;
  iVar1 = (**(code **)(*local_14 + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    puStack_74 = (undefined1 *)0x482c37;
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_20 = uVar2 + 1;
    local_1c = 0;
    do {
      pcStack_78 = thunk_FUN_00403408;
      iStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_7c;
      puVar4 = param_4;
      iVar1 = param_5;
      puStack_74 = &stack0xfffffffc;
      FUN_00411730(local_14,local_1c,(int *)&local_40);
      FUN_004118bc(local_14,local_40,(int *)&local_3c);
      iVar3 = FUN_00408618(local_3c);
      FUN_00411730(local_14,local_1c,(int *)&local_44);
      FUN_0047ddf8(local_8,local_44,iVar3,puVar4,iVar1);
      *in_FS_OFFSET = (int)puVar4;
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = (int)ppuStack_70;
  pcStack_68 = FUN_00482cda;
  pcStack_6c = (char *)0x482cca;
  FUN_0040c968(&local_14);
  pcStack_6c = (char *)0x482cd2;
  FUN_0040c968(&local_18);
  return;
}


