
/* ==== FUN_00409a14 @ 00409a14 ==== 
 * signature: undefined4 __register FUN_00409a14(undefined * param_1)
 * body: 00409a14-00409a65
 */

undefined4 FUN_00409a14(undefined *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 7;
  piVar4 = &DAT_004475b8;
  puVar5 = &DAT_004475d4;
  while( true ) {
    if (*piVar4 == 0) {
      return 0;
    }
    pcVar1 = FUN_00403dfc(param_1);
    pbVar2 = FUN_00403dfc((undefined *)*piVar4);
    pCVar3 = FUN_0040b4ac(pbVar2,pcVar1);
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


