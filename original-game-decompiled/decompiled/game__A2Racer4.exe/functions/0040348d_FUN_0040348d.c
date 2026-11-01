
/* ==== FUN_0040348d @ 0040348d ==== 
 * signature: undefined __stdcall FUN_0040348d(void)
 * body: 0040348d-004034b5
 */

void FUN_0040348d(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00408220;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00408108 = 0;
  DAT_0040811c = 0;
  DAT_00408324 = 0;
  DAT_00408110 = 0;
  DAT_00408114 = 0;
  DAT_00408118 = 0;
  return;
}


