
/* ==== Catch@004a3fb9 @ 004a3fb9 ==== 
 * signature: undefined __stdcall Catch@004a3fb9(void)
 * body: 004a3fb9-004a4063
 */

void Catch_004a3fb9(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puVar1 = FUN_0049df90((undefined1 *)(unaff_EBP + -0x48),
                        (byte *)s_Could_not_register_creator___s_005af238);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puVar2 = FUN_0049df90((undefined1 *)(unaff_EBP + -0x38),
                        (byte *)s_Physics_exception_in___s___d__005af050);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puVar1 = FUN_0047c9a0((undefined1 *)(unaff_EBP + -0x58),puVar2,(int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00558826((undefined4 *)(unaff_EBP + -0x94));
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00424980((void *)(unaff_EBP + -0x88),(undefined1 *)(unaff_EBP + 0xb));
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  *(undefined ***)(unaff_EBP + -0x94) = &PTR_FUN_005771c8;
  FUN_004093c0((void *)(unaff_EBP + -0x88),puVar1,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x94,&DAT_00583178);
}


