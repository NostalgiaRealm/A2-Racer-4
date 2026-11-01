
/* ==== FUN_0042e0d0 @ 0042e0d0 ==== 
 * signature: undefined __stdcall FUN_0042e0d0(void)
 * body: 0042e0d0-0042e142
 */

void FUN_0042e0d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_1c [7];
  
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[DAT_006fbaa4] = 1;
  if (0 < DAT_005d2ab0) {
    iVar1 = DAT_005d2ab0 + 1;
    piVar5 = &DAT_005973c8;
    iVar4 = DAT_005d2ab0;
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        piVar3 = local_1c;
        do {
          if (*piVar3 == 0) {
            *piVar5 = iVar2;
            local_1c[iVar2] = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar1);
      }
      piVar5 = piVar5 + 0x16;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


