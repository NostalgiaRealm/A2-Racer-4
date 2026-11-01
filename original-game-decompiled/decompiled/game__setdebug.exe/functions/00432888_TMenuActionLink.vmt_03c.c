
/* ==== TMenuActionLink.vmt_03c @ 00432888 ==== 
 * signature: undefined TMenuActionLink.vmt_03c(void)
 * body: 00432888-004328b6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0042f24c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x32)) {
      return 1;
    }
  }
  return 0;
}


