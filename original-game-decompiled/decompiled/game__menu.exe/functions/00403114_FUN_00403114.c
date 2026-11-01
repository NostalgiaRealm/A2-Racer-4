
/* ==== FUN_00403114 @ 00403114 ==== 
 * signature: undefined4 __register FUN_00403114(int * param_1, int param_2)
 * body: 00403114-00403128
 */

undefined4 FUN_00403114(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    while (iVar1 = *param_1, iVar1 != param_2) {
      param_1 = *(int **)(iVar1 + -0x24);
      if (param_1 == (int *)0x0) {
        return 0;
      }
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}


