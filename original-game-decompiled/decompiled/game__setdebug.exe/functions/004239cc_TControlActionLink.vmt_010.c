
/* ==== TControlActionLink.vmt_010 @ 004239cc ==== 
 * signature: undefined TControlActionLink.vmt_010(void)
 * body: 004239cc-004239f6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0x108) = param_4;
    *(undefined4 *)(iVar1 + 0x10c) = param_5;
  }
  return;
}


