
/* ==== FUN_0043ff60 @ 0043ff60 ==== 
 * signature: undefined __stdcall FUN_0043ff60(void)
 * body: 0043ff60-0043ffe2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ff60(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  puVar3 = (undefined4 *)(iVar1 + 0x14);
  puVar4 = &DAT_006c9428;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_006c9458 = *(undefined4 *)(iVar1 + 8);
  _DAT_006c945c = *(undefined4 *)(iVar1 + 0xc);
  _DAT_006c9460 = *(undefined4 *)(iVar1 + 0x10);
  FUN_0043fe20();
  DAT_006cbeec = DAT_006cbeec + 1;
  if (DAT_006cbee8 <= DAT_006cbeec) {
    DAT_006cbeec = 0;
  }
  return;
}


