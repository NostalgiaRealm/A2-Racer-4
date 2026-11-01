
/* ==== FUN_00531a50 @ 00531a50 ==== 
 * signature: undefined __cdecl FUN_00531a50(int * param_1, int param_2)
 * body: 00531a50-00531c5a
 */

void __cdecl FUN_00531a50(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  if (((*(uint *)(param_2 + 0x50) & 0x400) != 0) && (DAT_0074c690 != 0)) {
    FUN_00558953(param_1,(byte *)s___ridges__ids_may_be_garbage___005c3d2c);
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 0) {
      piVar3 = (int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 4);
      while (iVar5 != 0) {
        piVar3 = piVar3 + 1;
        FUN_00558953(param_1,&DAT_005c3d24);
        iVar5 = *piVar3;
      }
    }
    FUN_00558953(param_1,&DAT_005ae60c);
    return;
  }
  FUN_00558953(param_1,(byte *)s___ridges__005c3d14);
  iVar4 = *(int *)(param_2 + 0x38);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    piVar3 = (int *)(iVar4 + 8);
    while (iVar1 != 0) {
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfeffffff;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  if (DAT_0074c03c == 3) {
    for (piVar3 = *(int **)(*(int *)(param_2 + 0x38) + 4);
        (piVar3 != (int *)0x0 && ((piVar3[3] & 0x1000000U) == 0));
        piVar3 = FUN_00519f20(piVar3,param_2,(undefined4 *)0x0)) {
      piVar3[3] = piVar3[3] | 0x1000000;
      FUN_00532f80(param_1,piVar3);
      iVar5 = iVar5 + 1;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x3c);
    if (iVar4 != 0) {
      piVar3 = (int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 4);
      iVar5 = local_4;
      while (iVar4 != 0) {
        piVar3 = piVar3 + 1;
        iVar1 = *(int *)(param_2 + 0x38);
        local_4 = iVar5;
        if (iVar1 != 0) {
          puVar6 = (undefined4 *)(iVar1 + 4);
          piVar2 = *(int **)(iVar1 + 4);
          while (piVar2 != (int *)0x0) {
            puVar6 = puVar6 + 1;
            iVar5 = piVar2[1];
            if (iVar5 == param_2) {
              iVar5 = piVar2[2];
            }
            if (iVar5 == iVar4) {
              piVar2[3] = piVar2[3] | 0x1000000;
              FUN_00532f80(param_1,piVar2);
              local_4 = local_4 + 1;
            }
            piVar2 = (int *)*puVar6;
          }
        }
        iVar5 = local_4;
        iVar4 = *piVar3;
      }
    }
  }
  iVar4 = FUN_00514af0(*(int **)(param_2 + 0x38));
  if (iVar5 != iVar4) {
    FUN_00558953(param_1,(byte *)s___all_ridges__005c3d00);
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 0) {
      piVar3 = (int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 4);
      while (iVar5 != 0) {
        piVar3 = piVar3 + 1;
        FUN_00558953(param_1,&DAT_005c3d24);
        iVar5 = *piVar3;
      }
    }
    FUN_00558953(param_1,&DAT_005ae60c);
  }
  iVar5 = *(int *)(param_2 + 0x38);
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)(iVar5 + 4);
    piVar3 = *(int **)(iVar5 + 4);
    while (piVar3 != (int *)0x0) {
      puVar6 = puVar6 + 1;
      if ((piVar3[3] & 0x1000000U) == 0) {
        FUN_00532f80(param_1,piVar3);
      }
      piVar3 = (int *)*puVar6;
    }
  }
  return;
}


