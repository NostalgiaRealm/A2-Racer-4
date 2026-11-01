
/* ==== FUN_0044fca3 @ 0044fca3 ==== 
 * signature: undefined __stdcall FUN_0044fca3(void)
 * body: 0044fca3-0044fd21
 */

void FUN_0044fca3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_18 [4];
  char *local_8;
  char *local_4;
  
  local_18[0] = s_SOFT_CAR_HIT1_005a24e4;
  local_18[1] = s_SOFT_CAR_HIT2_005a24f4;
  local_18[2] = s_MID_CAR_HIT1_005a2504;
  local_18[3] = s_MID_CAR_HIT2_005a2514;
  local_8 = s_HARD_CAR_HIT1_005a2524;
  local_4 = s_HARD_CAR_HIT2_005a2534;
  DAT_006fba24 = FUN_00450900(s_SCHUUR_005a2544);
  iVar2 = 0;
  do {
    iVar3 = 2;
    do {
      iVar1 = FUN_00450900(*(char **)((int)local_18 + iVar2));
      *(int *)((int)&DAT_006fb9a0 + iVar2) = iVar1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while (iVar2 < 0x18);
  return;
}


