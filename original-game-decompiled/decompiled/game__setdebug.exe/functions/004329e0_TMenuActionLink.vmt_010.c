
/* ==== TMenuActionLink.vmt_010 @ 004329e0 ==== 
 * signature: undefined TMenuActionLink.vmt_010(void)
 * body: 004329e0-00432a0a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0x80) = param_4;
    *(undefined4 *)(iVar1 + 0x84) = param_5;
  }
  return;
}


