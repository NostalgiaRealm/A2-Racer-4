
/* ==== FUN_004c9930 @ 004c9930 ==== 
 * signature: undefined __cdecl FUN_004c9930(int * param_1, int * param_2, int param_3, int param_4, int param_5, int param_6, byte param_7)
 * body: 004c9930-004c998e;004c9992-004c99c5;004c99c9-004c9b73;004c9b77-004c9b81
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c998f-004c9991 004c99c6-004c99c8 004c9b74-004c9b76
 */

void __cdecl
FUN_004c9930(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)

{
  int iVar1;
  int *unaff_retaddr;
  int *piVar2;
  int *piStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int iStack_74;
  int iStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_c;
  int *piStack_8;
  int *piStack_4;
  
  local_d4 = 6;
  local_68 = 6;
  local_d8 = 0x6c;
  local_6c = 0x6c;
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____DDError__blt_surf_2_sur_005b5a30);
  }
  piVar2 = unaff_retaddr;
  iVar1 = (**(code **)(*unaff_retaddr + 0x58))(unaff_retaddr);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____DDError__blt_surf_2_sur_005b59e8);
  }
  if ((param_7 & 8) != 0) {
    piVar2 = (int *)0x1008000;
  }
  if ((int)piStack_4 < 0) {
    piStack_4 = (int *)0x0;
  }
  if ((int)unaff_retaddr < 0) {
    unaff_retaddr = (int *)0x0;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((((0 < (int)param_1) && (0 < (int)param_2)) && ((int)piStack_4 <= (int)piStack_dc)) &&
     ((((int)unaff_retaddr <= (int)piStack_e0 && (0 < param_5)) &&
      ((0 < param_6 && ((param_3 <= iStack_70 && (param_4 <= iStack_74)))))))) {
    if ((int)piStack_dc < (int)param_1) {
      param_1 = piStack_dc;
    }
    if ((int)piStack_e0 < (int)param_2) {
      param_2 = piStack_e0;
    }
    if (iStack_70 < param_5) {
      param_5 = iStack_70;
    }
    if (iStack_74 < param_6) {
      param_6 = iStack_74;
    }
    if ((((piStack_4 != param_1) && (unaff_retaddr != param_2)) && (param_3 != param_5)) &&
       (param_4 != param_6)) {
      piStack_f8 = piStack_4;
      if (((0 < param_5) && (0 < param_6)) && ((0 < (int)param_1 && (0 < (int)param_2)))) {
        piStack_f4 = unaff_retaddr;
        piStack_f0 = param_1;
        piStack_ec = param_2;
        iVar1 = (**(code **)(*piStack_8 + 0x14))
                          (piStack_8,&stack0xfffffef8,uStack_c,&piStack_f8,piVar2,0);
        if (iVar1 != 0) {
          FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____blt_surf_2_surf_blittin_005b1b20);
        }
      }
    }
  }
  return;
}


