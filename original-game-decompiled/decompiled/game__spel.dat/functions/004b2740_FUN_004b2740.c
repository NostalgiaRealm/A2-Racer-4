
/* ==== FUN_004b2740 @ 004b2740 ==== 
 * signature: undefined4 __cdecl FUN_004b2740(char * param_1, byte * param_2, char * param_3, undefined4 * param_4, undefined4 * param_5, int param_6, int param_7, int * param_8)
 * body: 004b2740-004b27ee;004b27f2-004b2826;004b282a-004b2944;004b2951-004b297b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b27ef-004b27f1 004b2827-004b2829 004b2945-004b2950
 */

undefined4 __cdecl
FUN_004b2740(char *param_1,byte *param_2,char *param_3,undefined4 *param_4,undefined4 *param_5,
            int param_6,int param_7,int *param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  
  iVar8 = 0;
  pcVar9 = &DAT_00719c78;
  do {
    if ((-1 < *(int *)(pcVar9 + 0x80)) && (iVar3 = __strcmpi(param_1,pcVar9), iVar3 == 0)) {
      if (iVar8 != -1) {
        *param_4 = (&DAT_00719cf8)[iVar8 * 0x22];
        *param_5 = (&DAT_00719cfc)[iVar8 * 0x22];
        return 1;
      }
      break;
    }
    pcVar9 = pcVar9 + 0x88;
    iVar8 = iVar8 + 1;
  } while ((int)pcVar9 < 0x73afb8);
  iVar8 = 0;
  piVar4 = &DAT_00719cf8;
  do {
    if (*piVar4 < 0) break;
    piVar4 = piVar4 + 0x22;
    iVar8 = iVar8 + 1;
  } while ((int)piVar4 < 0x73b038);
  if (iVar8 == 1000) goto LAB_004b2931;
  bVar2 = false;
  iVar3 = 0;
  if (DAT_0073b5cc < 1) {
LAB_004b286a:
    iVar3 = FUN_004bc8c0(2,param_3);
  }
  else {
    iVar10 = 0;
    do {
      if (bVar2) goto LAB_004b2865;
      if ((iVar10 < 0) || (DAT_0073b5cc <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(DAT_0073b5d8 + iVar3) == '\x01') {
        if (*(int *)(iVar10 + 0x9c + DAT_0073b5c8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____string_is_not_initialis_005969b0);
        }
        iVar5 = __strcmpi(param_3,*(char **)(iVar10 + 0x98 + DAT_0073b5c8));
        if (iVar5 != 0) goto LAB_004b284d;
        bVar2 = true;
      }
      else {
LAB_004b284d:
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0xac;
      }
    } while (iVar3 < DAT_0073b5cc);
    if (!bVar2) goto LAB_004b286a;
LAB_004b2865:
    if (iVar3 == -1) goto LAB_004b286a;
  }
  (&DAT_00719cf8)[iVar8 * 0x22] = iVar3;
  iVar3 = FUN_004b2580(param_2);
  if (iVar3 == -1) {
    if (param_6 == 0) {
      iVar3 = FUN_004b94e0((char *)param_2);
    }
    else if (param_7 == 0) {
      iVar3 = FUN_004b91c0((char *)param_2,param_8);
    }
    else {
      iVar3 = FUN_004b8e00((char *)param_2,param_8);
    }
  }
  (&DAT_00719cfc)[iVar8 * 0x22] = iVar3;
  uVar6 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar9 + -uVar6;
  pcVar11 = &DAT_00719c78 + iVar8 * 0x88;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (iVar8 != -1) {
    *param_4 = (&DAT_00719cf8)[iVar8 * 0x22];
    *param_5 = (&DAT_00719cfc)[iVar8 * 0x22];
    return 1;
  }
LAB_004b2931:
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_Error_during_object_loading____s_005b0cc8);
}


