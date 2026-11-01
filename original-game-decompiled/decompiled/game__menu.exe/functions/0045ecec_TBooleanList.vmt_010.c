
/* ==== TBooleanList.vmt_010 @ 0045ecec ==== 
 * signature: undefined TBooleanList.vmt_010(void)
 * body: 0045ecec-0045ed3f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBooleanList_vmt_010(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_0045edb0(param_1);
  FUN_0045e380(param_2,uVar1);
  uVar2 = FUN_0045edb0(param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar3 = 0;
    do {
      FUN_0045ec18(param_1,iVar3);
      FUN_0045e3a8(param_2);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


