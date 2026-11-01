
/* ==== FUN_004220d0 @ 004220d0 ==== 
 * signature: int __cdecl FUN_004220d0(int param_1, int param_2, int param_3, int param_4)
 * body: 004220d0-00422111;00422115-00422593
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00422112-00422114
 */

int __cdecl FUN_004220d0(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float local_54;
  int iStack_48;
  uint uStack_44;
  int local_40;
  int iStack_3c;
  
  local_40 = -1;
  local_54 = 3.4e+38;
  if (((param_2 != 1) && (param_2 != 0)) && (param_2 != -1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d___Illegal_side__d__005952f4);
  }
  iVar9 = param_1 * 0x50 + 8 + DAT_00715eb8;
  fVar2 = *(float *)(param_1 * 0x50 + 8 + DAT_00715eb8);
  fVar3 = *(float *)(iVar9 + 4);
  fVar4 = *(float *)(iVar9 + 8);
  FUN_004c3fa0((byte *)s_Chunk____d__Position_____f__f__f_00595310);
  if ((param_2 == 1) || (param_2 == -1)) {
    iVar9 = param_3 * 0x994;
    FUN_004c3fa0((byte *)s__d_waypoints_on_the_RIGHT__00595334);
    if (-param_4 < param_4) {
      uStack_44 = -param_4 + param_3;
      iStack_3c = param_4 * 2;
      do {
        FUN_004a71e0(uStack_44);
        iVar11 = 0;
        if (0 < *(int *)(iVar9 + 0xf8 + DAT_00715f00)) {
          iStack_48 = iVar9 + 0x164;
          do {
            FUN_004c3fa0((byte *)s_Checking_index__d__00595350);
            iVar5 = *(int *)(iStack_48 + DAT_00715f00);
            FUN_004c3fa0((byte *)s_Waypoint__d_found__00595364);
            pfVar1 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            FUN_004c3fa0((byte *)s_WP_Position_____f__f__f___00595378);
            fVar6 = fVar6 - fVar2;
            fVar7 = fVar7 - fVar3;
            fVar8 = fVar8 - fVar4;
            FUN_004c3fa0((byte *)s_Difference_____f__f__f___00595394);
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
            FUN_004c3fa0((byte *)s_Distance____f__005953b0);
            FUN_004c3fa0((byte *)s_Closest____f__005953c0);
            if (fVar6 < local_54) {
              FUN_004c3fa0((byte *)s_Setting_closest_wp_index_to__d__a_005953d0);
              local_54 = fVar6;
              local_40 = iVar5;
            }
            iStack_48 = iStack_48 + 4;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(iVar9 + 0xf8 + DAT_00715f00));
        }
        uStack_44 = uStack_44 + 1;
        iStack_3c = iStack_3c + -1;
      } while (iStack_3c != 0);
    }
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar9 = param_3 * 0x994;
    FUN_004c3fa0((byte *)s__d_waypoints_on_the_LEFT__00595408);
    if (-param_4 < param_4) {
      uVar10 = param_3 + -param_4;
      iStack_48 = param_4 * 2;
      do {
        FUN_004a71e0(uVar10);
        iVar11 = 0;
        if (0 < *(int *)(iVar9 + 0xf4 + DAT_00715f00)) {
          uStack_44 = iVar9 + 0x134;
          do {
            FUN_004c3fa0((byte *)s_Checking_index__d__00595424);
            iVar5 = *(int *)(uStack_44 + DAT_00715f00);
            FUN_004c3fa0((byte *)s_Waypoint__d_found__00595438);
            pfVar1 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            FUN_004c3fa0((byte *)s_WP_Position_____f__f__f___0059544c);
            fVar6 = fVar6 - fVar2;
            fVar7 = fVar7 - fVar3;
            fVar8 = fVar8 - fVar4;
            FUN_004c3fa0((byte *)s_Difference_____f__f__f___00595468);
            fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
            FUN_004c3fa0((byte *)s_Distance____f__00595484);
            FUN_004c3fa0((byte *)s_Closest____f__00595494);
            if (fVar6 < local_54) {
              FUN_004c3fa0((byte *)s_Setting_closest_wp_index_to__d__a_005954a4);
              local_54 = fVar6;
              local_40 = iVar5;
            }
            uStack_44 = uStack_44 + 4;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(iVar9 + 0xf4 + DAT_00715f00));
        }
        uVar10 = uVar10 + 1;
        iStack_48 = iStack_48 + -1;
      } while (iStack_48 != 0);
    }
  }
  FUN_004c3fa0((byte *)s_Return_WP_index__d__005954dc);
  return local_40;
}


