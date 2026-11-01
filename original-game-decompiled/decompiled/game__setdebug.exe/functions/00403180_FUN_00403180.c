
/* ==== FUN_00403180 @ 00403180 ==== 
 * signature: undefined4 __register FUN_00403180(void)
 * body: 00403180-00403282;004032a3-004032a8
 */

undefined4 FUN_00403180(void)

{
  DWORD DVar1;
  int iVar2;
  LONG LVar3;
  PEXCEPTION_RECORD pEVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  ULONG_PTR in_stack_0000000c;
  
  if ((in_stack_00000004->ExceptionFlags & 6) == 0) {
    pEVar4 = in_stack_00000004;
    if (in_stack_00000004->ExceptionCode != 0xeedfade) {
      FUN_00402c50();
      if (DAT_0044700c == (code *)0x0) {
        return 1;
      }
      iVar2 = (*DAT_0044700c)();
      if (iVar2 == 0) {
        return 1;
      }
      pEVar4 = in_stack_00000004;
      if (((in_stack_00000004->ExceptionCode != 0xeefface) &&
          (FUN_004030a0(iVar2,in_stack_0000000c), pEVar4 = in_stack_00000004, DAT_0044600c != 0)) &&
         (DAT_00446008 == '\0')) {
        LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004);
        if (LVar3 == 0) {
          return 1;
        }
        goto LAB_00403234;
      }
    }
    in_stack_00000004 = pEVar4;
    if (((DAT_0044600c < 2) || (DAT_00446008 != '\0')) ||
       (LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004), LVar3 != 0)) {
LAB_00403234:
      in_stack_00000004->ExceptionFlags = in_stack_00000004->ExceptionFlags | 2;
      RtlUnwind(in_stack_00000008,(PVOID)0x403257,in_stack_00000004,(PVOID)0x0);
      pvVar5 = FUN_00405fa4();
      *(undefined1 **)pvVar5 = &stack0xffffffdc;
      DVar1 = in_stack_00000008->Dr0;
      in_stack_00000008->Dr0 = (DWORD)thunk_FUN_00403434;
      FUN_004030e8();
                    /* WARNING: Could not recover jumptable at 0x00403281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(DVar1 + 5))();
      return uVar6;
    }
  }
  return 1;
}


