
/* ==== FUN_00407fac @ 00407fac ==== 
 * signature: undefined FUN_00407fac(void)
 * body: 00407fac-0040801e
 */

BOOL FUN_00407fac(void)

{
  BOOL BVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  LPCSTR in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  DWORD DStack_14;
  DWORD DStack_10;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if (in_stack_00000004 == (LPCSTR)0x0) {
    in_stack_00000004 = (LPCSTR)0x0;
  }
  BVar1 = GetDiskFreeSpaceA(in_stack_00000004,&DStack_8,&DStack_c,&DStack_10,&DStack_14);
  iVar2 = FUN_00405b44(DStack_8 * DStack_c,0,extraout_ECX,DStack_10);
  *in_stack_00000008 = iVar2;
  in_stack_00000008[1] = extraout_EDX;
  iVar2 = FUN_00405b44(DStack_8 * DStack_c,0,in_stack_00000008,DStack_14);
  *in_stack_0000000c = iVar2;
  in_stack_0000000c[1] = extraout_EDX_00;
  return BVar1;
}


