
/* ==== FUN_00434838 @ 00434838 ==== 
 * signature: int __register FUN_00434838(int * param_1)
 * body: 00434836-00434852
 */

int FUN_00434838(int *param_1)

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


