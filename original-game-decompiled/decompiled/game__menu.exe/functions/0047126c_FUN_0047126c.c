
/* ==== FUN_0047126c @ 0047126c ==== 
 * signature: undefined4 __register FUN_0047126c(void)
 * body: 0047126c-00471304
 */

undefined4 FUN_0047126c(void)

{
  int iVar1;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  byte in_stack_00000010;
  
  if ((in_stack_00000010 & 4) == 0) {
    iVar1 = FUN_00402ac8();
    *in_stack_00000008 = iVar1;
    iVar1 = FUN_00402ac8();
    in_stack_00000008[1] = iVar1;
  }
  else {
    iVar1 = MulDiv(*in_stack_00000008,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    *in_stack_0000000c = (float)iVar1;
    iVar1 = MulDiv(in_stack_00000008[1],*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    in_stack_0000000c[1] = (float)iVar1;
  }
  return 0;
}


