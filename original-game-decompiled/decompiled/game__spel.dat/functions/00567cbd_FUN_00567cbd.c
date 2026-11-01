
/* ==== FUN_00567cbd @ 00567cbd ==== 
 * signature: undefined4 __cdecl FUN_00567cbd(int param_1)
 * body: 00567cbd-00567de9
 */

undefined4 __cdecl FUN_00567cbd(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_0074e02c;
    pcVar6 = DAT_0074e02c;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    puVar3 = FUN_00567dea(param_1);
    pcVar6 = (code *)puVar3[2];
    puVar3 = puVar3 + 2;
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_0074e038;
    pcVar6 = DAT_0074e038;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_0074e030;
    pcVar6 = DAT_0074e030;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_0074e034;
    pcVar6 = DAT_0074e034;
  }
  iVar1 = DAT_0074dd68;
  iVar4 = DAT_005c8ac4;
  if (pcVar6 == (code *)0x1) {
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar5 = param_1, param_1 == 4)) {
    DAT_0074dd68 = 0;
    iVar5 = iVar1;
    if (param_1 == 8) {
      DAT_005c8ac4 = 0x8c;
      param_1 = iVar4;
      goto LAB_00567d81;
    }
LAB_00567dad:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar6)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_00567dd0;
    }
  }
  else {
LAB_00567d81:
    if (iVar2 != 8) goto LAB_00567dad;
    if (DAT_005c8ab8 < DAT_005c8abc + DAT_005c8ab8) {
      iVar4 = (DAT_005c8abc + DAT_005c8ab8) - DAT_005c8ab8;
      puVar3 = (undefined4 *)(DAT_005c8ab8 * 0xc + 0x5c8a48);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  (*pcVar6)(8,DAT_005c8ac4);
LAB_00567dd0:
  if (iVar2 == 8) {
    DAT_005c8ac4 = param_1;
  }
  DAT_0074dd68 = iVar5;
  return 0;
}


