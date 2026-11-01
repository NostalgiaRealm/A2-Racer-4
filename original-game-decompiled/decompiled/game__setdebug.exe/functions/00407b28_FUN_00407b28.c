
/* ==== FUN_00407b28 @ 00407b28 ==== 
 * signature: int __register FUN_00407b28(undefined * param_1, undefined * param_2)
 * body: 00407b28-00407b5f
 */

int FUN_00407b28(undefined *param_1,undefined *param_2)

{
  int iVar1;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  
  iVar1 = FUN_00403c38((int)param_2);
  lpString2 = FUN_00403dfc(param_2);
  cchCount1 = FUN_00403c38((int)param_1);
  lpString1 = FUN_00403dfc(param_1);
  iVar1 = CompareStringA(0x400,1,lpString1,cchCount1,lpString2,iVar1);
  return iVar1 + -2;
}


