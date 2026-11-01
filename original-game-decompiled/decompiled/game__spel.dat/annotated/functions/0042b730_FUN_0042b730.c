
/* ==== FUN_0042b730 @ 0042b730 ==== 
 * signature: undefined4 __cdecl FUN_0042b730(int param_1)
 * body: 0042b730-0042bbcb
 */

undefined4 __cdecl FUN_0042b730(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  uint local_9c;
  float local_98 [4];
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c [28];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004af760(local_7c);
  local_4 = 0;
  iVar8 = param_1 * 0xf0;
  iVar9 = *(int *)(iVar8 + 0x48 + DAT_00715e50);
  FUN_0040dad0(iVar9);
  iVar5 = FUN_00426f60(&DAT_005d3460,iVar9);
  iVar6 = FUN_00425300(iVar5);
  iVar5 = iVar8 + DAT_00715e50;
  if (*(int *)(iVar8 + 0x48 + DAT_00715e50) == -1) {
    fVar10 = FUN_004a6800(0x7128b0);
    *(float *)(iVar5 + 0xc0) = (float)(fVar10 * (float10)-100.0 + (float10)*(float *)(iVar5 + 0xc0))
    ;
    pfVar1 = (float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54);
    fVar10 = FUN_004a6800(0x7128b0);
    *pfVar1 = (float)(fVar10 * (float10)*(float *)(iVar8 + 0xc0 + DAT_00715e50) + (float10)*pfVar1);
    piVar2 = (int *)(iVar8 + 0x34 + DAT_00715e50);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9;
    iVar5 = FUN_004af230(&DAT_00715250,*piVar2,*(float *)(iVar5 + 0x50),
                         *(undefined4 *)(iVar5 + 0x54),*(float *)(iVar5 + 0x58));
    *piVar2 = iVar5;
    local_9c = *(uint *)(iVar8 + 0x34 + DAT_00715e50);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9;
    FUN_004adaf0(&local_9c,1,*(float **)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                 *(undefined4 *)(iVar5 + 0x58),&local_80,&local_84,&local_88);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9;
    fVar10 = FUN_004ad640(DAT_00715f00 + local_9c * 0x994,*(float *)(iVar5 + 0x50),
                          *(undefined4 *)(iVar5 + 0x54),*(float *)(iVar5 + 0x58),local_84,local_88);
    iVar5 = iVar8 + DAT_00715e50;
    fVar3 = (float)fVar10;
    if (*(float *)(DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x54) <= fVar3 + 5.0) {
      fVar10 = FUN_004a6800(0x7128b0);
      fVar4 = *(float *)(iVar5 + 0xd0);
      pfVar1 = (float *)(iVar8 + 200 + DAT_00715e50);
      local_98[3] = (float)(fVar10 * (float10)*(float *)(iVar5 + 0xcc));
      *pfVar1 = (float)((float10)*pfVar1 - fVar10 * (float10)*(float *)(iVar5 + 200));
      pfVar1[1] = pfVar1[1] - local_98[3];
      pfVar1[2] = pfVar1[2] - (float)(fVar10 * (float10)fVar4);
    }
    else {
      *(undefined4 *)(iVar5 + 200) = 0x3f800000;
      local_98[2] = 1.0;
      local_98[1] = 1.0;
      local_98[0] = 1.0;
      *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0xd0) = 0x3f800000;
    }
    iVar5 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
    if (*(float *)(DAT_0073b0d0 + iVar5 + 0x54 + iVar5 * 0xa8) < fVar3) {
      *(float *)(DAT_0073b0d0 + iVar5 + 0x54 + iVar5 * 0xa8) = fVar3;
      *(float *)(iVar8 + 0xc0 + DAT_00715e50) = -(*(float *)(iVar8 + 0xc0 + DAT_00715e50) * 0.5);
      *(float *)(iVar8 + 0xbc + DAT_00715e50) = *(float *)(iVar8 + 0xbc + DAT_00715e50) * 0.7;
      *(float *)(iVar8 + 0xc4 + DAT_00715e50) = *(float *)(iVar8 + 0xc4 + DAT_00715e50) * 0.7;
    }
  }
  else {
    iVar9 = iVar9 * 0xf0;
    if ((*(int *)(iVar9 + 100 + DAT_00715e50) == 0) || ((float)iVar6 <= *(float *)(iVar5 + 0x58))) {
      FUN_0042aa20(param_1);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x24) * 0xa9 + DAT_0073b0d0;
      puVar7 = (undefined4 *)
               FUN_004b42a0(local_98,(float *)(DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x50),
                            *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
      *(undefined4 *)(iVar6 + 0x50) = *puVar7;
      *(undefined4 *)(iVar6 + 0x54) = puVar7[1];
      *(undefined4 *)(iVar6 + 0x58) = puVar7[2];
      iVar5 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
      iVar6 = *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
      pfVar1 = (float *)(DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8);
      *pfVar1 = *(float *)(iVar6 + 0x50) + *(float *)(DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8);
      pfVar1[1] = *(float *)(iVar6 + 0x54) + pfVar1[1];
      pfVar1[2] = *(float *)(iVar6 + 0x58) + pfVar1[2];
      *(float *)(iVar8 + 0xc4 + DAT_00715e50) = *(float *)(iVar9 + 0xc4 + DAT_00715e50) * 0.5;
      *(float *)(iVar8 + 0xbc + DAT_00715e50) = *(float *)(iVar9 + 0xbc + DAT_00715e50) * 5.0;
      *(undefined4 *)(iVar8 + 0xc0 + DAT_00715e50) = 0;
      *(undefined4 *)(iVar8 + 0x48 + DAT_00715e50) = 0xffffffff;
    }
  }
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return 1;
}


