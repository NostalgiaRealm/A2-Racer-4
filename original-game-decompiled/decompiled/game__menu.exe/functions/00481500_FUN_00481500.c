
/* ==== FUN_00481500 @ 00481500 ==== 
 * signature: bool __register FUN_00481500(uint param_1, ushort param_2, ushort param_3)
 * body: 00481500-00481586
 */

bool FUN_00481500(uint param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  BOOL BVar2;
  DWORD iModeNum;
  bool bVar3;
  bool bVar4;
  DEVMODEA *lpDevMode;
  DEVMODEA local_a4;
  ushort local_8;
  ushort local_6;
  
  bVar3 = false;
  iModeNum = 0;
  local_8 = param_3;
  local_6 = param_2;
  while( true ) {
    if (bVar3 != false) {
      return bVar3;
    }
    lpDevMode = &local_a4;
    if ((int)iModeNum < 0) {
      thunk_FUN_00402808((uint)lpDevMode);
    }
    BVar2 = EnumDisplaySettingsA((LPCSTR)0x0,iModeNum,lpDevMode);
    if (BVar2 == 0) break;
    uVar1 = param_1 & 0xffff;
    if (((uVar1 == local_a4.dmPelsWidth) && (uVar1 = (uint)local_6, uVar1 == local_a4.dmPelsHeight))
       && (uVar1 = (uint)local_8, uVar1 == local_a4.dmBitsPerPel)) {
      local_a4.dmFields = 0x1c0000;
      uVar1 = ChangeDisplaySettingsA(&local_a4,0);
      bVar3 = uVar1 == 0;
    }
    if ((bVar3 == false) && (bVar4 = SCARRY4(iModeNum,1), iModeNum = iModeNum + 1, bVar4)) {
      thunk_FUN_00402808(uVar1);
    }
  }
  return false;
}


