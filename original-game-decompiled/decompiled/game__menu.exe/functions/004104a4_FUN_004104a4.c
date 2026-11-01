
/* ==== FUN_004104a4 @ 004104a4 ==== 
 * signature: undefined __register FUN_004104a4(int * param_1, int param_2)
 * body: 004104a4-00410513
 */

void FUN_004104a4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab7c0,param_2);
  }
  if (param_1[3] < param_2) {
    FUN_00410468(param_1,param_2);
  }
  iVar1 = param_1[2];
  if (iVar1 < param_2) {
    FUN_00402c30((undefined4 *)(param_1[1] + iVar1 * 4),(param_2 - iVar1) * 4,0);
  }
  else {
    iVar1 = iVar1 + -1;
    if (param_2 - iVar1 == 0 || param_2 < iVar1) {
      iVar2 = (param_2 - iVar1) + -1;
      do {
        FUN_00410150(param_1,iVar1);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  param_1[2] = param_2;
  return;
}


