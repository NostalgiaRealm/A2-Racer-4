
/* ==== FUN_0040a570 @ 0040a570 ==== 
 * signature: undefined __cdecl FUN_0040a570(int param_1, int param_2)
 * body: 0040a570-0040a6af;0040a6b3-0040a71f;0040a723-0040a729
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040a6b0-0040a6b2 0040a720-0040a722
 */

void __cdecl FUN_0040a570(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_360 [216];
  
  local_360[0] = 0;
  local_360[7] = 0;
  local_360[8] = 0;
  local_360[1] = 1;
  local_360[2] = 1;
  local_360[3] = 2;
  local_360[4] = 2;
  local_360[0xd] = 1;
  local_360[0x11] = 2;
  local_360[5] = 3;
  local_360[6] = 3;
  local_360[9] = 4;
  local_360[10] = 4;
  local_360[0xb] = 5;
  local_360[0xc] = 5;
  local_360[0xe] = 5;
  local_360[0x15] = 3;
  local_360[0x17] = 4;
  local_360[0xf] = 6;
  local_360[0x10] = 6;
  local_360[0x12] = 6;
  local_360[0x13] = 7;
  local_360[0x14] = 7;
  local_360[0x16] = 7;
  piVar4 = local_360;
  iVar3 = 0x18;
  piVar2 = local_360 + 0x19;
  do {
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
    piVar2[-1] = *(int *)(param_1 + 4 + iVar1 * 0xc);
    *piVar2 = *(int *)(param_1 + iVar1 * 0xc + 8);
    piVar2[1] = *(int *)(param_1 + (iVar1 * 3 + 3) * 4);
    piVar2[3] = -1;
    piVar2 = piVar2 + 8;
  } while (iVar3 != 0);
  piVar4 = (int *)(DAT_0073b0d0 + param_2 * 0xa9 + 0x10);
  piVar2 = local_360;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  }
  piVar4 = local_360;
  piVar2 = &DAT_0073b474;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  }
  iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar3 != 0) {
    FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(iVar3 + 0x58) = 1;
  if (*(int *)(iVar3 + 0x5c) == 1) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
    (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
  }
  iVar3 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,local_360 + 0x15,0x18,1);
  if (iVar3 != 0) {
    FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3DError_DrawPrimitive___00590cf4);
  }
  return;
}


