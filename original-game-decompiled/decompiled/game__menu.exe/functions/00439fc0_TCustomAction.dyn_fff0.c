
/* ==== TCustomAction.dyn_fff0 @ 00439fc0 ==== 
 * signature: undefined TCustomAction.dyn_fff0(void)
 * body: 00439fc0-00439fe2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TCustomAction_dyn_fff0(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x44))();
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    cVar1 = TContainedAction_dyn_fff0(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


