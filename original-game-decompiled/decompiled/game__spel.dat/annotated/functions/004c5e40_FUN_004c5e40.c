
/* ==== FUN_004c5e40 @ 004c5e40 ==== 
 * signature: int __cdecl FUN_004c5e40(uint param_1)
 * body: 004c5e40-004c5e8a
 */

int __cdecl FUN_004c5e40(uint param_1)

{
  SHORT SVar1;
  
  if ((param_1 & 0x100) == 0) {
    SVar1 = GetAsyncKeyState(0x10);
    if (-1 < SVar1) {
      SVar1 = GetAsyncKeyState(param_1);
      return (-1 < SVar1) - 1;
    }
  }
  else {
    SVar1 = GetAsyncKeyState(0x10);
    if (SVar1 < 0) {
      SVar1 = GetAsyncKeyState(param_1);
      return (-1 < SVar1) - 1;
    }
  }
  return 0;
}


