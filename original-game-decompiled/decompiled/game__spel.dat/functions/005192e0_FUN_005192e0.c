
/* ==== FUN_005192e0 @ 005192e0 ==== 
 * signature: int __cdecl FUN_005192e0(int param_1, int * param_2, double * param_3, int param_4)
 * body: 005192e0-0051968c
 */

int __cdecl FUN_005192e0(int param_1,int *param_2,double *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint unaff_ESI;
  uint uVar8;
  undefined4 unaff_EDI;
  longlong lVar9;
  int *local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  
  local_1c = 0;
  iVar3 = param_1 + 1;
  local_10 = FUN_00514b50(iVar3);
  local_20 = (int *)FUN_00514b50(iVar3);
  if (DAT_0074be00 == 0) {
    if (DAT_0074bfb8 != 0) {
      iVar2 = FUN_00514af0(local_20);
      while (iVar2 != iVar3) {
        local_14 = (uint *)FUN_0052bd10();
        FUN_005589b8((double)DAT_0074c044 * (double)(int)local_14 * 4.656612875245797e-10);
        lVar9 = __ftol();
        uVar8 = (uint)lVar9;
        iVar2 = FUN_0051a050(uVar8);
        for (iVar2 = FUN_00514680((int)local_20,iVar2); iVar2 != 0;
            iVar2 = FUN_00514680((int)local_20,iVar2)) {
          uVar8 = uVar8 + 1 & (DAT_0074c044 <= (int)(uVar8 + 1)) - 1;
          iVar2 = FUN_0051a050(uVar8);
        }
        iVar2 = FUN_0051a050(uVar8);
        FUN_00514020((int *)&local_20,iVar2);
        iVar2 = FUN_00514af0(local_20);
      }
      goto LAB_00519641;
    }
    if (7 < DAT_0074c03c) {
      local_18 = FUN_00514b50(iVar3);
      FUN_00514020((int *)&local_20,param_2[1]);
      FUN_00514020((int *)&local_20,param_2[2]);
      iVar3 = param_1;
      if (5 < param_1) {
        iVar3 = 6;
      }
      FUN_0052b1f0(iVar3,param_2,param_3,param_4,(int *)&local_20);
      iVar3 = FUN_00514af0(local_20);
      if (param_2 != (int *)0x0) {
        uVar8 = param_2[1];
        uVar6 = 0;
        local_c = FUN_00514af0(param_2);
        if (0 < local_c) {
          local_14 = (uint *)(param_2 + 1);
          do {
            if ((((uVar6 & 1) != 0) && (iVar2 = FUN_00514680((int)local_20,uVar8), iVar2 == 0)) &&
               (iVar2 = FUN_00514680(local_18,uVar8), iVar2 == 0)) {
              FUN_00529ef0(uVar8,(int)local_20,iVar3,&local_1c);
              if (local_1c == 0) {
                FUN_00514020((int *)&local_20,uVar8);
                iVar3 = iVar3 + 1;
                if (iVar3 == param_1) goto LAB_0051958d;
              }
              else {
                FUN_00514020(&local_18,uVar8);
              }
            }
            uVar6 = uVar6 + 1;
            local_14 = local_14 + 1;
            uVar8 = *local_14;
          } while ((int)uVar6 < local_c);
        }
      }
      while ((iVar3 != param_1 && (uVar8 = FUN_005142e0(param_2), uVar8 != 0))) {
        iVar2 = FUN_00514680((int)local_20,uVar8);
        if ((iVar2 == 0) && (iVar2 = FUN_00514680(local_18,uVar8), iVar2 == 0)) {
          FUN_00529ef0(uVar8,(int)local_20,iVar3,&local_1c);
          if (local_1c == 0) {
            FUN_00514020((int *)&local_20,uVar8);
            iVar3 = iVar3 + 1;
          }
          else {
            FUN_00514020(&local_18,uVar8);
          }
        }
      }
LAB_0051958d:
      iVar2 = 0;
      while (iVar3 != param_1) {
        iVar7 = iVar2 + 1;
        uVar8 = FUN_0051a050(iVar2);
        if (uVar8 == 0) break;
        iVar4 = FUN_00514680((int)local_20,uVar8);
        iVar2 = iVar7;
        if (((iVar4 == 0) && (iVar7 = FUN_00514680(local_18,uVar8), iVar7 == 0)) &&
           (FUN_00529ef0(uVar8,(int)local_20,iVar3,&local_1c), local_1c == 0)) {
          FUN_00514020((int *)&local_20,uVar8);
          iVar3 = iVar3 + 1;
        }
      }
      FUN_00514ba0(&local_18);
      FUN_0052b1f0(param_1,param_2,param_3,param_4,(int *)&local_20);
      goto LAB_00519641;
    }
  }
  else {
    param_2 = (int *)0x0;
  }
  FUN_0052b1f0(param_1,param_2,param_3,param_4,(int *)&local_20);
LAB_00519641:
  if (local_20 != (int *)0x0) {
    iVar3 = local_20[1];
    piVar1 = local_20 + 2;
    while (iVar3 != 0) {
      puVar5 = FUN_00519e50(iVar3,unaff_EDI,unaff_ESI);
      FUN_00513f70(&local_10,0,puVar5);
      iVar3 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  FUN_00514ba0((int *)&local_20);
  return local_10;
}


