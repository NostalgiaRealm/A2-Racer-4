
/* ==== TControl.vmt_000 @ 004264e4 ==== 
 * signature: undefined __register TControl.vmt_000(int * param_1, int * param_2)
 * body: 004264e4-0042657c
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
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    FUN_0042fb40(param_2,uVar1);
    THintAction_set_Hint(param_2,(uint *)param_1[0x1c]);
    TLabel_get_Caption((int)param_1,(int *)&local_8);
    FUN_0042fa80(param_2,local_8);
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x47)));
    (**(code **)(*param_2 + 0x34))();
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00426584;
  pcStack_1c = (code *)0x42657c;
  FUN_004039b8((int *)&local_8);
  return;
}


