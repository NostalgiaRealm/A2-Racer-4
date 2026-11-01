
/* ==== FUN_00533440 @ 00533440 ==== 
 * signature: undefined __cdecl FUN_00533440(int * param_1, int param_2, int param_3, int param_4)
 * body: 00533440-005336db
 */

void __cdecl FUN_00533440(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  byte *pbVar8;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = FUN_00514af0(DAT_0074c6ec);
  iVar3 = iVar3 + DAT_0074c044;
  FUN_0052cd70(param_2,param_3,param_4,&local_4,&local_8,&local_c,&local_10,&local_14);
  FUN_00558953(param_1,&DAT_005c3290);
  FUN_0051a750();
  local_18 = FUN_0052db00(param_2,param_3,param_4);
  local_1c = (int *)FUN_00514b50(iVar3);
  local_20 = (int *)FUN_00514b50(iVar3);
  FUN_00514dd0(local_1c,0,iVar3);
  FUN_00514dd0(local_20,0,iVar3);
  if (local_18 != 0) {
    piVar6 = (int *)(local_18 + 4);
    iVar3 = *(int *)(local_18 + 4);
    while (iVar3 != 0) {
      piVar6 = piVar6 + 1;
      FUN_0051a0a0(local_1c,*(uint *)(iVar3 + 8),iVar3);
      iVar3 = *piVar6;
    }
  }
  for (; (param_2 != 0 && (*(int *)(param_2 + 0x30) != 0)); param_2 = *(int *)(param_2 + 0x30)) {
    iVar3 = *(int *)(param_2 + 0x44);
    if (iVar3 != 0) {
      puVar7 = (uint *)(iVar3 + 4);
      uVar1 = *(uint *)(iVar3 + 4);
      while (uVar1 != 0) {
        puVar7 = puVar7 + 1;
        FUN_0051a0a0(local_20,uVar1,param_2);
        uVar1 = *puVar7;
      }
    }
  }
  if (param_3 != 0) {
    piVar6 = (int *)(param_3 + 4);
    iVar3 = *(int *)(param_3 + 4);
    while (iVar3 != 0) {
      piVar6 = piVar6 + 1;
      iVar5 = *(int *)(iVar3 + 0x44);
      if (iVar5 != 0) {
        puVar7 = (uint *)(iVar5 + 4);
        uVar1 = *(uint *)(iVar5 + 4);
        while (uVar1 != 0) {
          puVar7 = puVar7 + 1;
          FUN_0051a0a0(local_20,uVar1,iVar3);
          uVar1 = *puVar7;
        }
      }
      iVar3 = *piVar6;
    }
  }
  if (local_1c != (int *)0x0) {
    iVar3 = local_1c[1];
    param_4 = FUN_00514af0(local_1c);
    if (0 < param_4) {
      iVar5 = 4;
      do {
        if (iVar3 == 0) {
          if (*(int *)((int)local_20 + iVar5) == 0) {
            pbVar8 = &DAT_005c3294;
            goto LAB_00533692;
          }
          FUN_00558953(param_1,(byte *)s_1__d_005c53a8);
        }
        else {
          puVar4 = (undefined4 *)FUN_00514af0(*(int **)(iVar3 + 0xc));
          FUN_00558953(param_1,&DAT_005aeedc);
          if (DAT_0074c03c == 3) {
            FUN_0052e160(iVar3);
          }
          else if (3 < DAT_0074c03c) {
            FUN_00558d5b((int *)(*(int *)(iVar3 + 0xc) + 4),puVar4,4,FUN_0052d610);
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 != 0) {
            iVar2 = *(int *)(iVar3 + 4);
            piVar6 = (int *)(iVar3 + 8);
            while (iVar2 != 0) {
              FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
              iVar2 = *piVar6;
              piVar6 = piVar6 + 1;
            }
          }
          pbVar8 = &DAT_005ae60c;
LAB_00533692:
          FUN_00558953(param_1,pbVar8);
        }
        iVar5 = iVar5 + 4;
        iVar3 = *(int *)((int)local_1c + iVar5);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  FUN_00514ba0((int *)&local_20);
  FUN_00514ba0((int *)&local_1c);
  FUN_00514ba0(&local_18);
  return;
}


