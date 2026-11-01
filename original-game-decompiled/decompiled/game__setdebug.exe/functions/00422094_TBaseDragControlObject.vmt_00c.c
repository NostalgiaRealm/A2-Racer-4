
/* ==== TBaseDragControlObject.vmt_00c @ 00422094 ==== 
 * signature: undefined __register TBaseDragControlObject.vmt_00c(int param_1, int * param_2)
 * body: 00422094-004220bc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBaseDragControlObject_vmt_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TDragObject_vmt_00c(param_1,(int)param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TBaseDragControlObject_vmt_000_0041ff90);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x38) = param_2[0xe];
  }
  return;
}


