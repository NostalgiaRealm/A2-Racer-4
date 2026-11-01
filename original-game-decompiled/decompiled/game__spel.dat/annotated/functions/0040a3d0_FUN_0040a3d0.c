
/* ==== FUN_0040a3d0 @ 0040a3d0 ==== 
 * signature: undefined __stdcall FUN_0040a3d0(void)
 * body: 0040a3d0-0040a432;0040a436-0040a4d9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040a433-0040a435
 */

void FUN_0040a3d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (DAT_00590810 != 1) {
    DAT_005cd9d0 = 0;
    return;
  }
  puVar2 = &DAT_0073b538;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_40;
  puVar3 = &DAT_0073b474;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  if (*(int *)(iVar1 + 0x5c) == 1) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&DAT_005ccd48,DAT_005cd9d0,1);
  if (iVar1 != 0) {
    FUN_004c3f80(0,1);
    FUN_004bb290(iVar1);
    FUN_004c3fa0((byte *)s__s__d____D3DError_DrawPrimitive___00590ca8);
    FUN_004c3f80(0,0);
  }
  DAT_005cd9d0 = 0;
  return;
}


