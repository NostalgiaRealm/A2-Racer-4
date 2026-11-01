
/* ==== TMenuActionLink.vmt_008 @ 0043cf98 ==== 
 * signature: undefined4 __register TMenuActionLink.vmt_008(int param_1)
 * body: 0043cf98-0043cfbe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TMenuActionLink_vmt_008(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = TBasicActionLink_vmt_008();
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x80),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x30))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


