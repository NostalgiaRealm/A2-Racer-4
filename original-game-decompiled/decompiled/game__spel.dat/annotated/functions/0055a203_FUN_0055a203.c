
/* ==== FUN_0055a203 @ 0055a203 ==== 
 * signature: undefined4 __cdecl FUN_0055a203(uint param_1)
 * body: 0055a203-0055a27c
 */

undefined4 __cdecl FUN_0055a203(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_007501a0) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_005c7bd4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0055a25c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0055a25c:
      *(undefined4 *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


