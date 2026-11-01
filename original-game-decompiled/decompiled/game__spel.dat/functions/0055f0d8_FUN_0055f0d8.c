
/* ==== FUN_0055f0d8 @ 0055f0d8 ==== 
 * signature: undefined4 * __cdecl FUN_0055f0d8(LPCSTR param_1, char * param_2, uint param_3, undefined4 * param_4)
 * body: 0055f0d8-0055f247
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_0055f0d8(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_0074e010 | 1;
      goto LAB_0055f119;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_0074e010 | 2;
LAB_0055f119:
  bVar2 = true;
LAB_0055f11c:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_00565ef5(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_0074dc5c = _DAT_0074dc5c + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_0055f11c;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_0055f11c;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_0055f1fc;
      uVar5 = uVar5 | 0x8000;
      goto LAB_0055f11c;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_0055f11c;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_0055f1fc;
        uVar5 = uVar5 | 0x4000;
        goto LAB_0055f11c;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_0055f11c;
      }
    }
  }
LAB_0055f1fc:
  bVar2 = false;
  goto LAB_0055f11c;
}


