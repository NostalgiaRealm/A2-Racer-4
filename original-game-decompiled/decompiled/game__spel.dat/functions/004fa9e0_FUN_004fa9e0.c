
/* ==== FUN_004fa9e0 @ 004fa9e0 ==== 
 * signature: undefined __fastcall FUN_004fa9e0(undefined8 * param_1)
 * body: 004fa9e0-004faa18
 */

void __fastcall FUN_004fa9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar4 = 1;
  puVar6 = param_1;
  do {
    puVar6 = puVar6 + 4;
    param_1 = param_1 + 1;
    puVar2 = puVar6;
    puVar3 = param_1;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        uVar1 = *puVar2;
        *puVar2 = *puVar3;
        *puVar3 = uVar1;
        iVar5 = iVar5 + -1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar5 != 0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}


