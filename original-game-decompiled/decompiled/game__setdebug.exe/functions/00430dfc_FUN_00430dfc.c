
/* ==== FUN_00430dfc @ 00430dfc ==== 
 * signature: undefined __register FUN_00430dfc(int * param_1, int * param_2)
 * body: 00430dfc-00431042
 */

void FUN_00430dfc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  undefined4 uStack_74;
  undefined4 uStack_68;
  code *pcStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  int local_44 [4];
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_54 = (undefined1 *)0x430e19;
  local_8 = param_1;
  FUN_00410b28(param_2,&local_1c,4);
  puStack_54 = (undefined1 *)0x430e28;
  FUN_00410b28(param_2,&local_20,4);
  puStack_54 = (undefined1 *)0x430e34;
  local_c = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX);
  pcStack_58 = thunk_FUN_00403434;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x430e4c;
  puStack_54 = &stack0xfffffffc;
  iVar1 = FUN_00410ad4(param_2);
  puStack_60 = (undefined1 *)0x430e58;
  (**(code **)(*local_c + 0x50))(local_c,param_2);
  puStack_60 = (undefined1 *)0x430e64;
  FUN_00410ae4(param_2,local_1c + iVar1);
  puStack_60 = (undefined1 *)0x430e70;
  local_14 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX_00);
  pcStack_64 = thunk_FUN_00403434;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x50))(local_14,param_2);
  local_10 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX_01);
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  local_18 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX_02);
  FUN_0041c378(local_18,1);
  (**(code **)(*local_18 + 0x40))(local_18,local_8[10]);
  (**(code **)(*local_18 + 0x34))(local_18,local_8[9]);
  uStack_74 = 0x430f05;
  FUN_0040e5ac(0,0,local_8[10],local_34,local_8[9]);
  FUN_00431214((int)local_8);
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  iVar1 = (**(code **)(*local_c + 0x20))();
  if (-1 < iVar1 / local_8[9] + -1) {
    iVar5 = 0;
    local_24 = iVar1 / local_8[9];
    do {
      if (local_20 == 0) break;
      iVar1 = (**(code **)(*local_c + 0x2c))();
      iVar1 = iVar1 / local_8[10];
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          if (local_20 == 0) break;
          FUN_0040e5c8(local_8[10] * iVar4,local_8[9] * iVar5,local_8[10],local_44,local_8[9]);
          piVar6 = local_44;
          piVar2 = (int *)FUN_0041b6f8(local_c);
          piVar3 = (int *)FUN_0041b6f8(local_10);
          FUN_00416fcc(piVar3,local_34,piVar2,piVar6);
          FUN_0040e5c8(local_8[10] * iVar4,local_8[9] * iVar5,local_8[10],local_44,local_8[9]);
          piVar6 = local_44;
          piVar2 = (int *)FUN_0041b6f8(local_14);
          piVar3 = (int *)FUN_0041b6f8(local_18);
          FUN_00416fcc(piVar3,local_34,piVar2,piVar6);
          FUN_00430398(local_8,local_10,local_18);
          local_20 = local_20 + -1;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *in_FS_OFFSET = uStack_74;
  FUN_00402d14(local_10);
  FUN_00402d14(local_18);
  FUN_00431218(local_8,extraout_EDX,extraout_ECX_03);
  return;
}


