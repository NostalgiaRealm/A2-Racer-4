
/* ==== TCustomTabControl.dyn_bc4e @ 0048539c ==== 
 * signature: undefined __register TCustomTabControl.dyn_bc4e(int * param_1, int param_2, undefined4 param_3)
 * body: 0048539c-004853de
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_bc4e(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 8) + 8);
  if (iVar1 == -0x228) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    cVar2 = FUN_00403178(param_1,param_2,param_3);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  else if (iVar1 == -0x227) {
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


