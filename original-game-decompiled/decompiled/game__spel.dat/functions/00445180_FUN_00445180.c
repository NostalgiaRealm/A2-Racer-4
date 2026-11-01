
/* ==== FUN_00445180 @ 00445180 ==== 
 * signature: undefined __stdcall FUN_00445180(void)
 * body: 00445180-0044521a;0044521e-004452af;004452b3-00445363;00445367-004453cc;004453d0-00445401
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044521b-0044521d 004452b0-004452b2 00445364-00445366 004453cd-004453cf
 */

void FUN_00445180(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 auStack_40 [16];
  
  iVar2 = DAT_006ed680;
  if (DAT_006fb90c != 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar3 + 0x60) = DAT_006ed680;
    uVar7 = *(undefined4 *)(DAT_0073b1b0 + iVar2 * 0x48);
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar7;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      FUN_00440430(iVar3);
    }
    if (DAT_0073b4ec != DAT_006ed680) {
      DAT_0073b4ec = DAT_006ed680;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006ed680 * 0x48));
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,6);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,5);
    }
    FUN_004450e0();
    puVar5 = &DAT_0073b538;
    puVar6 = auStack_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = auStack_40;
    puVar6 = &DAT_0073b474;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
    iVar2 = 0;
    do {
      iVar3 = FUN_004447a0(iVar2);
      if (*(int *)(&DAT_006cfa44 + iVar3 * 0x1910) != 0) {
        iVar3 = FUN_004447a0(iVar2);
        piVar1 = DAT_0073b4b4;
        if (2 < *(int *)(&DAT_006ce140 + iVar3 * 0x1910)) {
          uVar8 = 1;
          iVar3 = *DAT_0073b4b4;
          iVar4 = FUN_004447a0(iVar2);
          uVar7 = *(undefined4 *)(&DAT_006ce140 + iVar4 * 0x1910);
          iVar4 = FUN_004447a0(iVar2);
          iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,5,2,&DAT_006ce144 + iVar4 * 0x1910,uVar7,uVar8)
          ;
          piVar1 = DAT_0073b4b4;
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s___d__DramPrimitive_error_0059d72c);
          }
          uVar8 = 1;
          iVar3 = *DAT_0073b4b4;
          iVar4 = FUN_004447a0(iVar2);
          uVar7 = *(undefined4 *)(&DAT_006ce140 + iVar4 * 0x1910);
          iVar4 = FUN_004447a0(iVar2);
          iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,5,2,&DAT_006cedc4 + iVar4 * 0x1910,uVar7,uVar8)
          ;
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s___d__DramPrimitive_error_0059d770);
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


