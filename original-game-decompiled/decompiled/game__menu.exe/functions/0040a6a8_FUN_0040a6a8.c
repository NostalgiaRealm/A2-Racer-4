
/* ==== FUN_0040a6a8 @ 0040a6a8 ==== 
 * signature: undefined4 __register FUN_0040a6a8(undefined * param_1)
 * body: 0040a6a8-0040a6f9
 */

undefined4 FUN_0040a6a8(undefined *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 7;
  piVar4 = &DAT_004ac5c0;
  puVar5 = &DAT_004ac5dc;
  while( true ) {
    if (*piVar4 == 0) {
      return 0;
    }
    pcVar1 = FUN_004040a0(param_1);
    pbVar2 = FUN_004040a0((undefined *)*piVar4);
    pCVar3 = FUN_0040c19c(pbVar2,pcVar1);
    if (pCVar3 != (PCNZCH)0x0) break;
    puVar5 = puVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 0;
    }
  }
  return *puVar5;
}


