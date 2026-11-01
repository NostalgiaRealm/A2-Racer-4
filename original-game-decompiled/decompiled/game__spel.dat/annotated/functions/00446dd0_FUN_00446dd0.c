
/* ==== FUN_00446dd0 @ 00446dd0 ==== 
 * signature: undefined __stdcall FUN_00446dd0(void)
 * body: 00446dd0-00446e4f
 */

void FUN_00446dd0(void)

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
    puVar4 = &DAT_006fa2e0;
    do {
      iVar1 = FUN_004463c0(local_4);
      iVar2 = FUN_004463f0(iVar6);
      puVar5 = puVar4 + 8;
      iVar6 = iVar6 + 1;
      puVar7 = (undefined4 *)(&DAT_006f50d0 + iVar1 * 300 + iVar2 * 0x20);
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar5;
    } while ((int)puVar5 < 0x6fa3a0);
    iVar6 = FUN_004463c0(local_4);
    local_4 = local_4 + 1;
    *(undefined4 *)(&DAT_006f51b8 + iVar6 * 300) = 0;
  } while (local_4 < 0x46);
  return;
}


