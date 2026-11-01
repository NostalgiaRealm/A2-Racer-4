
/* ==== trigger_find_start_position @ 00456c00 ==== 
 * signature: uint __stdcall trigger_find_start_position(void)
 * body: 00456c00-00456c57;00456c62-00456c6f
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(trigger_find_start_position) unable to find finish trigger in map']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00456c58-00456c61
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(trigger_find_start_position) unable to find finish trigger in map'] */

uint trigger_find_start_position(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_00715254;
  if (0 < DAT_00715258) {
    do {
      if ((*(int *)(DAT_00715f00 + 0xfc + *piVar1 * 0x994) == 0xe) ||
         (*(int *)(DAT_00715f00 + *piVar1 * 0x994 + 0x100) == 0xe)) {
        uVar2 = FUN_004a71e0(uVar2);
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while ((int)uVar2 < DAT_00715258);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__trigger_find_start_position__un_005a3a08);
}


