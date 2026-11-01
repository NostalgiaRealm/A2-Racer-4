
/* ==== FUN_004bc0f0 @ 004bc0f0 ==== 
 * signature: undefined __stdcall FUN_004bc0f0(void)
 * body: 004bc0f0-004bc159
 */

void FUN_004bc0f0(void)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  FUN_00559400();
  iVar4 = 0;
  iVar2 = 0;
  puVar3 = (uint *)register0x00000010;
  while( true ) {
    uVar1 = FUN_004bc070(0x100,0x100);
    *puVar3 = uVar1;
    if (uVar1 == 0) break;
    iVar2 = iVar2 + (DAT_00740974 >> 3) * 0x10000;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)(extraout_ECX + 0x2a1) = iVar2;
  if (0 < iVar4) {
    do {
      (**(code **)(**(int **)register0x00000010 + 8))(*(int **)register0x00000010);
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


