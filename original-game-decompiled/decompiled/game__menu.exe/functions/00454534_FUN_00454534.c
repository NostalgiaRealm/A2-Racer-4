
/* ==== FUN_00454534 @ 00454534 ==== 
 * signature: undefined __register FUN_00454534(int param_1, uint * param_2, uint * param_3)
 * body: 00454534-00454581
 */

void FUN_00454534(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_00456a14(param_1);
      if ((uVar1 & 0xffffff) != (*param_2 & 0xffffff)) {
        *param_3 = *param_2;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


