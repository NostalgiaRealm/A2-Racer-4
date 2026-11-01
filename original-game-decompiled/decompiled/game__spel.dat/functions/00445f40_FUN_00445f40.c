
/* ==== FUN_00445f40 @ 00445f40 ==== 
 * signature: undefined __stdcall FUN_00445f40(void)
 * body: 00445f40-0044601c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445f40(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _DAT_006f4fa0 = 0xffffff;
  _DAT_006f4fc0 = 0xffffff;
  _DAT_006f4fe0 = 0xffffff;
  DAT_006f4f90 = 0xbe666666;
  _DAT_006f4f98 = 0;
  DAT_006f4f94 = 0xbe666666;
  _DAT_006f4fa4 = 0;
  _DAT_006f4fa8 = 0x3f4e8d76;
  _DAT_006f4fac = 0x3e3d744f;
  DAT_006f4fb0 = 0;
  _DAT_006f4fb8 = 0;
  DAT_006f4fb4 = 0x3e666666;
  _DAT_006f4fc4 = 0;
  _DAT_006f4fc8 = 0x3f4e8d76;
  _DAT_006f4fcc = 0;
  DAT_006f4fd0 = 0x3e666666;
  _DAT_006f4fd8 = 0;
  DAT_006f4fd4 = 0xbe666666;
  _DAT_006f4fe4 = 0;
  _DAT_006f4fe8 = 0x3f7dea89;
  _DAT_006f4fec = 0;
  puVar2 = &DAT_006f4fd0;
  puVar3 = &DAT_006f4ff0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_006f4fb0;
  puVar3 = &DAT_006f5010;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_006f4f90;
  puVar3 = &DAT_006f5030;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


