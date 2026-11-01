
/* ==== FUN_004cca80 @ 004cca80 ==== 
 * signature: undefined4 __cdecl FUN_004cca80(int param_1)
 * body: 004cca80-004ccac1;004ccac5-004ccbe9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ccac2-004ccac4
 */

undefined4 __cdecl FUN_004cca80(int param_1)

{
  UINT UVar1;
  int iVar2;
  char *pcVar3;
  CHAR local_64 [100];
  
  if (DAT_00740dd4 != 0) {
    return 0;
  }
  DAT_00740d80 = LocalAlloc(0x40,param_1 * 8);
  if (DAT_00740d80 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_not_enough_memory_005b6184);
  }
  iVar2 = 0;
  DAT_00740d84 = param_1;
  if (0 < param_1) {
    do {
      FUN_005587a3(local_64,&DAT_005b617c);
      *(int *)((int)DAT_00740d80 + iVar2 * 8) = iVar2;
      UVar1 = GetDriveTypeA(local_64);
      switch(UVar1) {
      case 0:
        pcVar3 = s__s___UNAVAILABLE_005b6168;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 0;
        break;
      case 1:
        pcVar3 = s__s___UNAVAILABLE_005b6168;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 0;
        break;
      case 2:
        pcVar3 = s__s___FLOPPY_005b6124;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 1;
        break;
      case 3:
        pcVar3 = s__s___HDD_005b6140;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 2;
        break;
      case 4:
        pcVar3 = s__s___NETWORK_005b6158;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 4;
        break;
      case 5:
        pcVar3 = s__s___CDROM_005b614c;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 3;
        break;
      case 6:
        pcVar3 = s__s___RAM_005b6134;
        *(undefined4 *)((int)DAT_00740d80 + iVar2 * 8 + 4) = 5;
        break;
      default:
        goto switchD_004ccb0a_default;
      }
      FUN_004c3fa0((byte *)pcVar3);
switchD_004ccb0a_default:
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  DAT_00740dd4 = 1;
  return 0;
}


