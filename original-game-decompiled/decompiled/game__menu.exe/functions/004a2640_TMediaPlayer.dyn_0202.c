
/* ==== TMediaPlayer.dyn_0202 @ 004a2640 ==== 
 * signature: undefined TMediaPlayer.dyn_0202(void)
 * body: 004a2640-004a26c2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMediaPlayer_dyn_0202(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0042e950(param_1,'\0');
  if (((char)param_1[0xa4] != '\0') && (*(char *)((int)param_1 + 0x291) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x291) = 0;
    FUN_004a1e64(param_1,*(byte *)((int)param_1 + 0x292),param_1[0xa5]);
    FUN_004a256c(param_1,*(undefined1 *)((int)param_1 + 0x292));
    if (((char)param_1[0xc1] != '\0') &&
       ((param_1[0xbb] == 0 && (*(char *)((int)param_1 + 0x2c9) != '\0')))) {
      FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)param_1 + 0x292)),extraout_ECX);
      FUN_004a1ca0(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  return;
}


