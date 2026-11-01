
/* ==== FUN_00405bfd @ 00405bfd ==== 
 * signature: undefined __register FUN_00405bfd(int param_1)
 * body: 00405bfd-00405c21
 */

void FUN_00405bfd(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0xd7b2) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    if (iVar1 != 0) {
LAB_00405c1d:
      FUN_0040286c(iVar1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) != 0xd7b1) {
    iVar1 = 0x67;
    goto LAB_00405c1d;
  }
  return;
}


