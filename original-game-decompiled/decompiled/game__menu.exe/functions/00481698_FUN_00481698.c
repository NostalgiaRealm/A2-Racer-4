
/* ==== FUN_00481698 @ 00481698 ==== 
 * signature: undefined __register FUN_00481698(int param_1, int param_2)
 * body: 00481698-004818d9
 */

void FUN_00481698(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined4 *local_30;
  undefined4 *puVar9;
  undefined4 *local_28;
  undefined4 *local_24;
  code *local_20;
  undefined4 *local_1c;
  
  iVar6 = 5;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = (undefined4 *)0x4816b7;
  FUN_00404090(param_2);
  puVar1 = PTR_DAT_004ab694;
  local_20 = thunk_FUN_004036bc;
  local_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)&stack0xffffffe8;
  puVar9 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x4816e0;
  local_1c = (undefined4 *)&stack0xfffffffc;
  uVar2 = FUN_0045f46c();
  local_30 = (undefined4 *)0x4816f0;
  FUN_0045fa3c(uVar2,0x481928,0,(int)puVar9);
  local_30 = (undefined4 *)0x4816fc;
  piVar3 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX);
  local_30 = (undefined4 *)0x48170b;
  piVar4 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_00);
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_30 = (undefined4 *)&stack0xfffffffc;
  FUN_00403f9c((int *)&local_1c,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_1c,piVar3);
  TGDIButtonDefinition_set_Width(param_1,piVar3[0x23]);
  TGDIButtonDefinition_set_Height(param_1,piVar3[0x10]);
  piVar5 = (int *)FUN_00467d48(param_1,0);
  (**(code **)(*piVar5 + 8))(piVar5,piVar3);
  puVar8 = &DAT_00481944;
  puVar7 = &DAT_0048195c;
  iVar6 = param_2;
  FUN_00403f9c((int *)&local_20,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),(undefined4 *)local_20,piVar3);
  piVar5 = (int *)FUN_00467d48(param_1,1);
  (**(code **)(*piVar5 + 8))(piVar5,piVar3,*piVar5,puVar7,puVar8,iVar6);
  puVar8 = &DAT_00481944;
  puVar7 = &DAT_00481968;
  iVar6 = param_2;
  FUN_00403f9c((int *)&local_24,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_24,piVar3);
  piVar5 = (int *)FUN_00467d48(param_1,3);
  (**(code **)(*piVar5 + 8))(piVar5,piVar3,*piVar5,puVar7,puVar8,iVar6);
  puVar8 = &DAT_00481944;
  puVar7 = &DAT_00481974;
  iVar6 = param_2;
  FUN_00403f9c((int *)&local_28,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_28,piVar3);
  piVar5 = (int *)FUN_00467d48(param_1,4);
  (**(code **)(*piVar5 + 8))(piVar5,piVar3,*piVar5,puVar7,puVar8,iVar6);
  puVar8 = &DAT_00481944;
  puVar7 = &DAT_00481980;
  iVar6 = param_2;
  FUN_00403f9c((int *)&stack0xffffffd4,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),puVar9,piVar3);
  piVar5 = (int *)FUN_00467d48(param_1,2);
  (**(code **)(*piVar5 + 8))(piVar5,piVar3,*piVar5,puVar7,puVar8,iVar6);
  puVar8 = &DAT_00481944;
  puVar7 = &DAT_0048198c;
  FUN_00403f9c((int *)&local_30,3);
  FUN_00489760(*(int **)(*(int *)puVar1 + 0xb4),local_30,piVar4);
  piVar5 = (int *)TGDIButtonDefinition_get_UpLink(param_1,6);
  (**(code **)(*piVar5 + 8))(piVar5,piVar4,*piVar5,puVar7,puVar8,param_2);
  *in_FS_OFFSET = puVar7;
  FUN_00402f9c(piVar3);
  FUN_00402f9c(piVar4);
  return;
}


