
/* ==== TDataModule.vmt_02c @ 0044a894 ==== 
 * signature: undefined __register TDataModule.vmt_02c(int * param_1, char param_2, undefined4 param_3)
 * body: 0044a894-0044a98f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataModule_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  byte **ppbVar4;
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
    puStack_130 = (undefined1 *)0x44a8b2;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  pcStack_134 = thunk_FUN_004036bc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x44a8d4;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  pcStack_140 = thunk_FUN_004036bc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,0,param_3);
  pcVar2 = (code *)FUN_00402ee0(local_8);
  if ((pcVar2 != FUN_00443e30) && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
    cVar1 = FUN_00410020(local_8,FUN_00443e30);
    if (cVar1 == '\0') {
      FUN_00402ee4(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      uVar3 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab7f0,(int *)&local_118);
      uVar3 = FUN_0040b614((int)&DAT_0040e7e8,'\x01',local_118,uVar3,ppbVar4);
      FUN_004036f4(uVar3);
    }
    if ((char)local_8[0x12] != '\0') {
      (**(code **)(*local_8 + 0x30))();
    }
  }
  *in_FS_OFFSET = 0;
  pcStack_140 = FUN_0044a997;
  uStack_144 = 0x44a98f;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


