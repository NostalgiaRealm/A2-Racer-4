
/* ==== FUN_0052d7f0 @ 0052d7f0 ==== 
 * signature: int __cdecl FUN_0052d7f0(undefined4 param_1, undefined * param_2, int * param_3, int * param_4, int param_5, int param_6)
 * body: 0052d7f0-0052da32
 */

int __cdecl
FUN_0052d7f0(undefined4 param_1,undefined *param_2,int *param_3,int *param_4,int param_5,int param_6
            )

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  piVar4 = param_3;
  uVar3 = DAT_0074c634;
  iVar8 = 0;
  DAT_0074c6d4 = DAT_0074c6d4 + 1;
  local_8 = 0;
  param_3[5] = param_3[5] | 0x1000000;
  piVar5 = DAT_0074c628;
  if (param_4 != (int *)0x0) {
    for (; (piVar5 != (int *)0x0 && (*piVar5 != 0)); piVar5 = (int *)*piVar5) {
      piVar5[5] = piVar5[5] & 0xfeffffff;
    }
  }
  iVar9 = param_3[3];
  if (iVar9 != 0) {
    piVar5 = (int *)(iVar9 + 4);
    iVar9 = *(int *)(iVar9 + 4);
    while (iVar9 != 0) {
      piVar5 = piVar5 + 1;
      if (*(uint *)(iVar9 + 0x48) < uVar3) {
        *(uint *)(iVar9 + 0x50) = *(uint *)(iVar9 + 0x50) | 0x2000;
      }
      iVar9 = *piVar5;
    }
  }
  iVar9 = param_3[3];
  if (iVar9 != 0) {
    iVar1 = *(int *)(iVar9 + 4);
    piVar5 = (int *)(iVar9 + 8);
    while (iVar1 != 0) {
      if (((*(uint *)(iVar1 + 0x50) & 0x2000) != 0) && (iVar9 = *(int *)(iVar1 + 0x34), iVar9 != 0))
      {
        iVar1 = *(int *)(iVar9 + 4);
        param_4 = (int *)(iVar9 + 8);
        while (iVar1 != 0) {
          if ((*(int *)(iVar1 + 0x10) != DAT_0074c6d4) &&
             ((*(uint *)(iVar1 + 0x14) & 0x1000000) == 0)) {
            *(int *)(iVar1 + 0x10) = DAT_0074c6d4;
            iVar8 = *(int *)(iVar1 + 0xc);
            iVar9 = 0;
            uVar7 = 1;
            bVar2 = true;
            if (iVar8 != 0) {
              piVar6 = (int *)(iVar8 + 4);
              iVar8 = *(int *)(iVar8 + 4);
              while (iVar8 != 0) {
                piVar6 = piVar6 + 1;
                if ((*(byte *)(iVar8 + 0x51) & 0x20) != 0) {
                  if (*(int *)(iVar8 + 0x48) == 0) {
                    if (bVar2) {
                      iVar9 = iVar9 + 1;
                      bVar2 = false;
                    }
                  }
                  else {
                    iVar9 = iVar9 + 1;
                  }
                }
                iVar8 = *piVar6;
              }
            }
            if (DAT_0074c03c + -1 <= iVar9) {
              if (bVar2) {
                if (param_5 != 2) {
                  uVar7 = 0;
LAB_0052d945:
                  local_8 = local_8 + 1;
                  if (3 < DAT_0074be68) {
                    FUN_005164c0(*(uint *)(iVar1 + 8));
                    FUN_005164c0(piVar4[2]);
                    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_eachvoronoi__Voronoi_ridge_of_005c30b8);
                  }
                  if (param_2 != (undefined *)0x0) {
                    if ((param_6 == 0) || (DAT_0074c03c != 4)) {
                      param_3 = FUN_0052d570(iVar1);
                    }
                    else {
                      param_3 = (int *)FUN_0052d640((int)piVar4,iVar1);
                    }
                    (*(code *)param_2)(param_1,piVar4,iVar1,param_3,uVar7);
                    FUN_00514ba0((int *)&param_3);
                  }
                }
              }
              else if (param_5 != 1) goto LAB_0052d945;
            }
          }
          iVar1 = *param_4;
          param_4 = param_4 + 1;
          iVar8 = local_8;
        }
      }
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
    }
  }
  iVar9 = piVar4[3];
  if (iVar9 != 0) {
    iVar1 = *(int *)(iVar9 + 4);
    piVar5 = (int *)(iVar9 + 8);
    while (iVar1 != 0) {
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xffffdfff;
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
    }
  }
  return iVar8;
}


