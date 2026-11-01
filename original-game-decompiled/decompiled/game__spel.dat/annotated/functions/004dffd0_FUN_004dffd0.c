
/* ==== FUN_004dffd0 @ 004dffd0 ==== 
 * signature: undefined __fastcall FUN_004dffd0(int param_1)
 * body: 004dffd0-004e0015
 */

void __fastcall FUN_004dffd0(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\0') {
      FUN_004e6ca0(&DAT_0074b8d0,(void *)(param_1 + 0xc),(char *)0xfa2);
      return;
    }
    FUN_004e6ca0(&DAT_0074b8d0,(void *)(param_1 + 0xc),(char *)0xfa3);
  }
  return;
}


