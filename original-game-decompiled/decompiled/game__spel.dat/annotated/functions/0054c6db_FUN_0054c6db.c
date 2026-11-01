
/* ==== FUN_0054c6db @ 0054c6db ==== 
 * signature: undefined __stdcall FUN_0054c6db(void)
 * body: 0054c6db-0054c766;0054c768-0054c776
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0054c767-0054c767
 */

void FUN_0054c6db(void)

{
  uint uVar1;
  size_t sVar2;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str;
  
  FUN_0055b39c();
  uVar1 = *(uint *)(unaff_EBP + 8) & 7;
  *(uint *)(extraout_ECX + 4) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 8) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar1 & 4) == 0) {
    _Str = "ios::failbit set";
    if ((uVar1 & 2) == 0) {
      _Str = "ios::eofbit set";
    }
  }
  else {
    _Str = "ios::badbit set";
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004028f0((void *)(unaff_EBP + -0x1c),'\0');
  sVar2 = _strlen(_Str);
  FUN_00402940((void *)(unaff_EBP + -0x1c),(undefined4 *)_Str,sVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0054c777();
  *(undefined ***)(unaff_EBP + -0x38) = &PTR_FUN_00578fdc;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_00589ea0);
}


