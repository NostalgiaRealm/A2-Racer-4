
/* ==== FUN_00411a8c @ 00411a8c ==== 
 * signature: int __register FUN_00411a8c(int * param_1, int param_2)
 * body: 00411a8c-00411abf
 */

int FUN_00411a8c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,iVar3);
      if (param_2 == iVar2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}


