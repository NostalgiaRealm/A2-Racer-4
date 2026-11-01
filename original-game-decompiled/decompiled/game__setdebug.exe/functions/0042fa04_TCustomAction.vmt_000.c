
/* ==== TCustomAction.vmt_000 @ 0042fa04 ==== 
 * signature: undefined TCustomAction.vmt_000(void)
 * body: 0042fa04-0042fa7d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomAction_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var;
  undefined4 extraout_EDX_01;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    FUN_0042fa80(param_2,(uint *)param_1[0x15]);
    FUN_0042fae8(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x16]));
    FUN_0042fb40(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x59)));
    FUN_0042fb98(param_2,param_1[0x17]);
    THintAction_set_Hint(param_2,(uint *)param_1[0x18]);
    FUN_0042fc58(param_2,param_1[0x19]);
    FUN_0042fcb0(param_2,CONCAT22(extraout_var,(short)param_1[0x1a]));
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x6a)));
  }
  return;
}


