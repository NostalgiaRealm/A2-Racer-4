
/* ==== TMenuItem.vmt_000 @ 00435110 ==== 
 * signature: undefined __register TMenuItem.vmt_000(int * param_1, int * param_2)
 * body: 00435110-00435187
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    FUN_0042fb40(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x2d)));
    FUN_0042fb98(param_2,param_1[0x12]);
    THintAction_set_Hint(param_2,(uint *)param_1[0x13]);
    FUN_0042fc58(param_2,param_1[0xd]);
    FUN_0042fa80(param_2,(uint *)param_1[9]);
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x32)));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}


