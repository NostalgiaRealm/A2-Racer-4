
/* ==== FUN_00409850 @ 00409850 ==== 
 * signature: undefined __register FUN_00409850(void)
 * body: 00409850-0040989e
 */

void FUN_00409850(void)

{
  LPSYSTEMTIME lpSystemTime;
  float10 in_ST0;
  _SYSTEMTIME local_18;
  double dStack_8;
  
  lpSystemTime = &local_18;
  GetLocalTime(lpSystemTime);
  FUN_00409624(CONCAT22((short)((uint)lpSystemTime >> 0x10),local_18.wYear),local_18.wMonth,
               local_18.wDay);
  dStack_8 = (double)in_ST0;
  FUN_0040944c(local_18.wHour,local_18.wMinute,local_18.wSecond,local_18.wMilliseconds);
  return;
}


