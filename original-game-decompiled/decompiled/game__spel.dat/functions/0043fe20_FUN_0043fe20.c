
/* ==== FUN_0043fe20 @ 0043fe20 ==== 
 * signature: undefined __stdcall FUN_0043fe20(void)
 * body: 0043fe20-0043ff51
 */

void FUN_0043fe20(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar4;
  int local_4;
  
  puVar2 = &DAT_006c9478;
  do {
    local_4 = 0x11;
    puVar3 = puVar2;
    do {
      lVar4 = __ftol();
      uVar1 = 0x100 - (int)lVar4;
      if ((int)uVar1 < 0x80) {
        uVar1 = 0x80;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      puVar3[-2] = (uint)(float)(extraout_ST0 + (float10)5.0);
      *puVar3 = ((uVar1 | 0x6400) << 8 | uVar1) << 8 | uVar1;
      lVar4 = __ftol();
      uVar1 = 0x100 - (int)lVar4;
      if ((int)uVar1 < 0x80) {
        uVar1 = 0x80;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      puVar3[6] = (uint)(float)(extraout_ST0_00 + (float10)5.0);
      puVar2 = puVar3 + 0x10;
      local_4 = local_4 + -1;
      puVar3[8] = ((uVar1 | 0x6400) << 8 | uVar1) << 8 | uVar1;
      puVar3 = puVar2;
    } while (local_4 != 0);
  } while ((int)puVar2 < 0x6cbef8);
  return;
}


