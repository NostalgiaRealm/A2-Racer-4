
/* ==== FUN_004ce4f0 @ 004ce4f0 ==== 
 * signature: undefined4 __cdecl FUN_004ce4f0(int param_1)
 * body: 004ce4f0-004ce544
 */

undefined4 __cdecl FUN_004ce4f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_0074b080 != 0) {
    iVar4 = 0;
    if (0 < DAT_0074b07c) {
      iVar3 = 0;
      iVar2 = DAT_0074b078;
      do {
        if (((*(int *)(iVar3 + iVar2) == param_1) && (*(int *)(iVar3 + 4 + iVar2) != -1)) &&
           (pcVar1 = *(code **)(iVar3 + 8 + iVar2), pcVar1 != (code *)0x0)) {
          (*pcVar1)();
          iVar2 = DAT_0074b078;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < DAT_0074b07c);
    }
    return 0;
  }
  return 0;
}


