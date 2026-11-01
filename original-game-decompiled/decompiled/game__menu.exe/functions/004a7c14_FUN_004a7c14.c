
/* ==== FUN_004a7c14 @ 004a7c14 ==== 
 * signature: undefined __register FUN_004a7c14(undefined4 param_1, uint * param_2, undefined4 param_3, char param_4)
 * body: 004a7c14-004a7e75;004a7e87-004a7eaa;004a7eba-004a7ecf;004a7ed7-004a7f18
 */

void FUN_004a7c14(undefined4 param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint *unaff_EBX;
  byte *unaff_ESI;
  undefined4 *unaff_EDI;
  int *in_FS_OFFSET;
  int local_68;
  undefined4 *local_64;
  byte *local_60;
  uint *local_5c;
  int local_58;
  undefined4 *local_54;
  byte *local_50;
  uint *local_4c;
  code *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  int *piVar4;
  uint **ppuVar5;
  uint *local_34;
  code *local_30;
  undefined1 *local_2c;
  code *local_28;
  code *local_24;
  code *local_20;
  int local_c;
  code *local_8;
  
  iVar3 = 0xc;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_20 = (code *)0x4a7c38;
  local_8 = (code *)param_2;
  FUN_00404090((int)param_2);
  local_20 = (code *)0x4a7c40;
  FUN_00404090(local_c);
  local_24 = thunk_FUN_004036bc;
  local_28 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x4a7c5a;
  local_20 = (code *)&stack0xfffffffc;
  FUN_0044d190(*(int *)PTR_DAT_004ab8ac,extraout_EDX,extraout_ECX);
  if (*(char *)(*(int *)PTR_DAT_004ab8ac + 0x8c) != '\0') {
    *in_FS_OFFSET = (int)local_28;
    local_20 = FUN_004a7f20;
    local_24 = (code *)0x4a7ef1;
    FUN_00403c80(&local_68,8);
    local_24 = (code *)0x4a7efe;
    FUN_00403c80(&local_40,4);
    local_24 = (code *)0x4a7f0b;
    FUN_00403c80((int *)&local_20,4);
    local_24 = (code *)0x4a7f18;
    FUN_00403c80(&local_c,2);
    return;
  }
  local_2c = (undefined1 *)0x4a7c84;
  piVar2 = (int *)TCustomForm_vmt_02c((int *)&PTR_TWinControl_vmt_000_004a7568,'\x01',
                                      *(undefined4 *)(*(int *)PTR_DAT_004ab8ac + 0x38));
  local_30 = thunk_FUN_004036bc;
  local_34 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34;
  local_2c = &stack0xfffffffc;
  TGroupBox_set_Caption((int)piVar2,(uint *)local_8);
  piVar4 = (int *)&stack0xffffffec;
  local_3c = (undefined4 *)0x4a7cb1;
  FUN_00405808(&PTR_DAT_004a7824,(int *)&stack0xffffffe4);
  local_40 = 0x4a7cc2;
  local_3c = unaff_EDI;
  FUN_00405808(&PTR_DAT_004a7804,(int *)&local_20);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7cce;
  FUN_004a790c((int)local_20,puVar1,(int *)&stack0xffffffe8);
  local_30 = local_8;
  local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,0xb);
  local_28 = local_8;
  local_24 = (code *)CONCAT31(local_24._1_3_,0xb);
  local_3c = (undefined4 *)0x4a7cf4;
  FUN_00409254(unaff_ESI,&local_30,1,piVar4);
  TGroupBox_set_Caption(piVar2[0xb4],unaff_EBX);
  (**(code **)(**(int **)(piVar2[0xb9] + 0x208) + 0x34))(*(int **)(piVar2[0xb9] + 0x208),local_c);
  ppuVar5 = &local_34;
  local_3c = (undefined4 *)0x4a7d2d;
  FUN_00405808(&PTR_DAT_004a782c,(int *)&local_3c);
  local_40 = 0x4a7d3e;
  FUN_00405808(&PTR_DAT_004a780c,&local_40);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7d4a;
  FUN_004a790c(local_40,puVar1,(int *)&stack0xffffffc8);
  local_48 = local_8;
  local_44._0_1_ = 0xb;
  local_3c = (undefined4 *)0x4a7d63;
  FUN_00409254((byte *)ppuVar5,&local_48,0,(int *)ppuVar5);
  TGroupBox_set_Caption(piVar2[0xbb],local_34);
  ppuVar5 = &local_4c;
  local_3c = (undefined4 *)0x4a7d85;
  FUN_00405808(&PTR_DAT_004a7834,(int *)&local_54);
  local_3c = local_54;
  local_40 = 0x4a7d96;
  FUN_00405808(&PTR_DAT_004a7814,&local_58);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7da2;
  FUN_004a790c(local_58,puVar1,(int *)&local_50);
  local_48 = local_8;
  local_44._0_1_ = 0xb;
  local_3c = (undefined4 *)0x4a7dbb;
  FUN_00409254(local_50,&local_48,0,(int *)ppuVar5);
  TGroupBox_set_Caption(piVar2[0xbc],local_4c);
  ppuVar5 = &local_5c;
  local_3c = (undefined4 *)0x4a7ddd;
  FUN_00405808(&PTR_DAT_004a783c,(int *)&local_64);
  local_3c = local_64;
  local_40 = 0x4a7dee;
  FUN_00405808(&PTR_DAT_004a781c,&local_68);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7dfa;
  FUN_004a790c(local_68,puVar1,(int *)&local_60);
  local_48 = local_8;
  local_44 = CONCAT31(local_44._1_3_,0xb);
  local_3c = (undefined4 *)0x4a7e13;
  FUN_00409254(local_60,&local_48,0,(int *)ppuVar5);
  TGroupBox_set_Caption(piVar2[0xbd],local_5c);
  if (param_4 == '\x01') {
    FUN_0042ec0c((int *)piVar2[0xbd],extraout_EDX_00,extraout_ECX_00);
  }
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 == 6) {
    local_3c = (undefined4 *)&DAT_004a7e76;
    local_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_40;
    local_44 = 0x4a7e60;
    FUN_004a7a48();
    local_44 = 0x4a7e6c;
    FUN_0044d3f0();
    *in_FS_OFFSET = local_40;
  }
  else if (iVar3 == 7) {
    local_3c = (undefined4 *)&DAT_004a7eab;
    local_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_40;
    local_44 = 0x4a7ea1;
    FUN_0044d3f0();
    *in_FS_OFFSET = local_40;
  }
  *in_FS_OFFSET = (int)local_34;
  local_2c = (undefined1 *)0x4a7ed7;
  local_30 = (code *)0x4a7ecf;
  FUN_00402f9c(piVar2);
  return;
}


