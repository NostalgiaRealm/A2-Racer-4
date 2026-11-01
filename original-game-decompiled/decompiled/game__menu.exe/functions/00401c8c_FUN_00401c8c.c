
/* ==== FUN_00401c8c @ 00401c8c ==== 
 * signature: undefined __register FUN_00401c8c(int * param_1)
 * body: 00401c8c-00401cec
 */

void FUN_00401c8c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == DAT_004ac484) {
    DAT_004ac484 = (int *)param_1[1];
  }
  piVar1 = (int *)param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0x1001) {
    if (param_1 != piVar1) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      *(int **)(DAT_004ac490 + -0xc + (iVar2 >> 2) * 4) = piVar1;
      iVar2 = *param_1;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      return;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(undefined4 *)(DAT_004ac490 + -0xc + (iVar2 >> 2) * 4) = 0;
  }
  else {
    iVar2 = *param_1;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  return;
}


