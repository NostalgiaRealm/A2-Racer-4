
/* ==== FUN_004a6700 @ 004a6700 ==== 
 * signature: undefined __fastcall FUN_004a6700(int * param_1)
 * body: 004a6700-004a6735;004a673b-004a67e3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6736-004a673a
 */

void __fastcall FUN_004a6700(int *param_1)

{
  float fVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LARGE_INTEGER local_8;
  
  if (*param_1 == 0) {
    DVar3 = timeGetTime();
    local_8.s.HighPart = 0;
    local_8.s.LowPart = DVar3;
  }
  else {
    BVar2 = QueryPerformanceCounter(&local_8);
    if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____s_____HiRes_timer_fail_005af6f4);
    }
  }
  param_1[3] = (int)((float)(longlong)local_8 / (float)param_1[1] - (float)param_1[2]);
  param_1[2] = (int)((float)(longlong)local_8 / (float)param_1[1]);
  *(int *)(DAT_00712868 + DAT_007128c0 * 4) = param_1[3];
  iVar5 = 2;
  param_1[3] = (int)((float)param_1[3] * 0.5);
  fVar1 = 0.5;
  iVar4 = DAT_007128c0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      iVar4 = 3;
    }
    fVar1 = fVar1 * 0.5;
    iVar5 = iVar5 + -1;
    param_1[3] = (int)(fVar1 * *(float *)(DAT_00712868 + iVar4 * 4) + (float)param_1[3]);
  } while (iVar5 != 0);
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    iVar4 = 3;
  }
  param_1[3] = (int)(fVar1 * *(float *)(DAT_00712868 + iVar4 * 4) + (float)param_1[3]);
  DAT_007128c0 = DAT_007128c0 + 1;
  if (3 < DAT_007128c0) {
    DAT_007128c0 = 0;
  }
  return;
}


