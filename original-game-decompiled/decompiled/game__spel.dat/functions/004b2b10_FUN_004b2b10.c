
/* ==== FUN_004b2b10 @ 004b2b10 ==== 
 * signature: undefined4 __cdecl FUN_004b2b10(int param_1, int param_2)
 * body: 004b2b10-004b2bea
 */

undefined4 __cdecl FUN_004b2b10(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  iVar6 = FUN_004a8c50(DAT_00715e50 + param_2 * 0xf0);
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar7 = DAT_0073b0d0 + *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8) - *(float *)(iVar7 + 0x50);
  fVar4 = *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8) - *(float *)(iVar7 + 0x58);
  fVar3 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac) +
          *(float *)(DAT_0073b5c8 + 0x74 + iVar5 * 0xac);
  if (fVar2 * fVar2 + fVar4 * fVar4 < fVar3 * fVar3) {
    return 1;
  }
  return 0;
}


