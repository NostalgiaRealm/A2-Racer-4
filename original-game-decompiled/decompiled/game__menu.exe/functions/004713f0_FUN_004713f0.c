
/* ==== FUN_004713f0 @ 004713f0 ==== 
 * signature: undefined4 __register FUN_004713f0(void)
 * body: 004713f0-00471486
 */

undefined4 FUN_004713f0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  LPRECT in_stack_00000014;
  int in_stack_00000018;
  undefined4 local_14 [4];
  
  bVar4 = 0;
  if (in_stack_00000008 != (int *)0x0) {
    *in_stack_00000008 = 0;
  }
  if (in_stack_0000000c != (int *)0x0) {
    *in_stack_0000000c = 0;
  }
  piVar2 = in_stack_00000004;
  if (in_stack_00000004 != (int *)0x0) {
    piVar2 = in_stack_00000004 + 0x91;
  }
  FUN_00405878(in_stack_00000008,piVar2);
  FUN_00405860(in_stack_0000000c);
  FUN_0042e13c((int)in_stack_00000004,local_14);
  puVar3 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000010 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    in_stack_00000010 = in_stack_00000010 + (uint)bVar4 * -2 + 1;
  }
  SetRect(in_stack_00000014,0,0,0x7fff,0x7fff);
  *(undefined4 *)(in_stack_00000018 + 4) = 0;
  iVar1 = thunk_FUN_00434838(in_stack_00000004);
  *(int *)(in_stack_00000018 + 8) = iVar1;
  *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
  return 0;
}


