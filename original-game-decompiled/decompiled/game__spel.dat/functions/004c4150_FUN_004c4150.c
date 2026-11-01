
/* ==== FUN_004c4150 @ 004c4150 ==== 
 * signature: noreturn undefined __stdcall FUN_004c4150(byte * param_1)
 * body: 004c4150-004c41cb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c41cc-004c41df
 */

void FUN_004c4150(byte *param_1)

{
  int iVar1;
  CHAR local_190 [400];
  
  FUN_005590ae(local_190,param_1,(undefined4 *)&stack0x00000008);
  FUN_004c3f80(0,1);
  FUN_004c3fa0((byte *)s___d___s_005b39bc);
  ShowWindow(DAT_007408a4,6);
  iVar1 = FUN_004cd5e0();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd5e0();
  }
  MessageBoxExA((HWND)0x0,local_190,&DAT_005b39b4,0x51010,0);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}


