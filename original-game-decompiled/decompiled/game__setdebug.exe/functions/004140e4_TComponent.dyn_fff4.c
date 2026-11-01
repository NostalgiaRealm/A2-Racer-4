
/* ==== TComponent.dyn_fff4 @ 004140e4 ==== 
 * signature: undefined TComponent.dyn_fff4(void)
 * body: 004140e4-00414109
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TComponent_dyn_fff4(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x40))(param_2,param_1);
    return 1;
  }
  return 0;
}


