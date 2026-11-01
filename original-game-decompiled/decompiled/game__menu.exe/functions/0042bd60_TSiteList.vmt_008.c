
/* ==== TSiteList.vmt_008 @ 0042bd60 ==== 
 * signature: undefined TSiteList.vmt_008(void)
 * body: 0042bd60-0042bd91
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSiteList_vmt_008(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_004102b0(param_1,iVar3);
      FUN_00402794(iVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  TList_vmt_008(param_1);
  return;
}


