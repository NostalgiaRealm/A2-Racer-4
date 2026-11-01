
/* ==== FUN_0043de00 @ 0043de00 ==== 
 * signature: undefined __stdcall FUN_0043de00(void)
 * body: 0043de00-0043deda;0043dede-0043dfb3;0043dfb7-0043dfe2;0043dfe6-0043e050
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043dedb-0043dedd 0043dfb4-0043dfb6 0043dfe3-0043dfe5
 */

void FUN_0043de00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  int iStack_4;
  
  if (DAT_006fb904 != 0) {
    fVar8 = FUN_004a6800(0x7128b0);
    iVar4 = DAT_006c4200;
    if ((float10)1.0 / fVar8 < (float10)10.0) {
      puVar3 = &DAT_006c4330;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0x4b;
      } while ((int)puVar3 < 0x6c9538);
      return;
    }
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar1 + 0x60) = DAT_006c4200;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + iVar4 * 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    if (DAT_0073b4ec != DAT_006c4200) {
      DAT_0073b4ec = DAT_006c4200;
      iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006c4200 * 0x48));
      if (iVar4 != 0) {
        FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
    }
    iVar4 = 0;
    piVar5 = &DAT_006c4330;
    do {
      if (*piVar5 != 0) {
        FUN_0043d950(iVar4);
      }
      piVar5 = piVar5 + 0x4b;
      iVar4 = iVar4 + 1;
    } while ((int)piVar5 < 0x6c9538);
    FUN_00558d5b(&DAT_006c4208,(undefined4 *)0x46,300,FUN_0043dc90);
    iStack_4 = 0;
    piVar5 = &DAT_006c4324;
    do {
      if (piVar5[3] != 0) {
        piVar6 = piVar5 + -0x47;
        piVar7 = &DAT_0073b474;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
        if (iVar4 != 0) {
          FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
        }
        iVar4 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,6,2,piVar5 + -0x37,6,1);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s___d__DramPrimitive_error_0059be74);
        }
        iVar4 = *piVar5;
        *piVar5 = iVar4 + 1;
        if (piVar5[-1] <= iVar4 + 1) {
          piVar5[3] = 0;
        }
        if (piVar5[3] != 0) {
          FUN_0043d970(iStack_4);
        }
      }
      piVar5 = piVar5 + 0x4b;
      iStack_4 = iStack_4 + 1;
    } while ((int)piVar5 < 0x6c952c);
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


