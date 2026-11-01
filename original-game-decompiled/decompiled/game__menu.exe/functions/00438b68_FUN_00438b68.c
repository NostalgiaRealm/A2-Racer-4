
/* ==== FUN_00438b68 @ 00438b68 ==== 
 * signature: int __register FUN_00438b68(int param_1)
 * body: 00438b68-00438b95
 */

int FUN_00438b68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)PTR_DAT_004ab760)();
  iVar2 = -iVar1;
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (iVar1 != 0) {
    iVar2 = SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return iVar2;
}


