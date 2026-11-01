
/* ==== FUN_00415394 @ 00415394 ==== 
 * signature: uint __stdcall FUN_00415394(int param_1)
 * body: 00415394-0041539f
 */

uint FUN_00415394(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 0;
  iVar5 = param_1 * 0x38;
  iVar1 = (&DAT_005d1ba8)[param_1 * 0xe];
  if (0 < (int)DAT_00712108) {
    piVar6 = &DAT_00709f08;
    do {
      if (piVar6[2] == 0xb) {
        iVar2 = FUN_004151f0(iVar4);
        if ((((iVar2 == 0) && (*(int *)(&DAT_005d1bc4 + iVar5) == 0)) && (*piVar6 != 0)) &&
           ((piVar6[0xce] == 0 && (*piVar6 == (&DAT_005d1bb4)[param_1 * 0xe])))) {
          uVar3 = FUN_00558625();
          if ((int)uVar3 % 100 < 0x32) {
            (&DAT_005d1bac)[param_1 * 0xe] = 6;
            (&DAT_005d1bc0)[param_1 * 0xe] = iVar4;
            *(undefined4 *)(&DAT_005d1bbc + iVar5) = 0;
            (&DAT_0070a240)[iVar4 * 0xd0] = 1;
            return CONCAT31((int3)((uint)(iVar4 * 0x340) >> 8),1);
          }
        }
        if (piVar6[2] == 0xb) {
          iVar2 = FUN_004151f0(iVar4);
          if (((iVar2 == 1) && (*(int *)(&DAT_005d1bc4 + iVar5) == 1)) &&
             ((*piVar6 != 0 && ((piVar6[0xce] == 0 && (*piVar6 == (&DAT_005d1bb4)[param_1 * 0xe]))))
             )) {
            uVar3 = FUN_00558625();
            if ((int)uVar3 % 100 < 0x32) {
              (&DAT_005d1bac)[param_1 * 0xe] = 6;
              (&DAT_005d1bc0)[param_1 * 0xe] = iVar4;
              *(undefined4 *)(&DAT_005d1bbc + iVar5) = 0;
              (&DAT_0070a240)[iVar4 * 0xd0] = 1;
              return CONCAT31((int3)((uint)((int)uVar3 / 100) >> 8),1);
            }
          }
        }
      }
      if (piVar6[2] == 0xc) {
        iVar2 = FUN_004151f0(iVar4);
        if ((((iVar2 == 0) && (*(int *)(&DAT_005d1bc4 + iVar5) == 0)) &&
            (iVar2 = *piVar6, iVar2 != 0)) &&
           ((iVar2 == (&DAT_005d1bb4)[param_1 * 0xe] ||
            (iVar2 == *(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50))))) {
LAB_00415583:
          (&DAT_005d1bac)[param_1 * 0xe] = 6;
          (&DAT_005d1bc0)[param_1 * 0xe] = iVar4;
          *(undefined4 *)(&DAT_005d1bbc + iVar5) = 0;
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        if (piVar6[2] == 0xc) {
          iVar2 = FUN_004151f0(iVar4);
          if (((iVar2 == 1) && (*(int *)(&DAT_005d1bc4 + iVar5) == 1)) &&
             ((iVar2 = *piVar6, iVar2 != 0 &&
              ((iVar2 == (&DAT_005d1bb4)[param_1 * 0xe] ||
               (iVar2 == *(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50))))))) goto LAB_00415583;
        }
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 0xd0;
    } while (iVar4 < (int)DAT_00712108);
  }
  return DAT_00712108 & 0xffffff00;
}


