
/* ==== FUN_00401334 @ 00401334 ==== 
 * signature: WORD __register FUN_00401334(void)
 * body: 00401334-00401355
 */

WORD FUN_00401334(void)

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


