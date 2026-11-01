
/* ==== FUN_0042e9b4 @ 0042e9b4 ==== 
 * signature: int __register FUN_0042e9b4(int param_1)
 * body: 0042e9b4-0042e9e1
 */

int FUN_0042e9b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)PTR_DAT_00446b78)();
  iVar2 = -iVar1;
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (iVar1 != 0) {
    iVar2 = SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return iVar2;
}


