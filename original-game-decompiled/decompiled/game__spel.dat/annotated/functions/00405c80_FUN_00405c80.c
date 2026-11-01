
/* ==== FUN_00405c80 @ 00405c80 ==== 
 * signature: undefined __cdecl FUN_00405c80(int param_1)
 * body: 00405c80-00405e84
 */

void __cdecl FUN_00405c80(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  undefined4 auStack_18 [3];
  undefined1 auStack_c [12];
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  puVar5 = FUN_0040ebe0();
  if (-1 < iVar3) {
    iVar6 = (*(code *)**(undefined4 **)(puVar5 + 0x24))();
    if (iVar3 < iVar6) {
      iVar6 = 1;
      goto LAB_00405cc5;
    }
  }
  iVar6 = 0;
LAB_00405cc5:
  FUN_004a6980(iVar6,(byte *)s__s__d____Invalid_object_index____0058fd14);
  fVar2 = *(float *)(*(int *)(*(int *)(puVar5 + 0x28) + 4) + 0x30 + iVar3 * 0x54);
  iVar3 = (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1;
  if (*(int *)(&DAT_005cec0c + iVar1) < 3) {
    pfVar7 = (float *)FUN_004b4070(auStack_18,
                                   DAT_0073b0d0 +
                                   *(int *)(*(int *)(&DAT_005ceac0 + iVar3 + 4) * 0xf0 + 0x24 +
                                           DAT_00715e50) * 0xa9 + 0x10);
    fVar4 = SQRT(pfVar7[2] * pfVar7[2] + pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
    pfVar7 = (float *)FUN_004066c0(auStack_c,*pfVar7 / fVar4,pfVar7[1] / fVar4,pfVar7[2] / fVar4);
    iVar6 = *(int *)(*(int *)(&DAT_005ceac0 + iVar3 + 4) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    iVar3 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
    iVar8 = DAT_0073b0d0 + iVar3;
    *(float *)(&DAT_005cead4 + iVar1) =
         -((pfVar7[1] * (*(float *)(iVar8 + 0x54 + iVar3 * 0xa8) - *(float *)(iVar6 + 0x54)) +
           *pfVar7 * (*(float *)(iVar8 + 0x50 + iVar3 * 0xa8) - *(float *)(iVar6 + 0x50)) +
           pfVar7[2] * (*(float *)(iVar8 + iVar3 * 0xa8 + 0x58) - *(float *)(iVar6 + 0x58))) *
          (fVar2 * 16.0 + 4.0));
  }
  else {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
  }
  *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  fVar9 = FUN_00405a00(*(float *)(&DAT_005cead4 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar9;
  fVar9 = FUN_00405a00(*(float *)(&DAT_005cead8 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar9;
  return;
}


