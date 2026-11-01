
/* ==== FUN_004c3d60 @ 004c3d60 ==== 
 * signature: int __cdecl FUN_004c3d60(byte * param_1, uint * param_2)
 * body: 004c3d60-004c3e2a;004c3e2e-004c3e68;004c3e6c-004c3ebc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3e2b-004c3e2d 004c3e69-004c3e6b
 */

int __cdecl FUN_004c3d60(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort local_ce;
  uint local_cc;
  byte local_c8 [200];
  
  iVar5 = 0;
  iVar7 = 0;
  local_cc = DAT_005b36c0;
  if (param_2 == (uint *)0x0) {
    param_2 = &local_cc;
  }
  bVar1 = *param_1;
  if (bVar1 != 0) {
    pbVar6 = (byte *)&DAT_0073b8d0;
    do {
      local_ce = (ushort)bVar1;
      puVar2 = FUN_00558f30(param_2,(char *)&local_ce);
      if (puVar2 == (uint *)0x0) {
        local_c8[iVar7] = *param_1;
        iVar7 = iVar7 + 1;
        if (0xc6 < iVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__get_ini_arguments_online___s__d_005b3620);
        }
      }
      else {
        uVar3 = 0xffffffff;
        local_c8[iVar7] = 0;
        pbVar8 = local_c8;
        do {
          pbVar9 = pbVar8;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pbVar9 = pbVar8 + 1;
          bVar1 = *pbVar8;
          pbVar8 = pbVar9;
        } while (bVar1 != 0);
        uVar3 = ~uVar3;
        pbVar8 = pbVar9 + -uVar3;
        pbVar9 = pbVar6;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar9 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        }
        iVar5 = iVar5 + 1;
        if (0x7406f0 < (int)(pbVar6 + 200)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__get_ini_arguments_online___s__d_005b3674);
        }
        iVar7 = 0;
        pbVar6 = pbVar6 + 200;
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
  }
  local_c8[iVar7] = 0;
  uVar3 = 0xffffffff;
  pbVar6 = local_c8;
  do {
    pbVar8 = pbVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar8 = pbVar6 + 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar8;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar6 = pbVar8 + -uVar3;
  pbVar8 = (byte *)(&DAT_0073b8d0 + iVar5 * 0x32);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar8 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  }
  DAT_00740820 = iVar5 + 1;
  return iVar5 + 1;
}


