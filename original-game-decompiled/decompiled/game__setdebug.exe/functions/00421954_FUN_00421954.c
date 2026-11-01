
/* ==== FUN_00421954 @ 00421954 ==== 
 * signature: undefined4 __register FUN_00421954(void)
 * body: 00421954-00421a0b
 */

undefined4 FUN_00421954(void)

{
  HANDLE pvVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_00446624 + 0x14c) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_00446624 + 0x15c));
  uVar2 = GetWindowLongA(in_stack_00000004,-0x10);
  if ((uVar2 & 0x40000000) != 0) {
    LVar3 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar3 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_0044774a,DAT_00446624);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_00447748,DAT_00446624);
  pvVar1 = DAT_00446624;
  DAT_00446624 = (HANDLE)0x0;
  uVar4 = (**(code **)((int)pvVar1 + 0x15c))();
  return uVar4;
}


