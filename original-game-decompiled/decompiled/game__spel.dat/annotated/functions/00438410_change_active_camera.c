
/* ==== change_active_camera @ 00438410 ==== 
 * signature: undefined __cdecl change_active_camera(int param_1)
 * body: 00438410-0043842a;0043842e-0043863b
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(change_active_camera) illegal camera index(%d) max. (%d)\n']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043842b-0043842d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(change_active_camera) illegal camera index(%d) max. (%d)\n'] */

void __cdecl change_active_camera(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0xb)) {
    switch(param_1) {
    case 0:
      DAT_006c3568 = 0;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      DAT_006c3540 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 1:
      DAT_006c3568 = 1;
      DAT_006c3544 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    default:
      DAT_006c3568 = 0;
      return;
    case 3:
      DAT_006c3568 = 3;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c354c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 4:
      DAT_006c3568 = 4;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c3550 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 5:
      DAT_006c3568 = 5;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c3554 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c352c * 0x178) = 0;
      return;
    case 6:
      DAT_006c3568 = 6;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c3558 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 7:
      DAT_006c3568 = 7;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c355c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 8:
      DAT_006c3568 = 8;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c3560 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    case 9:
      DAT_006c3568 = 9;
      DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      _DAT_006c3564 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__change_active_camera__illegal_c_00599c44);
}


