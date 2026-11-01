
/* ==== FUN_00494480 @ 00494480 ==== 
 * signature: undefined __fastcall FUN_00494480(int param_1)
 * body: 00494480-004944d8
 */

void __fastcall FUN_00494480(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      FUN_00492980(*(void **)(*(int *)(*(int *)(param_1 + 0x20) + 4) + iVar2 * 4),*piVar1,
                   *(void **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + *piVar1 * 4));
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x16;
    } while (iVar2 < DAT_005d2ab0);
  }
  FUN_00492980(*(void **)(param_1 + 0x18),DAT_006fbaa4,
               *(void **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + DAT_006fbaa4 * 4));
  return;
}


