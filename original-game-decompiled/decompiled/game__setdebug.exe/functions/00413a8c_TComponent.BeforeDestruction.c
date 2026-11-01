
/* ==== TComponent.BeforeDestruction @ 00413a8c ==== 
 * signature: undefined TComponent.BeforeDestruction(void)
 * body: 00413a8c-00413a97
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TComponent_BeforeDestruction(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
    FUN_00413c68(param_1);
  }
  return;
}


