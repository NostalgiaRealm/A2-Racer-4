
/* ==== FUN_00410514 @ 00410514 ==== 
 * signature: undefined __register FUN_00410514(int param_1, int param_2, int param_3, undefined * param_4)
 * body: 00410514-00410594
 */

void FUN_00410514(int param_1,int param_2,int param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = param_2;
  do {
    uVar1 = *(undefined4 *)(param_1 + ((uint)(local_8 + param_3) >> 1) * 4);
    iVar4 = local_8;
    iVar5 = param_3;
    do {
      while (iVar3 = (*(code *)param_4)(*(undefined4 *)(param_1 + iVar4 * 4),uVar1), iVar3 < 0) {
        iVar4 = iVar4 + 1;
      }
      while (iVar3 = (*(code *)param_4)(*(undefined4 *)(param_1 + iVar5 * 4),uVar1), 0 < iVar3) {
        iVar5 = iVar5 + -1;
      }
      if (iVar4 <= iVar5) {
        uVar2 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar2;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      }
    } while (iVar4 <= iVar5);
    if (local_8 < iVar5) {
      FUN_00410514(param_1,local_8,iVar5,param_4);
    }
    local_8 = iVar4;
  } while (iVar4 < param_3);
  return;
}


