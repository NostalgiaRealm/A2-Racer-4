
/* ==== FUN_00497f54 @ 00497f54 ==== 
 * signature: undefined __register FUN_00497f54(int param_1)
 * body: 00497f54-004980c7
 */

void FUN_00497f54(int param_1)

{
  undefined *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  puVar1 = PTR_DAT_004ab694;
  pcStack_2c = (code *)&stack0xfffffffc;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_24 = (uint *)0x0;
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 8),
               (int *)&local_c,0,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x308),local_c);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0xc),
               (int *)&local_10,extraout_ECX,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x310),local_10);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x10),
               (int *)&local_14,extraout_ECX_00,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x30c),local_14);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x14),
               (int *)&local_18,extraout_ECX_01,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x314),local_18);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x1c),
               (int *)&local_1c,extraout_ECX_02,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x31c),local_1c);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x18),
               (int *)&local_20,extraout_ECX_03,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 0x318),local_20);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x20),
               (int *)&local_24,extraout_ECX_04,(int)&stack0xfffffffc);
  TGroupBox_set_Caption(*(int *)(local_8 + 800),local_24);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_004980cf;
  pcStack_30 = (code *)0x4980c7;
  FUN_00403c80((int *)&local_24,7);
  return;
}


