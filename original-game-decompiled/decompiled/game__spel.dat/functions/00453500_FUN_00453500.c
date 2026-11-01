
/* ==== FUN_00453500 @ 00453500 ==== 
 * signature: undefined4 __cdecl FUN_00453500(int param_1, int param_2, float param_3)
 * body: 00453500-004535c4
 */

undefined4 __cdecl FUN_00453500(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  iVar6 = FUN_004a8c50(DAT_00715e50 + param_2 * 0xf0);
  iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  fVar3 = *(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x50);
  fVar5 = *(float *)(DAT_0073b0d0 + iVar2 + 0x58 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x58);
  fVar4 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac) + param_3;
  if (fVar3 * fVar3 + fVar5 * fVar5 < fVar4 * fVar4) {
    return 1;
  }
  return 0;
}


