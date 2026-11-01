
/* ==== FUN_00408cb0 @ 00408cb0 ==== 
 * signature: undefined __cdecl FUN_00408cb0(int param_1)
 * body: 00408cb0-00408cd3;00408cd7-00408d7e;00408d82-00408dc5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00408cd4-00408cd6 00408d7f-00408d81
 */

void __cdecl FUN_00408cb0(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    switch(*(undefined4 *)(*(int *)(&DAT_005cea04 + iVar1) + *(int *)(&DAT_005ce9fc + iVar1) * 8)) {
    case 0:
      FUN_004081e0(param_1);
      break;
    case 1:
      FUN_00408320(param_1);
      break;
    case 2:
      FUN_00408410(param_1);
      break;
    case 3:
      FUN_00408370(param_1);
      break;
    case 4:
      FUN_00408a00(param_1);
      break;
    case 5:
      FUN_00408120(param_1);
      break;
    case 6:
      FUN_004089f0();
      break;
    case 7:
      FUN_00408b50(param_1);
      break;
    case 8:
      FUN_004083d0(param_1);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_Unknown_tactic_stage__d_0059075c);
    }
    if ((float)*(int *)(*(int *)(&DAT_005cea04 + iVar1) + 4 + *(int *)(&DAT_005ce9fc + iVar1) * 8) <
        *(float *)(&DAT_005cea00 + iVar1)) {
      *(undefined4 *)(&DAT_005cea00 + iVar1) = 0;
      *(int *)(&DAT_005ce9fc + iVar1) = *(int *)(&DAT_005ce9fc + iVar1) + 1;
      FUN_00403040(&DAT_005cea7c + iVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_Invalid_entry_in_the_FSM_t_00590710);
}


