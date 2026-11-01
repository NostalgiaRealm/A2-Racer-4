
/* ==== FUN_0040ad4c @ 0040ad4c ==== 
 * signature: undefined __register FUN_0040ad4c(void)
 * body: 0040ad4c-0040af06
 */

void FUN_0040ad4c(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcStack_188;
  code *pcStack_184;
  undefined1 *puStack_180;
  byte *local_174;
  undefined4 local_170;
  undefined1 local_16c;
  int local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  byte *local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  int local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  CHAR local_129 [261];
  _MEMORY_BASIC_INFORMATION local_24;
  int local_8;
  
  puStack_180 = &stack0xfffffffc;
  local_174 = (byte *)0x0;
  local_150 = 0;
  local_158 = (byte *)0x0;
  local_154 = 0;
  local_8 = 0;
  pcStack_184 = thunk_FUN_00403434;
  pcStack_188 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_188;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_180 = &stack0xfffffffc;
    FUN_00405298((undefined4 *)PTR_PTR_00446da4,&local_8);
  }
  else {
    FUN_00405298((undefined4 *)PTR_PTR_00446c84,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&local_24,0x1c);
  if (local_24.State == 0x1000) {
    DVar3 = GetModuleFileNameA(local_24.AllocationBase,local_129,0x105);
    if (DVar3 != 0) {
      local_14c = *(undefined4 *)(iVar1 + 0xc);
      local_148 = 5;
      FUN_00403be8(&local_154,local_129,0x105);
      FUN_00407f28(local_154,&local_150);
      local_144 = local_150;
      local_140 = 0xb;
      local_13c = local_8;
      local_138 = 0xb;
      local_130 = 5;
      puVar5 = &local_14c;
      uVar4 = 3;
      local_134 = uVar2;
      FUN_00405298((undefined4 *)PTR_PTR_00446cdc,(int *)&local_158);
      FUN_0040a974((int)&DAT_00407584,'\x01',local_158,uVar4,puVar5);
      goto LAB_0040aed6;
    }
  }
  local_170 = *(undefined4 *)(iVar1 + 0xc);
  local_16c = 5;
  local_168 = local_8;
  local_164 = 0xb;
  local_15c = 5;
  puVar5 = &local_170;
  uVar4 = 2;
  local_160 = uVar2;
  FUN_00405298((undefined4 *)PTR_PTR_00446d30,(int *)&local_174);
  FUN_0040a974((int)&DAT_00407584,'\x01',local_174,uVar4,puVar5);
LAB_0040aed6:
  *in_FS_OFFSET = uVar4;
  pcStack_188 = FUN_0040af0e;
  FUN_004039b8((int *)&local_174);
  FUN_004039dc((int *)&local_158,3);
  FUN_004039b8(&local_8);
  return;
}


