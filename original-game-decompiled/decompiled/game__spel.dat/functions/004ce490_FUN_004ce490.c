
/* ==== FUN_004ce490 @ 004ce490 ==== 
 * signature: undefined4 __stdcall FUN_004ce490(void)
 * body: 004ce490-004ce4e7
 */

undefined4 FUN_004ce490(void)

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
        if (((*(int *)(iVar2 + iVar1) != -1) && (*(int *)(iVar2 + 4 + iVar1) != -1)) &&
           (*(int *)(iVar2 + 8 + iVar1) != 0)) {
          FUN_004ce410(*(int *)(iVar2 + iVar1));
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


