
/* ==== FUN_0055a18c @ 0055a18c ==== 
 * signature: undefined4 __cdecl FUN_0055a18c(uint param_1, HANDLE param_2)
 * body: 0055a18c-0055a202
 */

undefined4 __cdecl FUN_0055a18c(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_007501a0) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_005c7bd4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0055a1e2;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0055a1e2:
      *(HANDLE *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


