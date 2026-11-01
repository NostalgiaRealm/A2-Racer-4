
/* ==== FUN_00433230 @ 00433230 ==== 
 * signature: undefined __cdecl FUN_00433230(int param_1)
 * body: 00433230-00433265
 */

void __cdecl FUN_00433230(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_006b2bc0 + param_1 * 0x9a;
  puVar3 = &DAT_006b2bc0;
  for (iVar1 = 0x9a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_006b2bc0;
  puVar3 = &DAT_006b2e28;
  for (iVar1 = 0x3b8e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


