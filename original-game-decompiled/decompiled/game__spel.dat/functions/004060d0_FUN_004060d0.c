
/* ==== FUN_004060d0 @ 004060d0 ==== 
 * signature: undefined __cdecl FUN_004060d0(int param_1, float param_2, float param_3, char param_4)
 * body: 004060d0-00406212
 */

void __cdecl FUN_004060d0(int param_1,float param_2,float param_3,char param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  puVar2 = FUN_0040ebe0();
  if (-1 < iVar4) {
    iVar3 = (*(code *)**(undefined4 **)(puVar2 + 0x24))();
    if (iVar4 < iVar3) {
      iVar4 = 1;
      goto LAB_0040610c;
    }
  }
  iVar4 = 0;
LAB_0040610c:
  FUN_004a6980(iVar4,(byte *)s__s__d____Invalid_object_index____0058fd14);
  if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) < param_2) {
    *(float *)(&DAT_005cead4 + iVar1) = param_3 + *(float *)(&DAT_005cead4 + iVar1);
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  }
  if (param_2 < *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    if (param_4 == '\0') {
      *(float *)(&DAT_005cead4 + iVar1) = *(float *)(&DAT_005cead4 + iVar1) - param_3;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    }
    else {
      *(float *)(&DAT_005cead8 + iVar1) = param_3 + *(float *)(&DAT_005cead8 + iVar1);
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    }
  }
  fVar5 = FUN_00405a00(*(float *)(&DAT_005cead4 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar5;
  fVar5 = FUN_00405a00(*(float *)(&DAT_005cead8 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar5;
  return;
}


