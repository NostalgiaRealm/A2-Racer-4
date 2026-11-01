
/* ==== TWinControlWrapper.dyn_b00a @ 00465388 ==== 
 * signature: undefined __register TWinControlWrapper.dyn_b00a(int * param_1, int param_2)
 * body: 00465388-004653a9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControlWrapper_dyn_b00a(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x94))
                    (param_1,(int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10));
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}


