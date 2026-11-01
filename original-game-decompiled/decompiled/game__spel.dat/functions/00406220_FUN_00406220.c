
/* ==== FUN_00406220 @ 00406220 ==== 
 * signature: undefined __cdecl FUN_00406220(int param_1, float * param_2, float * param_3, float param_4, float param_5, char param_6)
 * body: 00406220-00406381
 */

void __cdecl
FUN_00406220(int param_1,float *param_2,float *param_3,float param_4,float param_5,char param_6)

{
  int iVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  puVar3 = FUN_0040ebe0();
  if (-1 < iVar5) {
    iVar4 = (*(code *)**(undefined4 **)(puVar3 + 0x24))();
    if (iVar5 < iVar4) {
      iVar5 = 1;
      goto LAB_0040625c;
    }
  }
  iVar5 = 0;
LAB_0040625c:
  FUN_004a6980(iVar5,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
  iVar5 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  fVar2 = (*(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) - *param_2) * *param_3 +
          (*(float *)(iVar5 + 4) - param_2[1]) * param_3[1] +
          (*(float *)(iVar5 + 8) - param_2[2]) * param_3[2];
  if (fVar2 < param_4) {
    *(float *)(&DAT_005cead4 + iVar1) = param_5 + *(float *)(&DAT_005cead4 + iVar1);
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  }
  if (param_4 < fVar2) {
    if (param_6 == '\0') {
      *(float *)(&DAT_005cead4 + iVar1) = *(float *)(&DAT_005cead4 + iVar1) - param_5;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    }
    else {
      *(float *)(&DAT_005cead8 + iVar1) = param_5 + *(float *)(&DAT_005cead8 + iVar1);
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    }
  }
  fVar6 = FUN_00405a00(*(float *)(&DAT_005cead4 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar6;
  fVar6 = FUN_00405a00(*(float *)(&DAT_005cead8 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar6;
  return;
}


