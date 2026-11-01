
/* ==== TMenuActionLink.vmt_028 @ 0043ce70 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_028(int param_1)
 * body: 0043ce70-0043ce9e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_028(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (*(char *)(iVar2 + 0x59) == *(char *)(*(int *)(param_1 + 0x18) + 0x2d)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


