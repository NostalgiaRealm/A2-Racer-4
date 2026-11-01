
/* ==== FUN_00444208 @ 00444208 ==== 
 * signature: undefined __register FUN_00444208(HWND param_1, char param_2)
 * body: 00444208-00444251
 */

void FUN_00444208(HWND param_1,char param_2)

{
  uint uVar1;
  
  if (param_1 != (HWND)0x0) {
    uVar1 = GetWindowLongA(param_1,-0x14);
    if (param_2 == '\0') {
      if ((uVar1 & 0x200) == 0) {
        return;
      }
      uVar1 = uVar1 & 0xfffffdff;
    }
    else {
      if ((uVar1 & 0x200) != 0) {
        return;
      }
      uVar1 = uVar1 | 0x200;
    }
    SetWindowLongA(param_1,-0x14,uVar1);
    SetWindowPos(param_1,(HWND)0x0,0,0,0,0,0x37);
  }
  return;
}


