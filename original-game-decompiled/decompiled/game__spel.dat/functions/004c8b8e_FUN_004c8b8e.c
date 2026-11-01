
/* ==== FUN_004c8b8e @ 004c8b8e ==== 
 * signature: undefined __stdcall FUN_004c8b8e(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, byte param_11)
 * body: 004c8b8e-004c8b8f
 */

void FUN_004c8b8e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 byte param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar2 = 0x1000000;
  if ((param_11 & 8) != 0) {
    uVar2 = 0x1008000;
  }
  if (-1 < param_5) {
    if ((param_3 <= DAT_005b3798) && (-1 < param_6)) {
      if (param_4 <= DAT_005b379c) {
        if (param_3 < 0) {
          param_3 = 0;
        }
        if (param_4 < 0) {
          param_4 = 0;
        }
        if (DAT_005b379c < param_6) {
          param_6 = DAT_005b379c;
        }
        if (DAT_005b3798 < param_5) {
          param_5 = DAT_005b3798;
        }
        if ((param_3 < param_5) && (param_4 < param_6)) {
          uStack_10 = param_7;
          uStack_8 = param_9;
          uStack_c = param_8;
          uStack_4 = param_10;
          iStack_20 = param_3;
          iStack_1c = param_4;
          iStack_18 = param_5;
          iStack_14 = param_6;
          if (param_2 == 0) {
            FUN_004c4a60(DAT_007408ac);
            if (param_1 == 0) {
              iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                                (DAT_007408ac,&uStack_10,DAT_007408ac,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
LAB_004c8f14:
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s__s__d____blitting_error___s___005b39c8);
              }
            }
            else if (param_1 == 1) {
              FUN_004c4a60(DAT_007408b0);
              iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                                (DAT_007408ac,&uStack_10,DAT_007408b0,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
            else if (param_1 == 2) {
              FUN_004c4a60(DAT_00740890);
              iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                                (DAT_007408ac,&uStack_10,DAT_00740890,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
          }
          else if (param_2 == 1) {
            FUN_004c4a60(DAT_007408b0);
            if (param_1 == 0) {
              FUN_004c4a60(DAT_007408ac);
              iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                                (DAT_007408b0,&uStack_10,DAT_007408ac,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
            else if (param_1 == 1) {
              iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                                (DAT_007408b0,&uStack_10,DAT_007408b0,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
            else if (param_1 == 2) {
              FUN_004c4a60(DAT_00740890);
              iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                                (DAT_007408b0,&uStack_10,DAT_00740890,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
          }
          else {
            if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____unidentified_focus_erro_005b4230);
            }
            FUN_004c4a60(DAT_00740890);
            if (param_1 == 0) {
              FUN_004c4a60(DAT_007408ac);
              iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                                (DAT_00740890,&uStack_10,DAT_007408ac,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
            else if (param_1 == 1) {
              FUN_004c4a60(DAT_007408b0);
              iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                                (DAT_00740890,&uStack_10,DAT_007408b0,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
            else if (param_1 == 2) {
              iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                                (DAT_00740890,&uStack_10,DAT_00740890,&iStack_20,uVar2,0);
              if (iVar1 != 0) {
                FUN_004c4400(iVar1);
                goto LAB_004c8f14;
              }
            }
          }
        }
      }
    }
  }
  return;
}


