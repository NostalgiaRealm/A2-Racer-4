
/* ==== FUN_10007590 @ 10007590 ==== 
 * signature: undefined __cdecl FUN_10007590(UINT param_1, int param_2, int param_3)
 * body: 10007590-10007672
 */

void __cdecl FUN_10007590(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_10007680();
  if (DAT_100314e8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100314e4 = 1;
  DAT_100314e0 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10031ab0 != (int *)0x0) {
      local_8 = DAT_10031aac;
      while (local_8 = local_8 + -1, DAT_10031ab0 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1002f51c,(int *)&DAT_1002f724);
  }
  __initterm((int *)&DAT_1002f828,(int *)&DAT_1002f92c);
  if ((DAT_100314ec == 0) && (uVar1 = FUN_10004c20(-1), (uVar1 & 0x20) != 0)) {
    DAT_100314ec = 1;
    FUN_10005530();
  }
  if (param_3 == 0) {
    DAT_100314e8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10007690();
  return;
}


