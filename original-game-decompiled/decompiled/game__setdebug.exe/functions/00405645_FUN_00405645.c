
/* ==== FUN_00405645 @ 00405645 ==== 
 * signature: undefined __register FUN_00405645(int param_1)
 * body: 00405645-00405669
 */

void FUN_00405645(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0xd7b2) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    if (iVar1 != 0) {
LAB_00405665:
      FUN_004027a8(iVar1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) != 0xd7b1) {
    iVar1 = 0x67;
    goto LAB_00405665;
  }
  return;
}


