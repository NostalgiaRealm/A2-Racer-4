
/* ==== FUN_0055a6fe @ 0055a6fe ==== 
 * signature: uint __stdcall FUN_0055a6fe(void)
 * body: 0055a6fe-0055a7ce
 */

uint FUN_0055a6fe(void)

{
  uint uVar1;
  BOOL BVar2;
  byte *pbVar3;
  _INPUT_RECORD local_20;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_005c8210 != 0xffffffff) {
    uVar1 = DAT_005c8210 & 0xff;
    DAT_005c8210 = 0xffffffff;
    return uVar1;
  }
  if (DAT_005c8bd8 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_005c8bd8 == (HANDLE)0xfffffffe) {
    FUN_0056310f();
  }
  GetConsoleMode(DAT_005c8bd8,&local_c);
  SetConsoleMode(DAT_005c8bd8,0);
  do {
    do {
      BVar2 = ReadConsoleInputA(DAT_005c8bd8,&local_20,1,&local_8);
      if ((BVar2 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_0055a7bd;
      }
    } while ((local_20.EventType != 1) || (local_20.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)local_20.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_0055a7bd;
    pbVar3 = (byte *)FUN_0055a88d((int)&local_20.Event);
  } while (pbVar3 == (byte *)0x0);
  uVar1 = (uint)*pbVar3;
  DAT_005c8210 = (uint)pbVar3[1];
LAB_0055a7bd:
  SetConsoleMode(DAT_005c8bd8,local_c);
  return uVar1;
}


