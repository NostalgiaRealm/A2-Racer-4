
/* ==== FUN_004aac20 @ 004aac20 ==== 
 * signature: int __cdecl FUN_004aac20(int param_1, int param_2)
 * body: 004aac20-004aac73;004aac77-004ab080
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aac74-004aac76
 */

int __cdecl FUN_004aac20(int param_1,int param_2)

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
  int iVar10;
  int iVar11;
  float local_4c;
  int iStack_44;
  int local_3c;
  
  local_3c = -1;
  local_4c = 3.4e+38;
  FUN_004c3fa0((byte *)s_Object____d__Side____d__005b024c);
  if (((param_2 != 1) && (param_2 != 0)) && (param_2 != -1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d___Illegal_side__d__005b0230);
  }
  iVar9 = param_1 * 0xf0 + DAT_00715e50;
  iVar10 = *(int *)(iVar9 + 0x24);
  iVar11 = *(int *)(iVar9 + 0x34);
  iVar9 = DAT_0073b0d0 + iVar10 + 0x50 + iVar10 * 0xa8;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar10 + 0x50 + iVar10 * 0xa8);
  fVar3 = *(float *)(iVar9 + 4);
  fVar4 = *(float *)(iVar9 + 8);
  FUN_004c3fa0((byte *)s_Chunk____d__Position_____f__f__f_005b020c);
  if ((param_2 == 1) || (param_2 == -1)) {
    iVar10 = iVar11 * 0x994;
    FUN_004c3fa0((byte *)s__d_waypoints_on_the_RIGHT__005b01f0);
    iVar9 = 0;
    if (0 < *(int *)(iVar10 + 0xf8 + DAT_00715f00)) {
      iStack_44 = iVar10 + 0x164;
      do {
        FUN_004c3fa0((byte *)s_Checking_index__d__005b01dc);
        iVar5 = *(int *)(iStack_44 + DAT_00715f00);
        FUN_004c3fa0((byte *)s_Waypoint__d_found__005b01c8);
        pfVar1 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        FUN_004c3fa0((byte *)s_WP_Position_____f__f__f___005b01ac);
        fVar6 = fVar6 - fVar2;
        fVar7 = fVar7 - fVar3;
        fVar8 = fVar8 - fVar4;
        FUN_004c3fa0((byte *)s_Difference_____f__f__f___005b0190);
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
        FUN_004c3fa0((byte *)s_Distance____f__005b0180);
        FUN_004c3fa0((byte *)s_Closest____f__005b0170);
        if (fVar6 < local_4c) {
          FUN_004c3fa0((byte *)s_Setting_closest_wp_index_to__d__a_005b0138);
          local_4c = fVar6;
          local_3c = iVar5;
        }
        iStack_44 = iStack_44 + 4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(iVar10 + 0xf8 + DAT_00715f00));
    }
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar11 = iVar11 * 0x994;
    FUN_004c3fa0((byte *)s__d_waypoints_on_the_LEFT__005b011c);
    iVar9 = 0;
    if (0 < *(int *)(iVar11 + 0xf4 + DAT_00715f00)) {
      iStack_44 = iVar11 + 0x134;
      do {
        FUN_004c3fa0((byte *)s_Checking_index__d__005b01dc);
        iVar10 = *(int *)(iStack_44 + DAT_00715f00);
        FUN_004c3fa0((byte *)s_Waypoint__d_found__005b01c8);
        pfVar1 = (float *)(iVar10 * 0x50 + 8 + DAT_00715eb8);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        FUN_004c3fa0((byte *)s_WP_Position_____f__f__f___005b01ac);
        fVar6 = fVar6 - fVar2;
        fVar7 = fVar7 - fVar3;
        fVar8 = fVar8 - fVar4;
        FUN_004c3fa0((byte *)s_Difference_____f__f__f___005b0190);
        fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
        FUN_004c3fa0((byte *)s_Distance____f__005b0180);
        FUN_004c3fa0((byte *)s_Closest____f__005b0170);
        if (fVar6 < local_4c) {
          FUN_004c3fa0((byte *)s_Setting_closest_wp_index_to__d__a_005b0138);
          local_4c = fVar6;
          local_3c = iVar10;
        }
        iStack_44 = iStack_44 + 4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(iVar11 + 0xf4 + DAT_00715f00));
    }
  }
  FUN_004c3fa0((byte *)s_Return_WP_index__d__005b0104);
  return local_3c;
}


