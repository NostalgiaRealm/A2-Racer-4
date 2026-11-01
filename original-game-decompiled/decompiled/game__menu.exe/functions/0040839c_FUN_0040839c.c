
/* ==== FUN_0040839c @ 0040839c ==== 
 * signature: bool __register FUN_0040839c(undefined * param_1, undefined * param_2)
 * body: 0040839c-004083d6
 */

bool FUN_0040839c(undefined *param_1,undefined *param_2)

{
  int iVar1;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  iVar1 = FUN_00403edc((int)param_2);
  lpString2 = FUN_004040a0(param_2);
  cchCount1 = FUN_00403edc((int)param_1);
  lpString1 = FUN_004040a0(param_1);
  iVar1 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,iVar1);
  return iVar1 == 2;
}


