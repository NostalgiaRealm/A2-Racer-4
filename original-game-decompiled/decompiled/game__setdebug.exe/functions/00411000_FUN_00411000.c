
/* ==== FUN_00411000 @ 00411000 ==== 
 * signature: undefined __register FUN_00411000(void)
 * body: 00411000-00411062
 */

void FUN_00411000(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  pcStack_1c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_1c;
  local_c = *(undefined4 *)(in_stack_00000004 + -4);
  local_8 = 6;
  puVar3 = &local_c;
  uVar2 = 0;
  FUN_00405298((undefined4 *)PTR_PTR_00446bf4,(int *)&local_10);
  uVar1 = FUN_0040a974((int)&DAT_0040d728,'\x01',local_10,uVar2,puVar3);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  pcStack_1c = FUN_0041106a;
  FUN_004039b8((int *)&local_10);
  return;
}


