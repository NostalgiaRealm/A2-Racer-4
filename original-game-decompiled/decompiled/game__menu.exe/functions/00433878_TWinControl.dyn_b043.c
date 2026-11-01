
/* ==== TWinControl.dyn_b043 @ 00433878 ==== 
 * signature: undefined __register TWinControl.dyn_b043(int * param_1, int param_2)
 * body: 00433878-004338d3
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b043(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int aiStack_14 [2];
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_14);
  cVar1 = FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 4)
                                       ),(int)*(short *)(param_2 + 6));
  if (cVar1 == '\0') {
    if (param_1[9] != 0) {
      uVar2 = FUN_0042f720(param_1[9],0xb043,*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


