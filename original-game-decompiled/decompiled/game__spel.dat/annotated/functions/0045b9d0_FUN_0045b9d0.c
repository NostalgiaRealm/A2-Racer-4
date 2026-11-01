
/* ==== FUN_0045b9d0 @ 0045b9d0 ==== 
 * signature: undefined4 __stdcall FUN_0045b9d0(int param_1, int param_2)
 * body: 0045b9d0-0045b9d0
 */

undefined4 FUN_0045b9d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  undefined4 auStack_140 [16];
  undefined4 uStack_100;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [3];
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float afStack_80 [12];
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float afStack_40 [16];
  
  iVar2 = param_2 * 0xf0 + DAT_00715e50;
  uStack_a8 = *(undefined4 *)
               (*(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x7c);
  uVar1 = *(undefined4 *)(iVar2 + 0xbc);
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 != -1) {
    pfVar3 = (float *)(DAT_0073b0d0 + *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    pfVar5 = afStack_40;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar2 = FUN_004316d0(iVar2);
    if ((iVar2 != -1) && ((&DAT_006c3318)[iVar2 * 0x34] == '\x01')) {
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,auStack_98,0);
      fStack_c8 = *pfVar3;
      fStack_c4 = pfVar3[1];
      fStack_c0 = pfVar3[2];
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,auStack_98,1);
      goto LAB_0045bb3e;
    }
  }
  pfVar3 = (float *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  pfVar5 = afStack_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar3 = (float *)FUN_00429280(auStack_98,param_2,2);
  fStack_c8 = *pfVar3;
  fStack_c4 = pfVar3[1];
  fStack_c0 = pfVar3[2];
  uStack_100 = 0x45bb3b;
  pfVar3 = (float *)FUN_00429280(auStack_98,param_2,3);
LAB_0045bb3e:
  fStack_bc = *pfVar3;
  fStack_b8 = pfVar3[1];
  fStack_b4 = pfVar3[2];
  FUN_004bc620(&fStack_a4,&fStack_c8,afStack_40);
  uStack_100 = 0x45bb80;
  FUN_004bc620(&fStack_8c,&fStack_bc,afStack_40);
  pfVar3 = afStack_40;
  pfVar5 = afStack_80;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  fStack_4c = fStack_a0 - 0.1;
  fStack_50 = fStack_a4;
  uStack_48 = uStack_9c;
  pfVar3 = afStack_80;
  pfVar5 = (float *)auStack_140;
  uStack_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(10);
  pfVar3 = afStack_80;
  pfVar5 = (float *)auStack_140;
  uStack_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(0xb);
  pfVar3 = afStack_40;
  pfVar5 = afStack_80;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  fStack_4c = fStack_88 - 0.1;
  fStack_50 = fStack_8c;
  uStack_48 = uStack_84;
  pfVar3 = afStack_80;
  pfVar5 = (float *)auStack_140;
  uStack_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(10);
  pfVar3 = afStack_80;
  pfVar5 = (float *)auStack_140;
  uStack_100 = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_0045d170(0xc);
  return 1;
}


