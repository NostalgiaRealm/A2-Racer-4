
/* ==== FUN_0044295c @ 0044295c ==== 
 * signature: undefined __register FUN_0044295c(int * param_1, uint * param_2)
 * body: 0044295c-004429e0;004429e8-004429ec
 */

void FUN_0044295c(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x442970;
  FUN_00403d48((uint *)param_1[0x11],param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x44297c;
    FUN_00403a0c(param_1 + 0x11,param_2);
    if (*(short *)((int)param_1 + 0xd2) == 0) {
      puStack_14 = (undefined1 *)0x4429a4;
      piVar1 = THintAction_vmt_02c((int *)&PTR_TCustomAction_vmt_000_0041fd5c,'\x01',param_1);
      puStack_14 = (undefined1 *)0x4429b1;
      THintAction_set_Hint(piVar1,param_2);
      pcStack_18 = thunk_FUN_00403434;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x4429e8;
      pcStack_18 = (code *)0x4429e0;
      FUN_00402d14(piVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x442994;
    (*(code *)param_1[0x34])(param_1[0x35],param_1);
  }
  return;
}


