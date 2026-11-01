
/* ==== FUN_004cdd80 @ 004cdd80 ==== 
 * signature: undefined4 __cdecl FUN_004cdd80(undefined4 param_1, int param_2)
 * body: 004cdd80-004cdda1;004cdda5-004cdf0c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cdda2-004cdda4 004cdf65-004cdf67
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004cdd80(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  UINT UVar2;
  MMRESULT MVar3;
  int iVar4;
  undefined4 *puVar5;
  UINT UStack_8;
  
  if ((param_2 < 0) || (2 < param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____control_type_out_of_bou_005b6984);
  }
  UVar2 = mixerGetNumDevs();
  if ((UVar2 != 0) && (UStack_8 = 0, UVar2 != 0)) {
    do {
      MVar3 = mixerOpen((LPHMIXER)&DAT_00740ff0,UStack_8,0,0,0);
      if (MVar3 != 0) {
        FUN_004cdcf0(MVar3);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____error_opening_mixer_dev_005b6900);
      }
      puVar5 = &DAT_00740f48;
      for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      DAT_00740f48 = 0xa8;
      _DAT_00740f60 = param_1;
      MVar3 = mixerGetLineInfoA(DAT_00740ff0,(LPMIXERLINEA)&DAT_00740f48,3);
      uVar1 = DAT_00740f54;
      if (MVar3 == 0) {
        puVar5 = &DAT_00740f30;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        puVar5 = &DAT_00740e98;
        for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_00740f34 = uVar1;
        _DAT_00740f38 = *(undefined4 *)(&DAT_005b6770 + param_2 * 4);
        DAT_00740f30 = 0x18;
        _DAT_00740f3c = 1;
        _DAT_00740f40 = 0x94;
        _DAT_00740f44 = &DAT_00740e98;
        MVar3 = mixerGetLineControlsA(DAT_00740ff0,(LPMIXERLINECONTROLSA)&DAT_00740f30,2);
        if (MVar3 == 0) {
          puVar5 = &DAT_00740e80;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          DAT_00740e80 = 0x18;
          DAT_00740e84 = DAT_00740e9c;
          _DAT_00740e88 = 1;
          _DAT_00740e90 = 4;
          _DAT_00740e94 = &DAT_00740e78;
          DAT_00740e78 = MVar3;
          MVar3 = mixerGetControlDetailsA(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
          if (MVar3 == 0) {
            DAT_00740ff4 = 1;
            return 1;
          }
          FUN_004cdcf0(MVar3);
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____error_get_mixer_control_005b6954);
        }
      }
      else {
        FUN_004cdcf0(MVar3);
        FUN_004c3fa0((byte *)s__s__d____error_geting_line_info___005b692c);
      }
      mixerClose((HMIXER)DAT_00740ff0);
      DAT_00740ff0 = (HMIXEROBJ)0x0;
      UStack_8 = UStack_8 + 1;
    } while (UStack_8 < UVar2);
  }
  return 0;
}


