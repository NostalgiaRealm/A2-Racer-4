
/* ==== FUN_0054b1b4 @ 0054b1b4 ==== 
 * signature: undefined __stdcall FUN_0054b1b4(void)
 * body: 0054b1b4-0054b20c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0054b20d-0054b20d
 */

void FUN_0054b1b4(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("string too long");
  FUN_00402940((void *)(unaff_EBP + -0x20),(undefined4 *)"string too long",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00479b80((void *)(unaff_EBP + -0x3c),(undefined4 *)(unaff_EBP + -0x20));
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_00578e54;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_00589b98);
}


