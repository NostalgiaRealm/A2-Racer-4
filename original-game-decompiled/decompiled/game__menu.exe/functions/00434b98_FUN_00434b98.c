
/* ==== FUN_00434b98 @ 00434b98 ==== 
 * signature: undefined __register FUN_00434b98(int param_1, short param_2)
 * body: 00434b98-00434bf0
 */

void FUN_00434b98(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = TGroupBox_get_TabOrder(param_1);
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
      FUN_00410150(piVar1,iVar3);
      FUN_0041032c(*(int **)(*(int *)(param_1 + 0x24) + 0x16c),(int)param_2,param_1);
    }
  }
  return;
}


