
/* ==== FUN_00430380 @ 00430380 ==== 
 * signature: undefined FUN_00430380(void)
 * body: 00430380-004303a2
 */

void FUN_00430380(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TButton_get_Action((int)param_1);
  if (param_2 == iVar1) {
    FUN_00403178(param_1,param_2,0);
  }
  return;
}


