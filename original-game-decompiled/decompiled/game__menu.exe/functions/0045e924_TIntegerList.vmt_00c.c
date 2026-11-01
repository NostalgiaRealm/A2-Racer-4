
/* ==== TIntegerList.vmt_00c @ 0045e924 ==== 
 * signature: undefined TIntegerList.vmt_00c(void)
 * body: 0045e924-0045e98e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIntegerList_vmt_00c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  TDataObject_vmt_00c(param_1,param_2);
  FUN_0045eb18((int)param_1);
  iVar1 = FUN_0040312c(param_2,(int)&PTR_TIntegerList_vmt_000_0045e2b4);
  uVar2 = FUN_0045eb28(iVar1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar1 = 0;
    do {
      iVar3 = FUN_0040312c(param_2,(int)&PTR_TIntegerList_vmt_000_0045e2b4);
      iVar3 = FUN_0045e990(iVar3,iVar1);
      FUN_0045eb08((int)param_1,iVar3);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


