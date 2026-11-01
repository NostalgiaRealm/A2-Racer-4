
/* ==== FUN_0040446e @ 0040446e ==== 
 * signature: undefined4 __cdecl FUN_0040446e(uint param_1)
 * body: 0040446e-004044e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040446e(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00409460) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_00409360)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00407214 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004044c7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004044c7:
      *(undefined4 *)((&DAT_00409360)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  _DAT_00407f48 = 0;
  DAT_00407f44 = 9;
  return 0xffffffff;
}


