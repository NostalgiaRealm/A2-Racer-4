
/* ==== FUN_0046cbd0 @ 0046cbd0 ==== 
 * signature: undefined __register FUN_0046cbd0(void)
 * body: 0046cbd0-0046ccb7
 */

void FUN_0046cbd0(void)

{
  DWORD DVar1;
  uint uVar2;
  int in_stack_00000000;
  int *in_stack_00000004;
  char *in_stack_00000008;
  VARIANTARG local_34 [2];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  uint local_8;
  
  local_c = (uint)(byte)in_stack_00000008[1];
  for (uVar2 = local_c; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  local_14 = &stack0xffffffc0;
  local_8 = (uint)(byte)in_stack_00000008[2];
  for (uVar2 = local_8; uVar2 != 0; uVar2 = uVar2 - 1) {
  }
  if (*in_stack_00000008 == '\x04') {
    local_8 = local_8 + 1;
  }
  local_10 = &stack0xffffffc0;
  FUN_0046cbc0((undefined4 *)local_34);
  DVar1 = (**(code **)(*in_stack_00000004 + 0x18))();
  if (DVar1 != 0) {
    FUN_0046cae0(DVar1,local_34,in_stack_00000000,(char)in_stack_00000004);
    return;
  }
  return;
}


