
/* ==== FUN_00432545 @ 00432545 ==== 
 * signature: undefined __fastcall FUN_00432545(char param_1, char param_2)
 * body: 00432545-00432547
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_00432545(char param_1,char param_2)

{
  char *pcVar1;
  uint in_EAX;
  int unaff_EBX;
  
  *(char *)(unaff_EBX + -0x42ffbcdc) = *(char *)(unaff_EBX + -0x42ffbcdc) + param_1;
  pcVar1 = (char *)((in_EAX & 0xffffff43) + 0xe8909090);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


