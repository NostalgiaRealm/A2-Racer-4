
/* ==== FUN_00408c34 @ 00408c34 ==== 
 * signature: undefined __register FUN_00408c34(undefined4 * param_1, uint param_2, undefined4 param_3, int param_4)
 * body: 00408c34-00408c75
 */

void FUN_00408c34(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 0x100 - *(int *)(param_4 + -0x104);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    FUN_004027d0(param_1,(undefined4 *)(param_4 + -0x100 + *(int *)(param_4 + -0x104)),uVar1);
  }
  *(int *)(param_4 + -0x104) = *(int *)(param_4 + -0x104) + uVar1;
  return;
}


