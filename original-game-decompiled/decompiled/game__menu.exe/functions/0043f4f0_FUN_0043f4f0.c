
/* ==== FUN_0043f4f0 @ 0043f4f0 ==== 
 * signature: undefined __register FUN_0043f4f0(int param_1)
 * body: 0043f4f0-0043f51b
 */

void FUN_0043f4f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0043f018(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_0043f028(param_1,iVar3);
      (**(code **)(*piVar2 + 0x3c))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


