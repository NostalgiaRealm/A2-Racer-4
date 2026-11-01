
/* ==== FUN_004253b0 @ 004253b0 ==== 
 * signature: undefined4 __cdecl FUN_004253b0(int param_1)
 * body: 004253b0-00425483
 */

undefined4 __cdecl FUN_004253b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float local_40 [16];
  
  iVar2 = param_1 * 0xf0;
  iVar5 = *(int *)(iVar2 + 0x48 + DAT_00715e50);
  if (iVar5 != -1) {
    iVar1 = *(int *)(iVar2 + 0x24 + DAT_00715e50);
    iVar6 = iVar5 * 0xf0 + DAT_00715e50;
    iVar5 = *(int *)(iVar6 + 0x24);
    *(undefined4 *)(iVar2 + 0x34 + DAT_00715e50) = *(undefined4 *)(iVar6 + 0x34);
    iVar6 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
    puVar3 = (undefined4 *)FUN_004a1e20(*(void **)(iVar2 + 0x10 + DAT_00715e50),local_40);
    puVar7 = (undefined4 *)(iVar6 + 0x10);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    pfVar8 = (float *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x10);
    pfVar4 = (float *)FUN_004b4110(local_40,(float *)(DAT_0073b0d0 + iVar5 * 0xa9 + 0x10),pfVar8);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar8 = pfVar8 + 1;
    }
    return 1;
  }
  return 1;
}


