
/* ==== FUN_004b0e80 @ 004b0e80 ==== 
 * signature: undefined __fastcall FUN_004b0e80(int param_1)
 * body: 004b0e80-004b1051
 */

void __fastcall FUN_004b0e80(int param_1)

{
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056f55c;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xf8) == 1) {
    ExceptionList = &local_c;
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(*(LPVOID *)(param_1 + 0xec));
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  if (*(int *)(param_1 + 0x13e) == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(*(LPVOID *)(param_1 + 0x132));
  }
  if (*(int *)(param_1 + 0x13e) != 0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0x142));
    *(undefined4 *)(param_1 + 0x13e) = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x13e) == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(*(LPVOID *)(param_1 + 0x132));
  }
  if (*(int *)(param_1 + 0x13e) != 0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0x142));
    *(undefined4 *)(param_1 + 0x13e) = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0xf8) == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(*(LPVOID *)(param_1 + 0xec));
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}


