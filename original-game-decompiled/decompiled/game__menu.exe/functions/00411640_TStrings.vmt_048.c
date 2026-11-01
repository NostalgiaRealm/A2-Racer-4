
/* ==== TStrings.vmt_048 @ 00411640 ==== 
 * signature: undefined TStrings.vmt_048(void)
 * body: 00411640-004116f5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_048(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  puStack_24 = &stack0xfffffffc;
  uStack_14 = 0;
  uStack_10 = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (code *)0x41166e;
  piStack_8 = param_1;
  FUN_00411434(param_1);
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  pcStack_30 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0xc))(piStack_8,param_2,&uStack_10);
  uStack_c = (**(code **)(*piStack_8 + 0x18))(piStack_8,param_2);
  (**(code **)(*piStack_8 + 0xc))(piStack_8,param_3,&uStack_14);
  (**(code **)(*piStack_8 + 0x20))(piStack_8,param_2,uStack_14);
  uVar1 = (**(code **)(*piStack_8 + 0x18))(piStack_8,param_3);
  (**(code **)(*piStack_8 + 0x24))(piStack_8,param_2,uVar1);
  (**(code **)(*piStack_8 + 0x20))(piStack_8,param_3,uStack_10);
  (**(code **)(*piStack_8 + 0x24))(piStack_8,param_3,uStack_c);
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_004116fd;
  pcStack_34 = (code *)0x4116f5;
  FUN_004114f0(piStack_8);
  return;
}


