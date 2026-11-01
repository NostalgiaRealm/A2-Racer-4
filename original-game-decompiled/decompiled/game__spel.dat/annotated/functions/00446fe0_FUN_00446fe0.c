
/* ==== FUN_00446fe0 @ 00446fe0 ==== 
 * signature: undefined __stdcall FUN_00446fe0(void)
 * body: 00446fe0-004470a4;004470a8-004471a2;004471a6-004471eb;004471ef-0044727b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004470a5-004470a7 004471a3-004471a5 004471ec-004471ee
 */

void FUN_00446fe0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (DAT_006fb904 != 0) {
    fVar7 = FUN_004a6800(0x7128b0);
    iVar2 = DAT_006f5088;
    if ((float10)1.0 / fVar7 < (float10)10.0) {
      FUN_00446fb0();
      return;
    }
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar3 + 0x60) = DAT_006f5088;
    uVar8 = *(undefined4 *)(DAT_0073b1b0 + iVar2 * 0x48);
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar8;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
    }
    if (DAT_0073b4ec != DAT_006f5088) {
      DAT_0073b4ec = DAT_006f5088;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006f5088 * 0x48));
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,2);
    }
    iVar2 = 0;
    do {
      iVar3 = FUN_004463c0(iVar2);
      if (*(int *)(&DAT_006f51b8 + iVar3 * 300) != 0) {
        FUN_004467d0(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x46);
    FUN_00558d5b((int *)&DAT_006f5090,(undefined4 *)0x46,300,FUN_00446f00);
    iVar2 = 0;
    do {
      iVar3 = FUN_004463c0(iVar2);
      if (*(int *)(&DAT_006f51b8 + iVar3 * 300) != 0) {
        iVar3 = FUN_004463c0(iVar2);
        puVar5 = (undefined4 *)(&DAT_006f5090 + iVar3 * 300);
        puVar6 = &DAT_0073b474;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
        piVar1 = DAT_0073b4b4;
        if (iVar3 != 0) {
          FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
        }
        uVar9 = 1;
        uVar8 = 6;
        iVar3 = *DAT_0073b4b4;
        iVar4 = FUN_004463c0(iVar2);
        iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,6,2,&DAT_006f50d0 + iVar4 * 300,uVar8,uVar9);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s___d__DramPrimitive_error_0059db14);
        }
        iVar3 = FUN_004463c0(iVar2);
        *(int *)(&DAT_006f51ac + iVar3 * 300) = *(int *)(&DAT_006f51ac + iVar3 * 300) + 1;
        iVar4 = FUN_004463c0(iVar2);
        if (*(int *)(&DAT_006f51a8 + iVar4 * 300) <= *(int *)(&DAT_006f51ac + iVar3 * 300)) {
          iVar3 = FUN_004463c0(iVar2);
          *(undefined4 *)(&DAT_006f51b8 + iVar3 * 300) = 0;
        }
      }
      FUN_004467f0(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x46);
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


