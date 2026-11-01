
/* ==== TWinControl.dyn_ffb8 @ 00434da0 ==== 
 * signature: undefined __register TWinControl.dyn_ffb8(int param_1, int * param_2)
 * body: 00434da0-00434df4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffb8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x16c) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x16c) + 8), -1 < iVar2 + -1)) {
    local_14 = 0;
    do {
      piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x16c),local_14);
      FUN_00410104(param_2,(int)piVar1);
      FUN_00403178(piVar1,param_2,extraout_ECX);
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


