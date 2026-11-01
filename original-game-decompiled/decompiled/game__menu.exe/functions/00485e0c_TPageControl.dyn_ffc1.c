
/* ==== TPageControl.dyn_ffc1 @ 00485e0c ==== 
 * signature: undefined TPageControl.dyn_ffc1(void)
 * body: 00485e0c-00485e4e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_ffc1
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *param_5;
  uStack_c = param_5[1];
  uStack_8 = param_3;
  iVar1 = FUN_00485d98(param_1,param_2);
  *(bool *)param_4 = iVar1 == 0;
  TWinControl_dyn_ffc1(param_1,param_2,uStack_8,param_4,&uStack_10);
  return;
}


