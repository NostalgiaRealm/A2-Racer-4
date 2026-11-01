
/* ==== TMenuActionLink.vmt_02c @ 004327c0 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_02c(int param_1)
 * body: 004327c0-004327ee
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_02c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_02c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0042f24c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x18) + 0x48)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}


