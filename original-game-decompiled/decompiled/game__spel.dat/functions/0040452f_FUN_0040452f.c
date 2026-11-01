
/* ==== FUN_0040452f @ 0040452f ==== 
 * signature: undefined4 __cdecl FUN_0040452f(int param_1)
 * body: 0040452f-004045b1
 */

undefined4 __cdecl FUN_0040452f(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if (*(float *)(&DAT_005cea50 + iVar1) < 4.0) {
      fVar2 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea50 + iVar1) =
           (float)(fVar2 + (float10)*(float *)(&DAT_005cea50 + iVar1));
      return 0;
    }
    *(undefined4 *)(&DAT_005cea50 + iVar1) = 0;
    FUN_00423990((&DAT_005ce9e8)[param_1 * 0xa5],0);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f18c);
}


