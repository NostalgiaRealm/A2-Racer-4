
/* ==== FUN_00436508 @ 00436508 ==== 
 * signature: int __register FUN_00436508(int param_1)
 * body: 00436508-0043651b
 */

int FUN_00436508(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


