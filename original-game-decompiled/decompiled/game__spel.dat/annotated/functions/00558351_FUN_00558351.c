
/* ==== FUN_00558351 @ 00558351 ==== 
 * signature: undefined __fastcall FUN_00558351(char param_1, char param_2)
 * body: 00558351-00558353
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_00558351(char param_1,char param_2)

{
  uint *puVar1;
  char *pcVar2;
  int in_EAX;
  int unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    pcVar2 = (char *)(unaff_EBX + 0x55 + in_EAX * 4);
    *pcVar2 = *pcVar2 + (char)((uint)unaff_EBX >> 8);
    pcVar2 = (char *)(unaff_EBX + -0x7c73ffab + in_EAX * 4);
    *pcVar2 = *pcVar2 + (char)in_EAX;
    pcVar2 = (char *)(unaff_EBX + -0x7c63ffab + in_EAX * 4);
    *pcVar2 = *pcVar2 + param_2;
    pcVar2 = (char *)(unaff_EBX + -0x7c48ffab + in_EAX * 4);
    *pcVar2 = *pcVar2 + (char)((uint)in_EAX >> 8);
    *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(in_EAX + -0x3eb1fcb9);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


