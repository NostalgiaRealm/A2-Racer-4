
/* ==== TControl.vmt_000 @ 00430484 ==== 
 * signature: undefined __register TControl.vmt_000(int * param_1, int * param_2)
 * body: 00430484-0043051c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  uint *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    FUN_00439d30(param_2,uVar1);
    THintAction_set_Hint(param_2,(uint *)param_1[0x1c]);
    TGroupBox_get_Caption((int)param_1,(int *)&local_8);
    FUN_00439c70(param_2,local_8);
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x47)));
    (**(code **)(*param_2 + 0x34))();
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00430524;
  pcStack_1c = (code *)0x43051c;
  FUN_00403c5c((int *)&local_8);
  return;
}


