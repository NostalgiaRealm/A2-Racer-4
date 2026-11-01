
/* ==== thunk_FUN_004cdf2a @ 004cdf0d ==== 
 * signature: undefined4 __stdcall thunk_FUN_004cdf2a(void)
 * body: 004cdf0d-004cdf0e
 * thunk to: FUN_004cdf2a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_004cdf2a(void)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  code *unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  uint in_stack_00000024;
  uint in_stack_00000028;
  undefined4 in_stack_00000030;
  int in_stack_00000034;
  
  while( true ) {
    mixerClose(DAT_00740ff0);
    DAT_00740ff0 = (HMIXER)0x0;
    in_stack_00000024 = in_stack_00000024 + 1;
    if (in_stack_00000028 <= in_stack_00000024) {
      return 0;
    }
    MVar2 = mixerOpen(&DAT_00740ff0,in_stack_00000024,0,0,0);
    if (MVar2 != 0) break;
    puVar5 = &DAT_00740f48;
    for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    DAT_00740f48 = 0xa8;
    _DAT_00740f60 = in_stack_00000030;
    MVar2 = mixerGetLineInfoA((HMIXEROBJ)DAT_00740ff0,(LPMIXERLINEA)&DAT_00740f48,3);
    uVar1 = DAT_00740f54;
    if (MVar2 == 0) {
      puVar5 = &DAT_00740f30;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar5 = &DAT_00740e98;
      for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      DAT_00740f34 = uVar1;
      _DAT_00740f38 = *(undefined4 *)(&DAT_005b6770 + in_stack_00000034 * 4);
      _DAT_00740f40 = 0x94;
      _DAT_00740f44 = &DAT_00740e98;
      DAT_00740f30 = unaff_EBX;
      _DAT_00740f3c = unaff_ESI;
      iVar3 = (*unaff_EBP)();
      if (iVar3 == 0) {
        puVar5 = &DAT_00740e80;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_00740e84 = DAT_00740e9c;
        _DAT_00740e90 = 4;
        _DAT_00740e94 = &DAT_00740e78;
        DAT_00740e78 = iVar3;
        DAT_00740e80 = unaff_EBX;
        _DAT_00740e88 = unaff_ESI;
        MVar2 = mixerGetControlDetailsA
                          ((HMIXEROBJ)DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
        if (MVar2 == 0) {
          DAT_00740ff4 = unaff_ESI;
          return unaff_ESI;
        }
        FUN_004cdcf0(MVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____error_get_mixer_control_005b6954);
      }
    }
    else {
      FUN_004cdcf0(MVar2);
      FUN_004c3fa0((byte *)s__s__d____error_geting_line_info___005b692c);
    }
  }
  FUN_004cdcf0(MVar2);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____error_opening_mixer_dev_005b6900);
}


