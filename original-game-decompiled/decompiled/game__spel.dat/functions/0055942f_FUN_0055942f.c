
/* ==== FUN_0055942f @ 0055942f ==== 
 * signature: undefined __cdecl FUN_0055942f(byte * param_1, byte * param_2, byte * param_3, byte * param_4, byte * param_5)
 * body: 0055942f-00559575
 */

void __cdecl FUN_0055942f(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  sVar2 = _strlen((char *)param_1);
  if ((sVar2 == 0) || (param_1[1] != 0x3a)) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (byte *)0x0) {
      FUN_0056117c(param_2,param_1,2);
      param_2[2] = 0;
    }
    param_1 = param_1 + 2;
  }
  param_2 = (byte *)0x0;
  pbVar3 = param_1;
  if (*param_1 != 0) {
    do {
      bVar1 = *pbVar3;
      if ((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) == 0) {
        if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
          param_2 = pbVar3 + 1;
        }
        else if (bVar1 == 0x2e) {
          local_8 = pbVar3;
        }
      }
      else {
        pbVar3 = pbVar3 + 1;
      }
      pbVar3 = pbVar3 + 1;
    } while (*pbVar3 != 0);
    if (param_2 != (byte *)0x0) {
      if (param_3 != (byte *)0x0) {
        uVar4 = (int)param_2 - (int)param_1;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        FUN_0056117c(param_3,param_1,uVar4);
        param_3[uVar4] = 0;
      }
      goto LAB_005594f6;
    }
  }
  param_2 = param_1;
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
LAB_005594f6:
  param_1 = pbVar3;
  if ((local_8 == (byte *)0x0) || (local_8 < param_2)) {
    if (param_4 != (byte *)0x0) {
      uVar4 = 0xff;
      if ((uint)((int)param_1 - (int)param_2) < 0xff) {
        uVar4 = (int)param_1 - (int)param_2;
      }
      FUN_0056117c(param_4,param_2,uVar4);
      param_4[uVar4] = 0;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_4 != (byte *)0x0) {
      uVar4 = (int)local_8 - (int)param_2;
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      FUN_0056117c(param_4,param_2,uVar4);
      param_4[uVar4] = 0;
    }
    if (param_5 != (byte *)0x0) {
      uVar4 = 0xff;
      if ((uint)((int)param_1 - (int)local_8) < 0xff) {
        uVar4 = (int)param_1 - (int)local_8;
      }
      FUN_0056117c(param_5,local_8,uVar4);
      param_5[uVar4] = 0;
    }
  }
  return;
}


