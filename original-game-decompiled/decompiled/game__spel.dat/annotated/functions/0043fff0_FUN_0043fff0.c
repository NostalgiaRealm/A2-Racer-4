
/* ==== FUN_0043fff0 @ 0043fff0 ==== 
 * signature: undefined __stdcall FUN_0043fff0(void)
 * body: 0043fff0-004400fa
 */

void FUN_0043fff0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int local_18;
  int local_14;
  
  local_14 = 0;
  pfVar4 = (float *)&DAT_006c948c;
  do {
    fVar1 = (float)local_14;
    local_14 = local_14 + 1;
    local_18 = 0;
    pfVar5 = pfVar4;
    do {
      fVar2 = (float)local_18;
      local_18 = local_18 + 1;
      pfVar4 = pfVar5 + 0x10;
      fVar3 = fVar2 * 0.625 - 5.0;
      pfVar5[-9] = fVar3;
      pfVar5[-8] = fVar1 * 0.75 - 3.75;
      pfVar5[-7] = 5.0;
      pfVar5[-5] = -NAN;
      pfVar5[-4] = 0.0;
      fVar2 = fVar2 * 0.06249997 * 0.0625 + 0.445313;
      pfVar5[-3] = fVar2;
      pfVar5[-2] = 0.046875 - fVar1 * 0.046875 * 0.1;
      pfVar5[-1] = fVar3;
      *pfVar5 = (float)local_14 * 0.75 - 3.75;
      pfVar5[1] = 5.0;
      pfVar5[3] = -NAN;
      pfVar5[4] = 0.0;
      pfVar5[5] = fVar2;
      pfVar5[6] = 0.046875 - (float)local_14 * 0.046875 * 0.1;
      pfVar5 = pfVar4;
    } while (local_18 < 0x11);
  } while ((int)pfVar4 < 0x6cbf0c);
  return;
}


