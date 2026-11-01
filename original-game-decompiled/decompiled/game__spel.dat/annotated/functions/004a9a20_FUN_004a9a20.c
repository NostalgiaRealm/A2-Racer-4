
/* ==== FUN_004a9a20 @ 004a9a20 ==== 
 * signature: undefined __cdecl FUN_004a9a20(int param_1, int param_2)
 * body: 004a9a20-004a9abf;004a9ac8-004a9b94;004a9b9d-004a9c13
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a9ac0-004a9ac7 004a9b95-004a9b9c
 */

void __cdecl FUN_004a9a20(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar4 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + iVar3) == '\x01') {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00715e54);
  }
  bVar2 = calc_start_and_end_chunk(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  iVar5 = 0;
  iVar3 = DAT_00715e50;
  if (-1 < iVar4) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + 0x5c + iVar3) != 0) {
        if ((iVar6 < 0) || (DAT_00715e54 <= iVar5)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if (*(char *)(DAT_00715e60 + iVar5) != '\0') {
          iVar1 = *(int *)(iVar6 + 0x34 + iVar3);
          if ((((param_2 <= iVar1) && (iVar1 <= param_1)) && (*(int *)(iVar6 + 0x54 + iVar3) != 0))
             && (*(int *)(iVar6 + 0x40 + iVar3) != -1)) {
            FUN_004a6b90(iVar5);
            iVar3 = DAT_00715e50;
          }
          if (((CONCAT31(extraout_var,bVar2) != 0) &&
              (iVar1 = *(int *)(iVar6 + 0x34 + iVar3), local_8 <= iVar1)) &&
             ((iVar1 <= local_4 &&
              ((*(int *)(iVar6 + 0x54 + iVar3) != 0 && (*(int *)(iVar6 + 0x40 + iVar3) != -1)))))) {
            FUN_004a6b90(iVar5);
            iVar3 = DAT_00715e50;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar5 <= iVar4);
  }
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + 0x5c + iVar3) != 0) {
        if ((iVar6 < 0) || (DAT_00715e54 <= iVar5)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if (*(char *)(DAT_00715e60 + iVar5) != '\0') {
          iVar1 = *(int *)(iVar6 + 0x34 + iVar3);
          if (((param_2 <= iVar1) && (iVar1 <= param_1)) && (*(int *)(iVar6 + iVar3 + 0x54) != 0)) {
            FUN_004a8cb0((void *)(iVar6 + iVar3));
            iVar3 = DAT_00715e50;
          }
          if (CONCAT31(extraout_var,bVar2) != 0) {
            iVar1 = *(int *)(iVar6 + 0x34 + iVar3);
            if (((local_8 <= iVar1) && (iVar1 <= local_4)) && (*(int *)(iVar6 + iVar3 + 0x54) != 0))
            {
              FUN_004a8cb0((void *)(iVar6 + iVar3));
              iVar3 = DAT_00715e50;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar5 <= iVar4);
  }
  return;
}


