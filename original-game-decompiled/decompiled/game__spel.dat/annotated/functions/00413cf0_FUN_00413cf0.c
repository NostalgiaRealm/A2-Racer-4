
/* ==== FUN_00413cf0 @ 00413cf0 ==== 
 * signature: int __stdcall FUN_00413cf0(void)
 * body: 00413cf0-00413d4a;00413d4e-00413dae;00413db2-00413dd0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00413d4b-00413d4d 00413daf-00413db1
 */

int FUN_00413cf0(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = FUN_00558625();
  if (DAT_005d2aac == 0) {
    iVar6 = (int)DAT_005d26bc;
    iVar4 = 0;
    if (iVar6 <= DAT_005d2ab4) {
      puVar5 = &DAT_005d26bc;
      do {
        bVar7 = iVar4 == DAT_005d2aa8;
        if (DAT_005d2aa8 <= iVar4) goto LAB_00413d99;
        pcVar1 = puVar5 + 0x28;
        puVar5 = puVar5 + 0x28;
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + *pcVar1;
        FUN_004c3fa0((byte *)s_Trying_new_entry_00592d70);
      } while (iVar6 <= DAT_005d2ab4);
    }
    bVar7 = iVar4 == DAT_005d2aa8;
LAB_00413d99:
    if (bVar7) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s___d_Total_traffic_types_do_n_00592da8);
    }
    DAT_005d2ab4 = DAT_005d2ab4 + 1;
    FUN_004c3fa0((byte *)s_Added__d_cars_00592de0);
    return iVar4;
  }
  iVar4 = (int)DAT_005d26bc;
  iVar6 = 0;
  if (iVar4 < (int)uVar3 % 100) {
    puVar5 = &DAT_005d26bc;
    do {
      iVar2 = iVar6 - DAT_005d2aa8;
      if (DAT_005d2aa8 <= iVar6) goto LAB_00413d35;
      pcVar1 = puVar5 + 0x28;
      puVar5 = puVar5 + 0x28;
      iVar4 = iVar4 + *pcVar1;
      iVar6 = iVar6 + 1;
    } while (iVar4 < (int)uVar3 % 100);
  }
  iVar2 = iVar6 - DAT_005d2aa8;
LAB_00413d35:
  if (iVar6 != DAT_005d2aa8 && SBORROW4(iVar6,DAT_005d2aa8) == iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Total_traffic_types_do_n_00592d3c);
  }
  return iVar6;
}


