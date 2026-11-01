
/* ==== FUN_00447a14 @ 00447a14 ==== 
 * signature: undefined __register FUN_00447a14(int * param_1)
 * body: 00447a14-00447d5e
 */

void FUN_00447a14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((*(char *)((int)param_1 + 0x219) != '\0') && (*(int *)(DAT_004ac7d4 + 0x38) != 0)) {
    local_24 = 0;
    if (*(char *)((int)param_1 + 0x219) == '\x02') {
      iVar1 = FUN_004474c4(*(int **)(DAT_004ac7d4 + 0x38));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if ((*(char *)((int)param_1 + 0x219) == '\x03') && (*(int *)(DAT_004ac7d8 + 0x5c) != 0)) {
      iVar1 = FUN_004474c4(*(int **)(DAT_004ac7d8 + 0x5c));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if (*(char *)((int)param_1 + 0x219) == '\x01') {
      iVar1 = FUN_0044b13c(DAT_004ac7d8,0);
      local_24 = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_004474c4(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    local_14 = FUN_0044b150(DAT_004ac7d8);
    if (-1 < local_14 + -1) {
      iVar9 = 0;
      do {
        iVar2 = FUN_0044b13c(DAT_004ac7d8,iVar9);
        if ((*(int *)(iVar2 + 4) == local_24) && (local_24 != iVar1)) {
          iVar2 = FUN_0044b150(DAT_004ac7d8);
          if (-1 < iVar2 + -1) {
            local_1c = 0;
            do {
              iVar3 = FUN_0044b13c(DAT_004ac7d8,local_1c);
              if (*(int *)(iVar3 + 4) == iVar1) {
                if ((char)param_1[0x86] == '\x04') {
                  iVar3 = param_1[0xf];
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar4 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar5 = FUN_0044ae8c();
                  iVar6 = iVar5 - iVar3 >> 1;
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + (uint)((iVar5 - iVar3 & 1U) != 0);
                  }
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  puVar7 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar3 = FUN_0044aed0();
                  iVar5 = iVar3 - param_1[0xe] >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar3 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar7 + iVar5,iVar4 + iVar6);
                }
                else if ((char)param_1[0x86] == '\x06') {
                  iVar3 = param_1[0xf];
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar4 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar5 = FUN_0044ae8c();
                  iVar6 = iVar5 - iVar3 >> 1;
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + (uint)((iVar5 - iVar3 & 1U) != 0);
                  }
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  puVar7 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar3 = FUN_0044aed0();
                  iVar5 = iVar3 - param_1[0xe] >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar3 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar7 + iVar5,iVar4 + iVar6);
                }
                else {
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  puVar7 = FUN_0044ae6c();
                  iVar3 = param_1[0xc];
                  FUN_0044b13c(DAT_004ac7d8,local_1c);
                  puVar8 = FUN_0044ae6c();
                  puVar7 = puVar7 + (iVar3 - (int)puVar8);
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  puVar8 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar3 = FUN_0044aed0();
                  if ((int)(puVar8 + iVar3) < (int)(puVar7 + param_1[0xe])) {
                    FUN_0044b13c(DAT_004ac7d8,iVar9);
                    puVar7 = FUN_0044ae6c();
                    FUN_0044b13c(DAT_004ac7d8,iVar9);
                    iVar3 = FUN_0044aed0();
                    puVar7 = puVar7 + (iVar3 - param_1[0xe]);
                  }
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  local_18 = FUN_0044aeb0();
                  local_18 = local_18 + param_1[0xd];
                  FUN_0044b13c(DAT_004ac7d8,local_1c);
                  iVar3 = FUN_0044aeb0();
                  local_18 = local_18 - iVar3;
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar3 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,iVar9);
                  iVar4 = FUN_0044ae8c();
                  if (iVar3 + iVar4 < local_18 + param_1[0xf]) {
                    FUN_0044b13c(DAT_004ac7d8,iVar9);
                    iVar3 = FUN_0044aeb0();
                    FUN_0044b13c(DAT_004ac7d8,iVar9);
                    iVar4 = FUN_0044ae8c();
                    local_18 = (iVar3 + iVar4) - param_1[0xf];
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar7,local_18,param_1[0xf],param_1[0xe]);
                }
              }
              local_1c = local_1c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        iVar9 = iVar9 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}


