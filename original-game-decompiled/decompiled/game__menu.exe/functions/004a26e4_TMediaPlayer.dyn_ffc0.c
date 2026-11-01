
/* ==== TMediaPlayer.dyn_ffc0 @ 004a26e4 ==== 
 * signature: undefined TMediaPlayer.dyn_ffc0(void)
 * body: 004a26e4-004a27bf
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMediaPlayer_dyn_ffc0(int *param_1,short *param_2)

{
  short sVar1;
  byte bVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  sVar1 = *param_2;
  if (sVar1 == 0x20) {
    if (*(char *)((int)param_1 + (uint)*(byte *)(param_1 + 0xb2) * 0x10 + 0x1f9) != '\0') {
      *(byte *)((int)param_1 + 0x292) = *(byte *)(param_1 + 0xb2);
      FUN_004a256c(param_1);
      if ((char)param_1[0xc1] != '\0') {
        FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)((int)param_1 + 0x292)),extraout_ECX);
        FUN_004a1ca0(param_1);
      }
    }
  }
  else if (sVar1 == 0x25) {
    bVar2 = *(byte *)(param_1 + 0xb2);
    do {
      if (bVar2 != 0) {
        bVar2 = bVar2 - 1;
      }
    } while ((bVar2 != 0) && ((char)param_1[(uint)bVar2 * 4 + 0x7e] == '\0'));
    if (bVar2 != *(byte *)(param_1 + 0xb2)) {
      *(byte *)(param_1 + 0xb2) = bVar2;
      (**(code **)(*param_1 + 0x74))();
      return;
    }
  }
  else if (sVar1 == 0x27) {
    bVar2 = *(byte *)(param_1 + 0xb2);
    do {
      if (bVar2 < 8) {
        bVar2 = bVar2 + 1;
      }
    } while ((bVar2 != 8) && ((char)param_1[(uint)bVar2 * 4 + 0x7e] == '\0'));
    if (bVar2 != *(byte *)(param_1 + 0xb2)) {
      *(byte *)(param_1 + 0xb2) = bVar2;
      (**(code **)(*param_1 + 0x74))();
      return;
    }
  }
  return;
}


