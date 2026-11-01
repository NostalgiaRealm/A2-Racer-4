
/* ==== FUN_10010da0 @ 10010da0 ==== 
 * signature: undefined4 __cdecl FUN_10010da0(char * param_1, undefined2 * param_2, int param_3)
 * body: 10010da0-10010f9f
 */

undefined4 __cdecl FUN_10010da0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_100316c4 == (code *)0x0) {
    iVar1 = FUN_10011870();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_100316c4 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_100116c0();
  }
  else {
    DAT_100316b4 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_10010fa0(0x10030aa0,0x40,(int *)&DAT_100316b4);
    }
    DAT_100316b8 = param_1 + 0x40;
    if ((DAT_100316b8 != (char *)0x0) && (*DAT_100316b8 != '\0')) {
      FUN_10010fa0(0x100309e8,0x16,(int *)&DAT_100316b8);
    }
    DAT_100316bc = 0;
    if ((DAT_100316b4 == (char *)0x0) || (*DAT_100316b4 == '\0')) {
      if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
        FUN_100116c0();
      }
      else {
        FUN_100115c0();
      }
    }
    else if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
      FUN_10011420();
    }
    else {
      FUN_10011030();
    }
  }
  if (DAT_100316bc == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_100116f0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_100316a4,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_100316a4;
          param_2[1] = (undefined2)DAT_100316c0;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_100316c4)(DAT_100316a4,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


