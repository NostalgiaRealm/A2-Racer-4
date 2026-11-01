
/* ==== FUN_00544830 @ 00544830 ==== 
 * signature: undefined4 __fastcall FUN_00544830(double * param_1)
 * body: 00544830-00544c80
 */

undefined4 __fastcall FUN_00544830(double *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  double local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)((int)param_1 + 4);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 7;
LAB_00544862:
  do {
    if (local_24 != 0) {
      FUN_00544820(&local_2c);
    }
    if (0xfa < local_2c) {
      return 0;
    }
    if (local_30 != 0) {
      local_30 = local_30 + -1;
      goto LAB_005448a0;
    }
    iVar3 = FUN_005440f0((int)param_1);
    if (iVar3 != 0) goto LAB_00544b15;
    do {
      do {
        do {
          FUN_00544820(&local_2c);
          if (0xfa < local_2c) {
            return 0;
          }
          local_28 = 0;
          iVar3 = FUN_00545280(param_1);
          if (iVar3 == 0) {
            return 0;
          }
LAB_00544b15:
          local_30 = 7;
LAB_005448a0:
          if (*(int *)((int)param_1 + 0x4c) <= *(int *)((int)param_1 + 0x5c)) {
            return 1;
          }
          iVar3 = *(int *)(*(int *)((int)param_1 + 0x44) + *(int *)((int)param_1 + 0x5c) * 4);
          if (0 < *(int *)(param_1 + 0xf)) {
            if ((*(int *)(param_1 + 0xf) == 1) && (local_24 != 0)) {
              FUN_00544710(param_1);
              iVar4 = FUN_00544f50((int)param_1);
              if (iVar4 == 1) {
                *(undefined4 *)(param_1 + 0xf) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0xf) = 1;
            }
          }
          iVar3 = iVar3 * 8;
          if (ABS(*(double *)(*(int *)((int)param_1 + 0x34) + iVar3)) <
              (double)CONCAT44(uStack_14,local_18)) {
            iVar4 = *(int *)((int)param_1 + 0x5c);
            if ((double)CONCAT44(uStack_14,local_18) <=
                ABS(*(double *)(*(int *)((int)param_1 + 0x2c) + iVar3))) goto LAB_00544bc7;
LAB_00544c28:
            local_24 = 0;
            iVar3 = *(int *)(*(int *)((int)param_1 + 0x44) + *(int *)((int)param_1 + 0x5c) * 4);
            iVar4 = *(int *)((int)param_1 + 0x2c);
            *(undefined4 *)(iVar4 + iVar3 * 8) = 0;
            *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = 0;
            puVar1 = (undefined4 *)(*(int *)((int)param_1 + 0x34) + iVar3 * 8);
            if (*(double *)(*(int *)((int)param_1 + 0x34) + iVar3 * 8) < 0.0) {
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            iVar3 = *(int *)((int)param_1 + 0x5c) + 1;
            *(int *)((int)param_1 + 0x5c) = iVar3;
            if (*(int *)((int)param_1 + 0x4c) <= iVar3) goto LAB_00544c6e;
            goto LAB_00544862;
          }
          if (0.0 <= *(double *)(*(int *)((int)param_1 + 0x34) + iVar3)) goto LAB_00544c28;
          iVar4 = FUN_00544d70((int)param_1);
        } while (iVar4 == 0);
        iVar4 = *(int *)(param_1 + 6);
        *(undefined4 *)(iVar3 + iVar4) = 0;
        ((undefined4 *)(iVar3 + iVar4))[1] = 0x3ff00000;
        FUN_00544010((int)param_1);
        iVar4 = 0;
        if (0 < *(int *)((int)param_1 + 0x54)) {
          do {
            iVar4 = iVar4 + 1;
            iVar6 = *(int *)(*(int *)((int)param_1 + 0x44) + -4 + iVar4 * 4);
            iVar7 = *(int *)(param_1 + 7);
            *(undefined4 *)(iVar7 + iVar6 * 8) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = 0;
          } while (iVar4 < *(int *)((int)param_1 + 0x54));
        }
        if (param_1[3] * *(double *)(*(int *)(param_1 + 7) + iVar3) <=
            -*(double *)(iVar3 + *(int *)((int)param_1 + 0x34))) {
          iVar6 = -1;
          local_20 = 1e+101;
        }
        else {
          iVar6 = *(int *)((int)param_1 + 0x5c);
          local_20 = -(*(double *)(iVar3 + *(int *)((int)param_1 + 0x34)) /
                      *(double *)(*(int *)(param_1 + 7) + iVar3));
        }
        iVar3 = *(int *)((int)param_1 + 0x54);
        iVar4 = iVar6;
        if (0 < iVar3) {
          piVar5 = *(int **)((int)param_1 + 0x44);
          local_10 = -(double)CONCAT44(uStack_14,local_18);
          iVar7 = 0;
          do {
            iVar4 = iVar7;
            iVar7 = *piVar5;
            dVar2 = *(double *)(*(int *)(param_1 + 6) + iVar7 * 8);
            if (dVar2 < local_10) {
              dVar2 = -(*(double *)(*(int *)((int)param_1 + 0x2c) + iVar7 * 8) / dVar2);
              if ((ABS(dVar2) < (double)CONCAT44(uStack_14,local_18)) &&
                 (*(double *)(*(int *)((int)param_1 + 0x2c) + iVar7 * 8) <
                  (double)CONCAT44(uStack_14,local_18))) goto LAB_00544ab6;
              if (dVar2 < local_20 + (double)CONCAT44(uStack_14,local_18)) {
                iVar6 = iVar4;
                local_20 = dVar2;
              }
            }
            iVar7 = iVar4 + 1;
            piVar5 = piVar5 + 1;
            iVar4 = iVar6;
          } while (iVar7 < iVar3);
        }
        if (iVar3 < *(int *)((int)param_1 + 0x5c)) {
          piVar5 = (int *)(*(int *)((int)param_1 + 0x44) + iVar3 * 4);
          do {
            dVar2 = *(double *)(*(int *)(param_1 + 7) + *piVar5 * 8);
            if ((dVar2 < -*param_1) &&
               (dVar2 = -(*(double *)(*(int *)((int)param_1 + 0x34) + *piVar5 * 8) / dVar2),
               dVar2 < local_20 - (double)CONCAT44(uStack_14,local_18))) {
              iVar4 = iVar3;
              local_20 = dVar2;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar3 < *(int *)((int)param_1 + 0x5c));
        }
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        dVar2 = local_20;
        if (iVar4 < 0) {
          return 0;
        }
LAB_00544ab6:
        local_20 = dVar2;
      } while (param_1[3] < local_20);
      if (*param_1 <= local_20) {
        local_28 = 0;
        break;
      }
      local_28 = local_28 + 1;
    } while ((*(int *)((int)param_1 + 0x4c) >> 1) + 2 < local_28);
    local_24 = 1;
    FUN_00544cc0(param_1,local_20);
    if (iVar4 < *(int *)((int)param_1 + 0x54)) {
      iVar3 = *(int *)((int)param_1 + 0x2c);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
      *(undefined4 *)(iVar3 + iVar6 * 8) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = 0;
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      FUN_00544c90(param_1,iVar3,iVar4);
      FUN_005445f0(param_1,iVar4);
    }
    else if (iVar4 < *(int *)((int)param_1 + 0x5c)) {
      if (*param_1 < local_20) {
        FUN_005447c0(param_1);
      }
      iVar3 = *(int *)((int)param_1 + 0x34);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
      *(undefined4 *)(iVar3 + iVar6 * 8) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = 0;
      FUN_00544c90(param_1,*(int *)((int)param_1 + 0x54),iVar4);
      *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + 1;
      FUN_00544630((int)param_1);
    }
    else {
LAB_00544bc7:
      FUN_005447c0(param_1);
      iVar3 = *(int *)((int)param_1 + 0x34);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
      *(undefined4 *)(iVar3 + iVar6 * 8) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = 0;
      puVar1 = (undefined4 *)(*(int *)((int)param_1 + 0x2c) + iVar6 * 8);
      if (*(double *)(*(int *)((int)param_1 + 0x2c) + iVar6 * 8) < 0.0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      FUN_00544c90(param_1,*(int *)((int)param_1 + 0x54),iVar4);
      iVar3 = *(int *)((int)param_1 + 0x5c) + 1;
      *(int *)((int)param_1 + 0x5c) = iVar3;
      *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + 1;
      if (iVar3 < *(int *)((int)param_1 + 0x4c)) {
        FUN_00544630((int)param_1);
      }
      else {
LAB_00544c6e:
        local_30 = 0;
      }
    }
  } while( true );
}


