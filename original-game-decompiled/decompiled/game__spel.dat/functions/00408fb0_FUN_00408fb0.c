
/* ==== FUN_00408fb0 @ 00408fb0 ==== 
 * signature: undefined4 __cdecl FUN_00408fb0(int param_1)
 * body: 00408fb0-00409068
 */

undefined4 __cdecl FUN_00408fb0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0;
  fVar1 = *(float *)(iVar3 + 0xc4 + DAT_00715e50);
  fVar2 = *(float *)(iVar3 + 0xbc + DAT_00715e50);
  if ((fVar1 * fVar1 + fVar2 * fVar2 < 50.0) &&
     (iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
              DAT_0073b0d0, iVar3 = *(int *)(iVar3 + DAT_00715e50 + 0x24),
     fVar1 = *(float *)(iVar4 + 0x50) - *(float *)(DAT_0073b0d0 + iVar3 + 0x50 + iVar3 * 0xa8),
     fVar2 = *(float *)(iVar4 + 0x58) - *(float *)(DAT_0073b0d0 + iVar3 + 0x58 + iVar3 * 0xa8),
     fVar1 * fVar1 + fVar2 * fVar2 < 25000.0)) {
    return 1;
  }
  return 0;
}


