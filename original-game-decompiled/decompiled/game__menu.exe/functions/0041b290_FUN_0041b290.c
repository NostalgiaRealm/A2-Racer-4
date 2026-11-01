
/* ==== FUN_0041b290 @ 0041b290 ==== 
 * signature: undefined4 __register FUN_0041b290(int param_1, short param_2)
 * body: 0041b290-0041b2c9
 */

undefined4 FUN_0041b290(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 8),iVar2);
      if (param_2 == (short)uVar1) {
        uVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 4),iVar2);
        return uVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}


