
/* ==== FUN_004c9560 @ 004c9560 ==== 
 * signature: undefined __cdecl FUN_004c9560(undefined4 param_1, int param_2, int param_3, int param_4)
 * body: 004c9560-004c9597;004c95a1-004c95e0;004c95e4-004c97db;004c97e7-004c987f;004c988b-004c9920;004c9924-004c992b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c9598-004c95a0 004c95e1-004c95e3 004c97dc-004c97e6 004c9880-004c988a 004c9921-004c9923
 */

void __cdecl FUN_004c9560(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_retaddr;
  int local_2c;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_24 = 0;
  local_2c = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(DAT_00740a18 + 100))) {
    iVar3 = param_2 * 0xc;
    if (*(int *)(iVar3 + 8 + *(int *)(DAT_00740a18 + 0x68)) == 1) {
      iVar1 = *(int *)(iVar3 + *(int *)(DAT_00740a18 + 0x68));
      iStack_18 = *(int *)(iVar1 + 4);
      iStack_14 = *(int *)(iVar1 + 8);
      if (DAT_007409e8 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____no_clipping_limit_set_005b57d4);
      }
      if ((((DAT_007409dc <= iStack_18 + param_3) && (param_3 <= DAT_007409d8)) &&
          (DAT_007409e0 <= iStack_14 + param_4)) && (param_4 <= DAT_007409d4)) {
        if (param_4 < DAT_007409e0) {
          local_2c = DAT_007409e0 - param_4;
          iStack_14 = iStack_14 - local_2c;
          param_4 = DAT_007409e0;
          if (iStack_14 < 1) {
            return;
          }
        }
        if ((iStack_14 + param_4 <= DAT_007409d4) ||
           (iStack_14 = DAT_007409d4 - param_4, 0 < iStack_14)) {
          if (param_3 < DAT_007409dc) {
            local_24 = DAT_007409dc - param_3;
            iStack_18 = iStack_18 - local_24;
            param_3 = DAT_007409dc;
            if (iStack_18 < 1) {
              return;
            }
          }
          if ((iStack_18 + param_3 <= DAT_007409d8) ||
             (iStack_18 = DAT_007409d8 - param_3, 0 < iStack_18)) {
            if (DAT_005b570c != 0) {
              param_3 = param_3 / 2 << 1;
            }
            iStack_8 = iStack_18 + param_3;
            iStack_4 = iStack_14 + param_4;
            iStack_14 = iStack_14 + local_2c;
            iStack_18 = local_24 + iStack_18;
            piVar2 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + iVar3);
            iStack_20 = local_24;
            iStack_1c = local_2c;
            iStack_10 = param_3;
            iStack_c = param_4;
            iVar3 = (**(code **)(*piVar2 + 0x60))(piVar2);
            if (iVar3 != 0) {
              FUN_004c3fa0((byte *)s__s__d____had_to_restore__d_005b5928);
              piVar2 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c);
              (**(code **)(*piVar2 + 0x6c))(piVar2);
            }
            if (unaff_retaddr == 0) {
              FUN_004c4a60(DAT_007408ac);
              iVar3 = (**(code **)(*DAT_007408ac + 0x14))
                                (DAT_007408ac,&iStack_14,
                                 **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),
                                 &local_24,0x1008000,0);
              if (iVar3 != 0) {
                iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
                hardware(iVar3);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_s_005b57f8);
              }
            }
            else if (unaff_retaddr == 1) {
              FUN_004c4a60(DAT_007408b0);
              iVar3 = (**(code **)(*DAT_007408b0 + 0x14))
                                (DAT_007408b0,&iStack_14,
                                 **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),
                                 &local_24,0x1008000,0);
              if (iVar3 != 0) {
                iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
                hardware(iVar3);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_b_005b5858);
              }
            }
            else if (unaff_retaddr == 2) {
              FUN_004c4a60(DAT_00740890);
              iVar3 = (**(code **)(*DAT_00740890 + 0x14))
                                (DAT_00740890,&iStack_14,
                                 **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),
                                 &local_24,0x1008000,0);
              if (iVar3 != 0) {
                iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
                hardware(iVar3);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_b_005b58c0);
              }
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____illegal_character_index_005b599c);
}


