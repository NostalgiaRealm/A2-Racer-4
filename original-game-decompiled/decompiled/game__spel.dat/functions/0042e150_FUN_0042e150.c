
/* ==== FUN_0042e150 @ 0042e150 ==== 
 * signature: undefined __stdcall FUN_0042e150(void)
 * body: 0042e150-0042e287
 */

void FUN_0042e150(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  local_4 = 0;
  iVar2 = DAT_005d2ab0;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c4;
    piVar4 = &DAT_005cea38;
    do {
      if (piVar3[3] == 0) {
        FUN_004c3fa0((byte *)s_Racer__d_not_yet_finished_0059761c);
        FUN_0042e340(piVar4[-0x14]);
        iVar5 = DAT_00715f04 * DAT_006fb8fc;
        FUN_004c3fa0((byte *)s_Total_travelled_distance___d_00597638);
        FUN_004c3fa0((byte *)s_Total_chunks__d_Player__d_00597658);
        iVar6 = DAT_006fbab4 - *piVar4;
        FUN_004c3fa0((byte *)s_Chunks_to_go__d_00597674);
        iVar2 = *piVar3;
        FUN_004c3fa0((byte *)s_Timer_per_chunk__d_00597688);
        FUN_004c3fa0((byte *)s_Extra_time_to_finish_track__d_0059769c);
        *piVar3 = *piVar3 + (iVar2 / (iVar5 - iVar6)) * iVar6;
        FUN_004c3fa0((byte *)s_Final_time__d_005976bc);
        iVar2 = DAT_005d2ab0;
      }
      local_4 = local_4 + 1;
      piVar4 = piVar4 + 0xa5;
      piVar3 = piVar3 + 0x16;
    } while (local_4 < iVar2);
  }
  iVar5 = 0;
  if (0 < iVar2) {
    piVar3 = &DAT_005973c8;
    do {
      *piVar3 = 0;
      iVar6 = 0;
      piVar4 = &DAT_005973c4;
      do {
        if ((iVar6 != iVar5) && (*piVar4 < piVar3[-1])) {
          *piVar3 = *piVar3 + 1;
        }
        iVar1 = DAT_006fbaa4;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 0x16;
      } while (iVar6 < iVar2);
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 0x16;
    } while (iVar5 < iVar2);
    if (0 < iVar2) {
      piVar3 = &DAT_005973c8;
      do {
        if (iVar1 <= *piVar3) {
          *piVar3 = *piVar3 + 1;
        }
        piVar3 = piVar3 + 0x16;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


