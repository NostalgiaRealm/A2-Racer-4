
/* ==== TBooleanList.vmt_00c @ 0045ebac ==== 
 * signature: undefined TBooleanList.vmt_00c(void)
 * body: 0045ebac-0045ec16
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBooleanList_vmt_00c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  TDataObject_vmt_00c(param_1,param_2);
  FUN_0045eda0((int)param_1);
  iVar1 = FUN_0040312c(param_2,(int)&DAT_0045e328);
  uVar2 = FUN_0045edb0(iVar1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar1 = 0;
    do {
      iVar3 = FUN_0040312c(param_2,(int)&DAT_0045e328);
      uVar4 = FUN_0045ec18(iVar3,iVar1);
      FUN_0045ed90((int)param_1,uVar4);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


