
/* ==== TBaseDragControlObject.vmt_00c @ 0042bfd4 ==== 
 * signature: undefined TBaseDragControlObject.vmt_00c(void)
 * body: 0042bfd4-0042bffc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBaseDragControlObject_vmt_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TDragObject_vmt_00c(param_1,(int)param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TBaseDragControlObject_vmt_000_00429b10);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x38) = param_2[0xe];
  }
  return;
}


