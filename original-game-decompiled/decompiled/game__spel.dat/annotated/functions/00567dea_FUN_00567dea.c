
/* ==== FUN_00567dea @ 00567dea ==== 
 * signature: undefined4 * __cdecl FUN_00567dea(int param_1)
 * body: 00567dea-00567e2e
 */

undefined4 * __cdecl FUN_00567dea(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_005c8a40;
  if (DAT_005c8a44 != param_1) {
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 3;
      if (&DAT_005c8a40 + DAT_005c8ac0 * 3 <= puVar2) break;
      piVar1 = puVar3 + 4;
      puVar3 = puVar2;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_005c8a40 + DAT_005c8ac0 * 3 <= puVar2) || (puVar2[1] != param_1)) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


