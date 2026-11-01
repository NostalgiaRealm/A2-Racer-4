
/* ==== FUN_004c88b4 @ 004c88b4 ==== 
 * signature: undefined __cdecl FUN_004c88b4(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * body: 004c88b4-004c8b8d
 */

void __cdecl FUN_004c88b4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = 0x1000000;
  if ((in_EAX & 8) != 0) {
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
      local_20 = param_3;
      local_1c = param_4;
      local_18 = param_5;
      local_14 = param_6;
      local_10 = param_3;
      local_c = param_4;
      local_8 = param_5;
      local_4 = param_6;
      if (param_2 == 0) {
        FUN_004c4a60(DAT_007408ac);
        if (param_1 == 1) {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&local_10,DAT_007408b0,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&local_10,DAT_00740890,&local_20,uVar2,0);
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
                            (DAT_007408b0,&local_10,DAT_007408ac,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&local_10,DAT_00740890,&local_20,uVar2,0);
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
                            (DAT_00740890,&local_10,DAT_007408ac,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          FUN_004c4400(iVar1);
        }
        else {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                            (DAT_00740890,&local_10,DAT_007408b0,&local_20,uVar2,0);
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


