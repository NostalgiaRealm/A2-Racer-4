
/* ==== FUN_005147d0 @ 005147d0 ==== 
 * signature: undefined __cdecl FUN_005147d0(int param_1)
 * body: 005147d0-00514872
 */

void __cdecl FUN_005147d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  uVar2 = param_1 * 4 + 8;
  if (DAT_0074c760 < uVar2) {
    piVar3 = FUN_0051e110(uVar2);
  }
  else {
    iVar4 = *(int *)(DAT_0074c770 + uVar2 * 4);
    piVar3 = *(int **)(DAT_0074c768 + iVar4 * 4);
    puVar1 = (undefined4 *)(DAT_0074c768 + iVar4 * 4);
    if (piVar3 == (int *)0x0) {
      piVar3 = FUN_0051e110(uVar2);
    }
    else {
      DAT_0074c78c = DAT_0074c78c + 1;
      *puVar1 = *(undefined4 *)*puVar1;
    }
    iVar4 = *(int *)(DAT_0074c76c + *(int *)(DAT_0074c770 + uVar2 * 4) * 4);
    if ((int)uVar2 < iVar4) {
      iVar4 = param_1 + (iVar4 - uVar2 >> 2);
      *piVar3 = iVar4;
      piVar3[iVar4 + 1] = 1;
      piVar3[1] = 0;
      return;
    }
  }
  *piVar3 = param_1;
  piVar3[param_1 + 1] = 1;
  piVar3[1] = 0;
  return;
}


