
/* ==== FUN_004a7790 @ 004a7790 ==== 
 * signature: int __cdecl FUN_004a7790(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, int param_10, undefined4 param_11)
 * body: 004a7790-004a77bd;004a77c1-004a781b;004a7822-004a7893
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a77be-004a77c0 004a781c-004a7821
 */

int __cdecl
FUN_004a7790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    if (*(char *)(DAT_00715e60 + iVar1) == '\0') goto LAB_004a7887;
  }
  iVar1 = 0;
  if (0 < DAT_00715e58) {
    do {
      if (*(char *)(DAT_00715e60 + iVar1) == '\0') {
LAB_004a7887:
        *(undefined1 *)(DAT_00715e60 + iVar1) = 1;
        DAT_00715e58 = iVar1;
        FUN_004a7ed0((void *)(iVar1 * 0xf0 + DAT_00715e50),iVar1,param_1,param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,param_10,param_11);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00715e58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


