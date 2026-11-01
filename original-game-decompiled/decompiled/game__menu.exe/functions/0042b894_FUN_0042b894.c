
/* ==== FUN_0042b894 @ 0042b894 ==== 
 * signature: undefined4 __register FUN_0042b894(void)
 * body: 0042b894-0042b94b
 */

undefined4 FUN_0042b894(void)

{
  HANDLE pvVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_004aa6f8 + 0x14c) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_004aa6f8 + 0x15c));
  uVar2 = GetWindowLongA(in_stack_00000004,-0x10);
  if ((uVar2 & 0x40000000) != 0) {
    LVar3 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar3 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_004ac75a,DAT_004aa6f8);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_004ac758,DAT_004aa6f8);
  pvVar1 = DAT_004aa6f8;
  DAT_004aa6f8 = (HANDLE)0x0;
  uVar4 = (**(code **)((int)pvVar1 + 0x15c))();
  return uVar4;
}


