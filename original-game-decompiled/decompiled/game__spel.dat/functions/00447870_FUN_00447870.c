
/* ==== FUN_00447870 @ 00447870 ==== 
 * signature: undefined4 __stdcall FUN_00447870(void)
 * body: 00447870-004479c3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004479c4-004479cb
 */

undefined4 FUN_00447870(void)

{
  uint uVar1;
  
  FUN_004c3fa0((byte *)s_set_xvga_vars_allowmodex_0059e5e4);
  FUN_004c4330(1,0x40,1);
  FUN_004c3fa0((byte *)s_set_xvga_vars_RESOLUTION_0059e600);
  switch(DAT_0059db38) {
  case 0:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,0,0);
    return 0;
  case 1:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,3,0);
    return 0;
  case 2:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,9,0);
    return 1;
  case 3:
    FUN_004c4330(2,1,0);
    uVar1 = 9;
    break;
  case 4:
    FUN_004c4330(2,1,0);
    uVar1 = 10;
    break;
  case 5:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,6,0);
    FUN_004c0450(1);
    return 1;
  case 6:
    FUN_004c4330(2,1,0);
    uVar1 = 6;
    break;
  case 7:
    FUN_004c4330(2,1,0);
    uVar1 = 0xb;
    break;
  case 8:
    FUN_004c4330(2,1,0);
    uVar1 = 0xc;
    break;
  case 9:
    FUN_004c4330(2,1,0);
    uVar1 = 0xd;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s___Illegal_r_0059e640);
  }
  FUN_004c4330(0,uVar1,0);
  DAT_0059dbb4 = 1;
  FUN_00447830();
  return 1;
}


