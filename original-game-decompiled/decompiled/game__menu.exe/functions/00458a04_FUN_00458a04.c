
/* ==== FUN_00458a04 @ 00458a04 ==== 
 * signature: int __register FUN_00458a04(byte * param_1, byte * param_2, int param_3, int param_4)
 * body: 00458a04-00458c12
 */

int FUN_00458a04(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int iVar2;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int iVar3;
  int extraout_ECX_14;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *extraout_EDX_02;
  byte *extraout_EDX_03;
  byte *extraout_EDX_04;
  byte *extraout_EDX_05;
  byte *extraout_EDX_06;
  byte *extraout_EDX_07;
  byte *extraout_EDX_08;
  byte *extraout_EDX_09;
  byte *extraout_EDX_10;
  byte *extraout_EDX_11;
  byte *extraout_EDX_12;
  byte *extraout_EDX_13;
  byte *extraout_EDX_14;
  byte *extraout_EDX_15;
  byte *extraout_EDX_16;
  bool bVar4;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x3c);
  if (iVar2 == 0x18) {
    if (0 < param_3) {
      do {
        iVar2 = (*param_1 & 0x7f) + 1;
        if (SCARRY4((uint)(*param_1 & 0x7f),1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX;
          param_2 = extraout_EDX;
        }
        iVar3 = iVar2;
        if (*param_1 < 0x80) {
          param_1 = param_1 + 1;
          if (SBORROW4(iVar2,1)) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar3 = extraout_ECX_02;
            param_2 = extraout_EDX_02;
          }
          if (-1 < iVar2 + -1) {
            do {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              param_1 = param_1 + 3;
              param_2 = param_2 + 3;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar2 = (int)((longlong)iVar3 * 3);
          if ((longlong)iVar2 != (longlong)iVar3 * 3) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar3 = extraout_ECX_03;
            param_2 = extraout_EDX_03;
          }
          if (SCARRY4(iVar2,1)) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar3 = extraout_ECX_04;
            param_2 = extraout_EDX_04;
          }
          bVar4 = SCARRY4(local_c,iVar2 + 1);
          local_c = local_c + iVar2 + 1;
          if (bVar4) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar3 = extraout_ECX_05;
            param_2 = extraout_EDX_05;
          }
        }
        else {
          pbVar1 = param_1 + 1;
          if (SBORROW4(iVar2,1)) {
            pbVar1 = (byte *)thunk_FUN_00402808((uint)pbVar1);
            iVar3 = extraout_ECX_00;
            param_2 = extraout_EDX_00;
          }
          if (-1 < iVar2 + -1) {
            do {
              *param_2 = *pbVar1;
              param_2[1] = pbVar1[1];
              param_2[2] = pbVar1[2];
              param_2 = param_2 + 3;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          param_1 = pbVar1 + 3;
          bVar4 = SCARRY4(local_c,4);
          local_c = local_c + 4;
          if (bVar4) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar3 = extraout_ECX_01;
            param_2 = extraout_EDX_01;
          }
        }
        iVar2 = (int)((longlong)iVar3 * 3);
        if ((longlong)iVar2 != (longlong)iVar3 * 3) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_06;
          param_2 = extraout_EDX_06;
        }
        bVar4 = SCARRY4(local_10,iVar2);
        local_10 = local_10 + iVar2;
        if (bVar4) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          param_2 = extraout_EDX_07;
        }
      } while (local_10 < param_3);
    }
  }
  else if ((iVar2 == 0x20) && (0 < param_3)) {
    do {
      iVar2 = (*param_1 & 0x7f) + 1;
      if (SCARRY4((uint)(*param_1 & 0x7f),1)) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        iVar2 = extraout_ECX_07;
        param_2 = extraout_EDX_08;
      }
      iVar3 = iVar2;
      if (*param_1 < 0x80) {
        param_1 = param_1 + 1;
        if (SBORROW4(iVar2,1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar3 = extraout_ECX_10;
          param_2 = extraout_EDX_11;
        }
        if (-1 < iVar2 + -1) {
          do {
            *param_2 = *param_1;
            param_2[1] = param_1[1];
            param_2[2] = param_1[2];
            param_2[3] = param_1[3];
            param_1 = param_1 + 4;
            param_2 = param_2 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = (int)((longlong)iVar3 * 4);
        if ((longlong)iVar2 != (longlong)iVar3 * 4) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar3 = extraout_ECX_11;
          param_2 = extraout_EDX_12;
        }
        if (SCARRY4(iVar2,1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar3 = extraout_ECX_12;
          param_2 = extraout_EDX_13;
        }
        bVar4 = SCARRY4(local_c,iVar2 + 1);
        local_c = local_c + iVar2 + 1;
        if (bVar4) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar3 = extraout_ECX_13;
          param_2 = extraout_EDX_14;
        }
      }
      else {
        pbVar1 = param_1 + 1;
        if (SBORROW4(iVar2,1)) {
          pbVar1 = (byte *)thunk_FUN_00402808((uint)pbVar1);
          iVar3 = extraout_ECX_08;
          param_2 = extraout_EDX_09;
        }
        if (-1 < iVar2 + -1) {
          do {
            *param_2 = *pbVar1;
            param_2[1] = pbVar1[1];
            param_2[2] = pbVar1[2];
            param_2[3] = pbVar1[3];
            param_2 = param_2 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        param_1 = pbVar1 + 4;
        bVar4 = SCARRY4(local_c,5);
        local_c = local_c + 5;
        if (bVar4) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar3 = extraout_ECX_09;
          param_2 = extraout_EDX_10;
        }
      }
      iVar2 = (int)((longlong)iVar3 * 4);
      if ((longlong)iVar2 != (longlong)iVar3 * 4) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        iVar2 = extraout_ECX_14;
        param_2 = extraout_EDX_15;
      }
      bVar4 = SCARRY4(local_10,iVar2);
      local_10 = local_10 + iVar2;
      if (bVar4) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        param_2 = extraout_EDX_16;
      }
    } while (local_10 < param_3);
  }
  return local_c;
}


