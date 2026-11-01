
/* ==== FUN_00558d5b @ 00558d5b ==== 
 * signature: undefined __cdecl FUN_00558d5b(int * param_1, undefined4 * param_2, uint param_3, undefined * param_4)
 * body: 00558d5b-00558eae
 */

void __cdecl FUN_00558d5b(int *param_1,undefined4 *param_2,uint param_3,undefined *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_fc [30];
  int local_84 [30];
  int *local_c;
  int local_8;
  
  if ((param_2 < (undefined4 *)0x2) || (param_3 == 0)) {
    return;
  }
  local_8 = 0;
  iVar4 = (int)param_2 + -1;
  param_2 = local_fc;
  piVar5 = (int *)(iVar4 * param_3 + (int)param_1);
  piVar3 = param_1;
  param_1 = local_84;
LAB_00558d9a:
  uVar2 = (uint)((int)piVar5 - (int)piVar3) / param_3 + 1;
  if (8 < uVar2) {
    FUN_00558efd((undefined1 *)((uVar2 >> 1) * param_3 + (int)piVar3),(undefined1 *)piVar3,param_3);
    piVar6 = (int *)(param_3 + (int)piVar5);
    local_c = piVar3;
LAB_00558df1:
    local_c = (int *)((int)local_c + param_3);
    if (local_c <= piVar5) goto code_r0x00558dfe;
    goto LAB_00558e09;
  }
  FUN_00558eaf((undefined1 *)piVar3,(undefined1 *)piVar5,param_3,param_4);
  goto LAB_00558db9;
code_r0x00558dfe:
  iVar4 = (*(code *)param_4)(local_c,piVar3);
  if (iVar4 < 1) goto LAB_00558df1;
LAB_00558e09:
  do {
    piVar6 = (int *)((int)piVar6 - param_3);
    if (piVar6 <= piVar3) break;
    iVar4 = (*(code *)param_4)(piVar6,piVar3);
  } while (-1 < iVar4);
  if (local_c <= piVar6) {
    FUN_00558efd((undefined1 *)local_c,(undefined1 *)piVar6,param_3);
    goto LAB_00558df1;
  }
  FUN_00558efd((undefined1 *)piVar3,(undefined1 *)piVar6,param_3);
  piVar1 = local_c;
  if ((int)((int)piVar6 + (-1 - (int)piVar3)) < (int)piVar5 - (int)local_c) {
    if (local_c < piVar5) {
      local_8 = local_8 + 1;
      *param_2 = local_c;
      *param_1 = (int)piVar5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int *)(param_3 + (int)piVar3) < piVar6) {
      piVar5 = (int *)((int)piVar6 - param_3);
      goto LAB_00558d9a;
    }
  }
  else {
    if ((int *)((int)piVar3 + param_3) < piVar6) {
      local_8 = local_8 + 1;
      *param_2 = piVar3;
      *param_1 = (int)piVar6 - param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    piVar3 = piVar1;
    if (piVar1 < piVar5) goto LAB_00558d9a;
  }
LAB_00558db9:
  local_8 = local_8 + -1;
  param_2 = param_2 + -1;
  param_1 = param_1 + -1;
  if (local_8 < 0) {
    return;
  }
  piVar5 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  goto LAB_00558d9a;
}


