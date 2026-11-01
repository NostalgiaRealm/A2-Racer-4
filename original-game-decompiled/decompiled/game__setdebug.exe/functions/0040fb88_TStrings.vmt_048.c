
/* ==== TStrings.vmt_048 @ 0040fb88 ==== 
 * signature: undefined TStrings.vmt_048(void)
 * body: 0040fb88-0040fc3d
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
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (code *)0x40fbb6;
  piStack_8 = param_1;
  FUN_0040f97c(param_1);
  pcStack_34 = thunk_FUN_00403434;
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
  pcStack_30 = FUN_0040fc45;
  pcStack_34 = (code *)0x40fc3d;
  FUN_0040fa38(piStack_8);
  return;
}


