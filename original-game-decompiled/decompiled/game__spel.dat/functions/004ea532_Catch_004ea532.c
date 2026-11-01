
/* ==== Catch@004ea532 @ 004ea532 ==== 
 * signature: undefined __stdcall Catch@004ea532(void)
 * body: 004ea532-004ea5a5
 */

void Catch_004ea532(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar1 = FUN_0049df90((undefined1 *)(unaff_EBP + -0xa8),
                        (byte *)s_Could_not_delete_device__d___s_005b7890);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar2 = FUN_0049df90((undefined1 *)(unaff_EBP + -0x58),
                        (byte *)s_Input_exception_in___s___d__005b77e4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puVar3 = (undefined4 *)FUN_0047c9a0((undefined1 *)(unaff_EBP + -0x68),puVar2,(int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004edac0((void *)(unaff_EBP + -0x2c),puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_005872d0);
}


