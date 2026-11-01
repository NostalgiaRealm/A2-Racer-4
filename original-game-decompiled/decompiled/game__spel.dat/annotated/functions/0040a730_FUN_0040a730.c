
/* ==== FUN_0040a730 @ 0040a730 ==== 
 * signature: undefined __cdecl FUN_0040a730(int param_1, int param_2)
 * body: 0040a730-0040a8cf;0040a8d3-0040a942;0040a946-0040a94c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040a8d0-0040a8d2 0040a943-0040a945
 */

void __cdecl FUN_0040a730(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_554;
  int local_550 [49];
  undefined1 auStack_48c [12];
  undefined4 local_480 [288];
  
  local_550[4] = 3;
  local_550[8] = 3;
  local_550[9] = 3;
  local_550[0xd] = 3;
  local_550[1] = 2;
  local_550[5] = 2;
  local_550[0xc] = 2;
  local_550[0xf] = 2;
  local_550[0x13] = 2;
  local_550[2] = 1;
  local_550[0xb] = 7;
  local_550[0xe] = 7;
  local_550[0x10] = 7;
  local_550[0x11] = 6;
  local_550[0x12] = 1;
  local_550[0x14] = 6;
  local_550[0x15] = 6;
  local_550[0x17] = 1;
  local_550[0x19] = 6;
  local_550[0x1a] = 7;
  local_550[0x1d] = 7;
  local_550[0x1f] = 1;
  local_550[0x21] = 1;
  local_550[0] = 0;
  local_550[3] = 0;
  local_550[6] = 0;
  local_550[7] = 4;
  local_550[10] = 4;
  local_550[0x16] = 5;
  local_550[0x18] = 5;
  local_550[0x1b] = 4;
  local_550[0x1c] = 5;
  local_550[0x1e] = 0;
  local_550[0x20] = 4;
  local_550[0x22] = 5;
  local_550[0x23] = 4;
  piVar3 = local_550;
  local_554 = 0x24;
  puVar1 = local_480 + 1;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    puVar1[-1] = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *puVar1 = *(undefined4 *)(param_1 + iVar2 * 0xc + 8);
    puVar1[1] = *(undefined4 *)(param_1 + (iVar2 * 3 + 3) * 4);
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    local_554 = local_554 + -1;
    puVar1 = puVar1 + 8;
  } while (local_554 != 0);
  piVar3 = (int *)(DAT_0073b0d0 + param_2 * 0xa9 + 0x10);
  piVar4 = local_550 + 0x24;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = local_550 + 0x24;
  piVar4 = &DAT_0073b474;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  if (*(int *)(iVar2 + 0x5c) == 1) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    (**(code **)(**(int **)(iVar2 + 0x54) + 0xc))(*(int **)(iVar2 + 0x54),iVar2);
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,4,2,auStack_48c,0x24,1);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_DrawPrimitive___00590d40);
  }
  return;
}


