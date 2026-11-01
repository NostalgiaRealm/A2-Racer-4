
/* ==== FUN_004a9c20 @ 004a9c20 ==== 
 * signature: undefined __cdecl FUN_004a9c20(int param_1, int param_2)
 * body: 004a9c20-004a9cc7;004a9cd0-004a9d35;004a9d42-004a9ded;004a9dfa-004a9ea4;004a9ead-004a9f25;004a9f32-004a9fef;004a9ffc-004aa05b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a9cc8-004a9ccf 004a9d36-004a9d41 004a9dee-004a9df9 004a9ea5-004a9eac 004a9f26-004a9f31 004a9ff0-004a9ffb
 */

void __cdecl FUN_004a9c20(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_8;
  int local_4;
  
  iVar5 = -1;
  iVar3 = 0;
  local_10 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + iVar3) == '\x01') {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
      local_10 = iVar5;
    } while (iVar3 < DAT_00715e54);
  }
  bVar2 = calc_start_and_end_chunk(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  iVar3 = 0;
  iVar5 = DAT_00715e50;
  if (-1 < local_10) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + 0x5c + iVar5) != 0) {
        if ((iVar6 < 0) || (DAT_00715e54 <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if (*(char *)(DAT_00715e60 + iVar3) != '\0') {
          iVar4 = *(int *)(iVar6 + 0x34 + iVar5);
          if (((param_2 <= iVar4) && (iVar4 <= param_1)) && (*(int *)(iVar6 + 0x54 + iVar5) != 0)) {
            iVar4 = *(int *)(iVar6 + 0x24 + iVar5);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8);
            iVar4 = DAT_0073b0d0 + iVar4 + iVar4 * 0xa8;
            if (iVar1 == 1) {
              iVar4 = *(int *)(iVar4 + 0x95);
            }
            else {
              if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s___s___d_Invalid_object_type__005afc8c);
              }
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar4 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar4 * 0x48) != 0) {
              FUN_004a8cb0((void *)(iVar6 + iVar5));
              iVar5 = DAT_00715e50;
            }
          }
          if (((CONCAT31(extraout_var,bVar2) != 0) &&
              (iVar4 = *(int *)(iVar6 + 0x34 + iVar5), local_8 <= iVar4)) &&
             ((iVar4 <= local_4 && (*(int *)(iVar6 + 0x54 + iVar5) != 0)))) {
            iVar4 = *(int *)(iVar6 + 0x24 + iVar5);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8);
            iVar4 = DAT_0073b0d0 + iVar4 + iVar4 * 0xa8;
            if (iVar1 == 1) {
              iVar4 = *(int *)(iVar4 + 0x95);
            }
            else {
              if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s___s___d_Invalid_object_type__005afc8c);
              }
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar4 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar4 * 0x48) != 0) {
              FUN_004a8cb0((void *)(iVar6 + iVar5));
              iVar5 = DAT_00715e50;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar3 <= local_10);
  }
  iVar3 = 0;
  if (-1 < local_10) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + 0x5c + iVar5) != 0) {
        if ((iVar6 < 0) || (DAT_00715e54 <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if (*(char *)(DAT_00715e60 + iVar3) != '\0') {
          iVar4 = *(int *)(iVar6 + 0x34 + iVar5);
          if (((param_2 <= iVar4) && (iVar4 <= param_1)) && (*(int *)(iVar6 + 0x54 + iVar5) != 0)) {
            if (*(int *)(iVar6 + 0x40 + iVar5) != -1) {
              FUN_004a6b90(iVar3);
              iVar5 = DAT_00715e50;
            }
            iVar4 = *(int *)(iVar6 + 0x24 + iVar5);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8);
            iVar4 = DAT_0073b0d0 + iVar4 + iVar4 * 0xa8;
            if (iVar1 == 1) {
              iVar4 = *(int *)(iVar4 + 0x95);
            }
            else {
              if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s___s___d_Invalid_object_type__005afc8c);
              }
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar4 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar4 * 0x48) == 0) {
              FUN_004a8cb0((void *)(iVar6 + iVar5));
              iVar5 = DAT_00715e50;
            }
          }
          if (((CONCAT31(extraout_var,bVar2) != 0) &&
              (iVar4 = *(int *)(iVar6 + 0x34 + iVar5), local_8 <= iVar4)) &&
             ((iVar4 <= local_4 && (*(int *)(iVar6 + 0x54 + iVar5) != 0)))) {
            if (*(int *)(iVar6 + 0x40 + iVar5) != -1) {
              FUN_004a6b90(iVar3);
              iVar5 = DAT_00715e50;
            }
            iVar4 = *(int *)(iVar6 + 0x24 + iVar5);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar4 + iVar4 * 0xa8);
            iVar4 = DAT_0073b0d0 + iVar4 + iVar4 * 0xa8;
            if (iVar1 == 1) {
              iVar4 = *(int *)(iVar4 + 0x95);
            }
            else {
              if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                Fatal((byte *)s___s___d_Invalid_object_type__005afc8c);
              }
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar4 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar4 * 0x48) == 0) {
              FUN_004a8cb0((void *)(iVar6 + iVar5));
              iVar5 = DAT_00715e50;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar3 <= local_10);
  }
  return;
}


