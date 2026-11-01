
/* ==== FUN_004aecd0 @ 004aecd0 ==== 
 * signature: undefined __thiscall FUN_004aecd0(void * this, int param_1, int param_2)
 * body: 004aecd0-004aeda0;004aeda4-004aee2f;004aee33-004aee76;004aee7a-004aef5a;004aef5e-004aefcb;004aefcf-004af0ab;004af0af-004af0ee;004af0f2-004af1d4;004af1d8-004af220;004af224-004af22d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aeda1-004aeda3 004aee30-004aee32 004aee77-004aee79 004aef5b-004aef5d 004aefcc-004aefce 004af0ac-004af0ae 004af0ef-004af0f1 004af1d5-004af1d7 004af221-004af223
 */

void __thiscall FUN_004aecd0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_40 [16];
  
  iVar8 = param_1 * 0x994;
  iVar6 = param_2 * 0x994;
  iVar5 = *(int *)(iVar6 + 0x14 + DAT_00715f00) - *(int *)(iVar8 + 0x10 + DAT_00715f00);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar5 / 3;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar5;
  if (0 < iVar5) {
    puVar7 = &DAT_0073b538;
    puVar9 = local_40;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar7 = local_40;
    puVar9 = &DAT_0073b474;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar4 = *(int *)((int)this + 0x4c);
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar3 + 0x60) = iVar4;
      uVar1 = *(undefined4 *)(DAT_0073b1b0 + iVar4 * 0x48);
      *(undefined4 *)(iVar3 + 0x58) = 1;
      *(undefined4 *)(iVar3 + 0x48) = uVar1;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        FUN_00440430(iVar3);
      }
      iVar4 = *(int *)((int)this + 0x4c);
      if ((DAT_0073b4ec != iVar4) &&
         (DAT_0073b4ec = iVar4,
         iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar4 * 0x48)), iVar4 != 0
         )) {
        FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    iVar5 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x6c),
                       *(undefined4 *)((int)this + 0x74),*(int *)((int)this + 0x70) + unaff_EBX * 2,
                       iVar5,8);
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____D3DError_DrawPrimitive___005b06c4);
    }
  }
  iVar5 = *(int *)(iVar8 + 0x18 + DAT_00715f00);
  iVar4 = *(int *)(iVar6 + 0x1c + DAT_00715f00) - iVar5;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar4;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar4 / 3;
  if (0 < iVar4) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar3 = *(int *)((int)this + 0x50);
      iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar2 + 0x60) = iVar3;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar2 + 0x58) = 1;
      if (*(int *)(iVar2 + 0x5c) == 1) {
        FUN_00440430(iVar2);
      }
      iVar3 = *(int *)((int)this + 0x50);
      if ((DAT_0073b4ec != iVar3) &&
         (DAT_0073b4ec = iVar3,
         iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48)), iVar3 != 0
         )) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    iVar5 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x7c),
                       *(undefined4 *)((int)this + 0x84),*(int *)((int)this + 0x80) + iVar5 * 2,
                       iVar4,8);
    if (iVar5 != 0) {
      FUN_004c3f80(0,1);
      FUN_004c3fa0((byte *)s_start__d__end__d_005b06b0);
      FUN_004c3f80(0,0);
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____D3DError_DrawPrimitive___005b06c4);
    }
  }
  iVar5 = *(int *)(iVar8 + 0x20 + DAT_00715f00);
  iVar4 = *(int *)(iVar6 + 0x24 + DAT_00715f00) - iVar5;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar4 / 3;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar4;
  if (0 < iVar4) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar3 = *(int *)((int)this + 0x54);
      iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar2 + 0x60) = iVar3;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar2 + 0x58) = 1;
      if (*(int *)(iVar2 + 0x5c) == 1) {
        FUN_00440430(iVar2);
      }
      iVar3 = *(int *)((int)this + 0x54);
      if ((DAT_0073b4ec != iVar3) &&
         (DAT_0073b4ec = iVar3,
         iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48)), iVar3 != 0
         )) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    iVar5 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x5c),
                       *(undefined4 *)((int)this + 100),*(int *)((int)this + 0x60) + iVar5 * 2,iVar4
                       ,8);
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____D3DError_DrawPrimitive___005b06c4);
    }
  }
  iVar5 = *(int *)(iVar8 + 0x28 + DAT_00715f00);
  iVar6 = *(int *)(iVar6 + 0x2c + DAT_00715f00) - iVar5;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar6;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar6 / 3;
  if (0 < iVar6) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar8 = *(int *)((int)this + 0x58);
      iVar4 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar4 + 0x60) = iVar8;
      *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar8 * 0x48);
      *(undefined4 *)(iVar4 + 0x58) = 1;
      if (*(int *)(iVar4 + 0x5c) == 1) {
        *(undefined4 *)(iVar4 + 0x58) = 0;
        (**(code **)(**(int **)(iVar4 + 0x54) + 0xc))(*(int **)(iVar4 + 0x54),iVar4);
      }
      iVar8 = *(int *)((int)this + 0x58);
      if ((DAT_0073b4ec != iVar8) &&
         (DAT_0073b4ec = iVar8,
         iVar8 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar8 * 0x48)), iVar8 != 0
         )) {
        FUN_004bb290(iVar8);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    iVar5 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x8c),
                       *(undefined4 *)((int)this + 0x94),*(int *)((int)this + 0x90) + iVar5 * 2,
                       iVar6,1);
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____D3DError_DrawPrimitive___005b06c4);
    }
  }
  return;
}


