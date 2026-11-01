
/* ==== CheckPlayerClose @ 0040476a ==== 
 * signature: undefined4 __cdecl CheckPlayerClose(int param_1)
 * body: 0040476a-0040481a
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to CheckPlayerClose function']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to CheckPlayerClose function'] */

undefined4 __cdecl CheckPlayerClose(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
    fVar2 = *(float *)(iVar4 + 0x50) - *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
    fVar3 = *(float *)(iVar4 + 0x58) - *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8);
    if (fVar2 * fVar2 + fVar3 * fVar3 < 1.5e+07) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f23c);
}


