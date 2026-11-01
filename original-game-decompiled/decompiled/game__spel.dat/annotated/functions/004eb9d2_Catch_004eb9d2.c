
/* ==== Catch@004eb9d2 @ 004eb9d2 ==== 
 * signature: undefined __stdcall Catch@004eb9d2(void)
 * body: 004eb9d2-004eba47
 */

void Catch_004eb9d2(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puVar1 = FUN_0049df90((undefined1 *)(unaff_EBP + -0xb8),
                        (byte *)s_Could_not_register_creator___s_005af238);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puVar2 = FUN_0049df90((undefined1 *)(unaff_EBP + -0xa8),
                        (byte *)s_Input_exception_in___s___d__005b77e4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puVar3 = (undefined4 *)FUN_0047c9a0((undefined1 *)(unaff_EBP + -200),puVar2,(int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004edac0((void *)(unaff_EBP + -0x7c),puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x7c,&DAT_005872d0);
}


