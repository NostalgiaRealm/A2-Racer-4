
/* ==== FUN_0046f07c @ 0046f07c ==== 
 * signature: undefined4 __register FUN_0046f07c(void)
 * body: 0046f07c-0046f0d2
 */

undefined4 FUN_0046f07c(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  cVar1 = FUN_00403030(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\0') {
    cVar1 = IsEqualGUID();
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      FUN_00403030(in_stack_00000004,(int *)FUN_0046f0d4,in_stack_0000000c);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


