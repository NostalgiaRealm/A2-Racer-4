
/* ==== thunk_FUN_00434838 @ 00434834 ==== 
 * signature: int __register thunk_FUN_00434838(int * param_1)
 * body: 00434834-00434835
 * thunk to: FUN_00434838
 */

int thunk_FUN_00434838(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  do {
    piVar1 = param_1;
    param_1 = (int *)piVar1[9];
  } while ((int *)piVar1[9] != (int *)0x0);
  iVar2 = piVar1[0x59];
  if (iVar2 == 0) {
    iVar2 = FUN_004349e0(piVar1);
  }
  return iVar2;
}


