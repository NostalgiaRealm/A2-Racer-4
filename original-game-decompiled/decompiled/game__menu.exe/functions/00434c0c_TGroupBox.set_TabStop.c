
/* ==== TGroupBox.set_TabStop @ 00434c0c ==== 
 * signature: undefined __register TGroupBox.set_TabStop(int param_1, char param_2)
 * body: 00434c0c-00434c68
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_TabStop(int param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (param_2 != *(char *)(param_1 + 0x174)) {
    *(char *)(param_1 + 0x174) = param_2;
    bVar1 = FUN_00434cdc(param_1);
    if (bVar1) {
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
      uVar2 = uVar2 & 0xfffeffff;
      if (param_2 != '\0') {
        uVar2 = uVar2 | 0x10000;
      }
      SetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10,uVar2);
    }
    FUN_0042f720(param_1,0xb028,0,0);
  }
  return;
}


