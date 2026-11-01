
/* ==== FUN_0054b29c @ 0054b29c ==== 
 * signature: undefined __stdcall FUN_0054b29c(void)
 * body: 0054b29c-0054b2f4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0054b2f5-0054b2f5
 */

void FUN_0054b29c(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("invalid string position");
  FUN_00402940((void *)(unaff_EBP + -0x20),(undefined4 *)"invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00479b80((void *)(unaff_EBP + -0x3c),(undefined4 *)(unaff_EBP + -0x20));
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_0057f4e0);
}


