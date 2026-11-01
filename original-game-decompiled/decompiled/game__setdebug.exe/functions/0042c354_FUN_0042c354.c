
/* ==== FUN_0042c354 @ 0042c354 ==== 
 * signature: int __register FUN_0042c354(int param_1)
 * body: 0042c354-0042c367
 */

int FUN_0042c354(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


