
/* ==== FUN_0045b670 @ 0045b670 ==== 
 * signature: undefined4 __cdecl FUN_0045b670(int param_1, int param_2)
 * body: 0045b670-0045b9ce
 */

undefined4 __cdecl FUN_0045b670(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  undefined4 auStack_140 [16];
  undefined4 local_100;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98 [3];
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80 [12];
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_40 [16];
  
  iVar2 = param_2 * 0xf0 + DAT_00715e50;
  local_a8 = *(undefined4 *)
              (*(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x7c);
  uVar1 = *(undefined4 *)(iVar2 + 0xbc);
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 != -1) {
    pfVar3 = (float *)(DAT_0073b0d0 + *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    pfVar5 = local_40;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar2 = FUN_004316d0(iVar2);
    if ((iVar2 != -1) && ((&DAT_006c3318)[iVar2 * 0x34] == '\x01')) {
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,local_98,0);
      local_c8 = *pfVar3;
      local_c4 = pfVar3[1];
      local_c0 = pfVar3[2];
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,local_98,1);
      goto LAB_0045b7de;
    }
  }
  pfVar3 = (float *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  pfVar5 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar3 = (float *)FUN_00429280(local_98,param_2,2);
  local_c8 = *pfVar3;
  local_c4 = pfVar3[1];
  local_c0 = pfVar3[2];
  local_100 = 0x45b7db;
  pfVar3 = (float *)FUN_00429280(local_98,param_2,3);
LAB_0045b7de:
  local_bc = *pfVar3;
  local_b8 = pfVar3[1];
  local_b4 = pfVar3[2];
  FUN_004bc620(&local_a4,&local_c8,local_40);
  local_100 = 0x45b820;
  FUN_004bc620(&local_8c,&local_bc,local_40);
  pfVar3 = local_40;
  pfVar5 = local_80;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_4c = local_a0 - 1.5;
  local_50 = local_a4;
  local_48 = local_9c;
  pfVar3 = local_80;
  pfVar5 = (float *)auStack_140;
  local_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(8);
  pfVar3 = local_80;
  pfVar5 = (float *)auStack_140;
  local_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(9);
  pfVar3 = local_40;
  pfVar5 = local_80;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_4c = local_88 - 1.5;
  local_50 = local_8c;
  local_48 = local_84;
  pfVar3 = local_80;
  pfVar5 = (float *)auStack_140;
  local_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(8);
  pfVar3 = local_80;
  pfVar5 = (float *)auStack_140;
  local_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(9);
  return 1;
}


