
/* ==== FUN_004501ac @ 004501ac ==== 
 * signature: undefined __register FUN_004501ac(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * body: 004501ac-004501ea
 */

void FUN_004501ac(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_6 + -4) + 0x120);
  TPen_set_Color((int *)piVar1[4],param_1);
  FUN_00419154(piVar1,param_2,param_3);
  FUN_004190f4(piVar1,param_5,param_4);
  return;
}


