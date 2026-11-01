
/* ==== FUN_0051ede0 @ 0051ede0 ==== 
 * signature: undefined __fastcall FUN_0051ede0(int param_1)
 * body: 0051ede0-0051efd7
 */

void __fastcall FUN_0051ede0(int param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  double *pdVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  uint *local_60;
  int local_5c;
  ushort local_50;
  ushort local_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined8 local_48;
  double local_40;
  float local_30;
  float local_2c;
  undefined1 local_24 [16];
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00574000;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005018c0(local_24,0x400,0x10,0);
  local_50 = 0;
  local_4e = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  local_c = 1;
  uVar8 = (uint)*(ushort *)(param_1 + 2);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    piVar7 = *(int **)(*(int *)(param_1 + 4) + uVar8 * 4);
    local_5c = (int)(short)piVar7[3];
    iVar3 = *piVar7;
    if (-1 < local_5c + -1) {
      local_60 = (uint *)(piVar7 + 5);
      do {
        iVar9 = 3;
        puVar11 = local_60;
        do {
          pfVar10 = (float *)((int)piVar7 + (*puVar11 & 0xffff) * 0x10 + iVar3);
          iVar5 = FUN_00501940(local_24,(byte *)pfVar10);
          if (iVar5 == 0) {
            FUN_005019c0(local_24,(byte *)pfVar10,pfVar10);
            pdVar6 = operator_new(0x20);
            if (pdVar6 == (double *)0x0) {
              pdVar6 = (double *)0x0;
            }
            else {
              fVar1 = *pfVar10;
              local_30 = pfVar10[1];
              local_2c = pfVar10[2];
              dVar2 = (double)local_30;
              local_48._0_4_ = SUB84(dVar2,0);
              local_48._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
              local_40 = (double)local_2c;
              *(undefined4 *)(pdVar6 + 1) = (undefined4)local_48;
              *pdVar6 = (double)fVar1;
              *(undefined4 *)((int)pdVar6 + 0xc) = local_48._4_4_;
              pdVar6[2] = local_40;
              local_48 = dVar2;
            }
            if (local_50 <= local_4e) {
              FUN_004f6060(&local_50);
            }
            *(double **)(CONCAT22(uStack_4a,uStack_4c) + (uint)local_4e * 4) = pdVar6;
            local_4e = local_4e + 1;
          }
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        local_60 = local_60 + 4;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
  }
  piVar7 = FUN_00511cc0((int)&local_50);
  *(int **)(param_1 + 8) = piVar7;
  uVar8 = (uint)local_4e;
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    FUN_0054b339(*(LPVOID *)(CONCAT22(uStack_4a,uStack_4c) + uVar8 * 4));
  }
  puVar4 = (undefined8 *)CONCAT22(uStack_4a,uStack_4c);
  if (puVar4 != &local_48) {
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00559d4e(puVar4);
      uStack_4c = 0;
      uStack_4a = 0;
    }
    local_50 = 0;
  }
  local_4e = 0;
  local_c = 0xffffffff;
  FUN_005018f0((int)local_24);
  ExceptionList = local_14;
  return;
}


