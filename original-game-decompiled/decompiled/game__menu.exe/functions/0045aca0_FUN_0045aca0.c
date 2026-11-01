
/* ==== FUN_0045aca0 @ 0045aca0 ==== 
 * signature: undefined __register FUN_0045aca0(int param_1, int param_2)
 * body: 0045aca0-0045acf4
 */

void FUN_0045aca0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_00410f08(*(int *)(param_1 + 4));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00410f10(*(int *)(param_1 + 4),iVar3);
      piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_0045a3a8);
      if (piVar2[3] == param_2) {
        FUN_0045ad38(piVar2);
        return;
      }
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


