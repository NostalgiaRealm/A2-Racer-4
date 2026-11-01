
/* ==== TBooleanList.vmt_014 @ 0045ed40 ==== 
 * signature: undefined TBooleanList.vmt_014(void)
 * body: 0045ed40-0045ed8d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBooleanList_vmt_014(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  int iVar2;
  undefined1 uStack_9;
  int iStack_8;
  
  FUN_0045eda0(param_1);
  uVar1 = FUN_0045e350(param_2,&iStack_8);
  if (SBORROW4(iStack_8,1)) {
    thunk_FUN_00402808(uVar1);
  }
  iVar2 = iStack_8;
  if (-1 < iStack_8 + -1) {
    do {
      FUN_0045e370(param_2,&uStack_9);
      FUN_0045ed90(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),uStack_9));
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


