
/* ==== FUN_00470274 @ 00470274 ==== 
 * signature: undefined FUN_00470274(void)
 * body: 00470274-004702dc
 */

void FUN_00470274(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[0x8b];
  if (((iVar3 != 0) &&
      (uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_vmt_000_0041702c), (char)uVar1 != '\0')) &&
     (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_004102b0((undefined4 *)param_1[0x8b],iVar4);
      if (param_2 == piVar2) {
        if (param_2[4] == 0) {
          return;
        }
        FUN_00470644(param_1,*(int *)(*(int *)(param_1[0x7c] + 0x40) + iVar4 * 4),param_2);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


