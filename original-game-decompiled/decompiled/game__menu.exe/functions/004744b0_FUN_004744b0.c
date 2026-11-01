
/* ==== FUN_004744b0 @ 004744b0 ==== 
 * signature: int * __register FUN_004744b0(int param_1, int param_2, int param_3)
 * body: 004744b0-00474515
 */

int * FUN_004744b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 4) + 8);
  iVar3 = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 4));
  }
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 4),iVar3);
      if ((param_2 == piVar2[10]) && (param_3 == piVar2[9])) {
        return piVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  piVar2 = FUN_00474310((int *)&PTR_TCustomImageList_vmt_000_004741ec,'\x01',param_2,param_3);
  FUN_00410104(*(int **)(param_1 + 4),(int)piVar2);
  return piVar2;
}


