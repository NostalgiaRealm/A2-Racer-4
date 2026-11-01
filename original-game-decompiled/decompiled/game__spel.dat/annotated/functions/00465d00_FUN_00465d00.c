
/* ==== FUN_00465d00 @ 00465d00 ==== 
 * signature: undefined4 __cdecl FUN_00465d00(int param_1)
 * body: 00465d00-00465d93
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00465d94-00465d9b
 */

undefined4 __cdecl FUN_00465d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    iVar1 = FUN_0040db00(param_1);
    if (iVar1 == 0) {
      iVar1 = (&DAT_0070a244)[param_1 * 0xd0];
      uVar2 = FUN_00413f00(iVar1,1,0,1,param_1);
      if ((char)uVar2 != '\0') {
        *(code **)(iVar1 * 0xf0 + 0x6c + DAT_00715e50) = FUN_004161d0;
        iVar1 = FUN_00414070(iVar1);
        *(undefined4 *)(&DAT_005d1bbc + iVar1 * 0x38) = 1;
      }
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Invalid_Path_Index___d__005a7178);
}


