
/* ==== FUN_00434e10 @ 00434e10 ==== 
 * signature: undefined __register FUN_00434e10(int param_1)
 * body: 00434e10-00434e3b
 */

void FUN_00434e10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00434938(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00434948(param_1,iVar3);
      (**(code **)(*piVar2 + 0x3c))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


