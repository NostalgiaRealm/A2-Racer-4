
/* ==== FUN_00402a48 @ 00402a48 ==== 
 * signature: undefined __register FUN_00402a48(void)
 * body: 00402a48-00402a82
 */

void FUN_00402a48(void)

{
  _SYSTEMTIME local_1c;
  
  GetSystemTime(&local_1c);
  DAT_004ac044 = (CONCAT22((short)((uint)local_1c.wHour * 0x3c >> 0x10),
                           (short)((uint)local_1c.wHour * 0x3c) + local_1c.wMinute) * 0x3c +
                 (uint)local_1c.wSecond) * 1000 + (uint)local_1c.wMilliseconds;
  return;
}


