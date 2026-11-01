
/* ==== FUN_0046ffa0 @ 0046ffa0 ==== 
 * signature: undefined __register FUN_0046ffa0(int * param_1, int param_2, int * param_3)
 * body: 0046ffa0-00470106;00470120-0047013e
 */

void FUN_0046ffa0(int *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  BSTR pOVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  uint *puVar6;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2b8;
  code *pcStack_2b4;
  undefined1 *puStack_2b0;
  int local_2a0 [2];
  int *local_298;
  int local_294;
  undefined1 local_290 [384];
  uint auStack_110 [64];
  int local_10;
  int local_c;
  int *local_8;
  uint *puVar7;
  
  puStack_2b0 = (undefined1 *)0x46ffbf;
  local_8 = param_1;
  FUN_0046fc60(param_1,param_2,local_2a0);
  if (0xffff < local_2a0[0]) {
    local_10 = 0;
    uVar5 = 0;
    pcStack_2b4 = thunk_FUN_00403408;
    uStack_2b8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2b8;
    local_294 = param_3[2];
    local_298 = local_8;
    iVar8 = 0;
    puStack_2b0 = &stack0xfffffffc;
    if (local_294 != 0) {
      puVar9 = local_290;
      local_c = 0;
      puVar6 = (uint *)(*param_3 + local_294 * 0x10);
      puStack_2b0 = &stack0xfffffffc;
      do {
        puVar7 = puVar6 + -4;
        uVar2 = *puVar7;
        uVar3 = uVar2 & 0xffff;
        if ((uVar2 & 0xfff) == 8) {
          *puVar9 = 0;
          iVar8 = local_10;
          puVar1 = auStack_110 + local_10 * 2;
          *puVar1 = 0;
          if ((uVar2 & 0x4000) == 0) {
            FUN_0040492c((LPCWSTR)puVar6[-2],(int *)puVar1);
            auStack_110[iVar8 * 2 + 1] = 0;
            *(uint *)(puVar9 + 4) = *puVar1;
            uVar5 = extraout_ECX_00;
            iVar8 = extraout_EDX_00;
          }
          else {
            FUN_0040492c(*(LPCWSTR *)puVar6[-2],(int *)puVar1);
            auStack_110[iVar8 * 2 + 1] = puVar6[-2];
            *(uint **)(puVar9 + 4) = puVar1;
            uVar5 = extraout_ECX;
            iVar8 = extraout_EDX;
          }
          local_10 = local_10 + 1;
        }
        else if (uVar3 == 4) {
          *puVar9 = 1;
          *(uint *)(puVar9 + 4) = puVar6[-2];
          iVar8 = 0;
        }
        else {
          iVar8 = uVar3 - 8;
          if (uVar3 - 5 < 3) {
            *puVar9 = 2;
            *(uint *)(puVar9 + 4) = puVar6[-2];
            *(uint *)(puVar9 + 8) = puVar6[-1];
          }
          else {
            iVar8 = uVar3 - 9;
            if (iVar8 == 0) {
              *puVar9 = 0;
              *(uint **)(puVar9 + 4) = puVar7;
            }
            else {
              *puVar9 = 0;
              if ((uVar2 & 0x2000) == 0) {
                *(uint *)(puVar9 + 4) = puVar6[-2];
              }
              else {
                *(uint **)(puVar9 + 4) = puVar7;
              }
            }
          }
        }
        puVar9 = puVar9 + 0xc;
        local_c = local_c + 1;
        puVar6 = puVar7;
      } while (local_c != local_294);
    }
    FUN_0046ff5c(local_2a0,iVar8,uVar5);
    iVar8 = local_10;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      if (auStack_110[iVar8 * 2 + 1] != 0) {
        pOVar4 = FUN_00404950((LPCSTR)auStack_110[iVar8 * 2]);
        *(BSTR *)auStack_110[iVar8 * 2 + 1] = pOVar4;
      }
    }
    *in_FS_OFFSET = uStack_2b8;
    iVar8 = local_10;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      puStack_2b0 = (undefined1 *)0x470134;
      FUN_00403c5c((int *)(auStack_110 + iVar8 * 2));
    }
  }
  return;
}


