
/* ==== FUN_0040c0d8 @ 0040c0d8 ==== 
 * signature: PCNZCH __register FUN_0040c0d8(undefined * param_1, undefined * param_2)
 * body: 0040c0d8-0040c10c
 */

PCNZCH FUN_0040c0d8(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  
  pCVar4 = (PCNZCH)0x0;
  pcVar1 = FUN_004040a0(param_1);
  pbVar2 = FUN_004040a0(param_2);
  pCVar3 = FUN_0040c19c(pbVar2,pcVar1);
  if (pCVar3 != (PCNZCH)0x0) {
    pCVar4 = pCVar3 + (1 - (int)pbVar2);
  }
  return pCVar4;
}


