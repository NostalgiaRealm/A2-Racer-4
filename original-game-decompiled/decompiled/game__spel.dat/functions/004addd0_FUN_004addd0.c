
/* ==== FUN_004addd0 @ 004addd0 ==== 
 * signature: undefined4 * __fastcall FUN_004addd0(undefined4 * param_1)
 * body: 004addd0-004ade8f
 */

undefined4 * __fastcall FUN_004addd0(undefined4 *param_1)

{
  param_1[4] = 0;
  _strncpy((char *)(param_1 + 6),s_m_chunks_005b0570,0x19);
  _strncpy((char *)((int)param_1 + 0x31),(char *)&PTR_DAT_005b056c,0x19);
  if (param_1[4] != 0) {
    if (param_1[4] == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339((LPVOID)param_1[1]);
    }
    if (param_1[4] != 0) {
      FUN_0054b339((LPVOID)param_1[5]);
      param_1[4] = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  *param_1 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}


