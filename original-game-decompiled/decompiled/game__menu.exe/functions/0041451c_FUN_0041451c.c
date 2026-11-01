
/* ==== FUN_0041451c @ 0041451c ==== 
 * signature: undefined __register FUN_0041451c(int param_1, int param_2, undefined4 * param_3, int param_4)
 * body: 0041451c-00414558
 */

void FUN_0041451c(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = FUN_00412dc8((int *)&DAT_00412da0,'\x01',param_1,param_3,(undefined4 *)0x0,param_2,
                        *(int *)(*(int *)(param_4 + -4) + 0x18));
  FUN_00410104(*(int **)(*(int *)(param_4 + -4) + 0x30),(int)piVar1);
  return;
}


