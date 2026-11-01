
/* ==== TButtonActionLink.vmt_024 @ 0041f7b8 ==== 
 * signature: undefined TButtonActionLink.vmt_024(void)
 * body: 0041f7b8-0041f7ed
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TButtonActionLink_vmt_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_024(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xb4))();
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0042f24c);
    if (cVar1 == *(char *)(iVar2 + 0x58)) {
      return 1;
    }
  }
  return 0;
}


