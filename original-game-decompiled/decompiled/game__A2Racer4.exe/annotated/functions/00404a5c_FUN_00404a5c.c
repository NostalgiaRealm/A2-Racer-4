
/* ==== FUN_00404a5c @ 00404a5c ==== 
 * signature: BOOL __stdcall FUN_00404a5c(void)
 * body: 00404a5c-00404a62
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x00404a6b) */
/* WARNING: Removing unreachable block (ram,0x00404a84) */

BOOL FUN_00404a5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}


