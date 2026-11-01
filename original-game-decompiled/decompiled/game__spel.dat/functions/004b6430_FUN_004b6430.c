
/* ==== FUN_004b6430 @ 004b6430 ==== 
 * signature: undefined4 * __fastcall FUN_004b6430(undefined4 * param_1)
 * body: 004b6430-004b6645
 */

undefined4 * __fastcall FUN_004b6430(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f606;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[9] = 0;
  _strncpy((char *)(param_1 + 0xb),s_Meshlist_005b1110,0x19);
  _strncpy((char *)((int)param_1 + 0x45),s_meshes_t_005b1104,0x19);
  if (param_1[9] != 0) {
    if (param_1[9] == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339((LPVOID)param_1[6]);
    }
    if (param_1[9] != 0) {
      FUN_0054b339((LPVOID)param_1[10]);
      param_1[9] = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  param_1[10] = 0;
  param_1[9] = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  _strncpy((char *)((int)param_1 + 0x72),s_Texturelist_005b10f8,0x19);
  _strncpy((char *)((int)param_1 + 0x8b),s_textures_t_005b10ec,0x19);
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    if (*(int *)((int)param_1 + 0x6a) == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(*(LPVOID *)((int)param_1 + 0x5e));
    }
    if (*(int *)((int)param_1 + 0x6a) != 0) {
      FUN_0054b339(*(LPVOID *)((int)param_1 + 0x6e));
      *(undefined4 *)((int)param_1 + 0x6a) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x2c] = 0;
  _strncpy((char *)(param_1 + 0x2e),s_Animnamelist_005b10dc,0x19);
  _strncpy((char *)((int)param_1 + 0xd1),s_anim_name_t_005b10d0,0x19);
  if (param_1[0x2c] != 0) {
    if (param_1[0x2c] == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339((LPVOID)param_1[0x29]);
    }
    if (param_1[0x2c] != 0) {
      FUN_0054b339((LPVOID)param_1[0x2d]);
      param_1[0x2c] = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}


