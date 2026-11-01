
/* ==== TMenuActionLink.vmt_050 @ 0043295c ==== 
 * signature: undefined TMenuActionLink.vmt_050(void)
 * body: 0043295c-0043297c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403a0c((int *)(param_1[6] + 0x4c),param_2);
  }
  return;
}


