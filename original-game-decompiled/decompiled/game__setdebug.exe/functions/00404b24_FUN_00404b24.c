
/* ==== FUN_00404b24 @ 00404b24 ==== 
 * signature: undefined __register FUN_00404b24(int * param_1, int param_2, int param_3, int * param_4)
 * body: 00404b24-00404cad
 */

void FUN_00404b24(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = (int *)*param_1;
  iVar5 = *param_4;
  local_c = param_3;
  local_8 = param_1;
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      FUN_00402744(CONCAT31((int3)((uint)param_4 >> 8),4));
    }
    FUN_00404b1c(local_8,param_2);
  }
  else {
    local_14 = 0;
    if (piVar2 != (int *)0x0) {
      local_14 = piVar2[-1];
      piVar2 = piVar2 + -2;
    }
    iVar3 = param_2 + (uint)*(byte *)(param_2 + 1);
    local_1c = *(int *)(iVar3 + 2);
    puVar1 = *(undefined4 **)(iVar3 + 6);
    if (puVar1 == (undefined4 *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)*puVar1;
    }
    local_20 = iVar5 * local_1c;
    if (local_20 / iVar5 != local_1c) {
      FUN_00402744(CONCAT31((int3)((uint)(local_20 / iVar5) >> 8),4));
    }
    local_20 = local_20 + 8;
    if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
      local_24 = piVar2;
      if ((iVar5 < local_14) && (pcVar4 != (char *)0x0)) {
        thunk_FUN_00404260((VARIANTARG *)((int)piVar2 + iVar5 * local_1c + 8),pcVar4,
                           local_14 - iVar5);
      }
      FUN_004026e8((int *)&local_24,local_20);
      piVar2 = local_24;
    }
    else {
      *piVar2 = *piVar2 + -1;
      piVar2 = (int *)FUN_004026b8(local_20);
      local_18 = local_14;
      if (iVar5 < local_14) {
        local_18 = iVar5;
      }
      if (pcVar4 == (char *)0x0) {
        FUN_004027d0((undefined4 *)*local_8,piVar2 + 2,local_18 * local_1c);
      }
      else {
        FUN_00402a2c(piVar2 + 2,local_18 * local_1c,0);
        FUN_00404b04((VARIANT *)(piVar2 + 2),(VARIANTARG *)*local_8,pcVar4,local_18);
      }
    }
    *piVar2 = 1;
    piVar2[1] = iVar5;
    piVar2 = piVar2 + 2;
    FUN_00402a2c((int *)(local_1c * local_14 + (int)piVar2),(iVar5 - local_14) * local_1c,0);
    if (1 < local_c) {
      local_c = local_c + -1;
      if (-1 < iVar5 + -1) {
        local_10 = 0;
        do {
          FUN_00404b24(piVar2 + local_10,(int)pcVar4,local_c,param_4 + 1);
          local_10 = local_10 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    *local_8 = (int)piVar2;
  }
  return;
}


