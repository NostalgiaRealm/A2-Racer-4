
/* ==== FUN_00403858 @ 00403858 ==== 
 * signature: undefined FUN_00403858(void)
 * body: 00403858-004038f3
 */

undefined4 FUN_00403858(void)

{
  DWORD DVar1;
  LONG LVar2;
  PEXCEPTION_RECORD pEVar3;
  ULONG_PTR UVar4;
  undefined4 uVar5;
  PVOID pvVar6;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  
  if (((in_stack_00000004->ExceptionFlags & 6) != 0) ||
     ((DAT_004aa008 == '\0' &&
      (LVar2 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004), LVar2 == 0)))) {
    return 0;
  }
  pEVar3 = (PEXCEPTION_RECORD)FUN_00402ec4();
  RtlUnwind(in_stack_00000008,(PVOID)0x40389d,pEVar3,(PVOID)0x0);
  pEVar3 = in_stack_00000004;
  pvVar6 = (PVOID)in_stack_00000004->ExceptionInformation[0];
  UVar4 = in_stack_00000004->ExceptionInformation[1];
  if (in_stack_00000004->ExceptionCode == 0xeedfade) {
LAB_004038cc:
    FUN_004033e8(UVar4,(ULONG_PTR)pvVar6);
    if (DAT_004ac000 != (code *)0x0) {
      (*DAT_004ac000)();
    }
    uVar5 = FUN_00403c34(0xd9);
    return uVar5;
  }
  if ((DAT_004ac00c != (code *)0x0) && (UVar4 = (*DAT_004ac00c)(in_stack_00000004), UVar4 != 0)) {
    pvVar6 = pEVar3->ExceptionAddress;
    goto LAB_004038cc;
  }
  DVar1 = in_stack_00000004->ExceptionCode;
  if ((int)DVar1 < -0x3fffff6d) {
    if (DVar1 == 0xc0000092) {
LAB_00403825:
      uVar5 = 0xcf;
      goto LAB_00403847;
    }
    if ((int)DVar1 < -0x3fffff71) {
      if (DVar1 == 0xc000008e) {
        uVar5 = 200;
        goto LAB_00403847;
      }
      if (DVar1 == 0xc0000005) {
        uVar5 = 0xd8;
        goto LAB_00403847;
      }
      if (DVar1 == 0xc000008c) {
        uVar5 = 0xc9;
        goto LAB_00403847;
      }
      if (DVar1 == 0xc000008d) goto LAB_00403831;
    }
    else {
      if (DVar1 + 0x3fffff71 < 2) goto LAB_00403825;
      if (DVar1 + 0x3fffff71 == 2) {
        uVar5 = 0xcd;
        goto LAB_00403847;
      }
    }
  }
  else if ((int)DVar1 < -0x3fffff69) {
    if (DVar1 == 0xc0000096) {
      uVar5 = 0xda;
      goto LAB_00403847;
    }
    if (DVar1 == 0xc0000093) {
LAB_00403831:
      uVar5 = 0xce;
      goto LAB_00403847;
    }
    if (DVar1 == 0xc0000094) {
      uVar5 = 200;
      goto LAB_00403847;
    }
    if (DVar1 == 0xc0000095) {
      uVar5 = 0xd7;
      goto LAB_00403847;
    }
  }
  else {
    if (DVar1 == 0xc00000fd) {
      uVar5 = 0xca;
      goto LAB_00403847;
    }
    if (DVar1 == 0xc000013a) {
      uVar5 = 0xd9;
      goto LAB_00403847;
    }
  }
  uVar5 = 0xff;
LAB_00403847:
  uVar5 = FUN_004037ac(uVar5);
  return uVar5;
}


