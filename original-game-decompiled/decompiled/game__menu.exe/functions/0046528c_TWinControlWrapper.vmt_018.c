
/* ==== TWinControlWrapper.vmt_018 @ 0046528c ==== 
 * signature: undefined TWinControlWrapper.vmt_018(void)
 * body: 0046528c-004652ee
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_018(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int iStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TControl_vmt_018(param_1,param_2);
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    FUN_00403f28(&iStack_8,(undefined4 *)"Wrapper",param_2);
    (**(code **)(*piVar2 + 0x18))(piVar2,iStack_8);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004652f6;
  pcStack_18 = (code *)0x4652ee;
  FUN_00403c5c(&iStack_8);
  return;
}


