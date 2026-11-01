
/* ==== FUN_00415890 @ 00415890 ==== 
 * signature: undefined __cdecl FUN_00415890(int param_1)
 * body: 00415890-00415905
 */

void __cdecl FUN_00415890(int param_1)

{
  if (*(float *)(&DAT_005d1bc8 + param_1 * 0x38) < 0.0) {
    if (((&DAT_005d1bb8)[param_1 * 0xe] & 3) == 2) {
      (&DAT_005d1bac)[param_1 * 0xe] = 4;
    }
    else if (((&DAT_005d1bb8)[param_1 * 0xe] & 3) == 3) {
      (&DAT_005d1bac)[param_1 * 0xe] = 5;
    }
    else {
      (&DAT_005d1bac)[param_1 * 0xe] = *(undefined4 *)(&DAT_005d1bb0 + param_1 * 0x38);
    }
    *(undefined4 *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x60 + DAT_00715e50) = 1;
  }
  return;
}


