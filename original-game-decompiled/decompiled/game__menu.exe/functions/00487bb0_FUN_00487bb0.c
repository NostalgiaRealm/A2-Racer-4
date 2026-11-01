
/* ==== FUN_00487bb0 @ 00487bb0 ==== 
 * signature: undefined __register FUN_00487bb0(void)
 * body: 00487bb0-00487c35
 */

void FUN_00487bb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 *in_stack_00000004;
  char *in_stack_00000008;
  int *in_stack_00000010;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_8;
  
  bVar5 = 0;
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"AddDriverToStrings",0);
  if (in_stack_00000004 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0040277c(0x10);
    puVar4 = puVar2;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *in_stack_00000004;
      in_stack_00000004 = in_stack_00000004 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  FUN_00403e14(&local_8,in_stack_00000008);
  (**(code **)(*in_stack_00000010 + 0x38))(in_stack_00000010,local_8,puVar2);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00487c3d;
  pcStack_1c = (code *)0x487c35;
  FUN_00403c5c(&local_8);
  return;
}


