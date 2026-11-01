
/* ==== TDataList.vmt_00c @ 0045e5b4 ==== 
 * signature: undefined TDataList.vmt_00c(void)
 * body: 0045e5b4-0045e63c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataList_vmt_00c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iStack_c;
  
  TDataObject_vmt_00c(param_1,param_2);
  FUN_0045e860((int)param_1);
  iVar1 = FUN_0040312c(param_2,(int)&PTR_TDataList_vmt_000_0045e240);
  uVar2 = FUN_0045e8a0(iVar1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iStack_c = 0;
    do {
      piVar3 = (int *)(**(code **)(param_1[2] + 4))(param_1[2],1);
      iVar1 = FUN_0040312c(param_2,(int)&PTR_TDataList_vmt_000_0045e240);
      uVar4 = FUN_0045e640(iVar1,iStack_c);
      (**(code **)(*piVar3 + 0xc))(piVar3,uVar4);
      FUN_0045e7e4((int)param_1,piVar3);
      iStack_c = iStack_c + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


