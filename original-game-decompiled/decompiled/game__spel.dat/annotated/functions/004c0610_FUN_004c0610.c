
/* ==== FUN_004c0610 @ 004c0610 ==== 
 * signature: undefined __cdecl FUN_004c0610(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004c0610-004c069e;004c06a2-004c06c8;004c06da-004c0766;004c076a-004c0777
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c069f-004c06a1 004c06c9-004c06d9 004c0767-004c0769
 */

void __cdecl FUN_004c0610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 local_6c [6];
  undefined4 local_54;
  undefined4 local_4;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  local_6c[1] = 0x47;
  local_4 = 0x20000;
  local_6c[2] = param_4;
  local_6c[3] = param_3;
  local_54 = param_2;
  if (param_1 == 2) {
    local_4 = 0x20800;
  }
  iVar1 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&DAT_0073b774,0);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_Z_buffer_creat_005b2ab0);
  }
  if (param_1 == 0) {
    iVar1 = (**(code **)(*DAT_007408ac + 0xc))(DAT_007408ac,DAT_0073b774);
    if (iVar1 == 0) {
      DAT_0073b77c = 1;
      return;
    }
    FUN_004bb290(iVar1);
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b29d8;
  }
  else if (param_1 == 1) {
    iVar1 = (**(code **)(*DAT_007408b0 + 0xc))(DAT_007408b0,DAT_0073b774);
    if (iVar1 == 0) {
      DAT_0073b77c = 1;
      return;
    }
    FUN_004bb290(iVar1);
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b2a10;
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Illegal_focus_for_z_buf_005b2a88);
    }
    iVar1 = (**(code **)(*DAT_00740890 + 0xc))(DAT_00740890,DAT_0073b774);
    if (iVar1 == 0) {
      DAT_0073b77c = 1;
      return;
    }
    FUN_004bb290(iVar1);
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b2a4c;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)pcVar3);
}


