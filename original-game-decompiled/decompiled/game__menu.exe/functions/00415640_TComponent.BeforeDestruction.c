
/* ==== TComponent.BeforeDestruction @ 00415640 ==== 
 * signature: undefined TComponent.BeforeDestruction(void)
 * body: 00415640-0041564b
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TComponent_BeforeDestruction(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    FUN_0041581c(param_1);
  }
  return;
}


