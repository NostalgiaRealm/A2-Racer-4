
/* ==== FUN_0041b0d0 @ 0041b0d0 ==== 
 * signature: undefined __register FUN_0041b0d0(int * param_1, int param_2)
 * body: 0041b0d0-0041b119
 */

void FUN_0041b0d0(int *param_1,int param_2)

{
  VARIANTARG *pVVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[2] + -1;
  if (-1 < iVar3) {
    do {
      pVVar1 = (VARIANTARG *)FUN_004102b0(param_1,iVar3);
      uVar2 = thunk_FUN_004031ac(*(int *)&pVVar1->n1,param_2);
      if ((char)uVar2 != '\0') {
        FUN_00404890(pVVar1,"\x0e\vTFileFormat\x10");
        FUN_00410150(param_1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}


