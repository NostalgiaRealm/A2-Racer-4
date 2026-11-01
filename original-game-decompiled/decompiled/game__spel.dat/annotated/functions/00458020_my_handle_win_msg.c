
/* ==== my_handle_win_msg @ 00458020 ==== 
 * signature: undefined4 __stdcall my_handle_win_msg(void)
 * body: 00458020-004580de
 * note: ANALYST: Window message pump; non-zero leaves the main loop. [confidence: confirmed] [evidence: caller log 'Calling my_handle_win_msg']
 */

/* ANALYST: Window message pump; non-zero leaves the main loop. [confidence: confirmed] [evidence:
   caller log 'Calling my_handle_win_msg'] */

undefined4 my_handle_win_msg(void)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  tagMSG local_1c;
  
  bVar2 = false;
  do {
    bVar1 = false;
    BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    if (BVar3 != 0) {
      bVar1 = true;
      if (local_1c.message == 0x12) {
        return 1;
      }
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
    if (DAT_00740dfc == 0) {
      WaitMessage();
      bVar2 = true;
    }
  } while ((bVar1) || (DAT_00740dfc == 0));
  if (bVar2) {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    FUN_004c4a60(DAT_00740890);
    FUN_004b8bc0();
    FUN_004c0920();
    FUN_004b2ea0(0x73b020);
  }
  return 0;
}


