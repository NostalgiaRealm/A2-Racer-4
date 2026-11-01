
/* ==== FUN_00513f70 @ 00513f70 ==== 
 * signature: undefined __cdecl FUN_00513f70(int * param_1, int param_2, undefined4 param_3)
 * body: 00513f70-0051401e
 */

void __cdecl FUN_00513f70(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_00000014;
  
  piVar5 = (int *)*param_1;
  if ((piVar5 == (int *)0x0) || (piVar5 = piVar5 + *piVar5 + 1, *piVar5 == 0)) {
    FUN_005146f0(param_1);
    piVar5 = (int *)*param_1 + *(int *)*param_1 + 1;
  }
  iVar4 = *piVar5 + -1;
  if ((param_2 < 0) || (iVar4 < param_2)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setaddn_005b9ee4);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,(int *)*param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  *piVar5 = *piVar5 + 1;
  puVar2 = (undefined4 *)(*param_1 + 4 + iVar4 * 4);
  iVar4 = (iVar4 - param_2) + 1;
  puVar3 = puVar2 + 1;
  if (iVar4 == 0) {
    *puVar3 = in_stack_00000014;
    return;
  }
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *puVar3 = in_stack_00000014;
  return;
}


