
/* ==== FUN_0044dae8 @ 0044dae8 ==== 
 * signature: undefined __register FUN_0044dae8(int * param_1, uint * param_2)
 * body: 0044dae8-0044db6c;0044db74-0044db78
 */

void FUN_0044dae8(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x44dafc;
  FUN_00403fec((uint *)param_1[0x11],param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x44db08;
    FUN_00403cb0(param_1 + 0x11,param_2);
    if (*(short *)((int)param_1 + 0xd2) == 0) {
      puStack_14 = (undefined1 *)0x44db30;
      piVar1 = THintAction_vmt_02c((int *)&PTR_TCustomAction_vmt_000_004298dc,'\x01',param_1);
      puStack_14 = (undefined1 *)0x44db3d;
      THintAction_set_Hint(piVar1,param_2);
      pcStack_18 = thunk_FUN_004036bc;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x44db74;
      pcStack_18 = (code *)0x44db6c;
      FUN_00402f9c(piVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x44db20;
    (*(code *)param_1[0x34])(param_1[0x35],param_1);
  }
  return;
}


