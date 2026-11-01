
/* ==== FUN_004344f8 @ 004344f8 ==== 
 * signature: undefined __register FUN_004344f8(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004344f8-0043453c
 */

void FUN_004344f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004317bc(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00431780(param_1,iVar3);
      FUN_00403178(piVar2,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


