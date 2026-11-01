
/* ==== FUN_00401829 @ 00401829 ==== 
 * signature: undefined __stdcall FUN_00401829(void)
 * body: 00401829-00401833
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_00401829(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  *(code **)(iVar1 + -8) = __amsg_exit;
  __exit(*(int *)(iVar1 + -4));
}


