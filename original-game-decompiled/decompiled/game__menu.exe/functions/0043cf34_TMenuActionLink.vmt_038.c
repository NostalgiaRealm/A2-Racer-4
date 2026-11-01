
/* ==== TMenuActionLink.vmt_038 @ 0043cf34 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_038(int param_1)
 * body: 0043cf34-0043cf64
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_038(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_vmt_038(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
    if (*(short *)(iVar2 + 0x68) == *(short *)(*(int *)(param_1 + 0x18) + 0x54)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),*(short *)(iVar2 + 0x68)) >> 8),1
                     );
    }
  }
  return 0;
}


