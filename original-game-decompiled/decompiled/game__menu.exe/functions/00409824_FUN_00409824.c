
/* ==== FUN_00409824 @ 00409824 ==== 
 * signature: undefined __register FUN_00409824(void)
 * body: 00409824-0040984f
 */

void FUN_00409824(void)

{
  LPSYSTEMTIME lpSystemTime;
  _SYSTEMTIME local_10;
  
  lpSystemTime = &local_10;
  GetLocalTime(lpSystemTime);
  FUN_00409624(CONCAT22((short)((uint)lpSystemTime >> 0x10),local_10.wYear),local_10.wMonth,
               local_10.wDay);
  return;
}


