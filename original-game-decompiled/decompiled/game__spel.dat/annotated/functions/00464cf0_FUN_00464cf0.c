
/* ==== FUN_00464cf0 @ 00464cf0 ==== 
 * signature: undefined __stdcall FUN_00464cf0(void)
 * body: 00464cf0-00464d9e;00464da2-00464dd4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464d9f-00464da1
 */

void FUN_00464cf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar1 = DAT_00712108;
  iVar5 = DAT_006fba7c;
  iVar3 = DAT_006fb8f8;
  bVar7 = DAT_005a6680 != DAT_006fba7c;
  DAT_005a6680 = DAT_006fba7c;
  if (bVar7) {
    if (DAT_0071210c != DAT_006fb8f8) {
      if (0 < DAT_00712108) {
        puVar2 = &DAT_0070a240;
        iVar4 = DAT_00712108;
        do {
          *puVar2 = 0;
          puVar2 = puVar2 + 0xd0;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      DAT_0071210c = iVar3;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      piVar6 = &DAT_00709f14;
      do {
        if ((((piVar6[-3] != 0) && (piVar6[-3] == iVar5)) &&
            ((*piVar6 == iVar3 + 1 || (*piVar6 == 0)))) && (piVar6[0xcb] == 0)) {
          iVar3 = piVar6[-1];
          if ((iVar3 < 0) || (0x15 < iVar3)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s___d__Incorrect_path_type___d_005a6ae0);
          }
          if ((*(code **)(&DAT_005a64cc + iVar3 * 0x14) != (code *)0x0) &&
             (iVar3 = (**(code **)(&DAT_005a64cc + iVar3 * 0x14))(iVar4), iVar3 != 0)) {
            piVar6[0xcb] = piVar6[0xcb] + 1;
          }
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 0xd0;
        iVar3 = DAT_006fb8f8;
        iVar5 = DAT_006fba7c;
      } while (iVar4 < DAT_00712108);
    }
  }
  return;
}


