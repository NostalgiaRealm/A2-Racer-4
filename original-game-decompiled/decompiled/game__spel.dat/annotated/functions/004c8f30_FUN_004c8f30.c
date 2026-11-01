
/* ==== FUN_004c8f30 @ 004c8f30 ==== 
 * signature: undefined __cdecl FUN_004c8f30(int param_1, int param_2, int param_3, int param_4, byte param_5)
 * body: 004c8f30-004c8f65;004c8f69-004c8f8e;004c8f98-004c8fc7;004c8fcd-004c908c;004c9098-004c91b2;004c91be-004c9276;004c927e-004c9434;004c9440-004c94bf;004c94cb-004c9546;004c954a-004c9551
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c8f66-004c8f68 004c8f8f-004c8f97 004c8fc8-004c8fcc 004c908d-004c9097 004c91b3-004c91bd 004c9277-004c927d 004c9435-004c943f 004c94c0-004c94ca 004c9547-004c9549
 */

void __cdecl FUN_004c8f30(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_retaddr;
  int iStack_2c;
  int iStack_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_24 = 0x1008000;
  if ((param_2 < 0) || (DAT_005b5ea8 < param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____illegal_array_index__d_005b5978);
  }
  iVar4 = param_2 * 0x20;
  if (*(int *)(iVar4 + 0x1c + DAT_00740d44) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____blt_with_unallocated_me_005b5948);
  }
  if (*(int *)(iVar4 + 0x18 + DAT_00740d44) != 4) {
    iStack_28 = 0;
    iStack_2c = 0;
    if ((param_5 & 4) != 0) {
      local_24 = 0x1000000;
    }
    iStack_14 = *(int *)(iVar4 + 0xc + DAT_00740d44);
    iStack_18 = *(int *)(iVar4 + 8 + DAT_00740d44);
    if ((param_5 & 2) == 0) {
      param_3 = param_3 - *(int *)(iVar4 + 0x10 + DAT_00740d44);
      param_4 = param_4 - *(int *)(iVar4 + 0x14 + DAT_00740d44);
    }
    if (DAT_007409e8 != 0) {
      if ((((DAT_007409dc <= param_3 + iStack_18) && (param_3 <= DAT_007409d8)) &&
          (DAT_007409e0 <= iStack_14 + param_4)) && (param_4 <= DAT_007409d4)) {
        iStack_c = param_4;
        if (param_4 < DAT_007409e0) {
          iStack_2c = DAT_007409e0 - param_4;
          iStack_14 = iStack_14 - iStack_2c;
          iStack_c = DAT_007409e0;
          if (iStack_14 < 1) {
            return;
          }
        }
        if ((iStack_14 + iStack_c <= DAT_007409d4) ||
           (iStack_14 = DAT_007409d4 - iStack_c, 0 < iStack_14)) {
          iStack_10 = param_3;
          if (param_3 < DAT_007409dc) {
            iStack_28 = DAT_007409dc - param_3;
            iStack_18 = iStack_18 - iStack_28;
            iStack_10 = DAT_007409dc;
            if (iStack_18 < 1) {
              return;
            }
          }
          if ((iStack_10 + iStack_18 <= DAT_007409d8) ||
             (iStack_18 = DAT_007409d8 - iStack_10, 0 < iStack_18)) {
            iStack_8 = iStack_10 + iStack_18;
            iStack_4 = iStack_14 + iStack_c;
            iStack_20 = iStack_28;
            iStack_18 = iStack_28 + iStack_18;
            iStack_1c = iStack_2c;
            iStack_14 = iStack_2c + iStack_14;
            piVar1 = *(int **)(iVar4 + 4 + DAT_00740d44);
            iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1);
            if (iVar2 != 0) {
              FUN_004c3fa0((byte *)s__s__d____had_to_restore__d_005b5928);
              piVar1 = *(int **)(iVar4 + 4 + DAT_00740d44);
              (**(code **)(*piVar1 + 0x6c))(piVar1);
            }
            if (unaff_retaddr == 0) {
              FUN_004c4a60(DAT_007408ac);
              iVar4 = (**(code **)(*DAT_007408ac + 0x14))
                                (DAT_007408ac,&iStack_14,*(undefined4 *)(iVar4 + 4 + DAT_00740d44),
                                 &local_24,iStack_28,0);
              if (iVar4 != 0) {
                hardware(iVar4);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_s_005b57f8);
              }
            }
            else if (unaff_retaddr == 1) {
              FUN_004c4a60(DAT_007408b0);
              iVar4 = (**(code **)(*DAT_007408b0 + 0x14))
                                (DAT_007408b0,&iStack_14,*(undefined4 *)(iVar4 + 4 + DAT_00740d44),
                                 &local_24,iStack_28,0);
              if (iVar4 != 0) {
                hardware(iVar4);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_b_005b5858);
              }
            }
            else if (unaff_retaddr == 2) {
              FUN_004c4a60(DAT_00740890);
              iVar4 = (**(code **)(*DAT_00740890 + 0x14))
                                (DAT_00740890,&iStack_14,*(undefined4 *)(iVar4 + 4 + DAT_00740d44),
                                 &local_24,iStack_28,0);
              if (iVar4 != 0) {
                hardware(iVar4);
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s__s__d____set_mem_image___d__to_b_005b58c0);
              }
            }
          }
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____no_clipping_limit_set_005b57d4);
  }
  if (param_1 == 0) {
    param_2 = FUN_004c47a0(DAT_007408ac);
  }
  else if (param_1 == 1) {
    param_2 = FUN_004c47a0(DAT_007408b0);
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____unidentified_focus_erro_005b4230);
    }
    param_2 = FUN_004c47a0(DAT_00740890);
  }
  iVar2 = *(int *)(iVar4 + 0xc + DAT_00740d44);
  iVar3 = *(int *)(iVar4 + 8 + DAT_00740d44);
  if ((param_5 & 2) == 0) {
    param_3 = param_3 - *(int *)(iVar4 + 0x10 + DAT_00740d44);
    param_4 = param_4 - *(int *)(iVar4 + 0x14 + DAT_00740d44);
  }
  if ((param_5 & 1) != 0) {
    if (DAT_007409e8 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____no_clipping_limit_set_005b57d4);
    }
    if (iVar3 + param_3 < DAT_007409dc) {
      return;
    }
    if (DAT_007409d8 < param_3) {
      return;
    }
    if (iVar2 + param_4 < DAT_007409e0) {
      return;
    }
    if (DAT_007409d4 < param_4) {
      return;
    }
    if ((param_4 < DAT_007409e0) &&
       (iVar2 = iVar2 + (param_4 - DAT_007409e0), param_4 = DAT_007409e0, iVar2 < 1)) {
      return;
    }
    if ((DAT_007409d4 < iVar2 + param_4) && (DAT_007409d4 - param_4 < 1)) {
      return;
    }
    if ((param_3 < DAT_007409dc) &&
       (iVar3 = iVar3 - (DAT_007409dc - param_3), param_3 = DAT_007409dc, iVar3 < 1)) {
      return;
    }
    if ((DAT_007409d8 < iVar3 + param_3) && (DAT_007409d8 - param_3 < 1)) {
      return;
    }
  }
  FUN_0051ed40();
  if (param_1 == 0) {
    FUN_004c4a20(DAT_007408ac,param_2);
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____unidentified_focus_erro_005b4230);
    }
    FUN_004c4a20(DAT_00740890,param_2);
    return;
  }
  FUN_004c4a20(DAT_007408b0,param_2);
  return;
}


