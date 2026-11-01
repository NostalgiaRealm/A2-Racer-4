
/* ==== TMenuActionLink.vmt_020 @ 0043ce08 ==== 
 * signature: undefined TMenuActionLink.vmt_020(void)
 * body: 0043ce08-0043ce3d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_020(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_020(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    cVar1 = FUN_00441a64(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),
                         *(undefined4 **)(iVar2 + 0x54));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


