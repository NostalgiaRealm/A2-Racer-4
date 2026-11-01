
/* ==== TIntegerList.vmt_014 @ 0045eab8 ==== 
 * signature: undefined TIntegerList.vmt_014(void)
 * body: 0045eab8-0045eb05
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIntegerList_vmt_014(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_c;
  int iStack_8;
  
  FUN_0045eb18(param_1);
  uVar1 = FUN_0045e350(param_2,&iStack_8);
  if (SBORROW4(iStack_8,1)) {
    thunk_FUN_00402808(uVar1);
  }
  iVar2 = iStack_8;
  if (-1 < iStack_8 + -1) {
    do {
      FUN_0045e350(param_2,&iStack_c);
      FUN_0045eb08(param_1,iStack_c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


