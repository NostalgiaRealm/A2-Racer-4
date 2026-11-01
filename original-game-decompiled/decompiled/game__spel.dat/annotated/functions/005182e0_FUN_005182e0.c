
/* ==== FUN_005182e0 @ 005182e0 ==== 
 * signature: int __cdecl FUN_005182e0(int param_1)
 * body: 005182e0-00518420
 */

int __cdecl FUN_005182e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_stack_0000000c;
  int local_8;
  int *local_4;
  
  iVar1 = param_1;
  iVar4 = 0;
  iVar2 = FUN_00514af0(*(int **)(param_1 + 0x34));
  param_1 = FUN_00514b50(iVar2);
  if ((*(uint *)(iVar1 + 0x50) & 0x1000) != 0) {
    if (iVar2 != 3) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_facet3v_005bbb68);
      FUN_0051e8e0(5,(int *)iVar1);
    }
    FUN_00514020(&stack0x0000000c,*(int *)(*(int *)(iVar1 + 0x34) + 4));
    iVar4 = *(int *)(*(int *)(iVar1 + 0x34) + 8);
    if ((*(uint *)(iVar1 + 0x50) & 0x800) == 0) {
      FUN_00513f70(&stack0x0000000c,0,iVar4);
    }
    else {
      FUN_00514020(&stack0x0000000c,iVar4);
    }
    FUN_00514020(&stack0x0000000c,*(int *)(*(int *)(iVar1 + 0x34) + 0xc));
    return in_stack_0000000c;
  }
  local_4 = *(int **)(*(int *)(iVar1 + 0x38) + 4);
  piVar3 = FUN_00519f20(local_4,iVar1,&local_8);
  do {
    if (piVar3 == (int *)0x0) {
LAB_005183f4:
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_facet3v_005bbb08);
      FUN_0051e8e0(5,(int *)iVar1);
      return in_stack_0000000c;
    }
    FUN_00514020(&param_1,local_8);
    iVar4 = iVar4 + 1;
    if ((iVar2 < iVar4) || (piVar3 == local_4)) {
      if ((piVar3 != (int *)0x0) && (iVar4 == iVar2)) {
        return in_stack_0000000c;
      }
      goto LAB_005183f4;
    }
    piVar3 = FUN_00519f20(piVar3,iVar1,&local_8);
  } while( true );
}


