
/* ==== FUN_004b67b0 @ 004b67b0 ==== 
 * signature: undefined __fastcall FUN_004b67b0(int * param_1)
 * body: 004b67b0-004b68e4
 */

void __fastcall FUN_004b67b0(int *param_1)

{
  FUN_004c3fa0((byte *)s_Exit_animsys_005b111c);
  if (*param_1 != 0) {
    FUN_004b7810((int)param_1);
    if (param_1[9] == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339((LPVOID)param_1[6]);
    }
    if (param_1[9] != 0) {
      FUN_0054b339((LPVOID)param_1[10]);
      param_1[9] = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
    if (*(int *)((int)param_1 + 0x6a) == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(*(LPVOID *)((int)param_1 + 0x5e));
    }
    if (*(int *)((int)param_1 + 0x6a) != 0) {
      FUN_0054b339(*(LPVOID *)((int)param_1 + 0x6e));
      *(undefined4 *)((int)param_1 + 0x6a) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
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
  *param_1 = 0;
  return;
}


