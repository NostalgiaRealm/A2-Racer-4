
/* ==== FUN_004317dc @ 004317dc ==== 
 * signature: undefined __register FUN_004317dc(int param_1, int param_2)
 * body: 004317dc-0043181b
 */

void FUN_004317dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004317bc(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00431780(param_1,iVar3);
      (**(code **)(iVar2 + 0x28))(*(undefined4 *)(iVar2 + 0x2c),param_2);
      if (*(int *)(param_2 + 0xc) != 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


