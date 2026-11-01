
/* ==== FUN_00514880 @ 00514880 ==== 
 * signature: undefined __cdecl FUN_00514880(int * param_1, int param_2, uint param_3, int param_4)
 * body: 00514880-005149be
 */

void __cdecl FUN_00514880(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint in_stack_00000014;
  int in_stack_00000018;
  
  if ((int)((param_2 - param_3) + -1) < 0) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setaddn_005b9ee4);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  iVar3 = param_2 + -1 + in_stack_00000018;
  piVar1 = (int *)FUN_005147d0(iVar3);
  piVar4 = param_1 + 1;
  piVar1[*piVar1 + 1] = iVar3 + 1;
  piVar1 = piVar1 + in_stack_00000018 + 1;
  switch(param_3) {
  case 0:
    break;
  case 4:
    *piVar1 = *piVar4;
    piVar1 = piVar1 + 1;
    piVar4 = param_1 + 2;
  case 3:
    *piVar1 = *piVar4;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  case 2:
    *piVar1 = *piVar4;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  case 1:
    *piVar1 = *piVar4;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
    break;
  default:
    piVar5 = piVar4;
    piVar6 = piVar1;
    for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar6 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    piVar1 = piVar1 + param_3;
    piVar4 = piVar4 + param_3;
  }
  piVar5 = piVar4 + 1;
  switch(in_stack_00000014) {
  case 1:
    *piVar1 = *piVar5;
    piVar1[1] = 0;
    return;
  case 4:
    *piVar1 = *piVar5;
    piVar1 = piVar1 + 1;
    piVar5 = piVar4 + 2;
  case 3:
    *piVar1 = *piVar5;
    piVar1 = piVar1 + 1;
    piVar5 = piVar5 + 1;
  case 2:
    *piVar1 = *piVar5;
    piVar1[1] = piVar5[1];
    piVar1[2] = 0;
    return;
  default:
    piVar4 = piVar1;
    for (uVar2 = in_stack_00000014 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    }
    piVar1 = piVar1 + in_stack_00000014;
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar4 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    }
  case 0:
    *piVar1 = 0;
    return;
  }
}


