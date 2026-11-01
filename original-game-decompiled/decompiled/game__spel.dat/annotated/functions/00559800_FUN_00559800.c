
/* ==== FUN_00559800 @ 00559800 ==== 
 * signature: undefined __stdcall FUN_00559800(void)
 * body: 00559800-0055980a
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00559800(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  *(code **)(iVar1 + -8) = __amsg_exit;
  __exit(*(int *)(iVar1 + -4));
}


