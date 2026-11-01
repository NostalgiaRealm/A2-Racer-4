
/* ==== FUN_0049e5a0 @ 0049e5a0 ==== 
 * signature: int * __fastcall FUN_0049e5a0(int param_1)
 * body: 0049e5a0-0049e627
 */

int * __fastcall FUN_0049e5a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  if (DAT_00740950 == 0) {
    return (int *)0x0;
  }
  local_4 = param_1;
  FUN_004a00b0(*(int *)(param_1 + 0x38),0,DAT_00740928 + -1);
  if (*(int *)(DAT_00740934 + 0x30 + *(int *)(param_1 + 0x38) * 0x44) == 0) {
    return (int *)0x0;
  }
  piVar1 = *(int **)(DAT_00740934 + *(int *)(param_1 + 0x38) * 0x44 + 0x28);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  FUN_004a0100((uint)(iVar2 == 0),(byte *)s__s___d__Getting_sound_status_fai_005ae784);
  return &local_4;
}


