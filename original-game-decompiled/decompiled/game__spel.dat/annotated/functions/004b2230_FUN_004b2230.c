
/* ==== FUN_004b2230 @ 004b2230 ==== 
 * signature: undefined __cdecl FUN_004b2230(uint param_1)
 * body: 004b2230-004b22cc;004b22d0-004b237f;004b2383-004b23d5;004b23d9-004b240b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b22cd-004b22cf 004b2380-004b2382 004b23d6-004b23d8
 */

void __cdecl FUN_004b2230(uint param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004c3fa0((byte *)s_Initing__d_damage_objects__005b0c54);
  if (DAT_00719c34 != 0) {
    if (DAT_00719c34 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_00719c28);
    }
    if (DAT_00719c34 != 0) {
      FUN_0054b339(DAT_00719c38);
      DAT_00719c34 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  DAT_00719c28 = operator_new(param_1 * 4);
  DAT_00719c2c = param_1;
  DAT_00719c30 = 0;
  DAT_00719c38 = operator_new(param_1);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_00719c34 = 1;
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      iVar1 = iVar2 + 1;
      *(undefined1 *)((int)DAT_00719c38 + iVar2) = 0;
      iVar2 = iVar1;
    } while (iVar1 < (int)param_1);
  }
  FUN_004c3fa0((byte *)s_Initialising____005b0c40);
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      iVar1 = DAT_00719c30;
      if (DAT_00719c34 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
      }
      for (; iVar1 < (int)DAT_00719c2c; iVar1 = iVar1 + 1) {
        if (*(char *)((int)DAT_00719c38 + iVar1) == '\0') goto LAB_004b2401;
      }
      iVar1 = 0;
      if (DAT_00719c30 < 1) {
LAB_004b23b7:
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
      }
      while (*(char *)((int)DAT_00719c38 + iVar1) != '\0') {
        iVar1 = iVar1 + 1;
        if (DAT_00719c30 <= iVar1) goto LAB_004b23b7;
      }
LAB_004b2401:
      *(undefined1 *)((int)DAT_00719c38 + iVar1) = 1;
      iVar2 = iVar2 + 1;
      DAT_00719c30 = iVar1;
      *(undefined4 *)((int)DAT_00719c28 + iVar2 * 4 + -4) = 0;
    } while (iVar2 < (int)param_1);
  }
  FUN_004c3fa0((byte *)s_Done__005b0c38);
  return;
}


