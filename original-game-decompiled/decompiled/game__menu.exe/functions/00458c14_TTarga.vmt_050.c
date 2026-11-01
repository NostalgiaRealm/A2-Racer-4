
/* ==== TTarga.vmt_050 @ 00458c14 ==== 
 * signature: undefined __register TTarga.vmt_050(int * param_1, int * param_2)
 * body: 00458c14-00458fc5;00458fcd-00459034
 * note: Name source: Delphi VMT slot
 */

/* WARNING: Removing unreachable block (ram,0x00458f19) */
/* WARNING: Removing unreachable block (ram,0x00458f52) */
/* WARNING: Removing unreachable block (ram,0x00458cf3) */
/* WARNING: Removing unreachable block (ram,0x00458e7f) */
/* Name source: Delphi VMT slot */

void TTarga_vmt_050(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  undefined1 *puVar9;
  undefined *puStack_174;
  code *pcStack_170;
  char *pcStack_168;
  code *pcStack_164;
  code *pcStack_160;
  int local_150;
  int local_14c [5];
  byte local_138 [256];
  int local_38;
  int local_34;
  byte local_2e;
  char local_2d;
  byte local_2c;
  ushort local_22;
  ushort local_20;
  byte local_1e;
  byte local_1d;
  byte *local_1c;
  char local_17;
  ushort local_16;
  uint local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  pcStack_160 = (code *)&stack0xfffffffc;
  local_14c[0] = 0;
  local_150 = 0;
  local_14c[2] = 0;
  local_14c[1] = 0;
  local_14c[4] = 0;
  local_14c[3] = 0;
  local_34 = 0;
  local_38 = 0;
  pcStack_164 = thunk_FUN_004036bc;
  pcStack_168 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_168;
  local_8 = param_1;
  FUN_00456634(param_1,param_2,0);
  (**(code **)(*param_2 + 4))(param_2,&local_2e,0x12);
  if (local_2d != '\0') {
    FUN_00402ee4(*local_8,local_138);
    FUN_00403e80(&local_38,local_138);
    pcStack_170 = (code *)0x45904c;
    puStack_174 = &DAT_00459064;
    FUN_00403f9c(&local_34,4);
    FUN_00403c40(local_34);
  }
  if (local_2d != '\x01') {
    local_17 = (local_2c & 8) != 0;
    local_2c = local_2c & 0xf7;
    if (local_2c != 2) {
      FUN_00402ee4(*local_8,local_138);
      FUN_00403e80(local_14c + 3,local_138);
      pcStack_170 = (code *)0x45904c;
      puStack_174 = &DAT_00459064;
      FUN_00403f9c(local_14c + 4,4);
      FUN_00403c40(local_14c[4]);
    }
    if (local_2c == 2) {
      if ((local_1e != 0x18) && (local_1e != 0x20)) {
        FUN_00402ee4(*local_8,local_138);
        FUN_00403e80(local_14c + 1,local_138);
        pcStack_170 = (code *)0x45904c;
        puStack_174 = &DAT_00459064;
        pcStack_168 = "Not a 24 or 32 bit Targa file";
        FUN_00403f9c(local_14c + 2,4);
        FUN_00403c40(local_14c[2]);
      }
      if ((local_1e == 0x18) || (local_1e == 0x20)) {
        pcStack_170 = (code *)0x458df0;
        FUN_00457194(local_8,(uint)local_22,(uint)local_20,(uint)local_1e);
        if ((local_1d & 0x20) == 0) {
          uVar1 = local_20 - 1;
          if (SBORROW4((uint)local_20,1)) {
            uVar1 = thunk_FUN_00402808(uVar1);
          }
          local_c = 0xffffffff;
          local_10 = uVar1;
        }
        else {
          local_10 = 0;
          local_c = 1;
        }
        if (local_2e == 0) {
          FUN_00403c5c(local_8 + 0x132);
        }
        else {
          FUN_00404210(local_8 + 0x132,(uint)local_2e);
          uVar1 = FUN_004040ac(local_8 + 0x132);
          iVar7 = 0;
          if (*(int *)(uVar1 - 4) == 0) {
            uVar1 = thunk_FUN_00402808(uVar1);
            iVar7 = extraout_EDX;
          }
          (**(code **)(*param_2 + 4))(param_2,uVar1 + iVar7,local_2e);
        }
        uVar1 = (uint)(local_1e >> 3) * (uint)local_22;
        if (0xffff < uVar1) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        local_16 = (ushort)uVar1;
        if (local_8[0x24] < (int)(uVar1 & 0xffff)) {
          FUN_00402ee4(*local_8,local_138);
          FUN_00403e80(&local_150,local_138);
          pcStack_170 = (code *)0x45904c;
          puStack_174 = &DAT_00459064;
          pcStack_168 = "Targa image doesn\'t fit in the DIB";
          FUN_00403f9c(local_14c,4);
          FUN_00403c40(local_14c[0]);
        }
        local_14 = local_10;
        if (local_17 != '\0') {
          local_1c = (byte *)FUN_0040816c((uint)local_16 * 2);
          pcStack_170 = thunk_FUN_004036bc;
          puStack_174 = (undefined *)*in_FS_OFFSET;
          *in_FS_OFFSET = &puStack_174;
          uVar1 = local_20 - 1;
          if (SBORROW4((uint)local_20,1)) {
            uVar1 = thunk_FUN_00402808(uVar1);
          }
          if (-1 < (int)uVar1) {
            iVar7 = uVar1 + 1;
            do {
              iVar2 = (**(code **)(*param_2 + 4))(param_2,local_1c);
              puVar9 = &stack0xfffffffc;
              pbVar3 = (byte *)FUN_00456950(local_8,local_14);
              iVar4 = FUN_00458a04(local_1c,pbVar3,(uint)local_16,(int)puVar9);
              iVar5 = FUN_00412664(param_2);
              uVar1 = iVar5 - iVar2;
              if (SBORROW4(iVar5,iVar2)) {
                uVar1 = thunk_FUN_00402808(uVar1);
              }
              iVar2 = iVar4 + uVar1;
              if (SCARRY4(iVar4,uVar1)) {
                thunk_FUN_00402808(uVar1);
                iVar2 = extraout_EDX_00;
              }
              FUN_00412674(param_2,iVar2);
              bVar8 = SCARRY4(local_14,local_c);
              local_14 = local_14 + local_c;
              if (bVar8) {
                thunk_FUN_00402808(local_c);
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *in_FS_OFFSET = puStack_174;
          pcStack_170 = (code *)0x458fc5;
          FUN_00402794((int)local_1c);
          return;
        }
        uVar1 = local_20 - 1;
        if (SBORROW4((uint)local_20,1)) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        if (-1 < (int)uVar1) {
          iVar7 = uVar1 + 1;
          do {
            uVar6 = FUN_00456950(local_8,local_14);
            (**(code **)(*param_2 + 4))(param_2,uVar6,local_16);
            bVar8 = SCARRY4(local_14,local_c);
            local_14 = local_14 + local_c;
            if (bVar8) {
              thunk_FUN_00402808(local_c);
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
  }
  *in_FS_OFFSET = pcStack_168;
  pcStack_160 = FUN_0045903c;
  pcStack_164 = (code *)0x459027;
  FUN_00403c80(&local_150,6);
  pcStack_164 = (code *)0x459034;
  FUN_00403c80(&local_38,2);
  return;
}


