
/* ==== FUN_00559f8f @ 00559f8f ==== 
 * signature: undefined __cdecl FUN_00559f8f(int * param_1)
 * body: 00559f8f-0055a06a
 */

void __cdecl FUN_00559f8f(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_0074dcc0._2_2_) {
    if (local_24.wHour == (WORD)DAT_0074dcc0) {
      if (local_24.wDay == DAT_0074dcbc._2_2_) {
        if (local_24.wMonth == DAT_0074dcb8._2_2_) {
          if (local_24.wYear == (WORD)DAT_0074dcb8) goto LAB_0055a039;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_0074dcb0 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_0074dcb0 = 1;
  }
  else {
    DAT_0074dcb0 = 0;
  }
  DAT_0074dcb8._0_2_ = local_24.wYear;
  DAT_0074dcb8._2_2_ = local_24.wMonth;
  DAT_0074dcbc._0_2_ = local_24.wDayOfWeek;
  DAT_0074dcbc._2_2_ = local_24.wDay;
  DAT_0074dcc0._0_2_ = local_24.wHour;
  DAT_0074dcc0._2_2_ = local_24.wMinute;
  DAT_0074dcc4._0_2_ = local_24.wSecond;
  DAT_0074dcc4._2_2_ = local_24.wMilliseconds;
LAB_0055a039:
  iVar2 = FUN_00560a8e((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_0074dcb0);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}


