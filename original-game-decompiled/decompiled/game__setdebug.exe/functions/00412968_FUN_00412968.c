
/* ==== FUN_00412968 @ 00412968 ==== 
 * signature: undefined __register FUN_00412968(int param_1, int param_2, undefined4 * param_3, int param_4)
 * body: 00412968-004129a4
 */

void FUN_00412968(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = FUN_00411214((int *)&DAT_004111ec,'\x01',param_1,param_3,(undefined4 *)0x0,param_2,
                        *(int *)(*(int *)(param_4 + -4) + 0x18));
  FUN_0040eec8(*(int **)(*(int *)(param_4 + -4) + 0x30),(int)piVar1);
  return;
}


