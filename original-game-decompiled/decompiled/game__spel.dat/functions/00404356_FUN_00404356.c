
/* ==== FUN_00404356 @ 00404356 ==== 
 * signature: undefined4 __cdecl FUN_00404356(int param_1)
 * body: 00404356-004043db
 */

undefined4 __cdecl FUN_00404356(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    fVar1 = *(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xc4 + DAT_00715e50);
    fVar2 = *(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xbc + DAT_00715e50);
    if (fVar1 * fVar1 + fVar2 * fVar2 < 20.0) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f06c);
}


