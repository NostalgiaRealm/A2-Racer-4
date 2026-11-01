
/* ==== FUN_004045b2 @ 004045b2 ==== 
 * signature: char __cdecl FUN_004045b2(int param_1)
 * body: 004045b2-00404769
 */

char __cdecl FUN_004045b2(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_10 [4];
  
  local_10[0] = 2e+07;
  local_10[1] = 2e+07;
  local_10[2] = 1.75e+07;
  local_10[3] = 1.5e+07;
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if ((param_1 < 0) || (5 < param_1)) {
      iVar1 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
      iVar4 = *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x24 + DAT_00715e50);
      fVar2 = *(float *)(iVar1 + DAT_0073b0d0 + 0x50 + iVar1 * 0xa8) -
              *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
      fVar3 = *(float *)(iVar1 + DAT_0073b0d0 + 0x58 + iVar1 * 0xa8) -
              *(float *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8 + 0x58);
      if (2e+07 < fVar2 * fVar2 + fVar3 * fVar3) {
        FUN_00423990((&DAT_005ce9e8)[param_1 * 0xa5],0);
        return '\x01';
      }
    }
    else {
      iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
              DAT_0073b0d0;
      iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
      fVar2 = *(float *)(iVar4 + 0x50) - *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
      fVar3 = *(float *)(iVar4 + 0x58) - *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8);
      if (local_10[(&DAT_005973c8)[param_1 * 0x16]] < fVar2 * fVar2 + fVar3 * fVar3) {
        if ((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4) {
          return '\x02';
        }
        return (-(DAT_006fb8d4 != 0) & 2U) + 1;
      }
    }
    return '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Invalid_racer_index___d__0058f1f4);
}


