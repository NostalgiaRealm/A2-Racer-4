
/* ==== TMenuActionLink.vmt_020 @ 00432728 ==== 
 * signature: undefined TMenuActionLink.vmt_020(void)
 * body: 00432728-0043275d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_020(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_020(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0042f24c);
    cVar1 = FUN_004372c8(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),
                         *(undefined4 **)(iVar2 + 0x54));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


