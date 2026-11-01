
/* ==== TCustomAction.vmt_000 @ 00439bf4 ==== 
 * signature: undefined TCustomAction.vmt_000(void)
 * body: 00439bf4-00439c6d
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
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    FUN_00439c70(param_2,(uint *)param_1[0x15]);
    FUN_00439cd8(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x16]));
    FUN_00439d30(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x59)));
    FUN_00439d88(param_2,param_1[0x17]);
    THintAction_set_Hint(param_2,(uint *)param_1[0x18]);
    FUN_00439e48(param_2,param_1[0x19]);
    FUN_00439ea0(param_2,CONCAT22(extraout_var,(short)param_1[0x1a]));
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x6a)));
  }
  return;
}


