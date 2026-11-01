
/* ==== FUN_0043dd40 @ 0043dd40 ==== 
 * signature: undefined __stdcall FUN_0043dd40(void)
 * body: 0043dd40-0043dd8a
 */

void FUN_0043dd40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_0043dba0();
  DAT_006c4200 = FUN_004b7400(&DAT_00712130,s_L1RACER3_PCX_0059be40);
  puVar1 = &DAT_006c4330;
  do {
    puVar2 = puVar1 + 0x4b;
    puVar4 = &DAT_006c4110;
    puVar5 = puVar1 + -0x3a;
    for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar1 = 0;
    puVar1 = puVar2;
  } while ((int)puVar2 < 0x6c9538);
  return;
}


