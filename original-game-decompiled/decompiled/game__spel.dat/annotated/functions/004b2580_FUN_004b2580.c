
/* ==== FUN_004b2580 @ 004b2580 ==== 
 * signature: int __cdecl FUN_004b2580(byte * param_1)
 * body: 004b2580-004b25ee;004b25f2-004b265f;004b2663-004b26eb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b25ef-004b25f1 004b2660-004b2662
 */

int __cdecl FUN_004b2580(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  uVar4 = 0xffffffff;
  iVar5 = 0;
  pbVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  bVar2 = false;
  FUN_004c3fa0((byte *)s_Zoeken_naar___s_005b0cb4);
  if (0 < DAT_0073b1b4) {
    iVar7 = 0;
    do {
      if (bVar2) {
        return iVar5;
      }
      if ((iVar7 < 0) || (DAT_0073b1b4 <= iVar5)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(DAT_0073b1c0 + iVar5) == '\0') {
LAB_004b26b4:
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x48;
      }
      else {
        FUN_004c3fa0((byte *)s_Compare__s_with_005b0ca4);
        FUN_004c3fa0(&DAT_005b0c9c);
        if (*(int *)(iVar7 + 0x18 + DAT_0073b1b0) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____string_is_not_initialis_005969b0);
        }
        iVar3 = FUN_00567c10(param_1,*(char **)(iVar7 + 0x14 + DAT_0073b1b0),(void *)(~uVar4 - 5));
        if (iVar3 != 0) goto LAB_004b26b4;
        bVar2 = true;
        FUN_004c3fa0((byte *)s_Found__s_005b0c90);
      }
    } while (iVar5 < DAT_0073b1b4);
    if (bVar2) {
      return iVar5;
    }
  }
  FUN_004c3fa0((byte *)s_Need_to_create_new_texture__s_005b0c70);
  return -1;
}


