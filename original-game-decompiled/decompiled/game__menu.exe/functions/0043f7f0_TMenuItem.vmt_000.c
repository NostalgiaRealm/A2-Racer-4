
/* ==== TMenuItem.vmt_000 @ 0043f7f0 ==== 
 * signature: undefined __register TMenuItem.vmt_000(int * param_1, int * param_2)
 * body: 0043f7f0-0043f867
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_000(param_1,param_2);
  }
  else {
    FUN_00439d30(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x2d)));
    FUN_00439d88(param_2,param_1[0x12]);
    THintAction_set_Hint(param_2,(uint *)param_1[0x13]);
    FUN_00439e48(param_2,param_1[0xd]);
    FUN_00439c70(param_2,(uint *)param_1[9]);
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x32)));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}


