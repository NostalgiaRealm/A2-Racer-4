
/* ==== FUN_004a6e80 @ 004a6e80 ==== 
 * signature: float10 __cdecl FUN_004a6e80(int param_1, int param_2)
 * body: 004a6e80-004a6ea9;004a6ead-004a6ece;004a6ed2-004a6f96
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6eaa-004a6eac 004a6ecf-004a6ed1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_004a6e80(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  if ((param_1 < 0) || (DAT_00715f04 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_chunk___d_005af910);
  }
  if ((-1 < param_2) && (param_2 < 2)) {
    iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
    fVar2 = *(float *)(DAT_00715f00 + 0x58 + iVar1 * 0x994);
    fVar3 = *(float *)(DAT_00715f00 + iVar1 * 0x994 + 0x60);
    fVar4 = SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
    fVar2 = (float)((float10)fVar2 / fVar4);
    fVar4 = (float10)fVar3 / fVar4;
    if (param_2 == 0) {
      fVar4 = (float10)fpatan(fVar4,(float10)fVar2);
      return (float10)_DAT_005b23b8 * (float10)0.5 +
             ((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
             (float10)6.2831855;
    }
    if (param_2 != 1) {
      return (float10)0.0;
    }
    fVar4 = (float10)fpatan(fVar4,(float10)fVar2);
    return ((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
           (float10)6.2831855;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_direction___d_005af964);
}


