
/* ==== FUN_0044f100 @ 0044f100 ==== 
 * signature: undefined __cdecl FUN_0044f100(int param_1, int param_2)
 * body: 0044f100-0044f369
 */

void __cdecl FUN_0044f100(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_10 [4];
  
  local_10[0] = 0;
  local_10[1] = 1;
  local_10[2] = 5;
  local_10[3] = 4;
  FUN_004c3fa0((byte *)s_Entering_handle_mesh_damage__d___005a201c);
  iVar8 = param_1 * 0xf0;
  if (*(int *)(iVar8 + 0xe8 + DAT_00715e50) == -1) {
    FUN_004c3fa0((byte *)s_Object_has_no_damage_frames__ret_005a2040);
    return;
  }
  FUN_004c3fa0((byte *)s_Checking_for_previous_update_in_c_005a206c);
  if (*(int *)(iVar8 + 0xe4 + DAT_00715e50) != DAT_006fb8dc) {
    FUN_004c3fa0((byte *)s_Storing_current_frame_number__005a20a0);
    *(int *)(iVar8 + 0xe4 + DAT_00715e50) = DAT_006fb8dc;
    FUN_004c3fa0((byte *)s_Getting_original_mesh__005a20c0);
    iVar10 = *(int *)(iVar8 + 0xe8 + DAT_00715e50);
    FUN_004c3fa0((byte *)s_Finding_edges__005a20d8);
    piVar6 = local_10;
    iVar9 = 4;
    do {
      pfVar1 = (float *)(iVar10 * 0xac + *piVar6 * 0xc + 0x10 + DAT_0073b5c8);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[2];
      if (0.0 < fVar2) {
        local_2c = fVar2;
        fVar2 = local_28;
      }
      local_28 = fVar2;
      if (0.0 < fVar3) {
        local_24 = fVar3;
        fVar3 = local_20;
      }
      local_20 = fVar3;
      piVar6 = piVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    FUN_004c3fa0((byte *)s_Edges__l_x_max____f__l_x_min_____005a20e8);
    FUN_004c3fa0((byte *)s_Other_stuff__005a2128);
    FUN_004c3fa0((byte *)s_Collision_point__x____f__z____f__005a2138);
    fVar2 = *(float *)(param_2 + 0x10) * 10.0;
    uVar5 = (uint)(local_2c * 0.6 < fVar2);
    if (fVar2 < local_28 * 0.6) {
      uVar5 = 0xffffffff;
    }
    fVar2 = *(float *)(param_2 + 0x18) * 10.0;
    uVar7 = (uint)(local_24 * 0.6 < fVar2);
    if (fVar2 < local_20 * 0.6) {
      uVar7 = 0xffffffff;
    }
    FUN_004c3fa0((byte *)s_l_width_zone____d__l_height_zone_005a215c);
    FUN_004c3fa0((byte *)s_Determining_area__005a2194);
    FUN_004c3fa0((byte *)s_l_zone____d__005a21a8);
    switch(uVar7 + uVar5 * 10) {
    case 0:
      FUN_004c3fa0((byte *)s_l_zone____d__005a21f8);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d___Impossible_collision___C_005a2208);
    case 1:
      FUN_004c3fa0((byte *)s_l_zone____d__005a225c);
      iVar10 = 0;
      break;
    case 9:
      FUN_004c3fa0((byte *)s_l_zone____d__005a226c);
      iVar10 = 3;
      break;
    case 10:
      FUN_004c3fa0((byte *)s_l_zone____d__005a227c);
      iVar10 = 2;
      break;
    case 0xb:
      FUN_004c3fa0((byte *)s_l_zone____d__005a228c);
      iVar10 = 1;
      break;
    case 0xfffffff5:
      FUN_004c3fa0((byte *)s_l_zone____d__005a21b8);
      iVar10 = 5;
      break;
    case 0xfffffff6:
      FUN_004c3fa0((byte *)s_l_zone____d__005a21c8);
      iVar10 = 6;
      break;
    case 0xfffffff7:
      FUN_004c3fa0((byte *)s_l_zone____d__005a21d8);
      iVar10 = 7;
      break;
    default:
      FUN_004c3fa0((byte *)s_l_zone____d__005a229c);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d___Something_went_really_wr_005a22d0);
    case 0xffffffff:
      FUN_004c3fa0((byte *)s_l_zone____d__005a21e8);
      iVar10 = 4;
    }
    FUN_004c3fa0((byte *)s_Applying_regional_damage_to_obje_005a2308);
    iVar9 = DAT_00715e50;
    if (param_1 == DAT_006fba58) {
      (&DAT_006fbaf0)[iVar10] = (&DAT_006fbaf0)[iVar10];
      FUN_004a8640(iVar8 + iVar9);
      lVar11 = __ftol();
      FUN_004a8660((void *)(DAT_00715e50 + iVar8),iVar10,(int)lVar11);
      (&DAT_006fbb10)[iVar10] = (int)lVar11;
      return;
    }
    if (DAT_006fb964 != 0) {
      iVar4 = 0;
      if (0 < DAT_005d2ab0) {
        piVar6 = &DAT_005973cc;
        do {
          if (*piVar6 == param_1) break;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 0x16;
        } while (iVar4 < DAT_005d2ab0);
      }
      if (iVar4 != DAT_005d2ab0) {
        iVar4 = iVar10 + iVar4 * 0x16;
        (&DAT_005973d8)[iVar4] = (&DAT_005973d8)[iVar4];
        FUN_004a8640(iVar8 + iVar9);
        lVar11 = __ftol();
        FUN_004a8660((void *)(iVar8 + DAT_00715e50),iVar10,(int)lVar11);
        (&DAT_005973f8)[iVar4] = (int)lVar11;
      }
    }
  }
  return;
}


