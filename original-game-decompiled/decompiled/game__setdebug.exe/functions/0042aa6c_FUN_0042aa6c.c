
/* ==== FUN_0042aa6c @ 0042aa6c ==== 
 * signature: undefined __register FUN_0042aa6c(int param_1, short param_2)
 * body: 0042aa6c-0042aac4
 */

void FUN_0042aa6c(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = TButton_get_TabOrder(param_1);
  iVar3 = (int)(short)iVar3;
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x16c);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = (short)iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_0040ef14(piVar1,iVar3);
      FUN_0040f0a0(*(int **)(*(int *)(param_1 + 0x24) + 0x16c),(int)param_2,param_1);
    }
  }
  return;
}


