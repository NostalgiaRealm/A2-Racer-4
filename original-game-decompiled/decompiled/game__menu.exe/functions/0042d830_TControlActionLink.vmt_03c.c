
/* ==== TControlActionLink.vmt_03c @ 0042d830 ==== 
 * signature: undefined4 __register TControlActionLink.vmt_03c(int param_1)
 * body: 0042d830-0042d85e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TControlActionLink_vmt_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x47)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


