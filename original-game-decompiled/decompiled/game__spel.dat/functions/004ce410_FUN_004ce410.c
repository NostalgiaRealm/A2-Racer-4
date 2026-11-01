
/* ==== FUN_004ce410 @ 004ce410 ==== 
 * signature: undefined4 __cdecl FUN_004ce410(int param_1)
 * body: 004ce410-004ce48e
 */

undefined4 __cdecl FUN_004ce410(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0074b080 != 0) {
    iVar3 = 0;
    if (0 < DAT_0074b07c) {
      iVar2 = 0;
      iVar1 = DAT_0074b078;
      do {
        if (*(int *)(iVar2 + iVar1) == param_1) {
          *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
          *(undefined4 *)(iVar2 + 4 + DAT_0074b078) = 0xffffffff;
          *(undefined4 *)(iVar2 + 8 + DAT_0074b078) = 0;
          KillTimer(DAT_007408a4,*(UINT_PTR *)(iVar2 + DAT_0074b078));
          iVar1 = DAT_0074b078;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < DAT_0074b07c);
    }
    return 0;
  }
  return 0;
}


