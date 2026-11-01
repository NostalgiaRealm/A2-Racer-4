
/* ==== FUN_00468650 @ 00468650 ==== 
 * signature: undefined __fastcall FUN_00468650(int param_1)
 * body: 00468650-004686ed
 */

void __fastcall FUN_00468650(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    if (piVar3[3] != 0) {
      pcVar4 = (char *)FUN_004686f0(piVar3[3]);
      if ((*pcVar4 == '\0') || (pcVar4 = (char *)FUN_004686f0(piVar3[3]), *pcVar4 == -1)) {
        FUN_00468700((LPVOID)(piVar3[3] + -1));
      }
      else {
        pcVar4 = (char *)FUN_004686f0(piVar3[3]);
        *pcVar4 = *pcVar4 + -1;
      }
    }
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    FUN_0054b339(piVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    piVar3 = piVar2;
  }
  return;
}


