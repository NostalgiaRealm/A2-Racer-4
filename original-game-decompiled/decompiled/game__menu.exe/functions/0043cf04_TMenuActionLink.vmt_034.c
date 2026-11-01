
/* ==== TMenuActionLink.vmt_034 @ 0043cf04 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_034(int param_1)
 * body: 0043cf04-0043cf32
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_034(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_034(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (*(int *)(iVar2 + 100) == *(int *)(*(int *)(param_1 + 0x18) + 0x34)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 100) >> 8),1);
    }
  }
  return 0;
}


