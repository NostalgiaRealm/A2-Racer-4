
/* ==== TComponent.dyn_fff1 @ 0041410c ==== 
 * signature: undefined TComponent.dyn_fff1(void)
 * body: 0041410c-00414131
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TComponent_dyn_fff1(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x3c))(param_2,param_1);
    return 1;
  }
  return 0;
}


