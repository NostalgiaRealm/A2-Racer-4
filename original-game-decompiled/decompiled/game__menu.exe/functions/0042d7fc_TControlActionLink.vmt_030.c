
/* ==== TControlActionLink.vmt_030 @ 0042d7fc ==== 
 * signature: undefined4 __register TControlActionLink.vmt_030(int param_1)
 * body: 0042d7fc-0042d82f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TControlActionLink_vmt_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_vmt_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    puVar3 = FUN_00403fec(*(uint **)(*(int *)(param_1 + 0x18) + 0x70),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


