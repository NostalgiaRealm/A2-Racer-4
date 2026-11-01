
/* ==== FUN_00404080 @ 00404080 ==== 
 * signature: ulonglong __cdecl FUN_00404080(int param_1)
 * body: 00404080-004040a8;004040ac-004041c0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004040a9-004040ab
 */

ulonglong __cdecl FUN_00404080(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint in_EDX;
  int iVar7;
  ulonglong uVar8;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058ef34);
  }
  iVar7 = param_1 * 0x294;
  if (1.0 < *(float *)(&DAT_005cea50 + iVar7)) {
    *(undefined4 *)(&DAT_005cea50 + iVar7) = 0;
    return (ulonglong)in_EDX << 0x20;
  }
  iVar2 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  fVar1 = *(float *)(iVar2 + DAT_0073b0d0 + 0x50 + iVar2 * 0xa8);
  iVar2 = iVar2 + DAT_0073b0d0 + iVar2 * 0xa8;
  fVar3 = *(float *)(iVar2 + 0x58);
  iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
  fVar5 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) - fVar1;
  fVar6 = *(float *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8 + 0x58) - fVar3;
  uVar8 = (ulonglong)(uint)(iVar4 * 0x15) << 0x20;
  if (fVar5 * fVar5 + fVar6 * fVar6 < 10000.0) {
    uVar8 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],fVar1,*(undefined4 *)(iVar2 + 0x54),fVar3);
    iVar2 = DAT_006fba58;
    if (((0x5dc < (int)uVar8) && ((int)uVar8 < 0x9c4)) &&
       (uVar8 = CONCAT44((int)(uVar8 >> 0x20),(&DAT_005973c8)[param_1 * 0x16]),
       (&DAT_005973c8)[param_1 * 0x16] == 0)) {
      *(int *)(&DAT_005cea34 + iVar7) = DAT_006fba58;
      return CONCAT44(iVar2,1);
    }
  }
  return uVar8 & 0xffffffff00000000;
}


