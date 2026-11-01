
/* ==== TDataList.vmt_010 @ 0045e738 ==== 
 * signature: undefined TDataList.vmt_010(void)
 * body: 0045e738-0045e786
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataList_vmt_010(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0045e8a0(param_1);
  uVar2 = FUN_0045e380(param_2,iVar1);
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_0045e640(param_1,iVar4);
      (**(code **)(*piVar3 + 0x10))(piVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


