
/* ==== FUN_0042aa20 @ 0042aa20 ==== 
 * signature: undefined4 __cdecl FUN_0042aa20(int param_1)
 * body: 0042aa20-0042ab16
 */

undefined4 __cdecl FUN_0042aa20(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float local_c [3];
  
  iVar5 = param_1 * 0xf0;
  piVar1 = (int *)(iVar5 + 0x24 + DAT_00715e50);
  iVar7 = *(int *)(iVar5 + 0x48 + DAT_00715e50) * 0xf0;
  *(undefined4 *)(iVar5 + 0x34 + DAT_00715e50) = *(undefined4 *)(iVar7 + 0x34 + DAT_00715e50);
  iVar7 = *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
  iVar4 = *piVar1 * 0xa9;
  puVar9 = (undefined4 *)(iVar7 + 0x10 + DAT_0073b0d0);
  puVar10 = (undefined4 *)(iVar4 + 0x10 + DAT_0073b0d0);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  pfVar6 = (float *)FUN_004b42a0(local_c,(float *)(DAT_0073b0d0 +
                                                   *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 +
                                                  0x50),iVar7 + 0x10 + DAT_0073b0d0);
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  *(float *)(iVar4 + 0x40 + DAT_0073b0d0) = *pfVar6 + *(float *)(iVar4 + 0x40 + DAT_0073b0d0);
  *(float *)(iVar4 + 0x44 + DAT_0073b0d0) = fVar2 + *(float *)(iVar4 + 0x44 + DAT_0073b0d0);
  *(float *)(iVar4 + 0x48 + DAT_0073b0d0) = fVar3 + *(float *)(iVar4 + 0x48 + DAT_0073b0d0);
  return 1;
}


