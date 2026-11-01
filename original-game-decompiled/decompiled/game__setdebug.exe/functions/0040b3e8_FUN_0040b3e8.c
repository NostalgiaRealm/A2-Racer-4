
/* ==== FUN_0040b3e8 @ 0040b3e8 ==== 
 * signature: PCNZCH __register FUN_0040b3e8(undefined * param_1, undefined * param_2)
 * body: 0040b3e8-0040b41c
 */

PCNZCH FUN_0040b3e8(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  
  pCVar4 = (PCNZCH)0x0;
  pcVar1 = FUN_00403dfc(param_1);
  pbVar2 = FUN_00403dfc(param_2);
  pCVar3 = FUN_0040b4ac(pbVar2,pcVar1);
  if (pCVar3 != (PCNZCH)0x0) {
    pCVar4 = pCVar3 + (1 - (int)pbVar2);
  }
  return pCVar4;
}


