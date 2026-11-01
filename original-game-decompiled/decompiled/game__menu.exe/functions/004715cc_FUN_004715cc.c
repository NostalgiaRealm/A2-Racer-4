
/* ==== FUN_004715cc @ 004715cc ==== 
 * signature: HRESULT __register FUN_004715cc(void)
 * body: 004715cc-00471603
 */

HRESULT FUN_004715cc(void)

{
  int *piVar1;
  HRESULT HVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  HOLEMENU in_stack_0000000c;
  HWND in_stack_00000010;
  
  piVar1 = (int *)FUN_0046fcd4(in_stack_00000004);
  HVar2 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_0044104c(piVar1,in_stack_00000008);
    HVar2 = OleSetMenuDescriptor
                      (in_stack_0000000c,(HWND)piVar1[0xb],in_stack_00000010,(LPOLEINPLACEFRAME)0x0,
                       (LPOLEINPLACEACTIVEOBJECT)0x0);
  }
  return HVar2;
}


