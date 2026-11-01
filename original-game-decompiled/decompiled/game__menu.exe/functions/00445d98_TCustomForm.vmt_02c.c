
/* ==== TCustomForm.vmt_02c @ 00445d98 ==== 
 * signature: undefined __register TCustomForm.vmt_02c(int * param_1, char param_2, undefined4 param_3)
 * body: 00445d98-00445ea3;00445ec2-00445edb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffea4;
  byte **ppbVar4;
  undefined4 uStack_154;
  code *pcStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  code *pcStack_134;
  undefined1 *puStack_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte *local_118;
  byte local_114 [256];
  byte *local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_118 = (byte *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_130 = (undefined1 *)0x445db6;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  pcStack_134 = thunk_FUN_004036bc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x445dd8;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  pcStack_140 = thunk_FUN_004036bc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  uStack_148 = 0;
  puStack_14c = (undefined1 *)0x445df7;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xcc))(local_8,0,param_3);
  puStack_14c = (undefined1 *)0x445dff;
  ppuVar2 = (undefined **)FUN_00402ee0(local_8);
  if ((ppuVar2 != &PTR_TWinControl_vmt_000_00442fd4) && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 1;
    pcStack_150 = thunk_FUN_004036bc;
    uStack_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_154;
    puStack_14c = &stack0xfffffffc;
    cVar1 = FUN_00410020(local_8,&PTR_TWinControl_vmt_000_00442fd4);
    if (cVar1 == '\0') {
      FUN_00402ee4(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      in_stack_fffffea4 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab7f0,(int *)&local_118);
      uVar3 = FUN_0040b614((int)&DAT_0040e7e8,'\x01',local_118,in_stack_fffffea4,ppbVar4);
      FUN_004036f4(uVar3);
    }
    *in_FS_OFFSET = in_stack_fffffea4;
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_148;
  pcStack_140 = FUN_00445ee3;
  uStack_144 = 0x445edb;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


