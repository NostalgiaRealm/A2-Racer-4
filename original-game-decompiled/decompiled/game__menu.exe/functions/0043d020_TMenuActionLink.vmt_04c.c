
/* ==== TMenuActionLink.vmt_04c @ 0043d020 ==== 
 * signature: undefined TMenuActionLink.vmt_04c(void)
 * body: 0043d020-0043d039
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[6] + 0x48) = param_2;
  }
  return;
}


