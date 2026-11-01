
/* ==== FUN_004cac30 @ 004cac30 ==== 
 * signature: undefined4 __cdecl FUN_004cac30(int * param_1, char * param_2)
 * body: 004cac30-004cac74;004cac78-004cad93
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cac75-004cac77
 */

undefined4 __cdecl FUN_004cac30(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_004c6160(param_1,-0x300,2);
  FUN_00558b35(param_2,0x300,1,param_1);
  if ((*(byte *)(param_1 + 3) & 0x20) == 0) {
    pcVar3 = param_2 + 2;
    iVar1 = 0;
    pcVar6 = param_2;
    pcVar5 = param_2;
    pcVar4 = param_2;
    do {
      *(char *)(DAT_007409f0 + iVar1 * 4) = pcVar3[-2];
      *(char *)(DAT_007409f0 + 1 + iVar1 * 4) = pcVar3[-1];
      *(char *)(DAT_007409f0 + 2 + iVar1 * 4) = *pcVar3;
      if (iVar1 == DAT_005b5db8) {
        pcVar3[-2] = (char)DAT_00740d24;
        *(char *)(DAT_007409f0 + iVar1 * 4) = (char)DAT_00740d24;
        pcVar3[-1] = (char)DAT_00740d28;
        *(char *)(DAT_007409f0 + 1 + iVar1 * 4) = (char)DAT_00740d28;
        *pcVar3 = (char)DAT_00740d2c;
        *(char *)(DAT_007409f0 + 2 + iVar1 * 4) = (char)DAT_00740d2c;
        pcVar4 = (char *)(uint)*(byte *)(DAT_007409f0 + iVar1 * 4);
        pcVar5 = (char *)(uint)*(byte *)(DAT_007409f0 + 1 + iVar1 * 4);
        pcVar6 = (char *)(uint)*(byte *)(DAT_007409f0 + 2 + iVar1 * 4);
      }
      iVar1 = iVar1 + 1;
      pcVar3 = pcVar3 + 3;
    } while (iVar1 < 0x100);
    if (DAT_005b5dbc != 0) {
      iVar2 = 0;
      iVar1 = DAT_007409f0;
      do {
        if ((((iVar2 != DAT_005b5db8) && (pcVar4 == (char *)(uint)*(byte *)(iVar1 + iVar2 * 4))) &&
            (pcVar5 == (char *)(uint)*(byte *)(iVar1 + 1 + iVar2 * 4))) &&
           (pcVar6 == (char *)(uint)*(byte *)(iVar1 + 2 + iVar2 * 4))) {
          *(char *)(iVar1 + iVar2 * 4) = (char)DAT_00740d24 + '\x01';
          *param_2 = (char)DAT_00740d24 + '\x01';
          iVar1 = DAT_007409f0;
        }
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 3;
      } while (iVar2 < 0x100);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____error_reading_005b5dc0);
}


