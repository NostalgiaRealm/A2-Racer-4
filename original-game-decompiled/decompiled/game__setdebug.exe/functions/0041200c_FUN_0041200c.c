
/* ==== FUN_0041200c @ 0041200c ==== 
 * signature: undefined __register FUN_0041200c(int * param_1, int * param_2)
 * body: 0041200c-0041216c;0041218f-004121ae;004121b6-004121d0
 */

void FUN_0041200c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  code *pcStack_54;
  undefined4 uStack_4c;
  code *pcStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined4 local_20;
  int local_1c [2];
  int *local_14;
  int *local_10;
  int *local_c;
  byte local_5;
  
  pcStack_38 = (code *)&stack0xfffffffc;
  local_1c[1] = 0;
  local_1c[0] = 0;
  pcStack_3c = thunk_FUN_00403434;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x41203f;
  local_10 = param_1;
  local_c = param_2;
  (**(code **)(*param_1 + 0x24))(param_1,&local_5,&local_20);
  puStack_44 = (undefined1 *)0x41204a;
  FUN_0041322c((int)local_10,local_1c + 1,extraout_ECX);
  puStack_44 = (undefined1 *)0x412055;
  FUN_0041322c((int)local_10,local_1c,extraout_ECX_00);
  iVar1 = local_10[0xb];
  iVar2 = local_10[7];
  pcStack_48 = thunk_FUN_00403434;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_14 = local_c;
  puVar4 = extraout_ECX_01;
  uVar5 = extraout_EDX;
  puStack_44 = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    if ((local_5 & 1) == 0) {
      pcStack_54 = (code *)0x412096;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_00411db8(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_01;
    }
    else {
      pcStack_54 = (code *)0x41208d;
      puVar4 = &stack0xfffffffc;
      puStack_44 = &stack0xfffffffc;
      FUN_00411f68(0,extraout_EDX,(int)extraout_ECX_01,(int)&stack0xfffffffc);
      uVar5 = extraout_EDX_00;
    }
  }
  if (local_14 != (int *)0x0) {
    pcStack_54 = thunk_FUN_00403180;
    uStack_58 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_58;
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 1;
    if ((local_5 & 1) == 0) {
      FUN_00411ec8(local_14,uVar5,puVar4,(int)&stack0xfffffffc);
    }
    if (local_14 == (int *)0x0) {
      *in_FS_OFFSET = uStack_58;
      FUN_0040350c();
      *in_FS_OFFSET = uStack_40;
      pcStack_38 = FUN_004121d8;
      pcStack_3c = (code *)0x4121d0;
      FUN_004039dc(local_1c,2);
      return;
    }
    if ((*(byte *)((int)local_14 + 0x21) & 2) != 0) {
      local_10[7] = (int)local_14;
    }
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) | 2;
    (**(code **)(*local_14 + 0x14))(local_14,local_10);
    *(ushort *)(local_14 + 8) = *(ushort *)(local_14 + 8) & 0xfffd;
    if ((local_5 & 2) != 0) {
      FUN_00402ef0((int *)local_10[0xb],local_14,local_20);
    }
    if (((local_5 & 1) == 0) && ((*(byte *)((int)local_14 + 0x21) & 2) == 0)) {
      FUN_0040eec8((int *)local_10[0xd],(int)local_14);
    }
    else {
      iVar3 = FUN_0040f080(local_10[0xd],(int)local_14);
      if (iVar3 < 0) {
        FUN_0040eec8((int *)local_10[0xd],(int)local_14);
      }
    }
    *in_FS_OFFSET = uStack_58;
  }
  *in_FS_OFFSET = uStack_4c;
  local_10[0xb] = iVar1;
  local_10[7] = iVar2;
  return;
}


