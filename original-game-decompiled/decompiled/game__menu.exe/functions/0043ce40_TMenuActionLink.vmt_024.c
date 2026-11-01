
/* ==== TMenuActionLink.vmt_024 @ 0043ce40 ==== 
 * signature: undefined TMenuActionLink.vmt_024(void)
 * body: 0043ce40-0043ce6e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_024(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (*(char *)(iVar2 + 0x58) == *(char *)(*(int *)(param_1 + 0x18) + 0x2c)) {
      return 1;
    }
  }
  return 0;
}


