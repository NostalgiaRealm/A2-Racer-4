
/* ==== FUN_00406390 @ 00406390 ==== 
 * signature: undefined __cdecl FUN_00406390(int param_1)
 * body: 00406390-0040645f
 */

void __cdecl FUN_00406390(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  puVar5 = FUN_0040ebe0();
  if ((iVar3 < 0) || (iVar6 = (*(code *)**(undefined4 **)(puVar5 + 0x24))(), iVar6 <= iVar3)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  FUN_004a6980(iVar6,(byte *)s__s__d____Invalid_object_index____0058fd14);
  fVar2 = *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50);
  if ((*(float *)(&DAT_005ceacc + iVar1) < fVar2) &&
     (fVar4 = (fVar2 - *(float *)(&DAT_005ceacc + iVar1)) *
              *(float *)(*(int *)(*(int *)(puVar5 + 0x28) + 4) + 0x44 + iVar3 * 0x54) +
              *(float *)(&DAT_005ceacc + iVar1), fVar4 < fVar2)) {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(float *)(&DAT_005cead8 + iVar1) = fVar2 - fVar4;
  }
  return;
}


