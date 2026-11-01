
/* ==== FUN_004c88b0 @ 004c88b0 ==== 
 * signature: undefined __stdcall FUN_004c88b0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, byte param_7)
 * body: 004c88b0-004c88b0
 */

void FUN_004c88b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 byte param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  uVar2 = 0x1000000;
  if ((param_7 & 8) != 0) {
    uVar2 = 0x1008000;
  }
  if ((((-1 < param_5) && (param_3 <= DAT_005b3798)) && (-1 < param_6)) &&
     ((param_4 <= DAT_005b379c && (param_1 != param_2)))) {
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
      iStack_20 = param_3;
      iStack_1c = param_4;
      iStack_18 = param_5;
      iStack_14 = param_6;
      iStack_10 = param_3;
      iStack_c = param_4;
      iStack_8 = param_5;
      iStack_4 = param_6;
      if (param_2 == 0) {
        FUN_004c4a60(DAT_007408ac);
        if (param_1 == 1) {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&iStack_10,DAT_007408b0,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&iStack_10,DAT_00740890,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
      }
      else if (param_2 == 1) {
        FUN_004c4a60(DAT_007408b0);
        if (param_1 == 0) {
          FUN_004c4a60(DAT_007408ac);
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&iStack_10,DAT_007408ac,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&iStack_10,DAT_00740890,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
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
                            (DAT_00740890,&iStack_10,DAT_007408ac,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                            (DAT_00740890,&iStack_10,DAT_007408b0,&iStack_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____blitting_error___s___005b39c8);
    }
  }
  return;
}


