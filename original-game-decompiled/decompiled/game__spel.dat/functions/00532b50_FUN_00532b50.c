
/* ==== FUN_00532b50 @ 00532b50 ==== 
 * signature: undefined __cdecl FUN_00532b50(int * param_1, int param_2, int param_3, int param_4)
 * body: 00532b50-00532dba
 */

void __cdecl FUN_00532b50(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int *local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_00514af0(DAT_0074c6ec);
  iVar1 = iVar1 + DAT_0074c044;
  local_8 = 0;
  local_c = (int *)FUN_00514b50(iVar1);
  FUN_00514dd0(local_c,0,iVar1);
  local_4 = FUN_0052db00(param_2,param_3,param_4);
  if (local_4 != 0) {
    piVar4 = (int *)(local_4 + 4);
    iVar1 = *(int *)(local_4 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      iVar2 = FUN_005164c0(*(uint *)(iVar1 + 8));
      if (-1 < iVar2) {
        local_c[iVar2 + 1] = *(int *)(iVar1 + 8);
      }
      iVar1 = *piVar4;
    }
  }
  if (((DAT_0074be74 != 0) || (DAT_0074be70 != 0)) || (DAT_0074c038 != 0)) {
    for (; (param_2 != 0 && (*(int *)(param_2 + 0x30) != 0)); param_2 = *(int *)(param_2 + 0x30)) {
      if (((param_4 != 0) || (uVar3 = FUN_00533dd0(param_2), uVar3 == 0)) &&
         (iVar1 = *(int *)(param_2 + 0x44), iVar1 != 0)) {
        puVar5 = (uint *)(iVar1 + 4);
        uVar3 = *(uint *)(iVar1 + 4);
        while (uVar3 != 0) {
          puVar5 = puVar5 + 1;
          iVar1 = FUN_005164c0(uVar3);
          if (-1 < iVar1) {
            local_c[iVar1 + 1] = uVar3;
          }
          uVar3 = *puVar5;
        }
      }
    }
    if (param_3 != 0) {
      piVar4 = (int *)(param_3 + 4);
      iVar1 = *(int *)(param_3 + 4);
      while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        if (((param_4 != 0) || (uVar3 = FUN_00533dd0(iVar1), uVar3 == 0)) &&
           (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
          puVar5 = (uint *)(iVar1 + 4);
          uVar3 = *(uint *)(iVar1 + 4);
          while (uVar3 != 0) {
            puVar5 = puVar5 + 1;
            iVar1 = FUN_005164c0(uVar3);
            if (-1 < iVar1) {
              local_c[iVar1 + 1] = uVar3;
            }
            uVar3 = *puVar5;
          }
        }
        iVar1 = *piVar4;
      }
    }
  }
  FUN_00514ba0(&local_4);
  if ((local_c != (int *)0x0) && (iVar1 = FUN_00514af0(local_c), 0 < iVar1)) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (DAT_0074be28 == 0) {
    FUN_00558953(param_1,(byte *)s__d__d_005c3350);
  }
  else {
    FUN_00558953(param_1,(byte *)s__s____s_begin__d__d_real_005c32e8);
  }
  if (local_c != (int *)0x0) {
    uVar3 = local_c[1];
    iVar1 = FUN_00514af0(local_c);
    if (0 < iVar1) {
      iVar2 = 4;
      do {
        if (uVar3 != 0) {
          if (DAT_0074be28 != 0) {
            FUN_00558953(param_1,&DAT_005c3210);
          }
          FUN_00532a00(param_1,(char *)0x0,uVar3);
        }
        iVar2 = iVar2 + 4;
        iVar1 = iVar1 + -1;
        uVar3 = *(uint *)(iVar2 + (int)local_c);
      } while (iVar1 != 0);
    }
  }
  if (DAT_0074be28 != 0) {
    FUN_00558953(param_1,&DAT_005c3704);
  }
  FUN_00514ba0((int *)&local_c);
  return;
}


