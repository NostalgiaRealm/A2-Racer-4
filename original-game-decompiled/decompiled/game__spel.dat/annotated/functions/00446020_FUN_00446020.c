
/* ==== FUN_00446020 @ 00446020 ==== 
 * signature: undefined __stdcall FUN_00446020(void)
 * body: 00446020-0044609f
 */

void FUN_00446020(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_4;
  
  local_4 = 0;
  do {
    iVar6 = 0;
    puVar4 = &DAT_006f4f90;
    do {
      iVar1 = FUN_00445950(local_4);
      iVar2 = FUN_00445980(iVar6);
      puVar5 = puVar4 + 8;
      iVar6 = iVar6 + 1;
      puVar7 = (undefined4 *)(&DAT_006ed740 + iVar1 * 0x134 + iVar2 * 0x20);
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar5;
    } while ((int)puVar5 < 0x6f5050);
    iVar6 = FUN_00445950(local_4);
    local_4 = local_4 + 1;
    *(undefined4 *)(&DAT_006ed830 + iVar6 * 0x134) = 0;
  } while (local_4 < 100);
  return;
}


