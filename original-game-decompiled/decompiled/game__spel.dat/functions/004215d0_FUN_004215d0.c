
/* ==== FUN_004215d0 @ 004215d0 ==== 
 * signature: undefined4 __cdecl FUN_004215d0(int param_1)
 * body: 004215d0-0042167a
 */

undefined4 __cdecl FUN_004215d0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = param_1 * 0x294;
  uVar3 = (int)*(uint *)(&DAT_005cec0c + param_1 * 0x294) >> 0x1f;
  if ((6 < (int)((*(uint *)(&DAT_005cec0c + param_1 * 0x294) ^ uVar3) - uVar3)) ||
     (40.0 <= ABS(*(float *)(*(int *)(*(int *)(&DAT_005cebe4 + iVar1) * 0x10 + iVar1 + 0x5ceae4) *
                             0xf0 + 0xc4 + DAT_00715e50) * 3.6))) {
    *(undefined4 *)(&DAT_005cec30 + iVar1) = 0;
  }
  else {
    fVar4 = FUN_004a6800(0x7128b0);
    fVar2 = *(float *)(&DAT_005cec30 + iVar1);
    *(float *)(&DAT_005cec30 + iVar1) = (float)(fVar4 + (float10)fVar2);
    if ((float10)3.0 <= fVar4 + (float10)fVar2) {
      return 1;
    }
  }
  return 0;
}


