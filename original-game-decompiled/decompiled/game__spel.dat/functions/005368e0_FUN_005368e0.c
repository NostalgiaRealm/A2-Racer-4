
/* ==== FUN_005368e0 @ 005368e0 ==== 
 * signature: undefined __cdecl FUN_005368e0(int * param_1, undefined4 * param_2)
 * body: 005368e0-00536af0
 */

void __cdecl FUN_005368e0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_10;
  
  local_10 = 0;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_all__begin_005c6284);
  }
  piVar8 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      param_1 = (int *)piVar8[0xc];
      if (param_1 == (int *)0x0) break;
      if (piVar8[6] == 0) {
        if ((piVar8[0x14] & 0x1000000U) == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_all__f_d_without_n_005c625c);
          FUN_0051e8e0(5,piVar8);
        }
        piVar7 = (int *)piVar8[8];
        piVar1 = *(int **)(piVar8[0xf] + 4);
        if (piVar7 == piVar8) {
          DAT_0074cc30 = DAT_0074cc30 + 1;
          iVar5 = piVar8[0xd];
          iVar2 = *(int *)(iVar5 + 4);
          piVar7 = (int *)(iVar5 + 4);
          if (iVar5 != 0) {
            iVar5 = *piVar7;
            while (iVar5 != 0) {
              piVar7 = piVar7 + 1;
              if (iVar5 != iVar2) {
                *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) | 4;
              }
              iVar5 = *piVar7;
            }
          }
          piVar1[8] = 0;
          FUN_00537280(piVar8,piVar1,(double *)0x0,(double *)0x0,(int *)0x1);
        }
        else {
          iVar5 = 0;
          piVar6 = piVar8;
          for (; piVar7 != (int *)0x0; piVar7 = (int *)(-(uint)(piVar7 != piVar8) & uVar3)) {
            uVar3 = piVar7[8];
            if ((piVar7[0x14] & 0x2000400U) != 0) {
              FUN_00518aa0(piVar7);
            }
            piVar7[0x14] = piVar7[0x14] | 0x2000000;
            if (piVar7[6] == 0) {
              iVar5 = iVar5 + 1;
              piVar6 = piVar7;
            }
            else {
              piVar6[8] = piVar7[8];
              piVar7[8] = 0;
            }
          }
          do {
            if ((param_1[0x14] & 0x2000000U) == 0) break;
            param_1 = (int *)param_1[0xc];
          } while (param_1 != (int *)0x0);
          piVar1[8] = 0;
          FUN_005366f0(piVar8,piVar1);
          uVar3 = piVar1[0x14];
          uVar4 = (uVar3 & 0x1ff) + iVar5;
          if ((int)uVar4 < 0x200) {
            piVar1[0x14] = (uVar3 ^ uVar4) & 0x1ff ^ uVar3;
          }
          else {
            piVar1[0x14] = uVar3 | 0x1ff;
          }
          DAT_0074c8f8 = DAT_0074c8f8 + 1;
          DAT_0074c8f0 = DAT_0074c8f0 + iVar5;
          if (DAT_0074c8e8 < iVar5) {
            DAT_0074c8e8 = iVar5;
          }
        }
        local_10 = local_10 + 1;
      }
      piVar8 = param_1;
    } while (param_1 != (int *)0x0);
    if (local_10 != 0) {
      *param_2 = 1;
    }
  }
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_all__merged__d_sam_005c6210);
  }
  return;
}


