
/* ==== TWinControl.dyn_b043 @ 00429784 ==== 
 * signature: undefined __register TWinControl.dyn_b043(int * param_1, int param_2)
 * body: 00429784-004297df
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
  FUN_004069d4(*(undefined4 *)(param_2 + 8),aiStack_14);
  cVar1 = FUN_00402ef0(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 4)
                                       ),(int)*(short *)(param_2 + 6));
  if (cVar1 == '\0') {
    if (param_1[9] != 0) {
      uVar2 = FUN_00425780(param_1[9],0xb043,*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


