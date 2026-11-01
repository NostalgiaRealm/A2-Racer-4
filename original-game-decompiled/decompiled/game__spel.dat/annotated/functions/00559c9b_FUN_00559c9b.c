
/* ==== FUN_00559c9b @ 00559c9b ==== 
 * signature: undefined __cdecl FUN_00559c9b(UINT param_1, int param_2, int param_3)
 * body: 00559c9b-00559d33
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00559c9b(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_0074dca8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0074dca4 = 1;
  DAT_0074dca0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_007503dc != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_007503d8 - 4), DAT_007503dc <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_007503dc <= puVar1);
    }
    FUN_00559d34((undefined4 *)&DAT_0058dcc0,(undefined4 *)&DAT_0058dccc);
  }
  FUN_00559d34((undefined4 *)&DAT_0058dcd0,(undefined4 *)&DAT_0058dcd8);
  if (param_3 != 0) {
    return;
  }
  DAT_0074dca8 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


