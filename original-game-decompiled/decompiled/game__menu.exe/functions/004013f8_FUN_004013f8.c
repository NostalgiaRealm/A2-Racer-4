
/* ==== FUN_004013f8 @ 004013f8 ==== 
 * signature: WORD __register FUN_004013f8(void)
 * body: 004013f8-00401419
 */

WORD FUN_004013f8(void)

{
  WORD WVar1;
  _STARTUPINFOA _Stack_48;
  
  GetStartupInfoA(&_Stack_48);
  WVar1 = 10;
  if (((byte)_Stack_48.dwFlags & 1) != 0) {
    WVar1 = _Stack_48.wShowWindow;
  }
  return WVar1;
}


