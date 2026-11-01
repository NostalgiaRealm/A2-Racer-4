
/* ==== TIntegerList.vmt_010 @ 0045ea64 ==== 
 * signature: undefined TIntegerList.vmt_010(void)
 * body: 0045ea64-0045eab7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIntegerList_vmt_010(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_0045eb28(param_1);
  FUN_0045e380(param_2,uVar1);
  uVar2 = FUN_0045eb28(param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar3 = 0;
    do {
      uVar1 = FUN_0045e990(param_1,iVar3);
      FUN_0045e380(param_2,uVar1);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


