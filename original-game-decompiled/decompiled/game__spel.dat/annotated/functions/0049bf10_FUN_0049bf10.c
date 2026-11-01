
/* ==== FUN_0049bf10 @ 0049bf10 ==== 
 * signature: undefined __fastcall FUN_0049bf10(int param_1)
 * body: 0049bf10-0049bf4f
 */

void __fastcall FUN_0049bf10(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar3 * 4);
      if (iVar1 != 0) {
        cVar2 = FUN_004993b0(iVar1);
        if (cVar2 != '\0') {
          FUN_00499580(*(void **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar3 * 4),
                       (undefined1 *)(param_1 + 4));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  return;
}


