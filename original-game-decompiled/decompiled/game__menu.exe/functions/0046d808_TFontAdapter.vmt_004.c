
/* ==== TFontAdapter.vmt_004 @ 0046d808 ==== 
 * signature: undefined __register TFontAdapter.vmt_004(int param_1)
 * body: 0046d808-0046d97e;0046d986-0046d9ab
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TFontAdapter_vmt_004(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  byte bVar2;
  undefined4 uStack_80;
  code *pcStack_7c;
  undefined1 *puStack_78;
  int *piStack_74;
  undefined1 *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 *puStack_48;
  int *piStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_22 [2];
  int local_20;
  undefined1 local_1c [12];
  LPCWSTR local_10;
  int *local_c;
  int local_8;
  
  pcStack_34 = (code *)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  local_10 = (LPCWSTR)0x0;
  local_28 = (int *)0x0;
  pcStack_38 = thunk_FUN_004036bc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    puStack_40 = (undefined4 *)0x46d84b;
    FUN_00405894((int *)&local_28,*(undefined4 **)(param_1 + 0xc));
    if (local_28 != (int *)0x0) {
      puStack_40 = (undefined4 *)0x46d85d;
      puStack_40 = FUN_004042b4(&local_10);
      piStack_44 = local_28;
      puStack_48 = (undefined1 *)0x46d867;
      (**(code **)(*local_28 + 0xc))();
      puStack_48 = local_1c;
      piStack_4c = local_28;
      piStack_50 = (int *)0x46d874;
      (**(code **)(*local_28 + 0x14))();
      piStack_50 = &local_20;
      piStack_54 = local_28;
      piStack_58 = (int *)0x46d887;
      (**(code **)(*local_28 + 0x1c))();
      bVar2 = local_20 != 0;
      piStack_58 = &local_20;
      piStack_5c = local_28;
      piStack_60 = (int *)0x46d89d;
      (**(code **)(*local_28 + 0x24))();
      if (local_20 != 0) {
        bVar2 = bVar2 | 2;
      }
      piStack_60 = &local_20;
      piStack_64 = local_28;
      piStack_68 = (int *)0x46d8b3;
      (**(code **)(*local_28 + 0x2c))();
      if (local_20 != 0) {
        bVar2 = bVar2 | 4;
      }
      piStack_68 = &local_20;
      piStack_6c = local_28;
      puStack_70 = (undefined1 *)0x46d8c9;
      (**(code **)(*local_28 + 0x34))();
      if (local_20 != 0) {
        bVar2 = bVar2 | 8;
      }
      puStack_70 = local_22;
      piStack_74 = local_28;
      puStack_78 = (undefined1 *)0x46d8df;
      (**(code **)(*local_28 + 0x44))();
      puStack_78 = (undefined1 *)0x46d8eb;
      local_c = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX);
      *(undefined1 *)(local_8 + 0x18) = 1;
      pcStack_7c = thunk_FUN_004036bc;
      uStack_80 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_80;
      puStack_78 = &stack0xfffffffc;
      (**(code **)(*local_c + 8))(local_c,*(undefined4 *)(local_8 + 0x1c));
      FUN_00403ea4((int *)&local_2c,local_10);
      TFont_set_Name(local_c,local_2c);
      iVar1 = FUN_00402ac8();
      TFont_set_Size(local_c,iVar1);
      TFont_set_Style(local_c,bVar2);
      TFont_set_Charset(local_c,local_22[0]);
      (**(code **)(**(int **)(local_8 + 0x1c) + 8))(*(int **)(local_8 + 0x1c),local_c);
      *in_FS_OFFSET = uStack_80;
      puStack_78 = (undefined1 *)0x46d986;
      *(undefined1 *)(local_8 + 0x18) = 0;
      pcStack_7c = (code *)0x46d97e;
      FUN_00402f9c(local_c);
      return;
    }
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_0046d9b3;
  pcStack_38 = (code *)0x46d99b;
  FUN_00403c5c((int *)&local_2c);
  pcStack_38 = (code *)0x46d9a3;
  FUN_00405860((int *)&local_28);
  pcStack_38 = (code *)0x46d9ab;
  FUN_004042b4(&local_10);
  return;
}


