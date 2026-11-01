
/* ==== FUN_00427340 @ 00427340 ==== 
 * signature: undefined __fastcall FUN_00427340(int param_1)
 * body: 00427340-004273c0
 */

void __fastcall FUN_00427340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  int *piVar5;
  char *local_18 [4];
  char *local_8;
  char *local_4;
  
  local_18[0] = s_SOFT_CAR_HIT1_0059624c;
  local_18[1] = s_SOFT_CAR_HIT2_0059625c;
  local_18[2] = s_MID_CAR_HIT1_0059626c;
  local_18[3] = s_MID_CAR_HIT2_0059627c;
  local_8 = s_HARD_CAR_HIT1_0059628c;
  local_4 = s_HARD_CAR_HIT2_0059629c;
  iVar1 = FUN_00450900(s_SCHUUR_005962ac);
  *(int *)(param_1 + 0xdf648) = iVar1;
  ppcVar4 = local_18;
  piVar5 = (int *)(param_1 + 0xdf64c);
  iVar1 = 3;
  do {
    iVar3 = 2;
    do {
      iVar2 = FUN_00450900(*ppcVar4);
      *piVar5 = iVar2;
      ppcVar4 = ppcVar4 + 1;
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


