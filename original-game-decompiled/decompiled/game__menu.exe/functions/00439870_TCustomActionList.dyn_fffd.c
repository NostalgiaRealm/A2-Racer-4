
/* ==== TCustomActionList.dyn_fffd @ 00439870 ==== 
 * signature: undefined TCustomActionList.dyn_fffd(void)
 * body: 00439870-004398b7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomActionList_dyn_fffd
               (int param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x24),iVar3);
      if (*(int *)(iVar1 + 4) == param_2) {
        (*param_4)(param_5,iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


