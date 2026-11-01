
/* ==== FUN_10007850 @ 10007850 ==== 
 * signature: undefined __cdecl FUN_10007850(LPVOID param_1)
 * body: 10007850-10007956
 */

void __cdecl FUN_10007850(LPVOID param_1)

{
  if (DAT_1002ff5c != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1002ff5c);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_100041a0(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10030220) {
        FUN_100041a0(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_100041a0(param_1,2);
    }
    TlsSetValue(DAT_1002ff5c,(LPVOID)0x0);
  }
  return;
}


