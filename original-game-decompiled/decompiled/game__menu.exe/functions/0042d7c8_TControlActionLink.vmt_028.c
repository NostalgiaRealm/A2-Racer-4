
/* ==== TControlActionLink.vmt_028 @ 0042d7c8 ==== 
 * signature: undefined TControlActionLink.vmt_028(void)
 * body: 0042d7c8-0042d7fa
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TControlActionLink_vmt_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_028(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (cVar1 == *(char *)(iVar2 + 0x59)) {
      return 1;
    }
  }
  return 0;
}


