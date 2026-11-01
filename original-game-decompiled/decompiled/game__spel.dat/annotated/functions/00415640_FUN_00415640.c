
/* ==== FUN_00415640 @ 00415640 ==== 
 * signature: undefined __cdecl FUN_00415640(int param_1)
 * body: 00415640-00415821
 */

void __cdecl FUN_00415640(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar4 = (&DAT_005d1ba8)[param_1 * 0xe];
  if ((0 < DAT_00712108) &&
     (iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]), (&DAT_00709f10)[iVar1 * 0xd0] == 10)) {
    uVar2 = FUN_00407d20(*(int *)(iVar4 * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (DAT_006fb8b0 + -1 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      *(undefined4 *)(iVar4 * 0xf0 + 0x5c + DAT_00715e50) = 0;
      FUN_00414000(iVar4);
      return;
    }
  }
  iVar1 = iVar4 * 0xf0;
  if (*(int *)(iVar1 + 100 + DAT_00715e50) != 1) {
    iVar5 = *(int *)(iVar1 + 0x34 + DAT_00715e50);
    iVar6 = DAT_00715e50;
    if (iVar5 != (&DAT_005d1bb4)[param_1 * 0xe]) {
      (&DAT_005d1bb4)[param_1 * 0xe] = iVar5;
      uVar2 = FUN_004153a0(param_1);
      if ((char)uVar2 == '\x01') {
        return;
      }
      iVar5 = 0;
      iVar6 = DAT_00715e50;
      do {
        uVar3 = *(undefined4 *)
                 (DAT_00715f00 + 0xfc + (iVar5 + *(int *)(iVar1 + 0x34 + iVar6) * 0x265) * 4);
        switch(uVar3) {
        case 4:
        case 5:
        case 6:
        case 8:
          fVar7 = FUN_00413de0(uVar3,(byte)(&DAT_005d1bb8)[param_1 * 0xe]);
          *(float *)(&DAT_005d1bcc + param_1 * 0x38) = (float)fVar7;
          iVar6 = DAT_00715e50;
          break;
        case 0x2c:
          (&DAT_005d1bac)[param_1 * 0xe] = 2;
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    if (((*(int *)(*(int *)(iVar1 + 0x3c + iVar6) * 0x50 + 4 + DAT_00715eb8) == 10) &&
        (DAT_005a3ab4 == 0)) && (((&DAT_005d1bb8)[param_1 * 0xe] & 0x800) == 0)) {
      (&DAT_005d1bac)[param_1 * 0xe] = 1;
      return;
    }
    if (((&DAT_005d1bb8)[param_1 * 0xe] & 0x20) == 0) {
      iVar1 = (-(uint)(((&DAT_005d1bb8)[param_1 * 0xe] & 0x80) != 0) & 0xfffffffe) + 5;
    }
    else {
      iVar1 = 10;
    }
    uVar3 = FUN_00423040(iVar4,iVar1);
    if ((char)uVar3 != '\0') {
      iVar4 = FUN_004155b0((&DAT_005d1ba8)[param_1 * 0xe],'\x01');
      (&DAT_005d1bac)[param_1 * 0xe] = iVar4;
    }
  }
  return;
}


