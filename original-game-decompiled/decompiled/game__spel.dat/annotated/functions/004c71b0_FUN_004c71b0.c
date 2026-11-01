
/* ==== FUN_004c71b0 @ 004c71b0 ==== 
 * signature: undefined4 __cdecl FUN_004c71b0(int param_1, int param_2)
 * body: 004c71b0-004c7371;004c7375-004c73cd;004c73d6-004c7455
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7372-004c7374 004c73ce-004c73d5
 */

undefined4 __cdecl FUN_004c71b0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c6860();
  if (DAT_00740950 == 0) {
    if (DAT_00740954 == 0) {
      if (DAT_005b4c40 == -1) {
        if (DAT_005b4c44 == -1) {
          FUN_004c3fa0((byte *)s_Using_default_driver_005b525c);
          iVar1 = DirectSoundCreate(0,&DAT_00740924,0);
          if (iVar1 != 0) {
            this(iVar1);
            goto LAB_004c72b4;
          }
          pcVar2 = s_Default_driver_init_failure___No_005b5208;
        }
        else {
          FUN_004c3fa0((byte *)s_Attempting_to_use_secondary_driv_005b52ac);
          iVar1 = DirectSoundCreate(DAT_00740930 + DAT_005b4c44 * 0xd8,&DAT_00740924,0);
          if (iVar1 != 0) {
            this(iVar1);
LAB_004c72b4:
            FUN_004c3fa0((byte *)s__s__d____error_creating_sound_ob_005b5230);
            return 0x2af9;
          }
          pcVar2 = s_Attempting_to_use_secondary__unk_005b5274;
        }
      }
      else {
        FUN_004c3fa0((byte *)s_Attempting_to_use_sb16_driver_005b52fc);
        iVar1 = DirectSoundCreate(DAT_00740930 + DAT_005b4c40 * 0xd8,&DAT_00740924,0);
        if (iVar1 != 0) {
          this(iVar1);
          goto LAB_004c72b4;
        }
        pcVar2 = s_Attempting_to_use_sb16_driver_su_005b52d0;
      }
      DAT_00740954 = 1;
      FUN_004c3fa0((byte *)pcVar2);
    }
    if (DAT_00740958 == 0) {
      iVar1 = (**(code **)(*DAT_00740924 + 0x18))(DAT_00740924,DAT_007408a4,3);
      if ((iVar1 != 0) != 0) {
        this((uint)(iVar1 != 0));
        FUN_004c3fa0((byte *)s__s__d____error_setting_the_coop_l_005b51d8);
        return 0x2af9;
      }
      DAT_00740958 = 1;
    }
    if (DAT_0074095c == 0) {
      DAT_00740934 = LocalAlloc(0x40,param_1 * 0x44);
      if (DAT_00740934 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____not_enough_memory_to_cr_005b51a0);
      }
      DAT_0074095c = 1;
    }
    DAT_00740928 = param_1;
    if (0 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 + -1;
        *(undefined4 *)(iVar1 + 0x30 + (int)DAT_00740934) = 0;
        *(undefined4 *)(iVar1 + 0x38 + (int)DAT_00740934) = 0;
        *(undefined4 *)(iVar1 + 0x34 + (int)DAT_00740934) = 0;
        *(undefined4 *)(iVar1 + 0x40 + (int)DAT_00740934) = 0xffffffff;
        iVar1 = iVar1 + 0x44;
      } while (param_1 != 0);
    }
    if ((param_2 < 0) || (0xd < param_2)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____error_illegal_sound_mod_005b5170);
    }
    if (DAT_00740960 == 0) {
      iVar1 = param_2 * 0x10;
      iVar1 = FUN_004c6880(*(int *)(&DAT_005b4b60 + iVar1),
                           (short)*(undefined4 *)(&DAT_005b4b64 + iVar1),
                           *(int *)(&DAT_005b4b6c + iVar1),*(int *)(&DAT_005b4b68 + iVar1));
      if (iVar1 != 0) {
        return 0x2afa;
      }
      FUN_004c3fa0((byte *)s_setting_sound_format__dHz__dbits_005b5138);
      DAT_00740960 = 1;
    }
    DAT_00740950 = 1;
  }
  return 0;
}


