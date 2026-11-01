
/* ==== FUN_004a78a0 @ 004a78a0 ==== 
 * signature: int __cdecl FUN_004a78a0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, int param_10, undefined4 param_11)
 * body: 004a78a0-004a78cf;004a78d3-004a792c;004a7933-004a79c2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a78d0-004a78d2 004a792d-004a7932
 */

int __cdecl
FUN_004a78a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int param_10,undefined4 param_11)

{
  int iVar1;
  
  iVar1 = DAT_00715e58;
  if (DAT_00715e5c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_00715e54; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_00715e60 + iVar1) == '\0') goto LAB_004a79b4;
  }
  iVar1 = 0;
  if (0 < DAT_00715e58) {
    do {
      if (*(char *)(DAT_00715e60 + iVar1) == '\0') {
LAB_004a79b4:
        *(undefined1 *)(DAT_00715e60 + iVar1) = 1;
        DAT_00715e58 = iVar1;
        FUN_004c3fa0((byte *)s_Adding_main_object___d__005afc0c);
        FUN_004c3fa0((byte *)s_mesh__d_texture__d_005afbf4);
        FUN_004a7d70((void *)(iVar1 * 0xf0 + DAT_00715e50),iVar1,param_1,param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,param_10,param_11);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00715e58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


