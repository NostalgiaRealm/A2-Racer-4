
/* ==== FUN_00404bd4 @ 00404bd4 ==== 
 * signature: undefined4 __cdecl FUN_00404bd4(int param_1)
 * body: 00404bd4-00404c03;00404c07-00404c63
 */

undefined4 __cdecl FUN_00404bd4(int param_1)

{
  int iVar1;
  
  if ((5 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if (*(float *)(&DAT_005cea54 + iVar1) <= 2.0) {
      *(undefined4 *)(&DAT_005cea54 + iVar1) = 0;
    }
    else if (10.0 < *(float *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0xc4 + DAT_00715e50)) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____FSM_object_index___d__d_0058f524);
}


