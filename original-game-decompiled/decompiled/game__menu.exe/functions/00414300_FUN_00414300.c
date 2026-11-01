
/* ==== FUN_00414300 @ 00414300 ==== 
 * signature: undefined __register FUN_00414300(int * param_1, int * param_2)
 * body: 00414300-00414451;0041446f-00414478;004144ae-004144c3
 */

void FUN_00414300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  code *pcStack_2c;
  code *pcStack_28;
  int *local_18;
  int *local_14;
  int local_c;
  int *local_8;
  
  pcStack_28 = (code *)&stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  pcStack_2c = thunk_FUN_004036bc;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  pcStack_38 = thunk_FUN_00403534;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_40 = (undefined1 *)0x41433b;
  local_8 = param_2;
  FUN_00414de0((int)param_1,&local_c,0);
  pcStack_44 = thunk_FUN_00403534;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  iVar5 = 1;
  puStack_40 = &stack0xfffffffc;
  iVar1 = FUN_00403edc(local_c);
  local_14 = local_8;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar2 = iVar5;
  while( true ) {
    for (; (iVar5 <= iVar1 && (*(char *)(local_c + -1 + iVar5) != '.')); iVar5 = iVar5 + 1) {
    }
    FUN_004040e4(local_c,iVar2,iVar5 - iVar2,param_1 + 0x1c);
    if (iVar1 < iVar5) break;
    iVar2 = FUN_004031bc(*local_14);
    puVar3 = (undefined4 *)FUN_0040dec0(iVar2,(undefined1 *)param_1[0x1c]);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00413714((int)param_1,extraout_EDX,extraout_ECX);
    }
    local_18 = (int *)0x0;
    if (**(char **)*puVar3 == '\a') {
      local_18 = (int *)FUN_0040df80(local_14,puVar3);
    }
    uVar4 = FUN_00403114(local_18,(int)&PTR_TPersistent_vmt_000_0040eb7c);
    if ((char)uVar4 == '\0') {
      FUN_004142e4(uVar4,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    }
    local_14 = local_18;
    iVar5 = iVar5 + 1;
    iVar2 = iVar5;
  }
  iVar2 = FUN_004031bc(*local_14);
  puVar3 = (undefined4 *)FUN_0040dec0(iVar2,(undefined1 *)param_1[0x1c]);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    (**(code **)(*local_14 + 4))(local_14,param_1);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (param_1[0x1c] != 0) {
      FUN_00413714((int)param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    FUN_00414754(param_1,local_14,puVar3);
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  *in_FS_OFFSET = local_30;
  pcStack_28 = FUN_004144cb;
  pcStack_2c = (code *)0x4144c3;
  FUN_00403c5c(&local_c);
  return;
}


