
/* ==== TMenuActionLink.vmt_030 @ 0043ced0 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_030(int param_1)
 * body: 0043ced0-0043cf03
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_vmt_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    puVar3 = FUN_00403fec(*(uint **)(*(int *)(param_1 + 0x18) + 0x4c),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


