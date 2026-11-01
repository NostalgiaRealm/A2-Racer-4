
/* ==== FUN_00497d6c @ 00497d6c ==== 
 * signature: undefined FUN_00497d6c(void)
 * body: 00497d6c-00497e83;00497e97-00497eac
 */

void FUN_00497d6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_24;
  byte *pbStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  int iStack_8;
  
  puStack_30 = &stack0xfffffffc;
  puStack_24 = (undefined4 *)0x0;
  pbStack_20 = (byte *)0x0;
  uStack_1c = 0;
  puStack_34 = &UNK_00497ecf;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x497d9e;
  iStack_8 = param_1;
  piVar1 = FUN_0041fefc((int *)&PTR_TList_vmt_000_0041fda4,'\x01',
                        CONCAT31((int3)((uint)param_3 >> 8),1));
  *(int **)(iStack_8 + 0x324) = piVar1;
  piStack_c = (int *)0x0;
  puStack_40 = &UNK_00497ead;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x497dbf;
  puStack_3c = &stack0xfffffffc;
  piStack_c = (int *)FUN_00497b4c();
  puStack_48 = (undefined1 *)0x497dca;
  iVar2 = (**(code **)(*piStack_c + 0x14))();
  uVar3 = iVar2 - 1;
  uVar4 = extraout_ECX;
  if (SBORROW4(iVar2,1)) {
    puStack_48 = (undefined1 *)0x497dd4;
    uVar3 = thunk_FUN_00402808(uVar3);
    uVar4 = extraout_ECX_00;
  }
  if (-1 < (int)uVar3) {
    iStack_18 = uVar3 + 1;
    uStack_10 = 0;
    puStack_48 = (undefined1 *)0x497df3;
    piStack_14 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',uVar4);
    puStack_4c = &UNK_00497e84;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    (**(code **)(*piStack_c + 0xc))(piStack_c,uStack_10,&uStack_1c);
    FUN_00497c88(uStack_1c,piStack_14);
    iVar2 = FUN_00402f6c((int *)FUN_0049198c,'\x01',extraout_ECX_01);
    (**(code **)(*piStack_14 + 0xc))(piStack_14,0,&pbStack_20);
    uVar4 = FUN_00408618(pbStack_20);
    *(undefined4 *)(iVar2 + 4) = uVar4;
    (**(code **)(*piStack_14 + 0xc))(piStack_14,1,&puStack_24);
    FUN_00403cb0((int *)(iVar2 + 8),puStack_24);
    FUN_0041fef4(*(int **)(iStack_8 + 0x324),iVar2);
    *in_FS_OFFSET = uStack_50;
    puStack_48 = &UNK_00497e8b;
    puStack_4c = (undefined *)0x497e83;
    FUN_0040c968(&piStack_14);
    return;
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &UNK_00497eb4;
  puStack_40 = (undefined *)0x497eac;
  FUN_00402f9c(piStack_c);
  return;
}


