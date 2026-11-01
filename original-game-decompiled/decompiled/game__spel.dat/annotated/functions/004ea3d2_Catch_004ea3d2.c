
/* ==== Catch@004ea3d2 @ 004ea3d2 ==== 
 * signature: undefined __stdcall Catch@004ea3d2(void)
 * body: 004ea3d2-004ea451
 */

void Catch_004ea3d2(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar1 = FUN_0049df90((undefined1 *)(unaff_EBP + -0x6c),
                        (byte *)s_Could_not_create_device_using_cr_005b782c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puVar2 = FUN_0049df90((undefined1 *)(unaff_EBP + -0x9c),
                        (byte *)s_Input_exception_in___s___d__005b77e4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puVar3 = (undefined4 *)FUN_0047c9a0((undefined1 *)(unaff_EBP + -0x7c),puVar2,(int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004edac0((void *)(unaff_EBP + -0x40),puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_005872d0);
}


