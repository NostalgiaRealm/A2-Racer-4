
/* ==== FUN_004a6840 @ 004a6840 ==== 
 * signature: undefined __fastcall FUN_004a6840(int * param_1)
 * body: 004a6840-004a6878;004a687e-004a68c5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6879-004a687d
 */

void __fastcall FUN_004a6840(int *param_1)

{
  ulonglong uVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LARGE_INTEGER local_8;
  
  if (*param_1 == 0) {
    DVar3 = timeGetTime();
    uVar1 = (ulonglong)DVar3;
  }
  else {
    BVar2 = QueryPerformanceCounter(&local_8);
    if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____s_____HiRes_timer_fail_005af6f4);
    }
    uVar1 = CONCAT44(local_8.s.HighPart,local_8.s.LowPart);
  }
  param_1[3] = (int)((float)(longlong)uVar1 / (float)param_1[1] - (float)param_1[2]);
  param_1[2] = (int)((float)(longlong)uVar1 / (float)param_1[1]);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 4;
    *(undefined4 *)(iVar4 + DAT_00712868) = 0x3dcccccd;
    iVar4 = iVar5;
  } while (iVar5 < 0x10);
  param_1[3] = 0;
  return;
}


