
/* ==== FUN_004474c4 @ 004474c4 ==== 
 * signature: undefined4 __register FUN_004474c4(int * param_1)
 * body: 004474c4-00447520
 */

undefined4 FUN_004474c4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_004349e0(param_1);
  iVar1 = (**(code **)PTR_DAT_004ab7ec)();
  iVar2 = FUN_0044b150(DAT_004ac7d8);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_0044b13c(DAT_004ac7d8,iVar5);
      if (iVar1 == *(int *)(iVar3 + 4)) {
        uVar4 = FUN_0044b13c(DAT_004ac7d8,iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


