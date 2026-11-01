
/* ==== FUN_0049bf50 @ 0049bf50 ==== 
 * signature: undefined __fastcall FUN_0049bf50(int param_1)
 * body: 0049bf50-0049bf7d
 */

void __fastcall FUN_0049bf50(int param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      this = *(void **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar1 * 4);
      if (this != (void *)0x0) {
        FUN_00499960(this,(undefined1 *)(param_1 + 4));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return;
}


