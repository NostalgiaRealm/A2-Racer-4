
/* ==== FUN_00425fb0 @ 00425fb0 ==== 
 * signature: undefined1 __thiscall FUN_00425fb0(void * this, void * param_1)
 * body: 00425fb0-00426229;0042622d-00426262
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042622a-0042622c
 */

undefined1 __thiscall FUN_00425fb0(void *this,void *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined1 local_1b1;
  int local_1b0;
  undefined1 local_1ac [4];
  char *local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  int local_19c;
  int *local_198;
  int local_194;
  CHAR local_190 [4];
  byte local_18c [64];
  char local_14c [64];
  byte local_10c [256];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a0eb;
  local_c = ExceptionList;
  local_1b1 = 0;
  ExceptionList = &local_c;
  local_198 = this;
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Damage_Settings_00595e60);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c3b60(pcVar4);
  local_194 = FUN_004c3cd0(PTR_s_Damageable_Cars_00595b78,PTR_s_count_00595b74);
  local_1b0 = 0;
  if (local_194 < 1) {
    local_1b1 = 0;
  }
  else {
    do {
      FUN_005587a3(local_190,&DAT_00595e74);
      FUN_004c3d10(PTR_s_Damageable_Cars_00595b78,local_190,(LPSTR)local_10c,0x100);
      iVar3 = FUN_004c3d60(local_10c,(uint *)0x0);
      local_19c = iVar3;
      if (iVar3 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____Damageable_car_entry_ha_00595e9c);
      }
      FUN_004c3f10(0,(char *)local_18c,0x40);
      uVar7 = 0xffffffff;
      pbVar10 = local_18c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
      uVar7 = FUN_0040fc80(param_1,0,*(uint *)((int)param_1 + 8),local_18c,~uVar7 - 1);
      if (uVar7 == 0) {
        iVar5 = FUN_004c3ec0(1);
        *(int *)((int)this + 0xe20) = iVar5;
        iVar5 = FUN_004c3ec0(2);
        iVar9 = 3;
        *(int *)((int)this + 0xe24) = iVar5;
        if (3 < iVar3) {
          do {
            FUN_004c3f10(iVar9,local_14c,0x40);
            local_1ac[0] = local_1b1;
            FUN_004028f0(local_1ac,'\0');
            uVar7 = 0xffffffff;
            pcVar4 = local_14c;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7 - 1;
            uVar6 = FUN_00402a00(local_1ac,uVar7,'\x01');
            if ((char)uVar6 != '\0') {
              pcVar4 = local_14c;
              pcVar11 = local_1a8;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar11 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar11 = pcVar11 + 1;
              }
              local_1a8[uVar7] = '\0';
              this = local_198;
              local_1a4 = uVar7;
            }
            local_4 = 0;
            FUN_00425c30(this,(int)local_1ac,iVar9 + 2);
            local_4 = 0xffffffff;
            if (local_1a8 != (char *)0x0) {
              cVar2 = local_1a8[-1];
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339(local_1a8 + -1);
              }
              else {
                local_1a8[-1] = cVar2 + -1;
              }
            }
            local_1a8 = (char *)0x0;
            local_1a4 = 0;
            local_1a0 = 0;
            FUN_004c3d60(local_10c,(uint *)0x0);
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_19c);
        }
        if (*(int *)this <
            *(int *)(DAT_0073b168 +
                    *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0xe1c) * 0xa9 + 4) * 9)) {
          FUN_004256c0(this);
          *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0xe1c) * 0xa9 + 8) = *(int *)this;
        }
        local_1b1 = 1;
      }
      local_1b0 = local_1b0 + 1;
    } while (local_1b0 < local_194);
  }
  ExceptionList = local_c;
  return local_1b1;
}


