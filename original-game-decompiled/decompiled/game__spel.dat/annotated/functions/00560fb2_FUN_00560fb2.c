
/* ==== FUN_00560fb2 @ 00560fb2 ==== 
 * signature: undefined __stdcall FUN_00560fb2(void)
 * body: 00560fb2-00560fda
 */

void FUN_00560fb2(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_007502c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_007501a4 = 0;
  DAT_007501bc = 0;
  DAT_007503c4 = 0;
  DAT_007501b0 = 0;
  DAT_007501b4 = 0;
  DAT_007501b8 = 0;
  return;
}


