
/* ==== entry @ 004a9170 ==== 
 * signature: undefined __register entry(void)
 * body: 004a9170-004a92ac;004a92dc-004a92f6
 */

void entry(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  code *pcStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  undefined *local_18;
  undefined4 *local_14 [4];
  
  local_1c = 0;
  local_14[0] = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_2c = (undefined1 *)0x4a918e;
  FUN_004065ec(&DAT_004a8b48);
  puVar1 = PTR_DAT_004ab8ac;
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4a91a9;
  puStack_2c = &stack0xfffffffc;
  FUN_0044d2a4();
  puStack_38 = (undefined1 *)0x4a91b3;
  FUN_0044d804(*(undefined4 *)puVar1,(int *)&local_18);
  puStack_38 = (undefined1 *)0x4a91be;
  FUN_004089a0(local_18,(int *)local_14);
  puStack_38 = (undefined1 *)0x4a91d0;
  FUN_00403f28((int *)PTR_DAT_004ab77c,local_14[0],(undefined4 *)"\\MenuTrac.log");
  puStack_38 = (undefined1 *)0x4a91dc;
  FUN_0044cea8(*(int *)puVar1,(uint *)"Race Menu");
  puStack_38 = (undefined1 *)0x4a91e6;
  cVar3 = FUN_0048159c((byte *)"/FIRSTTIME");
  if (cVar3 == '\0') {
    puStack_38 = (undefined1 *)0x4a9217;
    uVar6 = FUN_0048159c((byte *)"/DEFAULT");
    if ((char)uVar6 == '\0') {
      puStack_38 = (undefined1 *)0x4a9228;
      FUN_00451784(*(uint **)(PTR_DAT_004ab8b4 + 0x50));
      puStack_38 = (undefined1 *)0x4a922f;
      FUN_0044d3f0();
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &DAT_004a92fe;
      pcStack_30 = (code *)0x4a92f6;
      FUN_00403c80(&local_1c,3);
      return;
    }
  }
  else {
    puStack_38 = (undefined1 *)0x4a91ef;
    iVar4 = FUN_0045f46c();
    puStack_38 = (undefined1 *)0x4a91f4;
    FUN_0045fcf0(iVar4);
    puStack_38 = (undefined1 *)0x4a91fc;
    FUN_00481394(&local_1c);
    puStack_38 = (undefined1 *)local_1c;
    pcStack_3c = (code *)0x4a9205;
    uVar5 = FUN_0045f46c();
    puVar2 = puStack_38;
    puStack_38 = (undefined1 *)0x4a920b;
    uVar6 = FUN_0045fe88(uVar5,(int)puVar2);
  }
  puStack_38 = (undefined1 *)0x4a9239;
  FUN_00481634(uVar6);
  pcStack_3c = thunk_FUN_00403408;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  pcStack_48 = thunk_FUN_004036bc;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  FUN_004a8500();
  FUN_0044d2bc(*(int *)puVar1,(int)&PTR_TWinControl_vmt_000_004a4bb4,(undefined4 *)PTR_DAT_004ab7e0)
  ;
  FUN_0044d2bc(*(int *)puVar1,(int)&PTR_TPersistent_vmt_000_0047ed2c,(undefined4 *)PTR_DAT_004ab694)
  ;
  TForm_set_Visible(*(int **)PTR_DAT_004ab7e0,CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                    extraout_ECX);
  FUN_0044d33c(*(int *)puVar1);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &DAT_004a92b4;
  pcStack_48 = (code *)0x4a92ac;
  FUN_00481588();
  return;
}


