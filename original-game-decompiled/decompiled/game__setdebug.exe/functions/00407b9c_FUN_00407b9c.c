
/* ==== FUN_00407b9c @ 00407b9c ==== 
 * signature: int __register FUN_00407b9c(PCNZCH param_1, PCNZCH param_2, int param_3)
 * body: 00407b9c-00407bbb
 */

int FUN_00407b9c(PCNZCH param_1,PCNZCH param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CompareStringA(0x400,1,param_1,param_3,param_2,param_3);
  return iVar1 + -2;
}


