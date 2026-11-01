
/* ==== FUN_005271c0 @ 005271c0 ==== 
 * signature: undefined __cdecl FUN_005271c0(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 * param_6)
 * body: 005271c0-0052739e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_005271c0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  double dVar1;
  undefined8 uVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  undefined4 *puVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  double local_10;
  
  local_28 = (undefined4 *)(param_5 + param_3 * 8);
  local_18 = -1;
  if (param_4 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    uVar2 = 0xbff0000000000000;
  }
  *(undefined8 *)(local_28 + -2) = uVar2;
  pdVar8 = (double *)(local_28 + -4);
  if (param_2 != 0) {
    local_24 = (int *)(param_1 + (param_2 + -1) * 4);
    iVar7 = param_2 + -1;
    local_14 = local_28;
    do {
      *(undefined4 *)pdVar8 = 0;
      *(undefined4 *)((int)pdVar8 + 4) = 0;
      pdVar4 = (double *)(*local_24 + 8 + iVar7 * 8);
      if (param_2 < param_3) {
        iVar6 = param_3 - param_2;
        pdVar3 = pdVar8;
        do {
          pdVar3 = pdVar3 + 1;
          dVar1 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          iVar6 = iVar6 + -1;
          *pdVar8 = *pdVar8 - *pdVar3 * dVar1;
        } while (iVar6 != 0);
      }
      local_10 = *(double *)(*local_24 + iVar7 * 8);
      dVar1 = local_10;
      if (local_10 < 0.0) {
        dVar1 = -local_10;
      }
      if (dVar1 <= _DAT_0074c4d0) {
        local_20 = 0;
        local_1c = param_2;
        fVar11 = FUN_0052a0c0(*pdVar8,local_10,(double)CONCAT44(DAT_0074c4cc,DAT_0074c4c8),&local_20
                             );
        *pdVar8 = (double)fVar11;
        if (local_20 != 0) {
          if (param_4 == 0) {
            dVar1 = 1.0;
          }
          else {
            dVar1 = -1.0;
          }
          *pdVar8 = dVar1;
          puVar9 = local_28 + -2;
          local_18 = iVar7;
          if (puVar9 < local_14) {
            uVar5 = (uint)((int)local_14 + (7 - (int)puVar9)) >> 2 & 0x3ffffffe;
            for (; param_2 = local_1c, uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
        }
      }
      else {
        *pdVar8 = *pdVar8 / local_10;
      }
      local_28 = local_28 + -2;
      pdVar8 = pdVar8 + -1;
      param_2 = param_2 + -1;
      local_24 = local_24 + -1;
      bVar10 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar10);
    if (local_18 != -1) {
      DAT_0074c840 = DAT_0074c840 + 1;
      *param_6 = 1;
      local_1c = param_2;
      if (3 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_backnormal__zero_diagonal_at_c_005c1918);
      }
      FUN_00526a20();
    }
  }
  return;
}


